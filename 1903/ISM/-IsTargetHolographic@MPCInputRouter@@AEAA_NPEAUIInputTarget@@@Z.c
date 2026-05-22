/*
 * XREFs of ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800549E8
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180056080 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DF64 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18002E404 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x180054E2C (-MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z.c)
 *     ?GetViewBoundsFromViewId@ViewHelper@@SAJPEAUIViewHierarchy@@IPEAUViewBounds@@@Z @ 0x18005889C (-GetViewBoundsFromViewId@ViewHelper@@SAJPEAUIViewHierarchy@@IPEAUViewBounds@@@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18005893C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall MPCInputRouter::IsTargetHolographic(
        MPCInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  __int64 (__fastcall *v3)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  unsigned int ViewIdFromWindowId; // eax
  int v9; // eax
  struct IViewHierarchy *ViewHierarchy; // rax
  bool v11; // bl
  struct IViewHierarchy *v12; // rax
  HWND Ancestor; // rax
  __int64 v14; // rcx
  ISMTracing *v15; // rcx
  unsigned int v17; // [rsp+38h] [rbp-9h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-1h] BYREF
  __int64 v19[2]; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v20[32]; // [rsp+58h] [rbp+17h] BYREF
  int v21; // [rsp+78h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v19[1] = -2LL;
  v19[0] = 0LL;
  v3 = **a2;
  Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(v19);
  v4 = v3((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v19);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      592LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v17 = 0;
  v18 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v19[0] + 64LL))(v19[0], &v18);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      598LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19[0] + 56LL))(v19[0], &v17);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      601LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  ViewIdFromWindowId = v17;
  if ( !v17 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19[0] + 48LL))(v19[0], &v17);
    v7 = retaddr;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        606LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    ViewIdFromWindowId = v17;
    if ( !v17 )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v18);
      v17 = ViewIdFromWindowId;
    }
  }
  v11 = 0;
  if ( ViewIdFromWindowId )
  {
    memset_0(v20, 0, 0x2CuLL);
    v11 = 1;
    if ( !IsEdition(1024LL) )
    {
      v12 = ISMStatics::GetViewHierarchy();
      if ( (int)ViewHelper::GetViewBoundsFromViewId(v12, v17, (struct ViewBounds *)v20) < 0 || v21 != 1 )
LABEL_12:
        v11 = 0;
    }
  }
  else if ( v18 && !IsEdition(1024LL) )
  {
    if ( !GetPropW((HWND)(int)v18, L"Windows.Graphics.Holographic.HolographicSpace")
      && !GetPropW((HWND)(int)v18, L"Windows.Internal.Shell.Holographic.Win32PortedView") )
    {
      v11 = 0;
      if ( !IsHolographicWin32SlatesFeatureEnabled() )
        goto LABEL_21;
      Ancestor = GetAncestor((HWND)(int)v18, 3u);
      if ( !Ancestor || !GetPropW(Ancestor, L"Windows.Internal.Shell.Holographic.Win32PortedView") )
        goto LABEL_12;
    }
    v11 = 1;
  }
LABEL_21:
  if ( ISMTracing::IsEnabled((__int64)v7) )
  {
    wil::details::static_lazy<ISMTracing>::get(v14, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputRouter_IsTargetHolographic_(v15, (struct IInputTarget *)a2, v17, v18, v11);
  }
  Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(v19);
  return v11;
}
