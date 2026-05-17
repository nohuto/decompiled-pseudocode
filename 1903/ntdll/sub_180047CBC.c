/*
 * XREFs of sub_180047CBC @ 0x180047CBC
 * Callers:
 *     sub_18004733C @ 0x18004733C (sub_18004733C.c)
 *     sub_180047844 @ 0x180047844 (sub_180047844.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     sub_18004E8CC @ 0x18004E8CC (sub_18004E8CC.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_180047CBC(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]

  v2 = a2;
  if ( a2 == 64 && ((int)ZwQueryVirtualMemory(-1LL, a1, 3LL, &v5, 40LL, 0LL) < 0 || (v6 & 0x60) == 0 || v5 != a1) )
  {
    sub_18010A694(0, a1, 1, v6, 0LL, 0LL);
    return 4;
  }
  return v2;
}
