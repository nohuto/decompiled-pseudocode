/*
 * XREFs of ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EE3A4
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0127AF4 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EBC48 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01F66E0 (-TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
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
