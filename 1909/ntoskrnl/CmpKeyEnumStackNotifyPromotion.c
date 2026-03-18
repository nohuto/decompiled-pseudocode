/*
 * XREFs of CmpKeyEnumStackNotifyPromotion @ 0x1408382E4
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x14083E220 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSubtree @ 0x14083E9A4 (CmpPromoteSubtree.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x1408380B4 (CmpKeyEnumStackEntryNotifyPromotion.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140838268 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

_QWORD *__fastcall CmpKeyEnumStackNotifyPromotion(__int16 *a1)
{
  unsigned __int64 EntryAtLayerHeight; // rdi
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // edx

  EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight((__int64)a1, *a1);
  CmpKeyEnumStackEntryNotifyPromotion((_QWORD *)EntryAtLayerHeight);
  result = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)(a1 + 4), *a1);
  v4 = result;
  if ( *((_DWORD *)result + 2) == -1 )
  {
    if ( result[2] )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*result + 16LL))(*result, result + 3);
    *v4 = 0LL;
    *(_QWORD *)((char *)v4 + 12) = 0LL;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 2) = -1;
    v4[3] = 0LL;
    *((_DWORD *)v4 + 6) = -1;
    *((_WORD *)v4 + 14) = 0;
    v5 = *(_QWORD *)EntryAtLayerHeight;
    v6 = *(_DWORD *)(EntryAtLayerHeight + 112);
    *v4 = *(_QWORD *)EntryAtLayerHeight;
    *((_DWORD *)v4 + 2) = v6;
    result = (_QWORD *)(*(__int64 (**)(void))(v5 + 8))();
    v4[2] = result;
  }
  return result;
}
