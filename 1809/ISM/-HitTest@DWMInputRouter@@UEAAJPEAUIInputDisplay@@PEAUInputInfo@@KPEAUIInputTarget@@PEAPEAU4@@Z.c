/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180089E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000EB8C (--1-$vector@V-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMessageProxy@@@WR.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001DF04 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001E104 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x18008A218 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x18008C014 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z.c)
 *     ??A?$unordered_map@KUInputContext@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@@std@@QEAAAEAUInputContext@@AEBK@Z @ 0x18008C7FC (--A-$unordered_map@KUInputContext@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@$$CBKUInp.c)
 *     ?BuildRequestForLegacyInputInfo@HitTestHelper@@CA?AUHitTestRequest@1@PEAULegacyInputInfo@@KPEAUHMONITOR__@@@Z @ 0x180090EE0 (-BuildRequestForLegacyInputInfo@HitTestHelper@@CA-AUHitTestRequest@1@PEAULegacyInputInfo@@KPEAUH.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180090FF8 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C2300 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  __int64 v6; // rdi
  struct IInputDisplay *v8; // r8
  int v11; // eax
  __int64 v12; // rdi
  unsigned int ViewInstanceIdFromInputSiteList; // eax
  struct InputContext *v14; // rax
  struct InputContext *v15; // rdi
  __int64 v16; // rcx
  struct IInputDisplay *v17; // rcx
  struct IInputDisplay *v18; // rbx
  _QWORD *v19; // rbx
  _QWORD *v20; // r15
  struct IInputTarget *v21; // rcx
  struct IInputTarget *v22; // rcx
  int (__fastcall ***v23)(_QWORD, GUID *, struct IInputTarget **); // rbx
  struct IInputTarget *v24; // rcx
  int v25; // eax
  struct IInputTarget *v26; // rbx
  struct IInputTarget *v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // eax
  struct IInputTarget *v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  struct IInputDisplay *v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v34[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v35[208]; // [rsp+70h] [rbp-90h] BYREF
  char v36[8]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v37[24]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v38; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v34[3] = -2LL;
  v6 = a4;
  v8 = a2;
  v32 = a2;
  if ( a6 )
  {
    if ( !a2 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
        (_QWORD *)this + 30,
        (__int64 **)&v30,
        (_DWORD *)a3 + 1);
      if ( v30 == *((struct IInputTarget **)this + 31) )
      {
        v29 = wil::verify_hresult<long>(0x80004005);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x437,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)v29);
        JUMPOUT(0x18008A20FLL);
      }
      v11 = (*(__int64 (__fastcall **)(DWMInputRouter *, _QWORD, struct IInputDisplay **))(*(_QWORD *)this + 80LL))(
              this,
              *((_QWORD *)v30 + 3),
              &v32);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x43B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      v8 = v32;
    }
    (*(void (__fastcall **)(struct IInputDisplay *, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v33);
    HitTestHelper::BuildRequestForLegacyInputInfo(v35, a3, (unsigned int)v6, v33);
    HitTestHelper::HitTestRequestWithRetry(v36, v35, *((_QWORD *)this + 29));
    v12 = 32 * v6;
    if ( (*((_BYTE *)a3 + v12 + 60) & 2) != 0 )
    {
      ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList((__int64)v37);
      DWMInputRouter::OnPointerInputDown(
        this,
        ViewInstanceIdFromInputSiteList,
        *((unsigned int *)a3 + 1),
        *(unsigned int *)a3,
        v33,
        *(_QWORD *)((char *)a3 + v12 + 64),
        *(_QWORD *)((char *)a3 + v12 + 64));
    }
    v31 = 0LL;
    if ( a5 )
      (**(void (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a5)(
        a5,
        &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
        &v31);
    DWMInputRouter::GetTargetListFromHitTestResult(this, (__int64)&v31);
    v14 = (struct InputContext *)std::unordered_map<unsigned long,InputContext>::operator[](
                                   (char *)this + 672,
                                   (char *)a3 + 4);
    v15 = v14;
    v16 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 )
    {
      *(_QWORD *)v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (struct IInputDisplay *)*((_QWORD *)v15 + 1);
    v18 = v32;
    if ( v17 != v32 )
    {
      if ( v32 )
      {
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v32 + 8LL))(v32);
        v17 = (struct IInputDisplay *)*((_QWORD *)v15 + 1);
      }
      *((_QWORD *)v15 + 1) = v18;
      if ( v17 )
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v19 = (_QWORD *)v34[0];
    v20 = (_QWORD *)v34[1];
    while ( v19 != v20 )
    {
      v30 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*v19)(
             *v19,
             &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
             &v30) >= 0 )
      {
        v22 = *(struct IInputTarget **)v15;
        v23 = (int (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*v19;
        if ( *(int (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))v15 != v23 )
        {
          if ( v23 )
          {
            ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **)))(*v23)[1])(v23);
            v22 = *(struct IInputTarget **)v15;
          }
          *(_QWORD *)v15 = v23;
          if ( v22 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v24 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v24 + 16LL))(v24);
        }
        break;
      }
      v21 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      ++v19;
    }
    v30 = 0LL;
    v25 = ContextualProcessorManager::OnHitTest(*((ContextualProcessorManager **)this + 38), a3, v15, 0LL, &v30);
    v26 = v30;
    if ( v25 < 0 )
    {
      v27 = *(struct IInputTarget **)v15;
      if ( *(_QWORD *)v15 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v27 + 8LL))(v27);
        v27 = *(struct IInputTarget **)v15;
      }
      *a6 = v27;
    }
    else
    {
      if ( v30 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v30 + 8LL))(v30);
      *a6 = v26;
    }
    if ( v26 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v26 + 16LL))(v26);
    std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>((__int64)v34);
    v28 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    if ( (unsigned __int64)(v38 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v38);
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v37);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
