/*
 * XREFs of sub_180090C68 @ 0x180090C68
 * Callers:
 *     sub_1800FA510 @ 0x1800FA510 (sub_1800FA510.c)
 *     sub_180110D20 @ 0x180110D20 (sub_180110D20.c)
 *     sub_180112790 @ 0x180112790 (sub_180112790.c)
 *     sub_180112CC0 @ 0x180112CC0 (sub_180112CC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180090C68(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 152);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_QWORD *)(a1 + 152) = result;
  return result;
}
