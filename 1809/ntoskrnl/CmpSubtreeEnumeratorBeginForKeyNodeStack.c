/*
 * XREFs of CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x1407FB988
 * Callers:
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x1407FBC84 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorBeginForKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int64 i; // rsi
  __int64 EntryAtLayerHeight; // r15
  __int16 v7; // dx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  v2 = *a2;
  for ( i = a1 + 16; v2 >= 0; --v2 )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(i, v2);
    v8 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v7);
    v9 = *(unsigned int *)(v8 + 8);
    if ( (_DWORD)v9 != -1 )
    {
      v10 = *(_QWORD *)v8;
      *(_QWORD *)EntryAtLayerHeight = *(_QWORD *)v8;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v9;
      *(_QWORD *)(EntryAtLayerHeight + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v10 + 8))(
                                               v10,
                                               v9,
                                               EntryAtLayerHeight + 24);
    }
  }
  result = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(result + 8) = 0LL;
  *(_QWORD *)(result + 16) = i;
  *(_WORD *)a1 = 0;
  return result;
}
