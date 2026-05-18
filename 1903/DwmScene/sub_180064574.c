/*
 * XREFs of sub_180064574 @ 0x180064574
 * Callers:
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_18003AE34 @ 0x18003AE34 (sub_18003AE34.c)
 *     sub_180064AEC @ 0x180064AEC (sub_180064AEC.c)
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_18006C908 @ 0x18006C908 (sub_18006C908.c)
 *     sub_18007625C @ 0x18007625C (sub_18007625C.c)
 *     sub_18007632C @ 0x18007632C (sub_18007632C.c)
 *     sub_180094BD0 @ 0x180094BD0 (sub_180094BD0.c)
 *     sub_180094CA8 @ 0x180094CA8 (sub_180094CA8.c)
 *     sub_180094D80 @ 0x180094D80 (sub_180094D80.c)
 *     sub_180095D8C @ 0x180095D8C (sub_180095D8C.c)
 *     sub_180096948 @ 0x180096948 (sub_180096948.c)
 *     sub_180096E90 @ 0x180096E90 (sub_180096E90.c)
 *     sub_180096F9C @ 0x180096F9C (sub_180096F9C.c)
 *     sub_180097568 @ 0x180097568 (sub_180097568.c)
 *     sub_18009DE28 @ 0x18009DE28 (sub_18009DE28.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 *     sub_18009F5B0 @ 0x18009F5B0 (sub_18009F5B0.c)
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     sub_1800CDA78 @ 0x1800CDA78 (sub_1800CDA78.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 *     sub_1800D06B8 @ 0x1800D06B8 (sub_1800D06B8.c)
 *     sub_1800D07C8 @ 0x1800D07C8 (sub_1800D07C8.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     sub_1800F74A8 @ 0x1800F74A8 (sub_1800F74A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180064574(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
