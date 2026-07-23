/*
 * XREFs of TtmpDisplayBurstPowerSettingCallback @ 0x140762810
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     TtmpAcquireSessionById @ 0x140762864 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x14087FE04 (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmpDisplayBurstPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  int v4; // ebx
  ULONG ActiveConsoleId; // eax
  int v8; // eax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (int)Context;
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (int)TtmpAcquireSessionById(v9, ActiveConsoleId) >= 0 )
  {
    v8 = memcmp(SettingGuid, &GUID_ACDC_POWER_SOURCE, 0x10uLL);
    TtmiResetTerminalTimeouts(v9[0], *(_QWORD *)(v9[0] + 32LL), v4, (v8 != 0) + 1111769921, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmpDisplayBurstPowerSettingCallback");
  }
  return 0LL;
}
