/*
 * XREFs of ?PowerStartSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080E70
 * Callers:
 *     <none>
 * Callees:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0018FF4 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIoFailed(FxPkgPnp *This, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  FxPkgIo::StopProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink, 1, a3, a4);
  return 827LL;
}
