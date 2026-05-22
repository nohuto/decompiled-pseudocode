/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800C3EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180005D90 (-lower_bound@-$_Hash@V-$_Umap_traits@KUInputContext@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CD40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002EE94 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180053740 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800661CC (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B9A20 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C1DF8 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V_ea_1800C1DF8.c)
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x1800C3BD0 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x1800C49D0 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z.c)
 *     ?BuildRequestForPointerInputInfo@HitTestHelper@@CA?AUHitTestRequest@1@PEAUPointerInputInfo@@KPEAUHMONITOR__@@@Z @ 0x1800C7C34 (-BuildRequestForPointerInputInfo@HitTestHelper@@CA-AUHitTestRequest@1@PEAUPointerInputInfo@@KPEA.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800F93EC (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        unsigned int a4,
        struct IInputTarget *a5,
        struct IInputTarget **a6)
{
  __int64 v6; // rbx
  struct IInputDisplay *v8; // r8
  struct IInputTarget *v10; // rdi
  char *v12; // r8
  __int64 v13; // rax
  unsigned __int8 *v14; // r9
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 *v17; // rax
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  int v20; // eax
  __int64 v21; // rbx
  unsigned int ViewInstanceIdFromInputSiteList; // eax
  int (__fastcall *v23)(struct IInputTarget *, GUID *, __int64 **); // rbx
  void (__fastcall *v24)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v25; // r8
  __int64 *v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rcx
  __int64 *i; // rdi
  __int64 *v30; // r15
  struct IInputTarget *v31; // rcx
  __int64 *v32; // rbx
  __int64 *v33; // rdi
  __int64 v34; // rcx
  __int64 *v35; // [rsp+30h] [rbp-D0h] BYREF
  struct IInputTarget *v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  struct IInputDisplay *v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int128 v44[9]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v46[3]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v47; // [rsp+140h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v43 = -2LL;
  v6 = a4;
  v8 = a2;
  v38 = a2;
  v10 = a5;
  if ( a6 )
  {
    if ( !a2 )
    {
      v12 = (char *)a3 + 4;
      v13 = 0xCBF29CE484222325uLL;
      v14 = (unsigned __int8 *)a3 + 4;
      if ( (char *)a3 + 4 <= (char *)a3 + 8 )
      {
        do
          v13 = 0x100000001B3LL * (*v14++ ^ (unsigned __int64)v13);
        while ( v14 - (unsigned __int8 *)v12 != ((char *)a3 + 8 >= (char *)a3 + 4 ? 4 : 0) );
      }
      v15 = 2 * (v13 & *((_QWORD *)this + 36));
      v16 = *((_QWORD *)this + 33);
      v17 = *(__int64 **)(v16 + 16 * (v13 & *((_QWORD *)this + 36)));
      v18 = (__int64 *)*((_QWORD *)this + 31);
      while ( 1 )
      {
        v19 = *(__int64 **)(v16 + 8 * v15) == v18
            ? (__int64 *)*((_QWORD *)this + 31)
            : **(__int64 ***)(v16 + 8 * v15 + 8);
        if ( v17 == v19 )
          break;
        if ( *((_DWORD *)v17 + 4) == *(_DWORD *)v12 )
          goto LABEL_14;
        v17 = (__int64 *)*v17;
      }
      v17 = (__int64 *)*((_QWORD *)this + 31);
LABEL_14:
      if ( v17 == v18 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1158LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)0x80004005LL);
        __debugbreak();
      }
      v20 = (*(__int64 (__fastcall **)(DWMInputRouter *, __int64, struct IInputDisplay **))(*(_QWORD *)this + 80LL))(
              this,
              v17[3],
              &v38);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1162LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v20);
        __debugbreak();
      }
      v8 = v38;
    }
    (*(void (__fastcall **)(struct IInputDisplay *, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v40);
    HitTestHelper::BuildRequestForPointerInputInfo(v44, a3, (unsigned int)v6, v40);
    HitTestHelper::HitTestRequestWithRetry(
      (__int64)&v45,
      v44,
      *((__int64 (__fastcall ****)(_QWORD, __int128 *))this + 29));
    v21 = 18 * v6;
    if ( (*((_BYTE *)a3 + 8 * v21 + 228) & 4) != 0 )
    {
      ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList(v46);
      DWMInputRouter::OnPointerInputDown(
        this,
        ViewInstanceIdFromInputSiteList,
        *((unsigned int *)a3 + 1),
        *(unsigned int *)a3,
        v40,
        *((_QWORD *)a3 + v21 + 33));
    }
    v37 = 0LL;
    if ( a5 )
    {
      v35 = 0LL;
      v23 = **(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 **))a5;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v35);
      if ( v23(a5, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, &v35) >= 0 )
      {
        (*(void (__fastcall **)(__int64 *, __int64 *))(*v35 + 24))(v35, v39);
        if ( v39[0] )
        {
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v39);
          v10 = (struct IInputTarget *)v39[0];
          if ( v39[0] )
          {
            v39[0] = 0LL;
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v10 + 16LL))(v10);
          }
        }
      }
      v24 = **(void (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v10;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v37);
      v24(v10, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v37);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v35);
    }
    DWMInputRouter::GetTargetListFromHitTestResult(
      this,
      (__int64)&v41,
      *(_DWORD *)a3,
      &v45,
      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v37);
    std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::lower_bound(
      (_QWORD *)this + 84,
      &v35,
      (unsigned __int8 *)a3 + 4);
    v26 = v35;
    if ( v35 == *((__int64 **)this + 85) )
    {
      v35 = v25;
      std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        (__int64)this + 672,
        (__int64)v39,
        (__int64)v25,
        (_DWORD **)&v35);
      v26 = (__int64 *)v39[0];
    }
    v27 = v26 + 3;
    v28 = v26[3];
    if ( v28 )
    {
      *v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(v27 + 9, (__int64)v38);
    v30 = (__int64 *)*((_QWORD *)&v41 + 1);
    for ( i = (__int64 *)v41; i != v30; ++i )
    {
      v35 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))i,
                  (__int64 *)&v35) >= 0 )
      {
        Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v27, i);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v35);
        break;
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v35);
    }
    v36 = 0LL;
    if ( (int)ContextualProcessorManager::OnHitTest(
                *((ContextualProcessorManager **)this + 38),
                a3,
                (struct InputContext *)v27,
                0LL,
                &v36) < 0 )
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v27);
      *a6 = (struct IInputTarget *)*v27;
      v31 = v36;
    }
    else
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v36);
      v31 = v36;
      *a6 = v36;
    }
    if ( v31 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = (__int64 *)v41;
    if ( (_QWORD)v41 )
    {
      v33 = (__int64 *)*((_QWORD *)&v41 + 1);
      if ( (_QWORD)v41 != *((_QWORD *)&v41 + 1) )
      {
        do
        {
          v34 = *v32;
          if ( *v32 )
          {
            *v32 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          }
          ++v32;
        }
        while ( v32 != v33 );
        v32 = (__int64 *)v41;
      }
      std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)((v42 - (_QWORD)v32) & 0xFFFFFFFFFFFFFFF8uLL));
      v41 = 0LL;
      v42 = 0LL;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v37);
    if ( (unsigned __int64)(v47 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v47);
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v46);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
