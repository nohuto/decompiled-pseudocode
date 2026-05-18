/*
 * XREFs of sub_18009ECD8 @ 0x18009ECD8
 * Callers:
 *     sub_180034280 @ 0x180034280 (sub_180034280.c)
 *     sub_180067FA4 @ 0x180067FA4 (sub_180067FA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009ECD8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 12);
  return result;
}
