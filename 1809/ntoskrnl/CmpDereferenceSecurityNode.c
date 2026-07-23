/*
 * XREFs of CmpDereferenceSecurityNode @ 0x1401B3530
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140582354 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCleanupLightWeightUoWData @ 0x140695AAC (CmpCleanupLightWeightUoWData.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F5D50 (CmpCopySaclToVirtualKey.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140804E5C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140805C50 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x140138058 (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1401B35C8 (CmpKeySecurityDecrementReferenceCount.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvpGetCellContextInitialize @ 0x1407FA888 (HvpGetCellContextInitialize.c)
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
