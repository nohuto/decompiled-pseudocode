/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18004940C
 * Callers:
 *     ?RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180048404 (-RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RemoveConstantFromDeviceId@MPCConstantManager@@QEAAXKPEBG@Z @ 0x180048458 (-RemoveConstantFromDeviceId@MPCConstantManager@@QEAAXKPEBG@Z.c)
 *     ?SetAllConstantsForDeviceToDefault@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@IPEAVBamoAsyncHRESULTProxy@@@Z @ 0x180048EA0 (-SetAllConstantsForDeviceToDefault@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800498D4 (-erase@-$_Tree@V-$_Tmap_traits@KV-$map@V-$basic_string@GU-$char_traits@G@std@@V-$al_ea_1800498D4.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 *v2; // r10
  __int64 *v4; // r9
  __int64 *v5; // rax
  __int64 *v6; // r8
  unsigned int v7; // r11d
  __int64 *j; // rax
  __int64 v9; // rbx
  __int64 **v10; // rcx
  __int64 *v11; // rdx
  __int64 *i; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *((_DWORD *)v6 + 8) >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < *((_DWORD *)v6 + 8) )
          v4 = v6;
        v2 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 *)*v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *a2 >= *((_DWORD *)v5 + 8) )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  j = v2;
  v9 = 0LL;
  while ( j != v4 )
  {
    ++v9;
    if ( !*((_BYTE *)j + 25) )
    {
      v10 = (__int64 **)j[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v11 = *v10;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
          j = v11;
      }
    }
  }
  std::_Tree<std::_Tmap_traits<unsigned long,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::erase(
    a1,
    &v14,
    v2);
  return v9;
}
