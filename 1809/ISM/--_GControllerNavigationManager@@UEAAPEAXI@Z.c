/*
 * XREFs of ??_GControllerNavigationManager@@UEAAPEAXI@Z @ 0x1800301F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180005EDC (--1-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ??1?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E018 (--1-$vector@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSiteE.c)
 *     ??1?$list@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x180025774 (--1-$list@U-$pair@$$CBKV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@V-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

ControllerNavigationManager *__fastcall ControllerNavigationManager::`scalar deleting destructor'(
        ControllerNavigationManager *this,
        char a2)
{
  __int64 v4; // rcx
  char *v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  char *v7; // r8
  char *v8; // rcx
  const char *v9; // r9
  volatile signed __int32 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::~vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>((__int64)this + 200);
  v4 = *((_QWORD *)this + 24);
  if ( v4 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = (char *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    v6 = (const struct std::nothrow_t *)((*((_QWORD *)this + 21) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      v7 = (char *)*((_QWORD *)v5 - 1);
      v8 = (char *)(v5 - v7);
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v8, v6);
        goto LABEL_16;
      }
      v5 = v7;
    }
    operator delete(v5, v6);
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
  }
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>::~list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>((__int64)this + 136);
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>((_QWORD *)this + 8);
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( !v10 )
    goto LABEL_12;
  v11 = _InterlockedDecrement(v10 + 2);
  if ( v11 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      v9);
    JUMPOUT(0x180030314LL);
  }
  if ( !v11 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_12:
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
