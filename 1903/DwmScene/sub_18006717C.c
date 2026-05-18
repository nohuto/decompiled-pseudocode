/*
 * XREFs of sub_18006717C @ 0x18006717C
 * Callers:
 *     sub_18012CF97 @ 0x18012CF97 (sub_18012CF97.c)
 *     sub_18012D86A @ 0x18012D86A (sub_18012D86A.c)
 *     sub_18012D8AA @ 0x18012D8AA (sub_18012D8AA.c)
 *     sub_18012D906 @ 0x18012D906 (sub_18012D906.c)
 *     sub_18012D9B1 @ 0x18012D9B1 (sub_18012D9B1.c)
 *     sub_18012DA23 @ 0x18012DA23 (sub_18012DA23.c)
 *     sub_18012DAB9 @ 0x18012DAB9 (sub_18012DAB9.c)
 *     sub_18012DAF9 @ 0x18012DAF9 (sub_18012DAF9.c)
 *     sub_18012DB55 @ 0x18012DB55 (sub_18012DB55.c)
 *     sub_18012DC00 @ 0x18012DC00 (sub_18012DC00.c)
 *     sub_18012DC72 @ 0x18012DC72 (sub_18012DC72.c)
 *     sub_18012E756 @ 0x18012E756 (sub_18012E756.c)
 * Callees:
 *     sub_180063530 @ 0x180063530 (sub_180063530.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006717C(__int64 a1)
{
  sub_180063530((__int64 *)(a1 + 32));
  if ( *(_BYTE *)(a1 + 16) )
    sub_180063668(*(_QWORD *)(a1 + 8));
  return sub_18011E090(a1);
}
