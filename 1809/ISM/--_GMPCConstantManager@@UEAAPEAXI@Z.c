/*
 * XREFs of ??_GMPCConstantManager@@UEAAPEAXI@Z @ 0x180047FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800492C4 (--1-$_Tree@V-$_Tmap_traits@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKW4InputType@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKW4InputType@@@std@@@std@@@std@@@2@0@Z @ 0x18004976C (-erase@-$_Tree@V-$_Tmap_traits@KW4InputType@@U-$less@K@std@@V-$allocator@U-$pair@$$_ea_18004976C.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800498D4 (-erase@-$_Tree@V-$_Tmap_traits@KV-$map@V-$basic_string@GU-$char_traits@G@std@@V-$al_ea_1800498D4.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

MPCConstantManager *__fastcall MPCConstantManager::`scalar deleting destructor'(MPCConstantManager *this, char a2)
{
  void **v4; // rbx
  const char *v5; // r9
  volatile signed __int32 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = (void **)((char *)this + 88);
  std::_Tree<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::erase(
    (char *)this + 88,
    &v10,
    **((_QWORD **)this + 11));
  operator delete(*v4, (const struct std::nothrow_t *)0x28);
  __1___Tree_V___Tmap_traits_W4InputType__V__map_V__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__V__variant_K_NM_2_U__less_V__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___2_V__allocator_U__pair___CBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__V__variant_K_NM_2__std___2__std__U__less_W4InputType___3_V__allocator_U__pair___CBW4InputType__V__map_V__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__V__variant_K_NM_2_U__less_V__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___2_V__allocator_U__pair___CBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__V__variant_K_NM_2__std___2__std___std___3__0A__std___std__QEAA_XZ((char *)this + 72);
  std::_Tree<std::_Tmap_traits<unsigned long,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::erase(
    (char *)this + 56,
    &v11,
    **((_QWORD **)this + 7));
  operator delete(*((void **)this + 7), (const struct std::nothrow_t *)0x38);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = _InterlockedDecrement(v6 + 2);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        v5);
      JUMPOUT(0x180048088LL);
    }
    if ( !v7 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
