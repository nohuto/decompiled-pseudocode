/*
 * XREFs of CmpValueEnumStackAdvance @ 0x140801DBC
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14026CB58 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407EE550 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpIsValueTombstone @ 0x1406CEEA8 (CmpIsValueTombstone.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140801B7C (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140801FC0 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 */

__int64 __fastcall CmpValueEnumStackAdvance(__int64 a1)
{
  char v2; // al
  __int16 v3; // cx
  unsigned int v4; // r8d
  __int64 *EntryAtLayerHeight; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  int v10; // eax
  __int16 v11; // ax
  char v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  v2 = *(_BYTE *)(a1 + 4);
  LODWORD(v14) = -1;
  if ( v2 )
  {
    if ( *(_DWORD *)a1 == -1 )
      return (unsigned int)-2147483622;
    ++*(_DWORD *)(a1 + 8);
    v3 = *(_WORD *)(a1 + 6);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 4) = 1;
    v3 = *(_WORD *)(a1 + 12);
    *(_WORD *)(a1 + 6) = v3;
  }
  *(_DWORD *)a1 = -1;
  if ( v3 >= 0 )
  {
    do
    {
      EntryAtLayerHeight = (__int64 *)CmpValueEnumStackGetEntryAtLayerHeight(a1, v3);
      while ( v4 < *((_DWORD *)EntryAtLayerHeight + 6) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*EntryAtLayerHeight + 8))(
               *EntryAtLayerHeight,
               *(unsigned int *)(EntryAtLayerHeight[1] + 4LL * v4),
               &v14);
        if ( CmpIsValueTombstone(*EntryAtLayerHeight, v6) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(v8 + 16))(v8, &v14);
          v4 = ++*(_DWORD *)(a1 + 8);
        }
        else
        {
          v9 = CmpValueEnumStackMatchingValueInUpperLayer(a1, *(unsigned __int16 *)(a1 + 6), v7, &v13);
          (*(void (__fastcall **)(__int64, __int64 *))(*EntryAtLayerHeight + 16))(*EntryAtLayerHeight, &v14);
          if ( v9 < 0 )
            return (unsigned int)v9;
          v10 = *(_DWORD *)(a1 + 8);
          if ( !v13 )
          {
            v9 = 0;
            *(_DWORD *)a1 = *(_DWORD *)(EntryAtLayerHeight[1] + 4LL * *(unsigned int *)(a1 + 8));
            return (unsigned int)v9;
          }
          v4 = v10 + 1;
          *(_DWORD *)(a1 + 8) = v10 + 1;
        }
      }
      v11 = *(_WORD *)(a1 + 6) - 1;
      *(_DWORD *)(a1 + 8) = 0;
      v3 = v11;
      *(_WORD *)(a1 + 6) = v11;
    }
    while ( v11 >= 0 );
  }
  return (unsigned int)-2147483622;
}
