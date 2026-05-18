/*
 * XREFs of sub_180068180 @ 0x180068180
 * Callers:
 *     <none>
 * Callees:
 *     sub_180068114 @ 0x180068114 (sub_180068114.c)
 */

bool __fastcall sub_180068180(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 160) )
    return sub_180068114(a1);
  return v1;
}
