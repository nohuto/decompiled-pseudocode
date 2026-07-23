/*
 * XREFs of CmpPrepareForSubtreeInvalidation @ 0x14071FC9C
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1405AA000 (CmpTransMgrFreeVolatileData.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback @ 0x1407FB500 (CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x140693AA8 (CmpEnumerateAllOpenSubKeys.c)
 */

__int64 __fastcall CmpPrepareForSubtreeInvalidation(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v7, 0, 0x20uLL);
  LODWORD(v7[0]) = 0;
  v7[2] = a3;
  LODWORD(v7[3]) = a2;
  CmpEnumerateAllOpenSubKeys(a1, 0, (__int64)CmpPrepareForSubtreeInvalidationWorker, (__int64)v7);
  result = LODWORD(v7[0]);
  if ( SLODWORD(v7[0]) >= 0 )
  {
    if ( HIDWORD(v7[0]) )
      return 3221225761LL;
    else
      return LODWORD(v7[1]) != 0 ? 0xC000022D : 0;
  }
  return result;
}
