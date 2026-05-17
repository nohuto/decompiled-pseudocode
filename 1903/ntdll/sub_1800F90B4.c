/*
 * XREFs of sub_1800F90B4 @ 0x1800F90B4
 * Callers:
 *     sub_1800F9D5C @ 0x1800F9D5C (sub_1800F9D5C.c)
 * Callees:
 *     sub_180088360 @ 0x180088360 (sub_180088360.c)
 */

char __fastcall sub_1800F90B4(int a1, int a2)
{
  bool v2; // al
  int v3; // r8d
  char v4; // cl

  if ( (unsigned int)(a1 - 4352) <= 0x12 && (unsigned int)(a2 - 4449) <= 0x14 )
    return 1;
  v2 = sub_180088360(a1);
  v4 = 0;
  if ( v2 && (unsigned int)(v3 - 4520) <= 0x1A )
    return 1;
  return v4;
}
