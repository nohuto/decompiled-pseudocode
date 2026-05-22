/*
 * XREFs of ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x1800215EC
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800213D8 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18002A8C0 (-ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@1@@Z @ 0x180028DC8 (--$_Insert_hint@AEAU-$pair@$$CBKU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180028EB8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCMouseProcessor::AttachMouse(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  __int64 v2; // r14
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, struct DeviceInfo **); // rbx
  int v7; // eax
  struct DeviceInfo *v8; // rbx
  __int64 (__fastcall *v9)(struct DeviceInfo *, struct DeviceInfo *, __int64, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ecx
  int v15; // [rsp+20h] [rbp-30h]
  __int64 v16[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct DeviceInfo *v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+90h] [rbp+40h] BYREF
  struct DeviceInfo *v20; // [rsp+98h] [rbp+48h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7));
  v6 = *(__int64 (__fastcall **)(__int64, struct DeviceInfo **))(*(_QWORD *)v5 + 72LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v18);
  v7 = v6(v5, &v18);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x18F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v7,
      v15);
    __debugbreak();
  }
  v8 = v18;
  v9 = *(__int64 (__fastcall **)(struct DeviceInfo *, struct DeviceInfo *, __int64, __int64 *))(*(_QWORD *)v18 + 24LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v19);
  v10 = v9(v8, a2, 1LL, &v19);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x190,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v10,
      v15);
  }
  else
  {
    v2 = v19;
    v16[0] = v19;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v16);
    v9 = (__int64 (__fastcall *)(struct DeviceInfo *, struct DeviceInfo *, __int64, __int64 *))((char *)this + 6360);
    v8 = (struct DeviceInfo *)*((_QWORD *)this + 795);
    v12 = (__int64 *)*((_QWORD *)v8 + 1);
    if ( *((_BYTE *)v12 + 25) )
    {
LABEL_4:
      v20 = a2;
      v13 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              v9,
              v11,
              &v20);
      std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::_Insert_hint<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>> &,std::_Tree_node<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>,void *> *>(
        (_DWORD)v9,
        (unsigned int)&v20,
        (_DWORD)v8,
        v13 + 32,
        v13);
      v8 = v20;
      goto LABEL_5;
    }
  }
  v14 = *(_DWORD *)a2;
  do
  {
    if ( *((_DWORD *)v12 + 8) >= v14 )
    {
      v8 = (struct DeviceInfo *)v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  while ( !*((_BYTE *)v12 + 25) );
  if ( v8 == *(struct DeviceInfo **)v9 || v14 < *((_DWORD *)v8 + 8) )
    goto LABEL_4;
LABEL_5:
  *((_QWORD *)v8 + 5) = a2;
  v16[0] = 0LL;
  v20 = (struct DeviceInfo *)*((_QWORD *)v8 + 6);
  *((_QWORD *)v8 + 6) = v2;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v16);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v19);
}
