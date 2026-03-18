/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x14087EBC4
 * Callers:
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140761640 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmNotifyDeviceInput @ 0x14087D3A0 (TtmNotifyDeviceInput.c)
 *     TtmNotifyConsoleUserPresent @ 0x14087FB30 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayBurst @ 0x14087FC2C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionTerminalInput @ 0x1408800A4 (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     TtmiSetPendingOnOffRequest @ 0x14087EDA4 (TtmiSetPendingOnOffRequest.c)
 */

char __fastcall TtmiResetTerminalTimeouts(int a1, __int64 a2, int a3, int a4, char a5)
{
  int v5; // eax
  int v6; // r9d

  *(_QWORD *)(a2 + 80) = MEMORY[0xFFFFF78000000008];
  v5 = *(_DWORD *)(a2 + 40);
  if ( (v5 == 3 || !a5) && v5 != 2 )
    return 0;
  v6 = a3;
  LOBYTE(a3) = 1;
  TtmiSetPendingOnOffRequest(a1, a2, a3, v6, a4);
  return 1;
}
