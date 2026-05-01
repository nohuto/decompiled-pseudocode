/*
 * XREFs of ?_InitBuckets@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAEXXZ @ 0x10015005
 * Callers:
 *     ?_FindKey@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@AB_KIPAPAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x10014EDE (-_FindKey@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to.c)
 *     ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE_NE@Z @ 0x100150AB (-_Rehash@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to@.c)
 * Callees:
 *     <none>
 */

int __thiscall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_InitBuckets(
        int this)
{
  int v1; // edx
  int v2; // esi
  int result; // eax

  v1 = 0;
  v2 = 8 << *(_BYTE *)(this + 16);
  if ( v2 )
  {
    do
    {
      *(_DWORD *)(*(_DWORD *)(this + 8) + 8 * v1) = 0;
      result = *(_DWORD *)(this + 8);
      *(_DWORD *)(result + 8 * v1++ + 4) = 0;
    }
    while ( v1 != v2 );
  }
  return result;
}
