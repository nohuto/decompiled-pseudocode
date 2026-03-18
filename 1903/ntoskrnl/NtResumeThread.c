/*
 * XREFs of NtResumeThread @ 0x1406CDC70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsResumeThread @ 0x1406CDD30 (PsResumeThread.c)
 */

NTSTATUS __stdcall NtResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  char PreviousMode; // r9
  __int64 v5; // rcx
  NTSTATUS result; // eax
  ULONG v7; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

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
             4096,
             (__int64)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    PsResumeThread(Object, &v7);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( SuspendCount )
      *SuspendCount = v7;
    return 0;
  }
  return result;
}
