/*
 * XREFs of KiSelectIdleProcessor @ 0x14016C9A4
 * Callers:
 *     KiChooseTargetProcessor @ 0x140068F60 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x140121EE0 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x1402AF2B8 (KiFindRankBiasedIdleSmtSet.c)
 */

__int64 __fastcall KiSelectIdleProcessor(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, char a5, char a6)
{
  __int64 v7; // rbx
  __int64 v11; // r8
  __int64 v13; // rax
  char v14; // cl
  int v15; // edx
  unsigned __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rax
  char v19; // cl
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !a4 )
  {
    v11 = a1 & a3[17];
    if ( !v11 )
      return 0LL;
    v13 = KiProcessorBlock[*((unsigned __int16 *)a3 + 54)];
    v14 = *(_BYTE *)(v13 + 209);
    v15 = *(unsigned __int8 *)(v13 + 208);
    _BitScanForward64((unsigned __int64 *)&v13, __ROR8__(v11, v14));
    a4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v15 + (((_BYTE)v13 + v14) & 0x3F)]];
  }
  v16 = *a3;
  v17 = a1 & *a3;
  v18 = v17;
  v21 = v17;
  if ( !a6 )
  {
LABEL_8:
    if ( !v18 )
      return v7;
    goto LABEL_9;
  }
  if ( !v17 )
  {
    v16 = a3[2] & a3[11];
    v17 = a1 & v16;
    v21 = a1 & v16;
    v18 = a1 & v16;
    goto LABEL_8;
  }
LABEL_9:
  if ( *(_QWORD *)(a4 + 200) == *(_QWORD *)(a4 + 24920) )
    goto LABEL_20;
  if ( a5 && (unsigned __int8)KiFindRankBiasedIdleSmtSet(a4, &v21) )
  {
LABEL_16:
    v17 = v21;
    goto LABEL_20;
  }
  v17 = v21;
  if ( (v21 & a3[1]) != 0 )
  {
    if ( !a5
      || (unsigned int)((0x101010101010101LL
                       * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled )
    {
      v17 = v21 & a3[1];
LABEL_20:
      if ( (v17 & *(_QWORD *)(a4 + 200)) != 0 )
      {
        return a4;
      }
      else
      {
        if ( (v17 & *(_QWORD *)(a4 + 24920)) != 0 )
        {
          v17 &= *(_QWORD *)(a4 + 24920);
        }
        else if ( (KiCacheAwareScheduling & 1) != 0 && (v17 & *(_QWORD *)(a4 + 24936)) != 0 )
        {
          v17 &= *(_QWORD *)(a4 + 24936);
        }
        v19 = *(_BYTE *)(a4 + 209);
        _BitScanForward64(&v20, __ROR8__(v17, v19));
        return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a4 + 208)
                                                                   + (((unsigned __int8)v20 + v19) & 0x3F)]];
      }
    }
  }
  else if ( !a5 )
  {
    if ( *(unsigned __int64 **)(a2 + 192) != a3 )
      goto LABEL_20;
    KiReduceByEffectiveIdleSmtSet(a2, &v21);
    goto LABEL_16;
  }
  return v7;
}
