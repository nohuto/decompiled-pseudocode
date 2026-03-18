/*
 * XREFs of CmpValueEnumStackStartFromKeyNodeStack @ 0x14028037C
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140280148 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140839A28 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083DC90 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpValueEnumStackEntryInitialize @ 0x140280334 (CmpValueEnumStackEntryInitialize.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x1408394F8 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  PVOID PoolWithTag; // rax
  __int64 v7; // r14
  __int16 v8; // ax
  unsigned __int16 v9; // di
  __int64 EntryAtLayerHeight; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx

  v2 = 0;
  if ( *a2 >= 2 )
  {
    LOWORD(v5) = *a2 - 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (__int16)v5, 0x30374D43u);
    *(_QWORD *)(a1 + 80) = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( (__int16)v5 > 0 )
    {
      v7 = 0LL;
      v5 = (unsigned __int16)v5;
      do
      {
        CmpValueEnumStackEntryInitialize((char *)(v7 + *(_QWORD *)(a1 + 80)));
        v7 += 32LL;
        --v5;
      }
      while ( v5 );
    }
  }
  v8 = *a2;
  v9 = 0;
  *(_WORD *)(a1 + 12) = *a2;
  if ( v8 >= 0 )
  {
    do
    {
      EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, v9);
      v14 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a2, v11, v12, v13);
      v15 = v14[2];
      if ( v15 )
      {
        v16 = *v14;
        if ( *(_DWORD *)(v15 + 36) )
        {
          *(_QWORD *)EntryAtLayerHeight = v16;
          *(_DWORD *)(EntryAtLayerHeight + 24) = *(_DWORD *)(v15 + 36);
          *(_QWORD *)(EntryAtLayerHeight + 8) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v16 + 8))(
                                                  v16,
                                                  *(unsigned int *)(v15 + 40),
                                                  EntryAtLayerHeight + 16);
        }
      }
      ++v9;
    }
    while ( v9 <= *(_WORD *)(a1 + 12) );
  }
  return v2;
}
