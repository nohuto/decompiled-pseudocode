/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x18004E374
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x18004DEFC (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrRangeCreate @ 0x18004E410 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18004EA80 (RtlpHpVaMgrAllocAligned.c)
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800A3DC0 (memset.c)
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
  v7 = RtlpHpVaMgrAllocAligned(a1, &v8, v8);
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
    ZwFreeVirtualMemory(-1LL, &v7, &v8, 0x8000LL);
  return v4;
}
