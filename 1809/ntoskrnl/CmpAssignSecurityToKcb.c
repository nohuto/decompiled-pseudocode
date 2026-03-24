/*
 * XREFs of CmpAssignSecurityToKcb @ 0x1405ACAE4
 * Callers:
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1405AC984 (CmpRebuildKcbCacheFromNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B7C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpAssignKeySecurity @ 0x14075B95C (CmpAssignKeySecurity.c)
 *     CmpDoBuildVirtualStack @ 0x1407F2A18 (CmpDoBuildVirtualStack.c)
 *     CmRestoreKey @ 0x1408013AC (CmRestoreKey.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x1408035F0 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140803C5C (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401B35E4 (CmpFindSecurityCellCacheIndexNew.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

char __fastcall CmpAssignSecurityToKcb(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        char a4,
        char a5)
{
  ULONG_PTR v5; // rbp
  char v9; // di
  __int64 v10; // rsi
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v5 = (unsigned int)BugCheckParameter4;
  v9 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 80) = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter3 + 24);
    if ( !a4 )
      ExAcquirePushLockSharedEx(v10 + 1776, 0LL);
    if ( CmpFindSecurityCellCacheIndexNew(v10, v5, &v12) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 80) = *(_QWORD *)(*(_QWORD *)(v10 + 1880) + 16LL * v12 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 80) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v5);
      v9 = 0;
    }
    if ( !a4 )
      ExReleasePushLockEx(v10 + 1776, 0LL);
  }
  return v9;
}
