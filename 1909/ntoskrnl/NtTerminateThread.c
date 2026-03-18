/*
 * XREFs of NtTerminateThread @ 0x14067DB20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F13C0 (ObReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x14067DB90 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  NTSTATUS v2; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = 0LL;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( ThreadHandle )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
      goto LABEL_3;
    result = ObReferenceObjectByHandleWithTag(
               ThreadHandle,
               1u,
               (POBJECT_TYPE)PsThreadType,
               CurrentThread->PreviousMode,
               0x65547350u,
               &Object,
               0LL);
    v2 = result;
    if ( result >= 0 )
    {
      if ( Object != CurrentThread )
      {
        v2 = PspTerminateThreadByPointer((ULONG_PTR)Object, ExitStatus);
        ObfDereferenceObjectWithTag(Object, 0x65547350u);
        return v2;
      }
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
LABEL_3:
      PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, ExitStatus);
      return v2;
    }
  }
  else
  {
    if ( *(_DWORD *)&CurrentThread->ApcState.Process[1].0 != 1 )
      goto LABEL_3;
    return -1073741605;
  }
  return result;
}
