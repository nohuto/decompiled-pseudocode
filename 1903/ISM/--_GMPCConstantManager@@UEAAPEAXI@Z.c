/*
 * XREFs of ??_GMPCConstantManager@@UEAAPEAXI@Z @ 0x180088D60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002ACD0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@2@0@Z @ 0x18008B9B4 (-erase@-$_Tree@V-$_Tmap_traits@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 */

MPCConstantManager *__fastcall MPCConstantManager::`scalar deleting destructor'(MPCConstantManager *this, char a2)
{
  void **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  Microsoft::BamoImpl::BamoImplObject *v8; // rcx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = (void **)((char *)this + 72);
  std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::erase(
    (char *)this + 72,
    &v10,
    **((_QWORD **)this + 9));
  std::_Deallocate<16,0>(*v4, (const struct std::nothrow_t *)0x38);
  std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::erase(
    (char *)this + 56,
    &v10,
    **((_QWORD **)this + 7));
  std::_Deallocate<16,0>(*((void **)this + 7), (const struct std::nothrow_t *)0x38);
  v8 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v8 )
    Microsoft::BamoImpl::BamoImplObject::Release(v8, v5, v6, v7);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
