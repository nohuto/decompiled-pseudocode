/*
 * XREFs of ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800C3E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180005D90 (-lower_bound@-$_Hash@V-$_Umap_traits@KUInputContext@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18000B840 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x1800539E0 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C1F48 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V_ea_1800C1F48.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::GetTargetWithFocus(
        DWMInputRouter *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget **v7; // rsi
  __int64 **v9; // rdi
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rdx
  int v14; // eax
  struct IInputBuffer *v15; // r9
  ContextualProcessorManager *v16; // rbx
  struct IInputTarget **v17; // rcx
  struct IInputTarget **v18; // rcx
  __int64 *v19[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IInputDisplay *v22; // [rsp+78h] [rbp+28h] BYREF

  v22 = a2;
  v19[1] = (__int64 *)-2LL;
  v7 = a5;
  if ( a5 )
  {
    if ( a3 )
    {
      a5 = 0LL;
      v9 = (__int64 **)((char *)this + 672);
      std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::lower_bound(
        (_QWORD *)this + 84,
        v19,
        (unsigned __int8 *)a3);
      v11 = v19[0];
      if ( v19[0] == v9[1] )
      {
        v19[0] = (__int64 *)a3;
        std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
          (__int64)v9,
          (__int64)&v20,
          v10,
          (_DWORD **)v19);
        v11 = v20;
      }
      v12 = v11 + 3;
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v11 + 3, (__int64 *)this + 40);
      v13 = (__int64)v22;
      if ( !v22 )
      {
        v14 = (*(__int64 (__fastcall **)(DWMInputRouter *, struct DeviceInfo *, struct IInputDisplay **))(*(_QWORD *)this + 80LL))(
                this,
                a3,
                &v22);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            1577LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v14);
          __debugbreak();
        }
        v13 = (__int64)v22;
      }
      Microsoft::WRL::ComPtr<IInputTarget>::operator=(v12 + 9, v13);
      v16 = (ContextualProcessorManager *)*((_QWORD *)this + 38);
      v17 = a5;
      if ( a5 )
      {
        a5 = 0LL;
        (*((void (__fastcall **)(struct IInputTarget **))*v17 + 2))(v17);
      }
      if ( (int)ContextualProcessorManager::OnFocusRequest(
                  v16,
                  a3,
                  (struct InputContext *)v12,
                  v15,
                  (struct IInputTarget **)&a5) >= 0 )
      {
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&a5);
        v18 = a5;
        *v7 = (struct IInputTarget *)a5;
      }
      else
      {
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v12);
        *v7 = (struct IInputTarget *)*v12;
        v18 = a5;
      }
      if ( v18 )
      {
        a5 = 0LL;
        (*((void (__fastcall **)(struct IInputTarget **))*v18 + 2))(v18);
      }
    }
    else
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 40);
      *v7 = (struct IInputTarget *)*((_QWORD *)this + 40);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
