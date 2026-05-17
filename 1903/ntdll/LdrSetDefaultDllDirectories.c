/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x18007EF00
 * Callers:
 *     sub_18007ED94 @ 0x18007ED94 (sub_18007ED94.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrSetDefaultDllDirectories(int a1)
{
  if ( !a1 || ((~((dword_180162714 & 4 | 0x7A) << 8) | 0x100) & a1) != 0 )
    return 3221225485LL;
  dword_18016601C = a1;
  return 0LL;
}
