/*
 * XREFs of sub_18009BC88 @ 0x18009BC88
 * Callers:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009BC88(unsigned int a1, unsigned int a2, int *a3)
{
  unsigned __int64 v3; // r9
  int v4; // ecx

  v3 = a2 * (unsigned __int64)a1;
  v4 = -1;
  if ( v3 <= 0xFFFFFFFF )
    v4 = v3;
  *a3 = v4;
  return v3 > 0xFFFFFFFF ? 0xC0000095 : 0;
}
