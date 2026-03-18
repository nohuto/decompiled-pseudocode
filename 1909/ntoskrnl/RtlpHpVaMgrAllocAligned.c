/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x14010F5FC
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x14010D564 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x14010E914 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x140022940 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int8 v3; // r11
  int v4; // eax
  int v5; // r9d
  unsigned int v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 46);
  v4 = *(unsigned __int8 *)(a1 + 45);
  v9 = 0LL;
  v7 = (v3 >> 1) & 3;
  v5 = (v7 < 2 ? 0x2000 : 536883200) | 0x40000;
  if ( (v3 & 8) == 0 )
    v5 = v7 < 2 ? 0x2000 : 536883200;
  RtlpHpEnvAllocVA(&v9, a2, a3, v5, 4, **(_DWORD **)(a1 + 24), v7, v8, v4);
  return v9;
}
