/*
 * XREFs of sub_18004E2D4 @ 0x18004E2D4
 * Callers:
 *     sub_18004DE5C @ 0x18004DE5C (sub_18004DE5C.c)
 * Callees:
 *     sub_18004E370 @ 0x18004E370 (sub_18004E370.c)
 *     sub_18004E9E0 @ 0x18004E9E0 (sub_18004E9E0.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18004E2D4(__int64 a1)
{
  __int64 v2; // rax
  PVOID v3; // rcx
  __int64 v4; // rbx
  _WORD v6[20]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  RegionSize = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  BaseAddress = (PVOID)sub_18004E9E0(a1, &RegionSize, RegionSize);
  if ( !BaseAddress )
    return 0LL;
  memset(v6, 0, 0x20uLL);
  v6[12] = *(_WORD *)(a1 + 40);
  v2 = sub_18004E370(a1, BaseAddress, v6);
  v3 = BaseAddress;
  v4 = v2;
  if ( v2 )
    v3 = 0LL;
  BaseAddress = v3;
  if ( v3 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  return v4;
}
