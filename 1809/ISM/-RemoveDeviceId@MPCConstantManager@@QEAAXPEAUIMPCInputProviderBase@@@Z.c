/*
 * XREFs of ?RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180048404
 * Callers:
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800FBDD0 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180100BD0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?CheckIdExistence@MPCConstantManager@@QEAA_NK@Z @ 0x180048778 (-CheckIdExistence@MPCConstantManager@@QEAA_NK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800491C4 (-erase@-$_Tree@V-$_Tmap_traits@KW4InputType@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKW4InputTyp.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18004940C (-erase@-$_Tree@V-$_Tmap_traits@KV-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCConstantManager::RemoveDeviceId(MPCConstantManager *this, struct IMPCInputProviderBase *a2)
{
  unsigned int v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
  if ( MPCConstantManager::CheckIdExistence(this, v3) )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::erase(
      (char *)this + 56,
      &v3);
    std::_Tree<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::erase(
      (char *)this + 88,
      &v3);
  }
}
