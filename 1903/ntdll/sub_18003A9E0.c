/*
 * XREFs of sub_18003A9E0 @ 0x18003A9E0
 * Callers:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 * Callees:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_18004DC8C @ 0x18004DC8C (sub_18004DC8C.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall sub_18003A9E0(void *a1)
{
  if ( (byte_180166058 & 2) != 0 )
    return sub_18004DC8C(a1);
  else
    return sub_18003AAA0(a1);
}
