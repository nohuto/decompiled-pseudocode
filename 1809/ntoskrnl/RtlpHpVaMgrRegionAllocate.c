/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x140009DF0
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x14000D358 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrAllocAligned @ 0x14000A318 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x14000A3F8 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpEnvFreeVA @ 0x14000D2A8 (RtlpHpEnvFreeVA.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  _WORD v6[20]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v7 = 0LL;
  v7 = RtlpHpVaMgrAllocAligned(a1, &v8);
  if ( !v7 )
    return 0LL;
  memset(v6, 0, 0x20uLL);
  v6[12] = *(_WORD *)(a1 + 40);
  v2 = RtlpHpVaMgrRangeCreate(a1, v7, v6);
  v3 = v7;
  v4 = v2;
  if ( v2 )
    v3 = 0LL;
  v7 = v3;
  if ( v3 )
    RtlpHpEnvFreeVA(&v7, &v8, 0x8000LL);
  return v4;
}
