/*
 * XREFs of xxxRefreshDisplayOrientation @ 0x1C00BDA20
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C0007BF0 (NtUserSetDisplayAutoRotationPreferences.c)
 *     xxxSetInformationThread @ 0x1C000E040 (xxxSetInformationThread.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C00BD950 (NtUserSetActiveProcessForMonitor.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 xxxRefreshDisplayOrientation()
{
  return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
}
