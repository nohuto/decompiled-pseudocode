/*
 * XREFs of ?RuntimeClassInitialize@ViewHierarchy@@UEAAJW4TestMode@1@@Z @ 0x18001F7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterMessageProxyReconnectAdapter@ViewHierarchy@@AEAAXXZ @ 0x180010BA8 (-RegisterMessageProxyReconnectAdapter@ViewHierarchy@@AEAAXXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F94C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18001F96C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x18001F9B0 (--1-$function@$$A6AXXZ@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x18001F9D8 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180059CF0 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059E14 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ @ 0x180059F30 (-Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ.c)
 */

__int64 __fastcall ViewHierarchy::RuntimeClassInitialize(__int64 a1, int a2)
{
  void *v3; // rdx
  HANDLE Event; // rbp
  unsigned int v5; // r8d
  const char *v6; // r9
  wil::details *v7; // rsi
  DWORD LastError; // ebx
  void *v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  Microsoft::Bamo::BaseBamoConnection *v16; // rcx
  Microsoft::Bamo::BaseBamoConnection *v18; // [rsp+20h] [rbp-A8h] BYREF
  char v19; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v20[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v21[15]; // [rsp+38h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  *(_DWORD *)(a1 + 160) = a2;
  if ( a2 != 1 )
  {
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( !Event )
    {
      wil::details::in1diag3::Throw_GetLastError(retaddr, v3, v5, v6);
      __debugbreak();
    }
    GetLastError();
    v7 = *(wil::details **)(a1 + 192);
    if ( v7 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v7, v9);
      SetLastError(LastError);
    }
    *(_QWORD *)(a1 + 192) = Event;
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1 + 48);
    v10 = CoreUICreate(a1 + 48);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x36,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v10,
        (int)v18);
      __debugbreak();
    }
    v11 = *(_QWORD *)(a1 + 56);
    if ( v11 )
    {
      *(_QWORD *)(a1 + 56) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = CoreUIFactoryCreate(a1 + 56);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x38,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v12,
        (int)v18);
      __debugbreak();
    }
    if ( IsEdition(1024LL) )
    {
      ViewHierarchy::RegisterMessageProxyReconnectAdapter((ViewHierarchy *)a1);
    }
    else
    {
      v21[1] = a1;
      v21[0] = off_18016CF18;
      v21[13] = v21;
      v15 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(v13, v20, v14, &v18);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x418,
          (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
          (const char *)(unsigned int)v15,
          (int)v18);
        __debugbreak();
      }
      v16 = v18;
      if ( *(char **)(a1 + 208) != &v19 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
          *(_QWORD *)(a1 + 208),
          v18);
        v16 = 0LL;
      }
      if ( v16 )
        Microsoft::Bamo::BaseBamoConnection::Free(v16);
      wistd::function<void (void)>::~function<void (void)>(v20);
    }
  }
  return 0LL;
}
