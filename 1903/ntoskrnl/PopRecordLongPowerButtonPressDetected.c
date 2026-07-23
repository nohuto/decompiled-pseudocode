/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x140769F44
 * Callers:
 *     PoClearTransitionMarker @ 0x140769D38 (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1408B065C (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x140181E14 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x140769FE0 (RtlSetSystemBootStatus.c)
 */

void __fastcall PopRecordLongPowerButtonPressDetected(char a1)
{
  RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPhysicalPowerButtonInfo) ^= (HIBYTE(PopBsdPhysicalPowerButtonInfo) ^ (4 * a1)) & 4;
  BYTE1(PopBsdPowerTransitionExtension) = PnpSetupInProgress & 1 | BYTE1(PopBsdPowerTransitionExtension) & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  RtlSetSystemBootStatus(RtlBsdItemPowerButtonPressInfo, &PopBsdPhysicalPowerButtonInfo, 0x30u, 0LL);
  RtlSetSystemBootStatus(RtlBsdPowerTransitionExtension, &PopBsdPowerTransitionExtension, 0x20u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
