/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0037C84
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00015D0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0001980 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0037C50 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0037D50 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C003FC60 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C00421B0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0065874 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU2@@Z @ 0x1C0067330 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositio.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C007D080 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007DFD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C007E2F8 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00B3150 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C01779A0 (-EnableSpeedBump@CCursorClip@@QEAAX_N@Z.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01779E4 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C0177AD0 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0177B30 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C0177B84 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C0183F30 (ChildProcessRootSynthesizedMouseInput.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C018404C (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01886CC (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C0193358 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01C7BD0 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx((char *)this + 8, 0LL);
  }
  KeLeaveCriticalRegion();
}
