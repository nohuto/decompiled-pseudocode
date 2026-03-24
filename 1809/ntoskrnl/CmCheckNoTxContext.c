/*
 * XREFs of CmCheckNoTxContext @ 0x1405B7B6C
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B4DBC (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x1407E8EB0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407E91B0 (NtCompressKey.c)
 *     NtReplaceKey @ 0x1407EA070 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407EA3F0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EA6B0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1407EA960 (NtSaveMergedKeys.c)
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
