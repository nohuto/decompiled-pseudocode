/*
 * XREFs of ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x18011BD10
 * Callers:
 *     _lambda_7c875662d6abaa9f8d1386a75bd755d7_::operator() @ 0x18011A008 (_lambda_7c875662d6abaa9f8d1386a75bd755d7_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x180030CF0 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ??$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncStringPrincipal@@@Z @ 0x180117B8C (--$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@U.c)
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@$$QEAV012@@Z @ 0x180118338 (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@Foundatio.c)
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@AEBV012@@Z @ 0x180118364 (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Wi.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x18011B604 (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXAEBUtagPROPVARIANT@@@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x1801228B0 (--0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXAEBUtagPROPVARIANT@@.c)
 */

// Hidden C++ exception states: #wind=2
void (__fastcall ***__fastcall MPCConstantManagerClient::CreatePVPrincipal(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD),
        _QWORD *a3))(_QWORD)
{
  void (__fastcall ***v6)(_QWORD); // rbx
  void (__fastcall ***v7)(_QWORD); // rax
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-69h] BYREF
  __int64 v11; // [rsp+30h] [rbp-61h] BYREF
  __int64 v12[2]; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v14[5]; // [rsp+58h] [rbp-39h] BYREF
  _QWORD *v15; // [rsp+80h] [rbp-11h]
  __int64 (__fastcall **v16)(); // [rsp+88h] [rbp-9h] BYREF
  _QWORD v17[6]; // [rsp+90h] [rbp-1h] BYREF
  __int64 (__fastcall ***v18)(); // [rsp+C0h] [rbp+2Fh]
  void (__fastcall ***v19)(_QWORD); // [rsp+100h] [rbp+6Fh] BYREF
  _QWORD *v20; // [rsp+108h] [rbp+77h]

  v20 = a3;
  v19 = a2;
  v12[1] = -2LL;
  MPCConstantManagerClient::CleanupPrincipals((MPCConstantManagerClient *)a1);
  v6 = (void (__fastcall ***)(_QWORD))operator new(0xC0uLL);
  v19 = v6;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    &v10,
    a3);
  v18 = 0LL;
  v16 = off_180170790;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
    v17,
    &v10);
  v18 = &v16;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v11);
  v10 = a1;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    &v11,
    a3);
  v15 = 0LL;
  v13[0] = off_180170850;
  v13[1] = v10;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
    v14,
    &v11);
  v15 = v13;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v12);
  v7 = (void (__fastcall ***)(_QWORD))AsyncPVPrincipal::AsyncPVPrincipal(v6, *(_QWORD *)(a1 + 32), v13, &v16);
  v19 = v7;
  v8 = *(_QWORD **)(a1 + 56);
  if ( *(_QWORD **)(a1 + 64) == v8 )
  {
    std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncStringPrincipal *>(
      (char **)(a1 + 48),
      *(char **)(a1 + 56),
      &v19);
  }
  else
  {
    wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
      v8,
      v7);
    *(_QWORD *)(a1 + 56) += 8LL;
  }
  wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
    a2,
    *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 56) - 8LL));
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a3 + 1);
  return a2;
}
