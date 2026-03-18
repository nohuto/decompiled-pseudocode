/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0014024
 * Callers:
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C004061C (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00D00BC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D04A8 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01262F0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C0126830 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0126C60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C01C1B4C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  if ( _InterlockedDecrement((volatile signed __int32 *)this + 638) < 0 )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this);
    v2[3] = 275LL;
    v2[4] = 37LL;
    v2[5] = this;
    v3 = *((unsigned int *)this + 638);
    v2[7] = 0LL;
    v2[6] = v3;
    WdLogEvent5_WdCriticalError(v2);
  }
}
