/*
 * XREFs of ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180055E94
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800556A0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180055CB4 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DF64 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B42C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z @ 0x1800534A8 (--$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18005893C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800589F8 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::Update3DFocusWNF(MPCInputRouter *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  struct IViewHierarchy *v4; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  unsigned __int64 WindowIdFromViewId; // rbx
  struct IViewHierarchy *v7; // rax
  __int64 v8; // rdi
  struct IViewHierarchy *v9; // rax
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  unsigned __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 Ancestor; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int ViewIdFromWindowId; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+6Ch] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v13 = -2LL;
  v2 = *((_QWORD *)this + 104);
  if ( v2 )
  {
    v14 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 104) + 72LL))(*((_QWORD *)this + 104));
    ViewIdFromWindowId = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 104) + 80LL))(*((_QWORD *)this + 104));
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 104) + 56LL))(*((_QWORD *)this + 104));
    Ancestor = v14;
    if ( *((_BYTE *)this + 928) )
      v3 = *((_DWORD *)this + 233);
    else
      v3 = v16;
    v19 = v3;
    if ( ViewIdFromWindowId
      || (v4 = ISMStatics::GetViewHierarchy(), (ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(v4, v14)) != 0) )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
      v7 = ISMStatics::GetViewHierarchy();
      (*(void (__fastcall **)(struct IViewHierarchy *, __int64 *, _QWORD))(*(_QWORD *)v7 + 56LL))(
        v7,
        &v11,
        ViewIdFromWindowId);
      v8 = v12;
      if ( v11 != v12 )
      {
        v9 = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v9, *(_DWORD *)(v8 - 4));
      }
      Ancestor = WindowIdFromViewId;
      std::vector<Windows::UI::Color>::_Tidy((__int64)&v11);
    }
    if ( IsEdition(8778LL) )
      Ancestor = (unsigned __int64)GetAncestor((HWND)(int)Ancestor, 3u);
    v10 = RtlPublishWnfStateData(WNF_HOLO_INPUT_FOCUS_CHANGE, 0LL, &v14, 32LL, 0LL) | 0x10000000;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        873LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    ISMTracing::MPCInputRouter_Update3DFocusWNF<unsigned __int64 &,unsigned __int64 &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
      &v14,
      &Ancestor,
      &v16,
      &v17,
      &ViewIdFromWindowId,
      &v19);
  }
}
