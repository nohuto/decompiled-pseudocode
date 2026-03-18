/*
 * XREFs of PopSetDevicesSystemState @ 0x140596D38
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 */

__int64 PopSetDevicesSystemState()
{
  int v0; // eax
  _DWORD v2[6]; // [rsp+20h] [rbp-28h] BYREF
  char v3; // [rsp+38h] [rbp-10h]
  char v4; // [rsp+39h] [rbp-Fh]
  char v5; // [rsp+3Ah] [rbp-Eh]
  char v6; // [rsp+3Bh] [rbp-Dh]

  v4 = byte_14044305D;
  v3 = byte_140443042;
  v5 = byte_14044305C;
  v2[0] = dword_14044306C;
  v2[1] = dword_140443068;
  v0 = dword_140443060;
  if ( (dword_14044304C & 8) != 0 )
    v0 = 6;
  v2[5] = dword_14044304C;
  v2[2] = v0;
  v2[3] = dword_140443064;
  v2[4] = qword_140443044;
  v6 = 0;
  return PoBroadcastSystemState(v2);
}
