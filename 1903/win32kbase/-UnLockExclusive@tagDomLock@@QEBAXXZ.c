/*
 * XREFs of ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1C007B320
 * Callers:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00ADCA4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     NtUserRemoveInjectionDevice @ 0x1C011BA30 (NtUserRemoveInjectionDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::UnLockExclusive(PERESOURCE *this)
{
  ExReleaseResourceAndLeaveCriticalRegion(*this);
}
