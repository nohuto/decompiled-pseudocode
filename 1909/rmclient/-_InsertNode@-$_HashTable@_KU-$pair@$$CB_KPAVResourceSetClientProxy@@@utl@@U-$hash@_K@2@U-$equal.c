/*
 * XREFs of ?_InsertNode@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@PAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@0I@Z @ 0x10015030
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@PAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x10014E67 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equa.c)
 * Callees:
 *     ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE_NE@Z @ 0x100150AB (-_Rehash@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to@.c)
 */

_DWORD *__thiscall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_InsertNode(
        int this,
        _DWORD *a2,
        int a3,
        _DWORD *a4,
        int a5)
{
  int v5; // ebx
  int v6; // esi
  int v7; // edx
  _DWORD *v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // eax
  char v11; // cl

  v5 = a3;
  v6 = *(_DWORD *)(this + 8);
  v7 = a5 & ((8 << *(_BYTE *)(this + 16)) - 1);
  if ( !a3 )
  {
    *(_DWORD *)(v6 + 8 * v7) = a4;
    v5 = this;
LABEL_6:
    *(_DWORD *)(v6 + 8 * v7 + 4) = a4;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(v6 + 8 * v7) == a3 )
  {
    *(_DWORD *)(v6 + 8 * v7) = a4;
    goto LABEL_7;
  }
  if ( **(_DWORD **)(v6 + 8 * v7 + 4) == a3 )
    goto LABEL_6;
LABEL_7:
  v8 = *(_DWORD **)(v5 + 4);
  a4[1] = v8;
  *a4 = v5;
  *v8 = a4;
  *(_DWORD *)(v5 + 4) = a4;
  v9 = ++*(_DWORD *)(this + 12);
  v10 = *(unsigned __int8 *)(this + 17);
  *a2 = a4;
  v11 = *(_BYTE *)(this + 16);
  if ( v10 < v9 >> v11 )
    utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_Rehash(v11 + 1);
  return a2;
}
