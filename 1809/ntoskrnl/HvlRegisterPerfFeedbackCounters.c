/*
 * XREFs of HvlRegisterPerfFeedbackCounters @ 0x14027712C
 * Callers:
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14087C790 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     HvlpGetLpIndexFromProcessorIndex @ 0x14027212C (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x140277594 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlRegisterPerfFeedbackCounters(unsigned int a1)
{
  int LpIndexFromProcessorIndex; // eax
  __int128 *v2; // r9
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _DWORD v10[4]; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v11; // [rsp+30h] [rbp-198h]
  __int128 v12; // [rsp+40h] [rbp-188h]
  __int128 v13; // [rsp+50h] [rbp-178h]
  __int128 v14; // [rsp+60h] [rbp-168h]
  __int128 v15; // [rsp+70h] [rbp-158h]
  __int128 v16; // [rsp+80h] [rbp-148h]
  __int64 v17; // [rsp+90h] [rbp-138h]

  v10[0] = 1;
  LpIndexFromProcessorIndex = HvlpGetLpIndexFromProcessorIndex(a1);
  v3 = *v2;
  v10[2] = LpIndexFromProcessorIndex;
  v4 = v2[1];
  v11 = v3;
  v5 = v2[2];
  v12 = v4;
  v6 = v2[3];
  v13 = v5;
  v7 = v2[4];
  v14 = v6;
  v8 = v2[5];
  v15 = v7;
  v17 = *((_QWORD *)v2 + 12);
  v16 = v8;
  return HvlpSetPowerProperty(v10);
}
