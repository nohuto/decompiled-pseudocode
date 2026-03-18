/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x1408BBF98
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1408BA750 (TtmNotifyDeviceInput.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408BCF70 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408BD06C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionTerminalInput @ 0x1408BD4F4 (TtmNotifySessionTerminalInput.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1408BDFF0 (TtmpDisplayBurstPowerSettingCallback.c)
 * Callees:
 *     TtmiSetPendingOnOffRequest @ 0x1408BC1D0 (TtmiSetPendingOnOffRequest.c)
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
