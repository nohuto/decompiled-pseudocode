/*
 * XREFs of sub_1800FC690 @ 0x1800FC690
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FC690(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 184) > 1u )
    result = 10240LL;
  dword_180163B6C = result;
  return result;
}
