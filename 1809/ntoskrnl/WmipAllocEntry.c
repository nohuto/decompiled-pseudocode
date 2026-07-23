/*
 * XREFs of WmipAllocEntry @ 0x14070964C
 * Callers:
 *     WmipAddDataSource @ 0x140708870 (WmipAddDataSource.c)
 *     WmipAllocDataSource @ 0x1407095FC (WmipAllocDataSource.c)
 *     WmipAllocGuidEntry @ 0x140751480 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x140752B6C (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x1408B5A2C (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1408B5E54 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1401D1980 (memset.c)
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
