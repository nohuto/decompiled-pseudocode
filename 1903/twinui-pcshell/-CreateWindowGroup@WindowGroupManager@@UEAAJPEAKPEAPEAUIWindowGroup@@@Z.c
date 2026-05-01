/*
 * XREFs of ?CreateWindowGroup@WindowGroupManager@@UEAAJPEAKPEAPEAUIWindowGroup@@@Z @ 0x18025D190
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180096AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18020B02C (--$_Insert_nohint@AEAU-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@.c)
 *     ??$_Buynode@AEAKAEAV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEAKAEAV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18025C970 (--$_Buynode@AEAKAEAV-$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@-$_Tree_comp_al.c)
 *     ??$MakeOrThrow@VWindowGroup@@AEAK@wil@@YA?AV?$ComPtr@VWindowGroup@@@WRL@Microsoft@@AEAK@Z @ 0x180261B6C (--$MakeOrThrow@VWindowGroup@@AEAK@wil@@YA-AV-$ComPtr@VWindowGroup@@@WRL@Microsoft@@AEAK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowGroupManager::CreateWindowGroup(
        WindowGroupManager *this,
        unsigned int *a2,
        struct IWindowGroup **a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  volatile signed __int64 *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // r8
  struct IWindowGroup *v13; // rax
  const char *v14; // r9
  __int64 result; // rax
  _OWORD v16[2]; // [rsp+38h] [rbp-40h] BYREF
  char v17; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF
  struct IWindowGroup *v20; // [rsp+88h] [rbp+10h] BYREF
  volatile signed __int64 *v21; // [rsp+90h] [rbp+18h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  v6 = *((_QWORD *)this + 11);
  try
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        93LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v7);
    *(_QWORD *)&v16[0] = (char *)this - 8;
    *((_QWORD *)&v16[0] + 1) = &v19;
    v16[1] = v16[0];
    v17 = 1;
    LODWORD(v20) = v19;
    v8 = (__int64 *)wil::MakeOrThrow<WindowGroup,unsigned long &>(&v21, &v20);
    v9 = *v8;
    *v8 = 0LL;
    if ( v9 )
      v20 = (struct IWindowGroup *)(v9 + 8);
    else
      v20 = 0LL;
    v10 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v10);
    }
    AcquireSRWLockExclusive((PSRWLOCK)this + 8);
    v21 = (volatile signed __int64 *)((char *)this + 64);
    v11 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>,0>>::_Buynode<unsigned long &,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy> &>(
            (_QWORD *)this + 9,
            &v19,
            (__int64 *)&v20);
    std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>,0>>::_Insert_nohint<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>> &,std::_Tree_node<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>,void *> *>(
      (__int64 *)this + 9,
      (__int64)v16,
      v12,
      (_DWORD *)v11 + 8,
      v11);
    if ( !BYTE8(v16[0]) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        104LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)0x80070057LL);
    *a2 = v19;
    v13 = v20;
    v20 = 0LL;
    *a3 = v13;
    if ( this != (WindowGroupManager *)-64LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x70,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
                           v14);
  }
  return result;
}
