/*
 * XREFs of WmipAllocEntry @ 0x140733294
 * Callers:
 *     WmipAddDataSource @ 0x140732528 (WmipAddDataSource.c)
 *     WmipAllocDataSource @ 0x140733244 (WmipAllocDataSource.c)
 *     WmipAllocGuidEntry @ 0x140774E74 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x1407769EC (WmipAddMofResource.c)
 *     WmipUpdateModifyGuid @ 0x14077B338 (WmipUpdateModifyGuid.c)
 *     WmipUpdateAddGuid @ 0x1408F1B44 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
