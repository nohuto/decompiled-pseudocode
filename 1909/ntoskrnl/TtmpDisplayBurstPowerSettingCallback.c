/*
 * XREFs of TtmpDisplayBurstPowerSettingCallback @ 0x1408BDFF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1408BBF98 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDisplayBurstPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  int v4; // ebx
  ULONG ActiveConsoleId; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (int)Context;
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (int)TtmpAcquireSessionById(v7, ActiveConsoleId) >= 0 )
  {
    TtmiResetTerminalTimeouts(v7[0], *(_QWORD *)(v7[0] + 32LL), v4, 1111769922, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmpDisplayBurstPowerSettingCallback");
  }
  return 0LL;
}
