/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0036C14
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00015D0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0001980 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0036BE0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0036CE0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C004A310 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C004A358 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0051384 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU2@@Z @ 0x1C0052AC0 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositio.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C0079880 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007A7D0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C007AAF8 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00B0220 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C01757B0 (-EnableSpeedBump@CCursorClip@@QEAAX_N@Z.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01757F4 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01758E0 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0175940 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C0175994 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C0181D40 (ChildProcessRootSynthesizedMouseInput.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C0181E5C (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01864DC (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C0191158 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01C5C30 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
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
