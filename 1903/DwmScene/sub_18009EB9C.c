/*
 * XREFs of sub_18009EB9C @ 0x18009EB9C
 * Callers:
 *     sub_18002D330 @ 0x18002D330 (sub_18002D330.c)
 *     sub_18002EB10 @ 0x18002EB10 (sub_18002EB10.c)
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 *     sub_180031944 @ 0x180031944 (sub_180031944.c)
 *     sub_180034FB0 @ 0x180034FB0 (sub_180034FB0.c)
 *     sub_180037F90 @ 0x180037F90 (sub_180037F90.c)
 *     sub_1800CFDC8 @ 0x1800CFDC8 (sub_1800CFDC8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EB9C(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *(unsigned int *)(v3 + 4);
  return result;
}
