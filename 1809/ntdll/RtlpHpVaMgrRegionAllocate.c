/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x18005C928
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x180063220 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrRangeCreate @ 0x18005CC10 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1800638AC (RtlpHpVaMgrAllocAligned.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int64 v2; // rax
  PVOID v3; // rcx
  __int64 v4; // rbx
  _WORD v6[20]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  RegionSize = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  BaseAddress = 0LL;
  BaseAddress = (PVOID)RtlpHpVaMgrAllocAligned(a1, &RegionSize);
  if ( !BaseAddress )
    return 0LL;
  memset(v6, 0, 0x20uLL);
  v6[12] = *(_WORD *)(a1 + 40);
  v2 = RtlpHpVaMgrRangeCreate(a1, BaseAddress, v6);
  v3 = BaseAddress;
  v4 = v2;
  if ( v2 )
    v3 = 0LL;
  BaseAddress = v3;
  if ( v3 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  return v4;
}
