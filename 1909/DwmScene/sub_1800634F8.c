/*
 * XREFs of sub_1800634F8 @ 0x1800634F8
 * Callers:
 *     sub_180063540 @ 0x180063540 (sub_180063540.c)
 * Callees:
 *     sub_180063734 @ 0x180063734 (sub_180063734.c)
 */

char __fastcall sub_1800634F8(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // bl

  if ( *(_DWORD *)(a1 + 24) != 1 )
    return 1;
  v3 = 0;
  if ( (unsigned __int8)sub_180063734(a1, 0LL) )
    return 1;
  LOBYTE(v2) = 1;
  if ( (unsigned __int8)sub_180063734(a1, v2) )
    return 1;
  return v3;
}
