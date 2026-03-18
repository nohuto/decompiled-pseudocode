/*
 * XREFs of ?SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C022CE80
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C022CA0C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C022CDF4 (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall DXGPROTECTEDSESSION::SignalFenceWorkItemRoutine(
        PVOID IoObject,
        struct _EX_RUNDOWN_REF *Context,
        PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rax

  v5 = WdLogNewEntry5_WdEvent(IoObject, Context);
  *(_QWORD *)(v5 + 24) = 1230LL;
  WdLogEvent5_WdEvent(v5);
  DXGPROTECTEDSESSION::SignalFence((DXGPROTECTEDSESSION *)Context);
  ExReleaseRundownProtection(Context + 16);
  DXGPROTECTEDSESSION::DestroyProtectedSession(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
