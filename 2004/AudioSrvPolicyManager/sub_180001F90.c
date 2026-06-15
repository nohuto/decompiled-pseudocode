/*
 * XREFs of sub_180001F90 @ 0x180001F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800366D8 @ 0x1800366D8 (sub_1800366D8.c)
 */

int sub_180001F90()
{
  int v0; // eax
  int v1; // ecx

  v0 = sub_1800366D8(&stru_18004F5C8);
  v1 = dword_18004F5C0;
  if ( v0 < 0 )
    v1 = 0;
  dword_18004F5C0 = v1;
  return atexit(sub_18003D300);
}
