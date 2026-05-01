/*
 * XREFs of ?_FindKey@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@AB_KIPAPAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x10014EDE
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@PAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x10014E67 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equa.c)
 * Callees:
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     ??R?$equal_to@_K@utl@@QBE_NAB_K0@Z @ 0x10013BFB (--R-$equal_to@_K@utl@@QBE_NAB_K0@Z.c)
 *     ?_InitBuckets@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAEXXZ @ 0x10015005 (-_InitBuckets@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equa.c)
 */

char __thiscall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_FindKey(
        int this,
        _DWORD *a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5)
{
  void *v6; // ebx
  _DWORD *v7; // esi
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // edx
  bool v11; // zf
  _DWORD *v12; // ecx
  unsigned int v13; // edi
  _DWORD *v14; // eax
  int v16; // [esp+Ch] [ebp-8h]
  _DWORD *v17; // [esp+Ch] [ebp-8h]

  v6 = 0;
  v7 = 0;
  v8 = 8 << *(_BYTE *)(this + 16);
  v9 = *(_DWORD *)(this + 8);
  v10 = a4 & (v8 - 1);
  v16 = v9;
  if ( v9 )
  {
    v12 = *(_DWORD **)(v9 + 8 * v10);
    if ( v12 )
    {
      v7 = a2;
      if ( a2 && a2 != (_DWORD *)this && ((v8 - 1) & a2[2]) == v10 )
      {
        v13 = a4;
        while ( v7 != v12 && a4 <= v7[2] )
          v7 = (_DWORD *)v7[1];
      }
      else
      {
        v13 = a4;
        v7 = v12;
      }
      v14 = **(_DWORD ***)(v16 + 8 * v10 + 4);
      v17 = v14;
      while ( v7 != v14 )
      {
        if ( v7[2] >= v13 )
        {
          if ( v7[2] > v13 )
            break;
          if ( utl::equal_to<unsigned __int64>::operator()(a3, v7 + 4) )
          {
            LOBYTE(v6) = 1;
            break;
          }
          v14 = v17;
        }
        v7 = (_DWORD *)*v7;
      }
    }
  }
  else
  {
    if ( v8 <= 0x1FFFFFFF )
      v6 = operator new(8 * v8);
    *(_DWORD *)(this + 8) = v6;
    v11 = v6 == 0;
    if ( v6 )
    {
      utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_InitBuckets(this);
      v11 = v6 == 0;
    }
    LOBYTE(v6) = v11;
  }
  *a5 = v7;
  return (char)v6;
}
