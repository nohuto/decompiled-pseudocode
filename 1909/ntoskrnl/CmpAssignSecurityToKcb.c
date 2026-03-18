/*
 * XREFs of CmpAssignSecurityToKcb @ 0x140669990
 * Callers:
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140634DF8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmpCommitAddKeyUoW @ 0x140716A80 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14072F650 (CmpCommitSetSecurityUoW.c)
 *     CmpAssignKeySecurity @ 0x140786470 (CmpAssignKeySecurity.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14083C50C (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14083CB88 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401BE8F0 (CmpFindSecurityCellCacheIndexNew.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpAssignSecurityToKcb(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        char a4,
        char a5)
{
  ULONG_PTR v5; // rbp
  unsigned __int8 v9; // di
  __int64 v11; // rsi
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF

  v5 = (unsigned int)BugCheckParameter4;
  v9 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
    return 1LL;
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( !a4 )
      ExAcquirePushLockSharedEx(v11 + 1776, 0LL);
    if ( CmpFindSecurityCellCacheIndexNew(v11, v5, &v12) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v11 + 1880) + 16LL * v12 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v5);
      v9 = 0;
    }
    if ( !a4 )
      ExReleasePushLockEx(v11 + 1776, 0LL);
    return v9;
  }
}
