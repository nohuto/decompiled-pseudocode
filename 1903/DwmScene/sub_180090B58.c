/*
 * XREFs of sub_180090B58 @ 0x180090B58
 * Callers:
 *     sub_1800FA400 @ 0x1800FA400 (sub_1800FA400.c)
 *     sub_180110C10 @ 0x180110C10 (sub_180110C10.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 *     sub_180112BB0 @ 0x180112BB0 (sub_180112BB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180090B58(__int64 a1, __int64 a2, char a3)
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
