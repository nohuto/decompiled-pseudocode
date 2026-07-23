/*
 * XREFs of CmpResetCachedSecurity @ 0x140582274
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1405AC0AC (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401B3724 (CmpFindSecurityCellCacheIndexNew.c)
 */

__int64 __fastcall CmpResetCachedSecurity(__int64 a1, unsigned int a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  if ( !CmpFindSecurityCellCacheIndexNew(a1, a2, &v4) )
    return 3221226021LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * v4 + 8) + 28LL) = 0;
  return 0LL;
}
