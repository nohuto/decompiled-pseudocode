/*
 * XREFs of sub_180048120 @ 0x180048120
 * Callers:
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_180047F94 @ 0x180047F94 (sub_180047F94.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 *     sub_18004AB8C @ 0x18004AB8C (sub_18004AB8C.c)
 *     sub_18004B17C @ 0x18004B17C (sub_18004B17C.c)
 *     RtlValidateProcessHeaps @ 0x1800EFA30 (RtlValidateProcessHeaps.c)
 *     sub_180104EF8 @ 0x180104EF8 (sub_180104EF8.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F40B0 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall sub_180048120(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi

  v4 = a4;
  v7 = ZwFreeVirtualMemory(-1LL, a2, a3, a4);
  if ( v7 == -1073741755 && (unsigned __int8)RtlFlushSecureMemoryCache(*a2, *a3) )
    return ZwFreeVirtualMemory(-1LL, a2, a3, v4);
  else
    return v7;
}
