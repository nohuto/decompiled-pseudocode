/*
 * XREFs of ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x18000740C
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180006508 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180007EE8 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x180009B40 (-MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18000ABB4 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18000C778 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x18000C8D0 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@Z @ 0x18000CC04 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(__int64 a1, struct IInputTarget *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int FrameworkViewTypeFromViewId; // edi
  struct IViewHierarchy *v6; // rax
  struct IViewHierarchy *v7; // rax
  struct IViewHierarchy *v8; // rax
  _DWORD *v9; // rcx
  ISMTracing *v10; // rcx
  struct IViewHierarchy *ViewHierarchy; // rax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 WindowIdFromViewId; // [rsp+70h] [rbp+30h] BYREF
  struct IInputTarget *v18; // [rsp+78h] [rbp+38h]

  v15 = a1;
  v18 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v16 = 0;
  LODWORD(v15) = 0;
  WindowIdFromViewId = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v16);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x219,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x18000761CLL);
  }
  v4 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v15);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x21A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( v16 )
  {
LABEL_18:
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(ViewHierarchy, v16);
    v13 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
            a2,
            &WindowIdFromViewId);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x237,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    goto LABEL_14;
  }
  if ( (_DWORD)v15 )
  {
LABEL_13:
    v7 = ISMStatics::GetViewHierarchy();
    FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(v7, (unsigned int)v15);
    v8 = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v8, v15);
    goto LABEL_14;
  }
  if ( (*(int (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &WindowIdFromViewId) < 0
    || (FrameworkViewTypeFromViewId = 1, ((1LL << gdwDeviceFamily) & 0x400) != 0)
    || !GetPropW((HWND)(int)WindowIdFromViewId, L"Windows.Graphics.Holographic.HolographicSpace") )
  {
    if ( !v16 )
    {
      if ( !(_DWORD)v15 )
      {
        v6 = ISMStatics::GetViewHierarchy();
        LODWORD(v15) = ViewHelper::GetViewIdFromWindowId(v6, WindowIdFromViewId);
        wil::details::in1diag3::Log_HrIfMsg(
          retaddr,
          (void *)0x22C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)0x80004005LL,
          (_DWORD)v15 == 0,
          (bool)"View id not found",
          (const char *)0xFFFFFFFFFFFFFFFELL);
      }
      goto LABEL_13;
    }
    goto LABEL_18;
  }
LABEL_14:
  v9 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v9 && *v9 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_(
      v10,
      a2,
      v15,
      FrameworkViewTypeFromViewId,
      WindowIdFromViewId);
  }
  (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
  return FrameworkViewTypeFromViewId;
}
