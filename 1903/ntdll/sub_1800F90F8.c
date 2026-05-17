/*
 * XREFs of sub_1800F90F8 @ 0x1800F90F8
 * Callers:
 *     sub_18007DA44 @ 0x18007DA44 (sub_18007DA44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F90F8(int a1, int a2)
{
  if ( (unsigned int)(a1 - 4352) > 0x12 || (unsigned int)(a2 - 4449) > 0x14 )
    return 0LL;
  else
    return (unsigned int)(28 * (a2 + 21 * a1) - 2639516);
}
