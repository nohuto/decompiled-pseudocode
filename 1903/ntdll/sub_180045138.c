/*
 * XREFs of sub_180045138 @ 0x180045138
 * Callers:
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 * Callees:
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180046EEC @ 0x180046EEC (sub_180046EEC.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

_QWORD *__fastcall sub_180045138(unsigned __int16 *a1, unsigned int a2, _QWORD *a3, unsigned __int64 a4)
{
  if ( (byte_180166058 & 2) != 0 )
    return (_QWORD *)sub_180046EEC(a1, a3, a4, a2);
  else
    return sub_180043280(a1, a2, a3, a4, 0LL, 0LL);
}
