/*
 * XREFs of PopSetDevicesSystemState @ 0x140568154
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
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
  v6 = byte_14041771D;
  v5 = byte_140417702;
  v7 = (unsigned __int8)byte_14041771C;
  v2[0] = dword_14041772C;
  v2[1] = dword_140417728;
  v0 = dword_140417720;
  if ( (dword_14041770C & 8) != 0 )
    v0 = 6;
  v3 = __PAIR64__(dword_140417724, v0);
  v4 = __PAIR64__(dword_14041770C, qword_140417704);
  return PoBroadcastSystemState(v2);
}
