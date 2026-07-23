/*
 * XREFs of CmpIncrementCachedSecurityRefcount @ 0x1405DCC90
 * Callers:
 *     CmpCheckKey @ 0x1405DB210 (CmpCheckKey.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401B3724 (CmpFindSecurityCellCacheIndexNew.c)
 */

NTSTATUS __fastcall CmpIncrementCachedSecurityRefcount(__int64 a1, unsigned int a2)
{
  NTSTATUS result; // eax
  __int64 v4; // r9
  UINT puResult; // [rsp+40h] [rbp+18h] BYREF

  if ( !CmpFindSecurityCellCacheIndexNew(a1, a2, &puResult) )
    return -1073741275;
  result = RtlUIntAdd(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * puResult + 8) + 28LL), 1u, &puResult);
  if ( result >= 0 )
    *(_DWORD *)(v4 + 28) = puResult;
  return result;
}
