/*
 * XREFs of CmpSearchKeyControlBlockTree @ 0x1407F12C0
 * Callers:
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 * Callees:
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F12DC (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpSearchKeyControlBlockTree(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 1;
  return CmpSearchKeyControlBlockTreeEx(a1, a2, 0LL, a4);
}
