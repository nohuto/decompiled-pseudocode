/*
 * XREFs of sub_18011D988 @ 0x18011D988
 * Callers:
 *     sub_180020104 @ 0x180020104 (sub_180020104.c)
 *     sub_1800205F0 @ 0x1800205F0 (sub_1800205F0.c)
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_180029EA0 @ 0x180029EA0 (sub_180029EA0.c)
 *     sub_18002B380 @ 0x18002B380 (sub_18002B380.c)
 *     sub_180032FF8 @ 0x180032FF8 (sub_180032FF8.c)
 *     sub_180033620 @ 0x180033620 (sub_180033620.c)
 *     sub_180034FB0 @ 0x180034FB0 (sub_180034FB0.c)
 *     sub_180037700 @ 0x180037700 (sub_180037700.c)
 *     sub_180037F90 @ 0x180037F90 (sub_180037F90.c)
 *     sub_1800437F0 @ 0x1800437F0 (sub_1800437F0.c)
 *     sub_180043BB0 @ 0x180043BB0 (sub_180043BB0.c)
 *     sub_180043F70 @ 0x180043F70 (sub_180043F70.c)
 *     sub_18006C650 @ 0x18006C650 (sub_18006C650.c)
 *     sub_18006D4B0 @ 0x18006D4B0 (sub_18006D4B0.c)
 *     sub_18006D588 @ 0x18006D588 (sub_18006D588.c)
 *     sub_18006D630 @ 0x18006D630 (sub_18006D630.c)
 *     sub_180075824 @ 0x180075824 (sub_180075824.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_180076EC4 @ 0x180076EC4 (sub_180076EC4.c)
 *     sub_180079B84 @ 0x180079B84 (sub_180079B84.c)
 *     sub_18007A17C @ 0x18007A17C (sub_18007A17C.c)
 *     sub_180095D8C @ 0x180095D8C (sub_180095D8C.c)
 *     sub_180096464 @ 0x180096464 (sub_180096464.c)
 *     sub_180099E18 @ 0x180099E18 (sub_180099E18.c)
 *     sub_1800A8550 @ 0x1800A8550 (sub_1800A8550.c)
 *     sub_1800AC720 @ 0x1800AC720 (sub_1800AC720.c)
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 *     sub_1800D5C30 @ 0x1800D5C30 (sub_1800D5C30.c)
 *     sub_1801180DC @ 0x1801180DC (sub_1801180DC.c)
 *     sub_18011926C @ 0x18011926C (sub_18011926C.c)
 *     sub_18011D9DC @ 0x18011D9DC (sub_18011D9DC.c)
 *     sub_18011DA88 @ 0x18011DA88 (sub_18011DA88.c)
 *     sub_180122CB0 @ 0x180122CB0 (sub_180122CB0.c)
 *     sub_180130063 @ 0x180130063 (sub_180130063.c)
 *     sub_180133AE6 @ 0x180133AE6 (sub_180133AE6.c)
 *     sub_180133BAE @ 0x180133BAE (sub_180133BAE.c)
 *     sub_180133C88 @ 0x180133C88 (sub_180133C88.c)
 *     sub_180133D50 @ 0x180133D50 (sub_180133D50.c)
 *     sub_180133E39 @ 0x180133E39 (sub_180133E39.c)
 *     sub_180133F56 @ 0x180133F56 (sub_180133F56.c)
 *     sub_1801348F6 @ 0x1801348F6 (sub_1801348F6.c)
 * Callees:
 *     sub_18011D3EC @ 0x18011D3EC (sub_18011D3EC.c)
 *     sub_18011D69C @ 0x18011D69C (sub_18011D69C.c)
 */

void sub_18011D988(__int64 *a1, int a2, const char *a3, ...)
{
  int v5; // [rsp+50h] [rbp+18h]
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v5 = (int)a3;
  sub_18011D3EC((__int64)a1);
  sub_18011D69C(*a1, a2, v5, (__int64)va);
}
