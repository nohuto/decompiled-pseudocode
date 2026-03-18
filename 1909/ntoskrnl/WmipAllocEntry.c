/*
 * XREFs of WmipAllocEntry @ 0x1407354F4
 * Callers:
 *     WmipAddDataSource @ 0x140734788 (WmipAddDataSource.c)
 *     WmipAllocDataSource @ 0x1407354A4 (WmipAllocDataSource.c)
 *     WmipAllocGuidEntry @ 0x140778454 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x140779FCC (WmipAddMofResource.c)
 *     WmipUpdateModifyGuid @ 0x14077DC08 (WmipUpdateModifyGuid.c)
 *     WmipUpdateAddGuid @ 0x1408F1454 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400CA44C (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, *(unsigned int *)(a1 + 8));
    v3[3] = 1LL;
    *((_DWORD *)v3 + 4) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(a1 + 28);
  }
  return v3;
}
