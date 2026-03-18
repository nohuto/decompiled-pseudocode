/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x140090E1C
 * Callers:
 *     CcScheduleReadAheadEx @ 0x140090340 (CcScheduleReadAheadEx.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140090884 (MiCheckAndUpdateIoAttribution.c)
 *     CcAsyncCopyRead @ 0x140090970 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x1400B5810 (CcCopyReadEx.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14000D5BC (PsGetWorkOnBehalfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140090E88 (IopReferenceIoAttributionFromProcess.c)
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
