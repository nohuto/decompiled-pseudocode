/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x1400A9B1C
 * Callers:
 *     MiCheckAndUpdateIoAttribution @ 0x1400A957C (MiCheckAndUpdateIoAttribution.c)
 *     CcAsyncCopyRead @ 0x1400A9670 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1400A9CA0 (CcScheduleReadAheadEx.c)
 *     CcCopyReadEx @ 0x1400D5990 (CcCopyReadEx.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14000D38C (PsGetWorkOnBehalfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1400A9B88 (IopReferenceIoAttributionFromProcess.c)
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
