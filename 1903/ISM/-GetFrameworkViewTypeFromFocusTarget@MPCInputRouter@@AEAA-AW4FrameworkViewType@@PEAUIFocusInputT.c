/*
 * XREFs of ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180053CB8
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800556A0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180056080 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DF64 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180054C60 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x180054CB8 (-MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@Z @ 0x1800583E4 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18005893C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800589F8 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(__int64 a1, struct IInputTarget *a2)
{
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  unsigned int FrameworkViewTypeFromViewId; // edi
  __int64 v7; // rcx
  ISMTracing *v8; // rcx
  struct IViewHierarchy *v10; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  struct IViewHierarchy *v12; // rax
  struct IViewHierarchy *v13; // rax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v17; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 WindowIdFromViewId; // [rsp+70h] [rbp+30h] BYREF
  struct IInputTarget *v19; // [rsp+78h] [rbp+38h] BYREF

  v16 = a1;
  v19 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v17 = 0;
  LODWORD(v16) = 0;
  WindowIdFromViewId = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v17);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      549LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v16);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      550LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( !v17 )
  {
    if ( (_DWORD)v16 )
    {
LABEL_19:
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(ViewHierarchy, (unsigned int)v16);
      v12 = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v12, v16);
      goto LABEL_13;
    }
    if ( (*(int (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &WindowIdFromViewId) >= 0
      && !IsEdition(1024LL)
      && GetPropW((HWND)(int)WindowIdFromViewId, L"Windows.Graphics.Holographic.HolographicSpace") )
    {
      FrameworkViewTypeFromViewId = 1;
      goto LABEL_13;
    }
    if ( !v17 )
    {
      if ( !(_DWORD)v16 )
      {
        v10 = ISMStatics::GetViewHierarchy();
        LODWORD(v16) = ViewHelper::GetViewIdFromWindowId(v10, WindowIdFromViewId);
        wil::details::in1diag3::Log_HrIfMsg(
          retaddr,
          (void *)0x238,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)0x80004005LL,
          (_DWORD)v16 == 0,
          (bool)"View id not found",
          (const char *)0xFFFFFFFFFFFFFFFELL);
      }
      goto LABEL_19;
    }
  }
  v13 = ISMStatics::GetViewHierarchy();
  FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(v13, v17);
  v14 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
          a2,
          &WindowIdFromViewId);
  v5 = retaddr;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      579LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
LABEL_13:
  if ( ISMTracing::IsEnabled((__int64)v5) )
  {
    wil::details::static_lazy<ISMTracing>::get(v7, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_(
      v8,
      a2,
      v16,
      FrameworkViewTypeFromViewId,
      WindowIdFromViewId);
  }
  Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease((__int64 *)&v19);
  return FrameworkViewTypeFromViewId;
}
