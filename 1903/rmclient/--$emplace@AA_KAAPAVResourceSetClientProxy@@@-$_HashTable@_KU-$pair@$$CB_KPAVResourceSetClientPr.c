/*
 * XREFs of ??$emplace@AA_KAAPAVResourceSetClientProxy@@@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QAE?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@_N@1@AA_KAAPAVResourceSetClientProxy@@@Z @ 0x100139CC
 * Callers:
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QAEJ_KPAVResourceSetClientProxy@@@Z @ 0x10014140 (-AddProxyResourceSet@ResourceManagerClientProxy@@QAEJ_KPAVResourceSetClientProxy@@@Z.c)
 * Callees:
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@PAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x10014E67 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equa.c)
 */

int __stdcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::emplace<unsigned __int64 &,ResourceSetClientProxy * &>(
        int a1,
        _DWORD *a2,
        _DWORD *a3)
{
  _DWORD *v3; // edx
  int v5; // [esp+4h] [ebp-4h]

  v3 = operator new(0x20u);
  if ( v3 )
  {
    v3[4] = *a2;
    v3[5] = a2[1];
    v3[6] = *a3;
  }
  else
  {
    v3 = 0;
  }
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EmplaceImpl(
    a1,
    v5,
    0,
    v3);
  return a1;
}
