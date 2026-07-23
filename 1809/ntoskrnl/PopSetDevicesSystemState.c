/*
 * XREFs of PopSetDevicesSystemState @ 0x140569154
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 */

__int64 PopSetDevicesSystemState()
{
  int v0; // eax
  _DWORD v2[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-18h]
  unsigned __int64 v4; // [rsp+30h] [rbp-10h]
  char v5; // [rsp+38h] [rbp-8h]
  char v6; // [rsp+39h] [rbp-7h]
  __int16 v7; // [rsp+3Ah] [rbp-6h]

  v3 = 0LL;
  v4 = 0LL;
  v6 = byte_1404187BD;
  v5 = byte_1404187A2;
  v7 = (unsigned __int8)byte_1404187BC;
  v2[0] = dword_1404187CC;
  v2[1] = dword_1404187C8;
  v0 = dword_1404187C0;
  if ( (dword_1404187AC & 8) != 0 )
    v0 = 6;
  v3 = __PAIR64__(dword_1404187C4, v0);
  v4 = __PAIR64__(dword_1404187AC, qword_1404187A4);
  return PoBroadcastSystemState(v2);
}
