/*
 * XREFs of CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14083955C
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140280148 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1408327FC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14083938C (CmpSortedValueEnumStackEntryStart.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x1408394F8 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpSortedValueEnumStackStartFromKeyNodeStack(
        __int64 a1,
        __int16 *a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int16 v4; // bx
  __int64 v7; // rdi
  PVOID TransientPoolWithTag; // rax
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 *EntryAtLayerHeight; // rdi
  __int16 v12; // dx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _LOOKASIDE_LIST_EX *v16; // r9

  v4 = *a2;
  if ( (__int16)(*a2 + 1) > 2 )
  {
    LOWORD(v7) = v4 - 1;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 32LL * (__int16)(v4 - 1), 0x39374D43u, a4);
    *(_QWORD *)(a1 + 80) = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    if ( (__int16)v7 > 0 )
    {
      v10 = 0LL;
      v7 = (unsigned __int16)v7;
      do
      {
        memset((void *)(v10 + *(_QWORD *)(a1 + 80)), 0, 0x20uLL);
        v10 += 32LL;
        --v7;
      }
      while ( v7 );
    }
  }
  for ( *(_WORD *)(a1 + 8) = v4; v4 >= 0; --v4 )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v4);
    CmpValueEnumStackGetEntryAtLayerHeight(a1, v12);
    v13 = EntryAtLayerHeight[2];
    if ( v13 )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v13) == 1 )
        return 0LL;
      result = CmpSortedValueEnumStackEntryStart((__int64)v16, v15, v14, v16);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, EntryAtLayerHeight[2]) )
        return 0LL;
    }
  }
  return 0LL;
}
