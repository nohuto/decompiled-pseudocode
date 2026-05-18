/*
 * XREFs of sub_1800D0D70 @ 0x1800D0D70
 * Callers:
 *     sub_1800355F0 @ 0x1800355F0 (sub_1800355F0.c)
 *     sub_180037040 @ 0x180037040 (sub_180037040.c)
 *     sub_180037470 @ 0x180037470 (sub_180037470.c)
 *     sub_180037620 @ 0x180037620 (sub_180037620.c)
 *     sub_180063EE8 @ 0x180063EE8 (sub_180063EE8.c)
 *     sub_180063FF8 @ 0x180063FF8 (sub_180063FF8.c)
 *     sub_18006403C @ 0x18006403C (sub_18006403C.c)
 *     sub_180064110 @ 0x180064110 (sub_180064110.c)
 *     sub_18006456C @ 0x18006456C (sub_18006456C.c)
 *     sub_1800966F0 @ 0x1800966F0 (sub_1800966F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D0D70(__int64 a1, int a2, int a3, unsigned __int64 a4)
{
  __int64 result; // rax

  result = a3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(32 * (a3 + 5LL * a2) + a1), a4);
  return result;
}
