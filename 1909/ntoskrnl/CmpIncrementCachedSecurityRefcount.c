/*
 * XREFs of CmpIncrementCachedSecurityRefcount @ 0x140664EC0
 * Callers:
 *     CmpCheckKey @ 0x140664430 (CmpCheckKey.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401BE8F0 (CmpFindSecurityCellCacheIndexNew.c)
 */

char __fastcall CmpIncrementCachedSecurityRefcount(__int64 a1, unsigned int a2)
{
  char result; // al
  __int64 v4; // rcx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  result = CmpFindSecurityCellCacheIndexNew(a1, a2, &v5);
  if ( result )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * v5 + 8);
    result = 1;
    ++*(_DWORD *)(v4 + 28);
  }
  return result;
}
