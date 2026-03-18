/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x14064052C
 * Callers:
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpAssignKeySecurity @ 0x140786470 (CmpAssignKeySecurity.c)
 *     CmpAssignSecurityDescriptor @ 0x14082D5FC (CmpAssignSecurityDescriptor.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14083D8B4 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7F30 (RtlLengthSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1405D57B0 (HvpMarkCellDirty.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140631924 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1406321FC (HvAllocateCell.c)
 *     CmpFindMatchingDescriptorCell @ 0x1406406BC (CmpFindMatchingDescriptorCell.c)
 *     CmpInsertSecurityCellList @ 0x1406EAA74 (CmpInsertSecurityCellList.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNode(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        __int64 a3,
        void *a4,
        char a5,
        unsigned int *a6)
{
  unsigned int v8; // esi
  unsigned int Cell; // edi
  __int64 v11; // rax
  ULONG v13; // eax
  ULONG v14; // eax
  _DWORD *v15; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-20h] BYREF
  _WORD *v18; // [rsp+40h] [rbp-18h] BYREF

  v17[0] = -1;
  v17[1] = 0;
  v8 = a2;
  if ( !HvpMarkCellDirty(BugCheckParameter2, a2, 0) )
    return 3221225853LL;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter2, a3, v8);
  if ( !(unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter2, a4, v8 >> 31, &BugCheckParameter3, 0LL) )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0
      && *(_DWORD *)(BugCheckParameter2 + 1864) > 1u )
    {
      return 3221225506LL;
    }
    v13 = RtlLengthSecurityDescriptor(a4);
    Cell = HvAllocateCell(BugCheckParameter2, v13 + 20, v8 >> 31, (__int64)&v18, (__int64)v17);
    if ( Cell == -1 )
      return 3221225626LL;
    v14 = RtlLengthSecurityDescriptor(a4);
    v15 = v18;
    *v18 = 27507;
    v15[3] = 1;
    v15[4] = v14;
    memmove(v15 + 5, a4, v14);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
    if ( (unsigned __int8)CmpInsertSecurityCellList(BugCheckParameter2) )
      goto LABEL_6;
    HvFreeCell(BugCheckParameter2, Cell);
    return 3221225853LL;
  }
  Cell = BugCheckParameter3;
  if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
    return 3221225853LL;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, Cell, v17);
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 12);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
LABEL_6:
    *a6 = Cell;
    return 0LL;
  }
  return 3221225626LL;
}
