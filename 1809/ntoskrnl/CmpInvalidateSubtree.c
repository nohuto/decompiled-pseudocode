/*
 * XREFs of CmpInvalidateSubtree @ 0x14071EE7C
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1407E88F0 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407F9FE0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmRestoreKey @ 0x1408013CC (CmRestoreKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x140692908 (CmpEnumerateAllOpenSubKeys.c)
 */

__int64 __fastcall CmpInvalidateSubtree(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]

  v7 = a3;
  v6 = a2;
  result = CmpEnumerateAllOpenSubKeys(a1, a3 & 1, (__int64)CmpInvalidateSubtreeWorker, (__int64)&v6);
  if ( a4 )
  {
    result = HIDWORD(v6);
    *a4 = HIDWORD(v6);
  }
  return result;
}
