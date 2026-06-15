/*
 * XREFs of ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18013FFFC
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800C1470 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x18012EBC8 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18013D680 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelDeviceIdRecheckTimer@AtmosCheck@@AEAAXXZ @ 0x18013DBF4 (-CancelDeviceIdRecheckTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x18013DC80 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180140168 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801408FC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180140E50 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 */

void __fastcall AtmosCheck::Uninitialize(AtmosCheck *this)
{
  __int64 v2; // rbp
  DWORD *v3; // rsi
  unsigned __int64 v4; // rdi
  HRESULT v5; // eax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rdx
  unsigned int v10; // r8d
  const char *v11; // r9
  HKEY v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 600) = 1;
  *((_BYTE *)this + 99) = 0;
  if ( *((_BYTE *)this + 216) )
  {
    v2 = 0LL;
    v3 = (DWORD *)*((_QWORD *)this + 72);
    v4 = (unsigned __int64)(*((_QWORD *)this + 73) - (_QWORD)v3 + 3LL) >> 2;
    if ( (unsigned __int64)v3 > *((_QWORD *)this + 73) )
      v4 = 0LL;
    if ( v4 )
    {
      do
      {
        v5 = CoCancelCall(*v3, 0);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x82,
            (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
            (const char *)(unsigned int)v5);
        ++v3;
        ++v2;
      }
      while ( v2 != v4 );
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (char *)this + 248,
    0LL);
  AtmosCheck::UninitializeAppServiceMode(this);
  v6 = (void *)*((_QWORD *)this + 14);
  if ( v6 )
  {
    UnregisterWaitEx(v6, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    *((_QWORD *)this + 14) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 13);
  if ( v7 )
  {
    CloseHandle(v7);
    *((_QWORD *)this + 13) = 0LL;
  }
  AtmosCheck::CancelLicenseRefreshTimer(this);
  AtmosCheck::CancelDeviceIdRecheckTimer(this);
  v8 = (void *)*((_QWORD *)this + 17);
  if ( v8 )
  {
    if ( *((_QWORD *)this + 16) )
    {
      if ( !UnregisterWaitEx(*((HANDLE *)this + 16), (HANDLE)0xFFFFFFFFFFFFFFFFLL) )
        wil::details::in1diag3::_Log_GetLastError(retaddr, v9, v10, v11);
      v8 = (void *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 16) = 0LL;
    }
    CloseHandle(v8);
    *((_QWORD *)this + 17) = 0LL;
  }
  v12 = (HKEY)*((_QWORD *)this + 15);
  if ( v12 )
  {
    RegCloseKey(v12);
    *((_QWORD *)this + 15) = 0LL;
  }
  AtmosCheck::UnregisterAppDeploymentNotifications(this);
}
