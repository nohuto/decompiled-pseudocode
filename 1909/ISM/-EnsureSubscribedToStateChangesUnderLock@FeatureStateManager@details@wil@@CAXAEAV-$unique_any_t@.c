/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18001D8A0
 * Callers:
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18001D1B8 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18001E1F0 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?close_reset@?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180052708 (-close_reset@-$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1-UnsubscribeWilWn.c)
 */

void __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  bool v3; // zf
  FARPROC ProcAddress; // rax
  FARPROC v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rbx
  HMODULE v10; // rax
  HMODULE NtDllModuleHandle; // rax
  unsigned int v12; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+54h] [rbp-34h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF

  v3 = *a1 == 0LL;
  v14 = a2;
  if ( v3 )
  {
    v12 = 0;
    v13 = 0;
    ProcAddress = (FARPROC)g_wil_details_pfnNtQueryWnfStateData;
    if ( g_wil_details_pfnNtQueryWnfStateData
      || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
          ProcAddress = GetProcAddress(NtDllModuleHandle, "NtQueryWnfStateData"),
          (g_wil_details_pfnNtQueryWnfStateData = (int (*)(const struct __WIL__WNF_STATE_NAME *, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int *, void *, unsigned int *))ProcAddress) != 0LL) )
    {
      ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, unsigned int *, _QWORD, int *))ProcAddress)(
        &v14,
        0LL,
        0LL,
        &v12,
        0LL,
        &v13);
    }
    if ( *a1 )
      wil::details::resource_policy<__WIL__WNF_USER_SUBSCRIPTION *,void (*)(__WIL__WNF_USER_SUBSCRIPTION *),&void wil::details::UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,__WIL__WNF_USER_SUBSCRIPTION *,__WIL__WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>::close_reset();
    *a1 = 0LL;
    v7 = (FARPROC)g_wil_details_pfnRtlSubscribeWnfStateChangeNotification;
    v8 = v12;
    v9 = v14;
    if ( g_wil_details_pfnRtlSubscribeWnfStateChangeNotification
      || (v10 = wil_details_GetNtDllModuleHandle(),
          v7 = GetProcAddress(v10, "RtlSubscribeWnfStateChangeNotification"),
          (g_wil_details_pfnRtlSubscribeWnfStateChangeNotification = (int (__high *)(struct __WIL__WNF_USER_SUBSCRIPTION **, struct __WIL__WNF_STATE_NAME, unsigned int, int (__high *)(struct __WIL__WNF_STATE_NAME, unsigned int, struct __WIL__WNF_TYPE_ID *, void *, const void *, unsigned int), void *, struct __WIL__WNF_TYPE_ID *, unsigned int, unsigned int))v7) != 0LL) )
    {
      ((void (__fastcall *)(_QWORD *, __int64, _QWORD, __int64 (__fastcall *)(), __int64, _QWORD, _DWORD, _DWORD))v7)(
        a1,
        v9,
        v8,
        lambda_81e364be9007e0d67239f6892a75acdf_::_lambda_invoker_cdecl_,
        a3,
        0LL,
        0,
        0);
    }
  }
}
