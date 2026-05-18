/*
 * XREFs of sub_18009ECC8 @ 0x18009ECC8
 * Callers:
 *     sub_180030404 @ 0x180030404 (sub_180030404.c)
 *     sub_180034280 @ 0x180034280 (sub_180034280.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009ECC8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
