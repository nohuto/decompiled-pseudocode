/*
 * XREFs of CmpDereferenceSecurityNode @ 0x1401B33F0
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140581354 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406948EC (CmpCleanupLightWeightUoWData.c)
 *     CmRenameKey @ 0x1407EDAF4 (CmRenameKey.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F4B50 (CmpCopySaclToVirtualKey.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140803C5C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140804A50 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x140137F58 (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1401B3488 (CmpKeySecurityDecrementReferenceCount.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x1405ADBD8 (HvFreeCell.c)
 *     HvpGetCellContextInitialize @ 0x1407F9688 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpDereferenceSecurityNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 result; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = BugCheckParameter3;
  HvpGetCellContextInitialize(&v7);
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, char *))(BugCheckParameter2 + 8))(BugCheckParameter2, v4, &v7);
  result = CmpKeySecurityDecrementReferenceCount(v5, BugCheckParameter2, v3);
  if ( (_BYTE)result )
  {
    (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
    v5 = 0LL;
    CmpRemoveSecurityCellList(BugCheckParameter2, v3);
    result = HvFreeCell(BugCheckParameter2, v3);
  }
  if ( v5 )
    return (*(__int64 (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
  return result;
}
