/*
 * XREFs of CmpKeyEnumStackAdvanceInternal @ 0x14083799C
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x14083792C (CmpKeyEnumStackAdvance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpCompareKeysByName @ 0x1408321DC (CmpCompareKeysByName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x140837D78 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140838268 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvanceInternal(__int64 a1)
{
  unsigned int v1; // edi
  __int16 v3; // bp
  __int64 v4; // r14
  _QWORD *EntryAtLayerHeight; // rbx
  __int64 v6; // rax
  __int16 v7; // bx
  __int64 v8; // rbp
  __int16 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 2) )
  {
    v3 = 0;
    if ( *(__int16 *)a1 >= 0 )
    {
      v4 = a1 + 8;
      do
      {
        EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(v4, v3);
        if ( EntryAtLayerHeight[2] )
        {
          v6 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
          CmpKeyEnumStackEntryAdvance(v6);
          if ( EntryAtLayerHeight[2] )
            (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
              *EntryAtLayerHeight,
              EntryAtLayerHeight + 3);
          *EntryAtLayerHeight = 0LL;
          *(_QWORD *)((char *)EntryAtLayerHeight + 12) = 0LL;
          *((_DWORD *)EntryAtLayerHeight + 5) = 0;
          *((_DWORD *)EntryAtLayerHeight + 2) = -1;
          EntryAtLayerHeight[3] = 0LL;
          *((_DWORD *)EntryAtLayerHeight + 6) = -1;
          *((_WORD *)EntryAtLayerHeight + 14) = 0;
        }
        ++v3;
      }
      while ( v3 <= *(__int16 *)a1 );
    }
  }
  v7 = *(_WORD *)a1;
  *(_BYTE *)(a1 + 2) = 1;
  v8 = 0LL;
  v9 = -1;
  if ( v7 < 0 )
    return (unsigned int)-2147483622;
  do
  {
    v10 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    v11 = *(_QWORD *)(v10 + 120);
    if ( v11 && (!v8 || (int)CmpCompareKeysByName(*(_QWORD *)(v10 + 120), v8) < 0) )
    {
      v8 = v11;
      v9 = v7;
    }
    --v7;
  }
  while ( v7 >= 0 );
  if ( v8 )
  {
    for ( ; v9 >= 0; --v9 )
    {
      v12 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
      v13 = *(_QWORD *)(v12 + 120);
      if ( v13 && (v13 == v8 || !(unsigned int)CmpCompareKeysByName(v13, v8)) )
      {
        v14 = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8, v9);
        v15 = *(_QWORD *)v12;
        v16 = *(unsigned int *)(v12 + 112);
        *(_QWORD *)v14 = *(_QWORD *)v12;
        *(_DWORD *)(v14 + 8) = v16;
        *(_QWORD *)(v14 + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v15 + 8))(v15, v16, v14 + 24);
      }
    }
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return v1;
}
