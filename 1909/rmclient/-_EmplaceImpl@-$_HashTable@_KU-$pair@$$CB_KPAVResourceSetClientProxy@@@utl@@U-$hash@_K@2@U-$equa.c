/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@PAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x10014E67
 * Callers:
 *     ??$emplace@AA_KAAPAVResourceSetClientProxy@@@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QAE?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@_N@1@AA_KAAPAVResourceSetClientProxy@@@Z @ 0x100139CC (--$emplace@AA_KAAPAVResourceSetClientProxy@@@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientPr.c)
 * Callees:
 *     ??3@YAXPAXABUnothrow_t@std@@@Z @ 0x1000D01C (--3@YAXPAXABUnothrow_t@std@@@Z.c)
 *     ?_FindKey@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@AB_KIPAPAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x10014EDE (-_FindKey@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to.c)
 *     ?_HashUint@utl@@YGI_K@Z @ 0x10014FAD (-_HashUint@utl@@YGI_K@Z.c)
 *     ?_InsertNode@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@PAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@0I@Z @ 0x10015030 (-_InsertNode@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal.c)
 */

int __stdcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EmplaceImpl(
        int a1,
        int a2,
        int a3,
        void *Block)
{
  unsigned int v4; // eax
  int v5; // edx
  _DWORD *inserted; // eax
  unsigned __int64 v8; // [esp-4h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  if ( Block )
  {
    LODWORD(v8) = *((_DWORD *)Block + 5);
    v4 = utl::_HashUint(*((utl **)Block + 4), v8);
    *((_DWORD *)Block + 2) = v4;
    if ( (unsigned __int8)utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_FindKey(
                            a3,
                            v5,
                            v4,
                            &v9) )
    {
      *(_DWORD *)a1 = v9;
      operator delete(Block);
    }
    else
    {
      inserted = (_DWORD *)utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_InsertNode(
                             &v9,
                             v9,
                             Block,
                             *((_DWORD *)Block + 2));
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)a1 = *inserted;
    }
  }
  return a1;
}
