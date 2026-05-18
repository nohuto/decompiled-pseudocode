/*
 * XREFs of sub_1800642F8 @ 0x1800642F8
 * Callers:
 *     sub_18002C1D0 @ 0x18002C1D0 (sub_18002C1D0.c)
 *     sub_18002C650 @ 0x18002C650 (sub_18002C650.c)
 *     sub_18002CFB8 @ 0x18002CFB8 (sub_18002CFB8.c)
 *     sub_18002FB6C @ 0x18002FB6C (sub_18002FB6C.c)
 *     sub_18002FF48 @ 0x18002FF48 (sub_18002FF48.c)
 *     sub_180033620 @ 0x180033620 (sub_180033620.c)
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180033A60 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     sub_180039C30 @ 0x180039C30 (sub_180039C30.c)
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_18003AE34 @ 0x18003AE34 (sub_18003AE34.c)
 *     sub_18003BFB0 @ 0x18003BFB0 (sub_18003BFB0.c)
 *     sub_18003DD40 @ 0x18003DD40 (sub_18003DD40.c)
 *     sub_180043400 @ 0x180043400 (sub_180043400.c)
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_180065114 @ 0x180065114 (sub_180065114.c)
 *     sub_18009E7AC @ 0x18009E7AC (sub_18009E7AC.c)
 *     sub_18009F280 @ 0x18009F280 (sub_18009F280.c)
 *     sub_1800CD128 @ 0x1800CD128 (sub_1800CD128.c)
 *     sub_1800CD224 @ 0x1800CD224 (sub_1800CD224.c)
 *     sub_1800CD320 @ 0x1800CD320 (sub_1800CD320.c)
 *     sub_1800CD41C @ 0x1800CD41C (sub_1800CD41C.c)
 *     sub_1800CD518 @ 0x1800CD518 (sub_1800CD518.c)
 *     sub_1800CE4D0 @ 0x1800CE4D0 (sub_1800CE4D0.c)
 *     sub_1800D0190 @ 0x1800D0190 (sub_1800D0190.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 */

_QWORD *__fastcall sub_1800642F8(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18000F3F4(a2, a1 + 8);
  return a2;
}
