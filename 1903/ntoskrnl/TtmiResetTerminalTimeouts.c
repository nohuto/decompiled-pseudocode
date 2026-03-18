/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x1408BC6C8
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1408BAE80 (TtmNotifyDeviceInput.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408BD6A0 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408BD79C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionTerminalInput @ 0x1408BDC24 (TtmNotifySessionTerminalInput.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1408BE720 (TtmpDisplayBurstPowerSettingCallback.c)
 * Callees:
 *     TtmiSetPendingOnOffRequest @ 0x1408BC900 (TtmiSetPendingOnOffRequest.c)
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
