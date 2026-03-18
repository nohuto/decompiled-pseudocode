/*
 * XREFs of CmCheckNoTxContext @ 0x14063A848
 * Callers:
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x140823B40 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140823E30 (NtCompressKey.c)
 *     NtReplaceKey @ 0x140824BF0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140824F70 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140825240 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1408254F0 (NtSaveMergedKeys.c)
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
