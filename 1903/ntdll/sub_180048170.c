/*
 * XREFs of sub_180048170 @ 0x180048170
 * Callers:
 *     sub_180047844 @ 0x180047844 (sub_180047844.c)
 *     sub_18004C9D8 @ 0x18004C9D8 (sub_18004C9D8.c)
 *     sub_18004E8CC @ 0x18004E8CC (sub_18004E8CC.c)
 *     sub_18004FB14 @ 0x18004FB14 (sub_18004FB14.c)
 *     sub_1800501E4 @ 0x1800501E4 (sub_1800501E4.c)
 *     sub_180050744 @ 0x180050744 (sub_180050744.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 *     sub_18010ABC4 @ 0x18010ABC4 (sub_18010ABC4.c)
 *     sub_18010AD30 @ 0x18010AD30 (sub_18010AD30.c)
 * Callees:
 *     sub_18004F6D0 @ 0x18004F6D0 (sub_18004F6D0.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     sub_1801073CC @ 0x1801073CC (sub_1801073CC.c)
 */

__int64 __fastcall sub_180048170(PVOID *BaseAddress, PSIZE_T RegionSize, int a3, _OWORD *a4)
{
  unsigned __int32 v4; // ebx
  unsigned int v5; // ebp
  PVOID v9; // rcx
  ULONG_PTR v10; // rdx
  void *v11; // rcx
  ULONG_PTR v12; // rdx

  v4 = 0;
  v5 = a3 & 0xFEFFFFFF;
  if ( (a3 & 0xFEFFFFFF) != 0x8000 || (a3 & 0x1000000) != 0 )
  {
    if ( BYTE1(*a4) < 2u )
      v4 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, RegionSize, a3 & 0xC000);
  }
  else
  {
    v9 = *BaseAddress;
    v10 = (ULONG_PTR)v9 + *RegionSize;
    v11 = (void *)(((unsigned __int64)v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v12 = v10 - (_QWORD)v11;
    *BaseAddress = v11;
    *RegionSize = v12;
    if ( !v12 )
      return v4;
    sub_18004F6D0(&unk_180166AA8, BaseAddress, RegionSize);
  }
  if ( (byte_180166058 & 8) != 0 )
    sub_1801073CC(v5, *RegionSize, *BaseAddress, v4);
  return v4;
}
