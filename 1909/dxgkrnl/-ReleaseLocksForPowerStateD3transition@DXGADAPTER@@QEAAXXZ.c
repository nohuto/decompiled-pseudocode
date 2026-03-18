/*
 * XREFs of ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EE9D4
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D09E8 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EC280 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01F6D50 (-TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::ReleaseLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 320);
  if ( v2 )
  {
    ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(v2, 1LL);
    ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(*((_QWORD *)this + 320), 2LL);
  }
}
