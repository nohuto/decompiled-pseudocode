/*
 * XREFs of ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180055400
 * Callers:
 *     _lambda_ec705bf725d52d27b1686ede0253a48a_::_lambda_invoker_cdecl_ @ 0x1800531A0 (_lambda_ec705bf725d52d27b1686ede0253a48a_--_lambda_invoker_cdecl_.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180055B04 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081B0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000DE7C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DFD4 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x18002F334 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800531B8 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??4?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180053790 (--4-$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Attach@?$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800538C4 (-Attach@-$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPE.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180053A18 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x180054C84 (-MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180055BF4 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800569CC (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18005869C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800C2EE0 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall MPCInputRouter::OnExclusiveModeStateChangedInputThread(MPCInputRouter *this)
{
  __int64 *v2; // r14
  __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct IInputTarget *v8; // rcx
  unsigned __int64 v9; // rbx
  struct IViewHierarchy *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  int v12; // eax
  int v13; // eax
  void *v14; // r15
  struct InputSiteManager *InputSiteManager; // rax
  char v16; // r12
  __int64 v17; // rdi
  struct IInputTarget *v18; // rbx
  __int64 v19; // rcx
  int FrameworkViewTypeFromFocusTarget; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  ISMTracing *v24; // rcx
  int v25; // [rsp+30h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IInputTarget *v27; // [rsp+A8h] [rbp+48h] BYREF
  struct IInputTarget *v28; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+58h] BYREF

  if ( *((_BYTE *)this + 928) != (*((_BYTE *)this + 912) != 0)
    || *((_DWORD *)this + 233) != *((_DWORD *)this + 229)
    || *((_QWORD *)this + 117) != *((_QWORD *)this + 115) )
  {
    *((_BYTE *)this + 928) = *((_BYTE *)this + 912) != 0;
    *((_DWORD *)this + 233) = *((_DWORD *)this + 229);
    *((_QWORD *)this + 117) = *((_QWORD *)this + 115);
    v2 = (__int64 *)((char *)this + 824);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 103);
    if ( *((_BYTE *)this + 928) )
    {
      v3 = (__int64 *)((char *)this + 832);
      v4 = *((_QWORD *)this + 104);
      if ( v4 && (v5 = *((_QWORD *)this + 115), v5 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4))
        || (v3 = (__int64 *)((char *)this + 840), (v6 = *((_QWORD *)this + 105)) != 0)
        && (v7 = *((_QWORD *)this + 115), v7 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6)) )
      {
        Microsoft::WRL::ComPtr<Navigation::Server::IMonitorView>::operator=(v2, v3);
      }
      else
      {
        v27 = 0LL;
        v28 = 0LL;
        v9 = *((_QWORD *)this + 117);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v9);
        v12 = DWMInputRouter::CreateAndRegisterTarget(
                this,
                *((_DWORD *)this + 233),
                0,
                ViewIdFromWindowId,
                0,
                v9,
                0,
                0,
                &v27);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            804LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v12);
          __debugbreak();
        }
        v13 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v27,
                (__int64 *)&v28);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            805LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        v14 = RefCountedObject::operator new(0x68uLL);
        if ( v14 )
        {
          InputSiteManager = ISMStatics::GetInputSiteManager();
          v16 = 1;
          v17 = *InputSiteManager::GetOrCreateInputSiteFromId(
                   (__int64)InputSiteManager,
                   &v29,
                   1,
                   *((_QWORD *)this + 117),
                   *((_DWORD *)this + 233));
          v18 = v28;
          FrameworkViewTypeFromFocusTarget = MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v19, v28);
          LOBYTE(v25) = 0;
          v21 = MPCFocusTarget::MPCFocusTarget(
                  v14,
                  v18,
                  v17,
                  0LL,
                  FrameworkViewTypeFromFocusTarget,
                  *((_DWORD *)this + 233),
                  v25);
        }
        else
        {
          v21 = 0LL;
          v16 = 0;
        }
        Microsoft::WRL::ComPtr<Windows::Internal::Holographic::SpatialGraphDriverClient>::Attach(
          v2,
          (v21 + 72) & -(__int64)(v21 != 0));
        if ( (v16 & 1) != 0 )
        {
          v22 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
        Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease((__int64 *)&v28);
        v8 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      if ( ISMTracing::IsEnabled((__int64)v8) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v23,
          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
          v24,
          *((_BYTE *)this + 928),
          *((_DWORD *)this + 233),
          *((_QWORD *)this + 117));
      }
    }
    MPCInputRouter::Update3DFocusWNF(this);
  }
}
