/*
 * XREFs of CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140801BE0
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14026CB58 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407FB0AC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140801A0C (CmpSortedValueEnumStackEntryStart.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140801B7C (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpSortedValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int64 v5; // rdi
  PVOID TransientPoolWithTag; // rax
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 *EntryAtLayerHeight; // rdi
  __int16 v10; // dx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9

  v2 = *a2;
  if ( (__int16)(*a2 + 1) > 2 )
  {
    LOWORD(v5) = v2 - 1;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 32LL * (__int16)(v2 - 1), 0x39374D43u);
    *(_QWORD *)(a1 + 80) = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    if ( (__int16)v5 > 0 )
    {
      v8 = 0LL;
      v5 = (unsigned __int16)v5;
      do
      {
        memset((void *)(v8 + *(_QWORD *)(a1 + 80)), 0, 0x20uLL);
        v8 += 32LL;
        --v5;
      }
      while ( v5 );
    }
  }
  for ( *(_WORD *)(a1 + 8) = v2; v2 >= 0; --v2 )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v2);
    CmpValueEnumStackGetEntryAtLayerHeight(a1, v10);
    v11 = EntryAtLayerHeight[2];
    if ( v11 )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v11) == 1 )
        return 0LL;
      result = CmpSortedValueEnumStackEntryStart(v14, v13, v12);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, EntryAtLayerHeight[2]) )
        return 0LL;
    }
  }
  return 0LL;
}
