/*
 * XREFs of sub_180068290 @ 0x180068290
 * Callers:
 *     <none>
 * Callees:
 *     sub_180068224 @ 0x180068224 (sub_180068224.c)
 */

bool __fastcall sub_180068290(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 160) )
    return sub_180068224(a1);
  return v1;
}
