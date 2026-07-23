/*
 * XREFs of CmpValueEnumStackStartFromKeyNodeStack @ 0x14026CD7C
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14026CB58 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140802090 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     HvpGetCellContextInitialize @ 0x1407FA888 (HvpGetCellContextInitialize.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407FB0AC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140801B7C (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  unsigned int v2; // edi
  __int16 v5; // bx
  PVOID PoolWithTag; // rax
  __int64 v7; // r14
  __int64 v8; // rbp
  char *v9; // rbx
  __int16 v10; // bx
  __int64 EntryAtLayerHeight; // rbp
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v2 = 0;
  if ( *a2 >= 2 )
  {
    v5 = *a2 - 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * v5, 0x30374D43u);
    *(_QWORD *)(a1 + 80) = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( v5 > 0 )
    {
      v7 = 0LL;
      v8 = (unsigned __int16)v5;
      do
      {
        v9 = (char *)(v7 + *(_QWORD *)(a1 + 80));
        memset(v9, 0, 0x20uLL);
        HvpGetCellContextInitialize(v9 + 16);
        v7 += 32LL;
        --v8;
      }
      while ( v8 );
    }
  }
  v10 = *a2;
  for ( *(_WORD *)(a1 + 12) = *a2; v10 >= 0; --v10 )
  {
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v10);
    v13 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a2, v12);
    v16 = v13;
    v17 = v13[2];
    if ( v17 )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v13, v17, v14, v15) == 1 )
        break;
      v20 = v18;
      v21 = v19;
      if ( (*(_BYTE *)(v18 + 2) & 0x40) == 0 && *(_DWORD *)(v18 + 36) )
      {
        *(_QWORD *)EntryAtLayerHeight = v19;
        *(_DWORD *)(EntryAtLayerHeight + 24) = *(_DWORD *)(v18 + 36);
        *(_QWORD *)(EntryAtLayerHeight + 8) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v19 + 8))(
                                                v19,
                                                *(unsigned int *)(v18 + 40),
                                                EntryAtLayerHeight + 16,
                                                v19);
        v20 = v16[2];
        v21 = *v16;
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v21, v20, v20, v21) )
        break;
    }
  }
  return v2;
}
