/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x140746338
 * Callers:
 *     PoClearTransitionMarker @ 0x1407461B0 (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x140874E40 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlBootStatusDisableFlushing @ 0x1401786EC (RtlBootStatusDisableFlushing.c)
 *     RtlpSystemBootStatusRequest @ 0x14071D774 (RtlpSystemBootStatusRequest.c)
 */

void __fastcall PopRecordLongPowerButtonPressDetected(char a1)
{
  int v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 *v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]

  RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 14;
  v4 = 48;
  HIBYTE(PopBsdPhysicalPowerButtonInfo) ^= (HIBYTE(PopBsdPhysicalPowerButtonInfo) ^ (4 * a1)) & 4;
  BYTE1(PopBsdPowerTransitionExtension) = PnpSetupInProgress & 1 | BYTE1(PopBsdPowerTransitionExtension) & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  v3 = &PopBsdPhysicalPowerButtonInfo;
  RtlpSystemBootStatusRequest(0x20u, (__int64)&v2, 1u, 0LL);
  v2 = 16;
  v3 = &PopBsdPowerTransitionExtension;
  v4 = 32;
  RtlpSystemBootStatusRequest(0x20u, (__int64)&v2, 1u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
