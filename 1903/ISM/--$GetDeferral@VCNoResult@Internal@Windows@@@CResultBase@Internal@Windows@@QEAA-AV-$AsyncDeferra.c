/*
 * XREFs of ??$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA?AV?$AsyncDeferral@VCNoResult@Internal@Windows@@@12@AEAVCNoResult@12@@Z @ 0x180116EA8
 * Callers:
 *     _lambda_16bcd66e868557b6123b295398ded03e_::operator() @ 0x180119DFC (_lambda_16bcd66e868557b6123b295398ded03e_--operator().c)
 *     _lambda_2c3f3b4f1bafb50fab998dee840e32d8_::operator() @ 0x180119E9C (_lambda_2c3f3b4f1bafb50fab998dee840e32d8_--operator().c)
 *     _lambda_a408cc100a5b103155a70fabf7a2049b_::operator() @ 0x18011A210 (_lambda_a408cc100a5b103155a70fabf7a2049b_--operator().c)
 *     _lambda_b07e28b8d9a43b43078b009fd4c08247_::operator() @ 0x18011A2EC (_lambda_b07e28b8d9a43b43078b009fd4c08247_--operator().c)
 *     _lambda_de6bcc426287dbdda407399e3f0c7994_::operator() @ 0x18011A498 (_lambda_de6bcc426287dbdda407399e3f0c7994_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::CResultBase::GetDeferral<Windows::Internal::CNoResult>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  void (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v6 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
  v7 = ***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v9);
  v7(v6, &GUID_5fb52445_1407_4f25_9aa4_ac25bb3a9606, &v9);
  *(_BYTE *)(a1 + 9) = 1;
  *a2 = a3;
  a2[1] = v9;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2 + 1);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v9);
  return a2;
}
