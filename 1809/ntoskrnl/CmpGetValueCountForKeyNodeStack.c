/*
 * XREFs of CmpGetValueCountForKeyNodeStack @ 0x14026CB58
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14026D664 (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14026CD7C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407FB0AC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackAdvance @ 0x140801818 (CmpSortedValueEnumStackAdvance.c)
 *     CmpSortedValueEnumStackCleanup @ 0x140801950 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackInitialize @ 0x140801BA8 (CmpSortedValueEnumStackInitialize.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140801BE0 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackAdvance @ 0x140801DBC (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140801F18 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x140801F78 (CmpValueEnumStackInitialize.c)
 */

__int64 __fastcall CmpGetValueCountForKeyNodeStack(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // r8
  _QWORD *EntryAtLayerHeight; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // r10
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ebx
  int v12; // esi
  int j; // eax
  int i; // eax
  _BYTE v16[96]; // [rsp+20h] [rbp-99h] BYREF
  _BYTE v17[96]; // [rsp+80h] [rbp-39h] BYREF

  CmpSortedValueEnumStackInitialize(v16);
  CmpValueEnumStackInitialize(v17);
  v4 = *a1;
  if ( *a1 < 0 )
    goto LABEL_25;
  do
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v4);
    v9 = EntryAtLayerHeight[2];
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 36) )
        LOWORD(v7) = v7 + 1;
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v9, v6, v7) )
        break;
    }
    v4 = v6 - 1;
  }
  while ( v4 >= 0 );
  if ( !(_WORD)v7 )
  {
LABEL_25:
    *a2 = 0;
    goto LABEL_26;
  }
  if ( !v8 )
  {
    *a2 = *(_DWORD *)(*(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, 0LL) + 16) + 36LL);
LABEL_26:
    v11 = 0;
    goto LABEL_27;
  }
  if ( (__int16)v7 <= 1 )
  {
LABEL_19:
    v11 = CmpValueEnumStackStartFromKeyNodeStack(v17, a1);
    if ( v11 >= 0 )
    {
      v12 = 0;
      for ( i = CmpValueEnumStackAdvance(v17); ; i = CmpValueEnumStackAdvance(v17) )
      {
        v11 = i;
        if ( i == -2147483622 )
          break;
        if ( i < 0 )
          goto LABEL_27;
        ++v12;
      }
      goto LABEL_16;
    }
    goto LABEL_27;
  }
  v10 = CmpSortedValueEnumStackStartFromKeyNodeStack(v16, a1);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = 0;
    for ( j = CmpSortedValueEnumStackAdvance(v16); ; j = CmpSortedValueEnumStackAdvance(v16) )
    {
      v11 = j;
      if ( j == -2147483622 )
        break;
      if ( j < 0 )
        goto LABEL_27;
      ++v12;
    }
LABEL_16:
    *a2 = v12;
    goto LABEL_26;
  }
  if ( v10 == -1073741670 )
  {
    CmpSortedValueEnumStackCleanup(v16);
    CmpSortedValueEnumStackInitialize(v16);
    goto LABEL_19;
  }
LABEL_27:
  CmpValueEnumStackCleanup(v17);
  CmpSortedValueEnumStackCleanup(v16);
  return (unsigned int)v11;
}
