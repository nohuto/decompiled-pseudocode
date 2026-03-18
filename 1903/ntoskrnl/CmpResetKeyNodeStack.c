/*
 * XREFs of CmpResetKeyNodeStack @ 0x1408336D8
 * Callers:
 *     CmpSubtreeEnumeratorReset @ 0x140833C98 (CmpSubtreeEnumeratorReset.c)
 *     CmpKeyEnumStackReset @ 0x140838D20 (CmpKeyEnumStackReset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140833358 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
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
    *v4 = 0LL;
    *(_QWORD *)((char *)v4 + 12) = 0LL;
    ++i;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 2) = -1;
    v4[3] = 0LL;
    *((_DWORD *)v4 + 6) = -1;
  }
}
