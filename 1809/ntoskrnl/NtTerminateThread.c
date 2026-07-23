/*
 * XREFs of NtTerminateThread @ 0x1406776E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x140677750 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8
  NTSTATUS v3; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( ThreadHandle )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
      goto LABEL_3;
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ThreadHandle,
               1,
               (__int64)PsThreadType,
               CurrentThread->PreviousMode,
               0x65547350u,
               &Object,
               0LL,
               0LL);
    v3 = result;
    if ( result >= 0 )
    {
      if ( Object != CurrentThread )
      {
        v3 = PspTerminateThreadByPointer(Object, (unsigned int)ExitStatus, 0LL);
        ObfDereferenceObjectWithTag(Object, 0x65547350u);
        return v3;
      }
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
LABEL_3:
      LOBYTE(v2) = 1;
      PspTerminateThreadByPointer(CurrentThread, (unsigned int)ExitStatus, v2);
      return v3;
    }
  }
  else
  {
    if ( CurrentThread->ApcState.Process[1].ThreadSeed[0] != 1 )
      goto LABEL_3;
    return -1073741605;
  }
  return result;
}
