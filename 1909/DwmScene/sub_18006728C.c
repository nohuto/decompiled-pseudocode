/*
 * XREFs of sub_18006728C @ 0x18006728C
 * Callers:
 *     sub_18012D0A7 @ 0x18012D0A7 (sub_18012D0A7.c)
 *     sub_18012D97A @ 0x18012D97A (sub_18012D97A.c)
 *     sub_18012D9BA @ 0x18012D9BA (sub_18012D9BA.c)
 *     sub_18012DA16 @ 0x18012DA16 (sub_18012DA16.c)
 *     sub_18012DAC1 @ 0x18012DAC1 (sub_18012DAC1.c)
 *     sub_18012DB33 @ 0x18012DB33 (sub_18012DB33.c)
 *     sub_18012DBC9 @ 0x18012DBC9 (sub_18012DBC9.c)
 *     sub_18012DC09 @ 0x18012DC09 (sub_18012DC09.c)
 *     sub_18012DC65 @ 0x18012DC65 (sub_18012DC65.c)
 *     sub_18012DD10 @ 0x18012DD10 (sub_18012DD10.c)
 *     sub_18012DD82 @ 0x18012DD82 (sub_18012DD82.c)
 *     sub_18012E866 @ 0x18012E866 (sub_18012E866.c)
 * Callees:
 *     sub_180063640 @ 0x180063640 (sub_180063640.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006728C(__int64 a1)
{
  sub_180063640((__int64 *)(a1 + 32));
  if ( *(_BYTE *)(a1 + 16) )
    sub_180063778(*(_QWORD *)(a1 + 8));
  return sub_18011E1A0(a1);
}
