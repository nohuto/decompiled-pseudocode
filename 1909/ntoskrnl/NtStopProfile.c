/*
 * XREFs of NtStopProfile @ 0x140917E30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     KeStopProfile @ 0x1402AC270 (KeStopProfile.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtStopProfile(HANDLE ProfileHandle)
{
  NTSTATUS v1; // ebp
  NTSTATUS result; // eax
  _QWORD *v3; // r14
  void *v4; // rbx
  struct _MDL *v5; // rdi
  void *v6; // rsi
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  result = ObReferenceObjectByHandle(
             ProfileHandle,
             1u,
             ExProfileObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&ExpProfileStateMutex, Executive, 0, 0, 0LL);
    v3 = Object;
    if ( *((_QWORD *)Object + 6) )
    {
      KeStopProfile(*((_QWORD *)Object + 5));
      v4 = (void *)v3[6];
      v5 = (struct _MDL *)v3[7];
      v6 = (void *)v3[5];
      --ExpCurrentProfileUsage;
      v3[6] = 0LL;
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      MmUnmapLockedPages(v4, v5);
      MmUnlockPages(v5);
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      v1 = -1073741641;
    }
    ObfDereferenceObject(v3);
    return v1;
  }
  return result;
}
