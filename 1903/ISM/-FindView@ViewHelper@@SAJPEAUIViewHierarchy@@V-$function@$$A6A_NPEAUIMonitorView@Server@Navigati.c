/*
 * XREFs of ?FindView@ViewHelper@@SAJPEAUIViewHierarchy@@V?$function@$$A6A_NPEAUIMonitorView@Server@Navigation@@@Z@std@@PEAPEAUIMonitorView@Server@Navigation@@@Z @ 0x180057F50
 * Callers:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18005893C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewHelper::FindView(__int64 a1, __int64 a2, _QWORD *a3)
{
  void (__fastcall *v6)(__int64, __int64 *, _BYTE *); // r14
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v13[56]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+38h]
  _BYTE *v17; // [rsp+B0h] [rbp+40h]

  v16 = a2;
  *a3 = 0LL;
  v6 = *(void (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)a1 + 72LL);
  v17 = v13;
  v14 = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v7 )
    v14 = (**v7)(v7, v13);
  v6(a1, &v15, v13);
  if ( v15 )
  {
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v15);
    *a3 = v15;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v15);
    v9 = *(_QWORD *)(a2 + 56);
    if ( v9 )
    {
      LOBYTE(v8) = v9 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v8);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return 0LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v15);
    v12 = *(_QWORD *)(a2 + 56);
    if ( v12 )
    {
      LOBYTE(v11) = v12 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return 2147943568LL;
  }
}
