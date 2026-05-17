/*
 * XREFs of sub_1800506F0 @ 0x1800506F0
 * Callers:
 *     sub_180047844 @ 0x180047844 (sub_180047844.c)
 *     sub_18004DD48 @ 0x18004DD48 (sub_18004DD48.c)
 *     sub_1800501E4 @ 0x1800501E4 (sub_1800501E4.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 *     sub_18010B5E4 @ 0x18010B5E4 (sub_18010B5E4.c)
 *     sub_18010B704 @ 0x18010B704 (sub_18010B704.c)
 *     sub_18010B760 @ 0x18010B760 (sub_18010B760.c)
 * Callees:
 *     sub_180050634 @ 0x180050634 (sub_180050634.c)
 */

__int64 __fastcall sub_1800506F0(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-10h]

  sub_180050634((__int64)&unk_180166AA8, a1, (__int64)v7);
  if ( a3 )
    *a3 = v7[2];
  if ( a4 )
    *a4 = v8;
  return v7[0];
}
