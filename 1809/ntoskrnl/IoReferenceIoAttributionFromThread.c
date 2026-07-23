/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x1400DF25C
 * Callers:
 *     CcScheduleReadAheadEx @ 0x14008DEF0 (CcScheduleReadAheadEx.c)
 *     CcCopyReadEx @ 0x1400AF370 (CcCopyReadEx.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1400DF174 (MiCheckAndUpdateIoAttribution.c)
 *     CcAsyncCopyRead @ 0x1400DFF40 (CcAsyncCopyRead.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x1400ACC54 (PsGetWorkOnBehalfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1400DF2C8 (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IoReferenceIoAttributionFromThread(struct _KTHREAD *a1, __int64 a2)
{
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v5; // rbx
  _KPROCESS *Process; // rcx
  unsigned int v7; // edi
  int v9; // [rsp+40h] [rbp+18h] BYREF

  WorkOnBehalfThread = PsGetWorkOnBehalfThread(a1, &v9);
  v5 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
    Process = WorkOnBehalfThread->Process;
  else
    Process = a1->Process;
  v7 = IopReferenceIoAttributionFromProcess(Process, 0LL, a2);
  if ( v9 )
    ObDereferenceObjectDeferDelete(v5);
  return v7;
}
