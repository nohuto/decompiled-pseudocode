/*
 * XREFs of sub_18009EC10 @ 0x18009EC10
 * Callers:
 *     sub_18002D380 @ 0x18002D380 (sub_18002D380.c)
 *     sub_18002EB10 @ 0x18002EB10 (sub_18002EB10.c)
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 *     sub_180031944 @ 0x180031944 (sub_180031944.c)
 *     sub_180034FB0 @ 0x180034FB0 (sub_180034FB0.c)
 *     sub_1800CFDC8 @ 0x1800CFDC8 (sub_1800CFDC8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EC10(__int64 a1)
{
  unsigned int **v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(unsigned int ***)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *v3;
  return result;
}
