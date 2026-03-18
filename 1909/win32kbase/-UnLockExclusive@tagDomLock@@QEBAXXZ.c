/*
 * XREFs of ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1C00776F0
 * Callers:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00AB1F4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     NtUserRemoveInjectionDevice @ 0x1C01190C0 (NtUserRemoveInjectionDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::UnLockExclusive(PERESOURCE *this)
{
  ExReleaseResourceAndLeaveCriticalRegion(*this);
}
