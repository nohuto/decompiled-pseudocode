/*
 * XREFs of VfPendingInitPhase1 @ 0x140934774
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409275A0 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x1409DBED4 (VerifierInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x14066BC30 (PsCreateSystemThread.c)
 */

NTSTATUS VfPendingInitPhase1()
{
  __int64 v0; // rdi
  PVOID *v1; // rsi
  NTSTATUS result; // eax
  HANDLE v3; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+8h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF

  v0 = 0LL;
  v1 = (PVOID *)&ViPendingWorkers;
  do
  {
    KeInitializeEvent((PRKEVENT)((char *)&ViPendingWorkers + 48 * v0 + 16), SynchronizationEvent, 0);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = PsCreateSystemThread(
               &ThreadHandle,
               0,
               &ObjectAttributes,
               0LL,
               0LL,
               ViPendingWorkerThread,
               (char *)&ViPendingWorkers + 48 * v0);
    if ( result < 0 )
      break;
    ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v3 = ThreadHandle;
    *v1 = Object;
    result = ZwClose(v3);
    v0 = (unsigned int)(v0 + 1);
    v1 += 6;
  }
  while ( (unsigned int)v0 < 8 );
  _InterlockedExchange(&ViPendingWorkersCount, v0);
  return result;
}
