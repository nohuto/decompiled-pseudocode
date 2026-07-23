/*
 * XREFs of CmpResetKeyNodeStack @ 0x1407FB558
 * Callers:
 *     CmpSubtreeEnumeratorReset @ 0x1407FBAD4 (CmpSubtreeEnumeratorReset.c)
 *     CmpKeyEnumStackReset @ 0x140800B80 (CmpKeyEnumStackReset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpResetKeyNodeStack(__int16 *a1)
{
  __int16 i; // si
  _QWORD *EntryAtLayerHeight; // rax
  _QWORD *v4; // rbx

  for ( i = 0; i <= *a1; *((_WORD *)v4 + 14) = 0 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, i);
    v4 = EntryAtLayerHeight;
    if ( EntryAtLayerHeight[2] )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
        *EntryAtLayerHeight,
        EntryAtLayerHeight + 3);
    memset(v4, 0, 0x20uLL);
    *((_DWORD *)v4 + 2) = -1;
    v4[3] = 0LL;
    ++i;
    *((_DWORD *)v4 + 6) = -1;
  }
}
