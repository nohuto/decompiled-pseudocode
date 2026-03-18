/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x14010D564
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x14010E914 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14010DB68 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeCreate @ 0x14010EFA8 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x14010F5FC (RtlpHpVaMgrAllocAligned.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rbx
  _WORD v7[20]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v8 = RtlpHpVaMgrAllocAligned(a1, &v9);
  if ( !v8 )
    return 0LL;
  memset(v7, 0, 0x20uLL);
  v7[12] = *(_WORD *)(a1 + 40);
  v2 = RtlpHpVaMgrRangeCreate(a1, v8, v7);
  v4 = v8;
  v5 = v2;
  if ( v2 )
    v4 = 0LL;
  v8 = v4;
  if ( v4 )
    RtlpHpEnvFreeVA(&v8, &v9, 0x8000LL, v3);
  return v5;
}
