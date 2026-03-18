/*
 * XREFs of CmpAssignSecurityToKcb @ 0x140656884
 * Callers:
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140630F78 (CmpRebuildKcbCacheFromNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063BAF0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateKeyControlBlock @ 0x1406545D0 (CmpCreateKeyControlBlock.c)
 *     CmpCommitAddKeyUoW @ 0x140715E20 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14072D780 (CmpCommitSetSecurityUoW.c)
 *     CmpAssignKeySecurity @ 0x140784110 (CmpAssignKeySecurity.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14083CEAC (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14083D528 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140656940 (CmpFindSecurityCellCacheIndex.c)
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
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF

  v5 = (unsigned int)BugCheckParameter4;
  v9 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( !a4 )
      ExAcquirePushLockSharedEx(v10 + 1776, 0LL);
    if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(v10, (unsigned int)v5, &v12) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v10 + 1880) + 16LL * v12 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v5);
      v9 = 0;
    }
    if ( !a4 )
      ExReleasePushLockEx(v10 + 1776, 0LL);
  }
  return v9;
}
