/*
 * XREFs of sub_18009BF64 @ 0x18009BF64
 * Callers:
 *     sub_180038840 @ 0x180038840 (sub_180038840.c)
 *     sub_18009BF80 @ 0x18009BF80 (sub_18009BF80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009BF64(int a1, int *a2)
{
  int v2; // eax

  v2 = *a2;
  if ( a1 != *a2 )
  {
    v2 += 2;
    *a2 = v2;
  }
  return ((unsigned int)(v2 + 15) >> 4) + 1;
}
