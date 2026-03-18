/*
 * XREFs of CmCheckNoTxContext @ 0x14063D8D8
 * Callers:
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x140823240 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140823530 (NtCompressKey.c)
 *     NtReplaceKey @ 0x1408242F0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140824670 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140824940 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140824BF0 (NtSaveMergedKeys.c)
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
