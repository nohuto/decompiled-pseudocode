/*
 * XREFs of NtAlertResumeThread @ 0x14088DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAlertResumeThread @ 0x14028DEE0 (KeAlertResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtAlertResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  char PreviousMode; // bl
  __int64 v5; // rcx
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  ULONG v9; // esi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && SuspendCount )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SuspendCount < 0x7FFFFFFF0000LL )
      v5 = (__int64)SuspendCount;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             2,
             (__int64)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    if ( PreviousMode && (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      return -1073741790;
    }
    else
    {
      v9 = KeAlertResumeThread((__int64)Object, v7, v8);
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      if ( SuspendCount )
        *SuspendCount = v9;
      return 0;
    }
  }
  return result;
}
