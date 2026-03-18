/*
 * XREFs of CmCheckNoTxContext @ 0x1405B7B6C
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B4DBC (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x1407E8ED0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407E91D0 (NtCompressKey.c)
 *     NtReplaceKey @ 0x1407EA090 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407EA410 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EA6D0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1407EA980 (NtSaveMergedKeys.c)
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
