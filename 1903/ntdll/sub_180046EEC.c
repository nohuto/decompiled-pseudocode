/*
 * XREFs of sub_180046EEC @ 0x180046EEC
 * Callers:
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     sub_180045138 @ 0x180045138 (sub_180045138.c)
 * Callees:
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180046F54 @ 0x180046F54 (sub_180046F54.c)
 */

_QWORD *__fastcall sub_180046EEC(unsigned __int16 *a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  unsigned __int16 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  v6 = sub_180043280(a1, a4, a2, a3, &v9, &v8);
  if ( v6 && v8 && a3 != v9 )
    sub_180046F54(v5, v8, v9, a3);
  return v6;
}
