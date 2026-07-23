/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x1400D0D34
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140298EE0 (KiSendHeteroRescheduleIntRequestHelper.c)
 * Callees:
 *     KiConvertDynamicHeteroPolicy @ 0x1402985A0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14029880C (KiGenerateHeteroSets.c)
 */

__int64 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v3; // al
  unsigned int v4; // edi
  int v9; // esi
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int8 v14; // r10
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int8 v17; // al
  _QWORD v18[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a1 + 125);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  v9 = v3;
  if ( v3 >= 5u )
    v9 = KiConvertDynamicHeteroPolicy(a1, a2, a2);
  v10 = *(__int64 **)(a2 + 192);
  KiGenerateHeteroSets((_DWORD)v10, *(_QWORD *)(a1 + 576), v9, (unsigned int)&v19, (__int64)v18, (__int64)&v20);
  v11 = *(_QWORD *)(a2 + 200);
  if ( (v11 & v20) != 0 )
  {
    if ( (v11 & v19) != 0 )
      return 0LL;
    if ( !a3 )
    {
      LOBYTE(v4) = (KeGetCurrentPrcb()->GroupSetMember & v19) != 0;
      return v4;
    }
    v12 = *v10;
    if ( *(_QWORD *)(a2 + 200) != *(_QWORD *)(a2 + 24920) && (v12 & v10[1]) != 0 )
      v12 &= v10[1];
    if ( (v12 & v19) == 0 )
    {
      v13 = v18[0] & v12 & ~v19;
      if ( (unsigned int)(v9 - 3) <= 1 )
        v14 = *(_BYTE *)(a2 + 24226);
      else
        v14 = *(_BYTE *)(a2 + 24225);
      if ( !v13 )
        return 0LL;
      while ( 1 )
      {
        _BitScanReverse64(&v15, v13);
        v16 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)v10 + 72) + (int)v15]];
        v17 = (unsigned int)(v9 - 3) <= 1 ? *(_BYTE *)(v16 + 24226) : *(_BYTE *)(v16 + 24225);
        if ( v17 > v14 )
          break;
        v13 &= ~*(_QWORD *)(v16 + 200);
        if ( !v13 )
          return 0LL;
      }
    }
  }
  return 1LL;
}
