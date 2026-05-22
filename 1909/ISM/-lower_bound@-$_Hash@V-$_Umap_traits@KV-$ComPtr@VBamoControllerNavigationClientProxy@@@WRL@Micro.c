/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180005C40
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000D750 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18007237C (-ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180072430 (-ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@.c)
 *     ?OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x180072CC4 (-OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800733C0 (-RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVB.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180073678 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::lower_bound(
        _QWORD *a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v3; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // r9
  __int64 v13; // r10
  __int64 *i; // rcx
  __int64 *v15; // rax

  v3 = a3;
  v7 = 0xCBF29CE484222325uLL;
  if ( a3 <= a3 + 4 )
  {
    do
    {
      v8 = *v3++;
      v7 = 0x100000001B3LL * (v8 ^ v7);
    }
    while ( v3 - a3 != 4 );
  }
  v9 = (__int64 *)a1[1];
  v10 = v7 & a1[6];
  v11 = a1[3];
  v10 *= 2LL;
  v12 = *(__int64 **)(v11 + 8 * v10);
  v13 = v11 + 8 * v10;
  for ( i = v12; ; i = (__int64 *)*i )
  {
    if ( v12 == v9 )
      v15 = (__int64 *)a1[1];
    else
      v15 = **(__int64 ***)(v13 + 8);
    if ( i == v15 )
    {
      *a2 = v9;
      return a2;
    }
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
      break;
  }
  *a2 = i;
  return a2;
}
