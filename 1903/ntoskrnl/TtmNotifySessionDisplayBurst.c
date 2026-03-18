/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x1408BD79C
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x14018BA10 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1408BC6C8 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408BE374 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
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
