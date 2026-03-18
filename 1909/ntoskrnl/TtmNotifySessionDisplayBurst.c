/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x1408BD06C
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x14018C3A0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1408BBF98 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmNotifySessionDisplayBurst(unsigned int a1, int a2)
{
  int v3; // ebx
  int v4; // r9d
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v3 = TtmpAcquireSessionById(&v6, a1);
  if ( v3 >= 0 )
  {
    v4 = 1111769921;
    if ( a2 != 5 )
      v4 = 1111778643;
    TtmiResetTerminalTimeouts(v6, *(_QWORD *)(v6 + 32), a2, v4, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    return 0;
  }
  else
  {
    TtmiLogError("TtmNotifySessionDisplayBurst");
  }
  return (unsigned int)v3;
}
