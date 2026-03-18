/*
 * XREFs of CmpValueEnumStackAdvance @ 0x14083A0E8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1402803E8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140827E0C (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083E630 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpIsValueTombstone @ 0x1406BF030 (CmpIsValueTombstone.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140839E98 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14083A2F0 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 */

__int64 __fastcall CmpValueEnumStackAdvance(__int64 a1)
{
  __int16 v2; // cx
  unsigned int v3; // r8d
  __int64 *EntryAtLayerHeight; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // eax
  __int16 v10; // ax
  char v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0xFFFFFFFFLL;
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(_DWORD *)a1 == -1 )
      return (unsigned int)-2147483622;
    ++*(_DWORD *)(a1 + 8);
    v2 = *(_WORD *)(a1 + 6);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 4) = 1;
    v2 = *(_WORD *)(a1 + 12);
    *(_WORD *)(a1 + 6) = v2;
  }
  *(_DWORD *)a1 = -1;
  if ( v2 >= 0 )
  {
    do
    {
      EntryAtLayerHeight = (__int64 *)CmpValueEnumStackGetEntryAtLayerHeight(a1, v2);
      while ( v3 < *((_DWORD *)EntryAtLayerHeight + 6) )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*EntryAtLayerHeight + 8))(
               *EntryAtLayerHeight,
               *(unsigned int *)(EntryAtLayerHeight[1] + 4LL * v3),
               &v13);
        if ( CmpIsValueTombstone(*EntryAtLayerHeight, v5) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(v7 + 16))(v7, &v13);
          v3 = ++*(_DWORD *)(a1 + 8);
        }
        else
        {
          v8 = CmpValueEnumStackMatchingValueInUpperLayer(a1, *(unsigned __int16 *)(a1 + 6), v6, &v12);
          (*(void (__fastcall **)(__int64, __int64 *))(*EntryAtLayerHeight + 16))(*EntryAtLayerHeight, &v13);
          if ( v8 < 0 )
            return (unsigned int)v8;
          v9 = *(_DWORD *)(a1 + 8);
          if ( !v12 )
          {
            v8 = 0;
            *(_DWORD *)a1 = *(_DWORD *)(EntryAtLayerHeight[1] + 4LL * *(unsigned int *)(a1 + 8));
            return (unsigned int)v8;
          }
          v3 = v9 + 1;
          *(_DWORD *)(a1 + 8) = v9 + 1;
        }
      }
      v10 = *(_WORD *)(a1 + 6) - 1;
      *(_DWORD *)(a1 + 8) = 0;
      v2 = v10;
      *(_WORD *)(a1 + 6) = v10;
    }
    while ( v10 >= 0 );
  }
  return (unsigned int)-2147483622;
}
