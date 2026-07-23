/*
 * XREFs of HvlConfigurePcc @ 0x140276A2C
 * Callers:
 *     PpmPerfRegisterHvStates @ 0x14087C880 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpSetLogicalProcessorProperty @ 0x140272F38 (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigurePcc(int a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _OWORD v6[4]; // [rsp+20h] [rbp-CC8h] BYREF
  __int64 v7; // [rsp+60h] [rbp-C88h]

  v2 = *(_OWORD *)(a2 + 16);
  v6[0] = *(_OWORD *)a2;
  v3 = *(_OWORD *)(a2 + 32);
  v6[1] = v2;
  v4 = *(_OWORD *)(a2 + 48);
  v6[2] = v3;
  v7 = *(_QWORD *)(a2 + 64);
  v6[3] = v4;
  return HvlpSetLogicalProcessorProperty(a1, 2, v6);
}
