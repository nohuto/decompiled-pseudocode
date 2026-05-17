/*
 * XREFs of sub_180088360 @ 0x180088360
 * Callers:
 *     sub_18007DA44 @ 0x18007DA44 (sub_18007DA44.c)
 *     sub_1800F90B4 @ 0x1800F90B4 (sub_1800F90B4.c)
 *     sub_1800F9128 @ 0x1800F9128 (sub_1800F9128.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180088360(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
