/*
 * XREFs of CmpKeyEnumStackAdvanceInternal @ 0x140800140
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x1408000AC (CmpKeyEnumStackAdvance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCompareKeysByName @ 0x1407FA8E4 (CmpCompareKeysByName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x140800580 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140800A68 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvanceInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int16 v6; // bp
  __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD *EntryAtLayerHeight; // rbx
  __int64 v10; // rax
  __int16 v11; // bx
  __int64 v12; // rbp
  __int16 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx

  v4 = 0;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v6 = 0;
    if ( *(__int16 *)a1 >= 0 )
    {
      v7 = a1 + 8;
      do
      {
        EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(v7, v6);
        if ( EntryAtLayerHeight[2] )
        {
          v10 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, v8, a3, a4);
          CmpKeyEnumStackEntryAdvance(v10);
          if ( EntryAtLayerHeight[2] )
            (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
              *EntryAtLayerHeight,
              EntryAtLayerHeight + 3);
          memset(EntryAtLayerHeight, 0, 0x20uLL);
          *((_DWORD *)EntryAtLayerHeight + 2) = -1;
          EntryAtLayerHeight[3] = 0LL;
          *((_DWORD *)EntryAtLayerHeight + 6) = -1;
          *((_WORD *)EntryAtLayerHeight + 14) = 0;
        }
        ++v6;
      }
      while ( v6 <= *(__int16 *)a1 );
    }
  }
  v11 = *(_WORD *)a1;
  *(_BYTE *)(a1 + 4) = 1;
  v12 = 0LL;
  v13 = -1;
  if ( v11 < 0 )
    return (unsigned int)-2147483622;
  do
  {
    v14 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v11, a3, a4);
    v15 = *(_QWORD *)(v14 + 120);
    if ( v15 && (!v12 || (int)CmpCompareKeysByName(*(_QWORD *)(v14 + 120), v12) < 0) )
    {
      v12 = v15;
      v13 = v11;
    }
    --v11;
  }
  while ( v11 >= 0 );
  if ( v12 )
  {
    for ( ; v13 >= 0; --v13 )
    {
      v16 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v13, a3, a4);
      v17 = *(_QWORD *)(v16 + 120);
      if ( v17 && (v17 == v12 || !(unsigned int)CmpCompareKeysByName(v17, v12)) )
      {
        v18 = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8, v13);
        v19 = *(_QWORD *)v16;
        v20 = *(unsigned int *)(v16 + 112);
        *(_QWORD *)v18 = *(_QWORD *)v16;
        *(_DWORD *)(v18 + 8) = v20;
        *(_QWORD *)(v18 + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v19 + 8))(v19, v20, v18 + 24);
      }
    }
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return v4;
}
