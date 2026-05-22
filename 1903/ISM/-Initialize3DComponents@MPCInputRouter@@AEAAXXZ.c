/*
 * XREFs of ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18005464C
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800555F0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000DD7C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180020148 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x18002F654 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180053458 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800537BC (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Hash@V-$_Umap_trai.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x1800539E0 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?Attach@?$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x180053B64 (-Attach@-$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPE.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180055CB4 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x1800569B0 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x180056C6C (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18007C3B0 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800839A4 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x1800C36A8 (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x1800C5F08 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCInputRouter::Initialize3DComponents(MPCInputRouter *this, __int64 a2, __int64 a3, const char *a4)
{
  char v5; // r15
  struct IMPCFocusTarget **v6; // rsi
  MPCHolographicInputManager *Instance; // rax
  unsigned int *v8; // r12
  int v9; // eax
  const char *v10; // r9
  struct IInputTarget *v11; // rbx
  struct IInputTarget *InputHostTargetForProcessId; // rax
  const char *v13; // r9
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // r14
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct IMPCFocusTarget *v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rax
  RTL_SRWLOCK *v24; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v26; // eax
  struct IInputTarget *v27; // rcx
  unsigned int v28; // [rsp+30h] [rbp-39h]
  __int64 v29; // [rsp+40h] [rbp-29h] BYREF
  __int64 v30; // [rsp+48h] [rbp-21h] BYREF
  __int64 v31; // [rsp+50h] [rbp-19h] BYREF
  _QWORD *v32[2]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v33[11]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  struct IInputTarget *v35; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v36; // [rsp+E0h] [rbp+77h] BYREF
  struct IInputTarget *v37; // [rsp+E8h] [rbp+7Fh] BYREF

  v32[1] = (_QWORD *)-2LL;
  if ( !*((_BYTE *)this + 904) )
  {
    v5 = 1;
    *((_BYTE *)this + 904) = 1;
    if ( !*((_QWORD *)this + 107) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        424LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        a4);
      __debugbreak();
    }
    v6 = (struct IMPCFocusTarget **)((char *)this + 848);
    if ( *((_QWORD *)this + 106) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        425LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        a4);
      __debugbreak();
    }
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::SetMPCInputRouter(Instance, this);
    v8 = (unsigned int *)((char *)this + 864);
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 107) + 24LL))(
           *((_QWORD *)this + 107),
           (char *)this + 864);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        432LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v11 = 0LL;
    v37 = 0LL;
    if ( !ISMTestMode::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        33LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
        v10);
      __debugbreak();
    }
    if ( !*(_BYTE *)ISMTestMode::s_instance )
    {
      InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(this, *v8);
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)&v37, (__int64)InputHostTargetForProcessId);
      v11 = v37;
      if ( !v37 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          438LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          v13);
        __debugbreak();
      }
    }
    v35 = 0LL;
    v14 = DWMFocusedInputTarget::Create(v11, *((_DWORD *)this + 217), 0, 0, 0LL, 0, 0, &v35);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        451LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v36 = 0LL;
    v15 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v35,
            &v36);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        454LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    v16 = RefCountedObject::operator new(0x68uLL);
    v32[0] = v16;
    if ( v16 )
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      v18 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v29, 1, 0LL, *v8);
      LOBYTE(v28) = 1;
      v19 = MPCFocusTarget::MPCFocusTarget(v16, v36, *v18, 0LL, 5, *v8, v28);
    }
    else
    {
      v19 = 0LL;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Internal::Holographic::SpatialGraphDriverClient>::Attach(
      (__int64 *)this + 106,
      (v19 + 72) & -(__int64)(v19 != 0));
    if ( (v5 & 1) != 0 )
    {
      v20 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    MPCInputRouter::Set3DFocusTarget(this, *v6);
    v30 = 0LL;
    v21 = *v6;
    std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
      (char *)this + 944,
      &v31,
      &v30);
    v23 = v31;
    if ( v31 == *((_QWORD *)this + 119) )
    {
      v32[0] = &v30;
      std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        (__int64)this + 944,
        (__int64)v33,
        v22,
        v32);
      v23 = v33[0];
    }
    *(_QWORD *)(v23 + 24) = v21;
    v24 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v24);
    v26 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, char *))(*(_QWORD *)PostProcessor + 96LL))(
            PostProcessor,
            (char *)this + 816);
    if ( v26 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        473LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v26);
    Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v36);
    v27 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
