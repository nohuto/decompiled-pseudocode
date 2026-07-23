/*
 * XREFs of CmCheckNoTxContext @ 0x1405B8B6C
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x1407EA0B0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407EA3B0 (NtCompressKey.c)
 *     NtReplaceKey @ 0x1407EB270 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407EB5F0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EB8B0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1407EBB60 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

__int64 CmCheckNoTxContext()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  result = TmCurrentTransaction(&v1);
  if ( (_DWORD)result != -1073741637 )
  {
    if ( (int)result < 0 )
      return result;
    if ( v1 )
      return 3222863873LL;
  }
  return 0LL;
}
