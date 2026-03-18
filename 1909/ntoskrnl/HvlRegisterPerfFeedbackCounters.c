/*
 * XREFs of HvlRegisterPerfFeedbackCounters @ 0x14028AF8C
 * Callers:
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408B7380 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpGetLpIndexFromProcessorIndex @ 0x140285CC8 (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x14028B474 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlRegisterPerfFeedbackCounters(unsigned int a1, __int128 *a2)
{
  int LpIndexFromProcessorIndex; // eax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rdx
  __int64 v12; // r8
  _OWORD v14[26]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v14, 0, 0x198uLL);
  LODWORD(v14[0]) = 1;
  LpIndexFromProcessorIndex = HvlpGetLpIndexFromProcessorIndex(a1);
  v5 = *a2;
  DWORD2(v14[0]) = LpIndexFromProcessorIndex;
  v6 = a2[1];
  v14[1] = v5;
  v7 = a2[2];
  v14[2] = v6;
  v8 = a2[3];
  v14[3] = v7;
  v9 = a2[4];
  v14[4] = v8;
  v10 = a2[5];
  v14[5] = v9;
  *(_QWORD *)&v14[7] = *((_QWORD *)a2 + 12);
  v14[6] = v10;
  return HvlpSetPowerProperty(v14, v11, v12);
}
