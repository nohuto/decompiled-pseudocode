/*
 * XREFs of CmpGetSecurityDescriptorNodeEx @ 0x140580AB8
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140581354 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpGetSecurityDescriptorNode @ 0x1406D0B48 (CmpGetSecurityDescriptorNode.c)
 *     CmpCopyKeyPartial @ 0x1406FF8E0 (CmpCopyKeyPartial.c)
 *     CmpAssignKeySecurity @ 0x14075B97C (CmpAssignKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x14075BBB8 (CmpCreateHiveRootCell.c)
 *     CmpAssignSecurityDescriptor @ 0x1407F47D0 (CmpAssignSecurityDescriptor.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407FC8C8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSyncKeyValues @ 0x1407FE4FC (CmpSyncKeyValues.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140804A70 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpKeySecurityIncrementReferenceCount @ 0x1401B34A4 (CmpKeySecurityIncrementReferenceCount.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1401B5E94 (RtlLengthSecurityDescriptorStrict.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     CmpFindMatchingDescriptorCell @ 0x1405AD000 (CmpFindMatchingDescriptorCell.c)
 *     HvFreeCell @ 0x1405ADBD8 (HvFreeCell.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405CF3BC (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x1405FAC04 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x1405FBE54 (HvAllocateCell.c)
 *     CmpInsertSecurityCellList @ 0x1406CA114 (CmpInsertSecurityCellList.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNodeEx(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        char a6,
        unsigned int *a7)
{
  unsigned int v9; // ebp
  int v12; // eax
  unsigned int Cell; // edi
  unsigned int v14; // eax
  _DWORD *v15; // rcx
  __int64 v16; // rax
  int v17; // esi
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-20h] BYREF
  _WORD *v20; // [rsp+40h] [rbp-18h] BYREF

  v19[0] = -1;
  v19[1] = 0;
  v9 = a2;
  if ( !(unsigned __int8)HvpMarkCellDirty(a1, a2) )
    return 3221225853LL;
  CmpUpdateKeyNodeAccessBits(a1, a3, v9);
  if ( !(unsigned __int8)CmpFindMatchingDescriptorCell(a1, Src, a4, &BugCheckParameter3, 0LL) )
  {
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(a1 + 4152) & 0x20) != 0 && *(_DWORD *)(a1 + 1864) > 1u )
      return 3221225506LL;
    v12 = RtlLengthSecurityDescriptorStrict();
    Cell = HvAllocateCell(a1, v12 + 20, a4, (unsigned int)&v20, (__int64)v19);
    if ( Cell != -1 )
    {
      v14 = RtlLengthSecurityDescriptorStrict();
      v15 = v20;
      *v20 = 27507;
      v15[3] = 1;
      v15[4] = v14;
      memmove(v15 + 5, Src, v14);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v19);
      if ( !(unsigned __int8)CmpInsertSecurityCellList(a1) )
      {
        HvFreeCell(a1, Cell);
        return 3221225853LL;
      }
      goto LABEL_16;
    }
    return 3221225626LL;
  }
  Cell = BugCheckParameter3;
  if ( !(unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)BugCheckParameter3) )
    return 3221225853LL;
  v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, Cell, v19);
  if ( !v16 )
    return 3221225626LL;
  v17 = CmpKeySecurityIncrementReferenceCount(v16, a1, Cell, 0);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v19);
  if ( v17 < 0 )
    return (unsigned int)v17;
LABEL_16:
  *a7 = Cell;
  return 0LL;
}
