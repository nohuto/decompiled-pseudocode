/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x140011C08
 * Callers:
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402AFA34 (KiSendHeteroRescheduleIntRequestHelper.c)
 * Callees:
 *     KiIsQosGroupingActive @ 0x1401BF2D4 (KiIsQosGroupingActive.c)
 *     KiIsQosGroupingClass @ 0x1401BF2F8 (KiIsQosGroupingClass.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402AEFC0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x1402AF0D8 (KiGenerateHeteroSets.c)
 */

__int64 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v3; // al
  unsigned int v4; // edi
  int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int8 v18; // r10
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int8 v21; // al
  _QWORD v22[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a1 + 125);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  v8 = v3;
  if ( v3 >= 5u )
    v8 = KiConvertDynamicHeteroPolicy(a1, a2, a2);
  v9 = *(_QWORD *)(a2 + 192);
  KiGenerateHeteroSets(v9, *(_QWORD *)(a1 + 576), v8, (unsigned int)&v23, (__int64)v22, (__int64)&v24);
  if ( (v24 & *(_QWORD *)(a2 + 200)) != 0
    && (!(unsigned __int8)KiIsQosGroupingActive(v10, *(_QWORD *)(*(_QWORD *)(a2 + 192) + 344LL), *(_QWORD *)v9)
     || (v11 & v12) == 0
     || !(unsigned __int8)KiIsQosGroupingClass(*(_DWORD *)(a1 + 120) & 3)
     || (v13 & *(_QWORD *)(a2 + 200)) != 0) )
  {
    v14 = *(_QWORD *)(a2 + 200);
    v15 = v23;
    if ( (v14 & v23) == 0 )
    {
      if ( !a3 )
      {
        LOBYTE(v4) = (KeGetCurrentPrcb()->GroupSetMember & v23) != 0;
        return v4;
      }
      if ( v14 != *(_QWORD *)(a2 + 24920) )
      {
        v15 = v23;
        if ( (v12 & *(_QWORD *)(v9 + 8)) != 0 )
          v12 &= *(_QWORD *)(v9 + 8);
      }
      if ( (v12 & v15) != 0 )
        return 1LL;
      v17 = v22[0] & v12 & ~v15;
      v18 = (unsigned int)(v8 - 3) <= 1 ? *(_BYTE *)(a2 + 24226) : *(_BYTE *)(a2 + 24225);
      if ( v17 )
      {
        while ( 1 )
        {
          _BitScanReverse64(&v19, v17);
          v20 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(v9 + 144) + (int)v19]];
          v21 = (unsigned int)(v8 - 3) <= 1 ? *(_BYTE *)(v20 + 24226) : *(_BYTE *)(v20 + 24225);
          if ( v21 > v18 )
            break;
          v17 &= ~*(_QWORD *)(v20 + 200);
          if ( !v17 )
            return 0LL;
        }
        return 1LL;
      }
    }
    return 0LL;
  }
  return 1LL;
}
