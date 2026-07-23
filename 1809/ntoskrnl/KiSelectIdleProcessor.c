/*
 * XREFs of KiSelectIdleProcessor @ 0x140166768
 * Callers:
 *     KiChooseTargetProcessor @ 0x1400C4310 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x140120680 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14029874C (KiFindRankBiasedIdleSmtSet.c)
 */

__int64 __fastcall KiSelectIdleProcessor(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, char a5)
{
  __int64 v6; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  char v13; // cl
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  char v17; // cl
  int v18; // edx
  __int64 v19; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( a4 )
  {
LABEL_2:
    v10 = *a3;
    v11 = a1 & *a3;
    v19 = v11;
    if ( !v11 )
      return v6;
    if ( *(_QWORD *)(a4 + 200) != *(_QWORD *)(a4 + 24920) )
    {
      if ( a5 && (unsigned __int8)KiFindRankBiasedIdleSmtSet(a4, &v19, v11) )
        goto LABEL_10;
      v11 = v19;
      if ( (v19 & a3[1]) != 0 )
      {
        if ( a5
          && (unsigned int)((0x101010101010101LL
                           * ((((v10 - ((v10 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v10 - ((v10 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v10 - ((v10 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v10 - ((v10 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
        {
          return v6;
        }
        v11 = v19 & a3[1];
      }
      else
      {
        if ( a5 )
          return v6;
        if ( *(unsigned __int64 **)(a2 + 192) == a3 )
        {
          KiReduceByEffectiveIdleSmtSet(a2, &v19);
LABEL_10:
          v11 = v19;
        }
      }
    }
    if ( (v11 & *(_QWORD *)(a4 + 200)) != 0 )
      return a4;
    v13 = *(_BYTE *)(a4 + 209);
    if ( (v11 & *(_QWORD *)(a4 + 24920)) != 0 )
      v11 &= *(_QWORD *)(a4 + 24920);
    _BitScanForward64(&v14, __ROR8__(v11, v13));
    return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a4 + 208)
                                                               + (((unsigned __int8)v14 + v13) & 0x3F)]];
  }
  v15 = a1 & a3[17];
  if ( v15 )
  {
    v16 = KiProcessorBlock[*((unsigned int *)a3 + 25)];
    v17 = *(_BYTE *)(v16 + 209);
    v18 = *(unsigned __int8 *)(v16 + 208);
    _BitScanForward64((unsigned __int64 *)&v16, __ROR8__(v15, v17));
    a4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v18 + (((_BYTE)v16 + v17) & 0x3F)]];
    goto LABEL_2;
  }
  return 0LL;
}
