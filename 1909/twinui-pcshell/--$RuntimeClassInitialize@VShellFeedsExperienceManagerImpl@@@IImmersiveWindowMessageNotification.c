/*
 * XREFs of ??$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVShellFeedsExperienceManagerImpl@@P84@EAAJI_K_J@Z@Z @ 0x180091E50
 * Callers:
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVShellFeedsExperienceManagerImpl@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVShellFeedsExperienceManagerImpl@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x180091A3C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x180085008 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ??$AsWeak@VShellFeedsExperienceManagerImpl@@@WRL@Microsoft@@YAJPEAVShellFeedsExperienceManagerImpl@@PEAVWeakRef@01@@Z @ 0x180091604 (--$AsWeak@VShellFeedsExperienceManagerImpl@@@WRL@Microsoft@@YAJPEAVShellFeedsExperienceManagerIm.c)
 *     wistd::__function::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl(unsigned_int_unsigned___int64___int64)_::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl(unsigned_int_unsigned___int64___int64)_ @ 0x180092748 (wistd--__function--__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl(unsigned_int_un.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180126C94 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18016D308 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize<ShellFeedsExperienceManagerImpl>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int64 *v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12[2]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v13; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v11 = &v15;
  v6 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v11);
  v7 = Microsoft::WRL::AsWeak<ShellFeedsExperienceManagerImpl>(a2, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Microsoft::WRL::WeakRef::WeakRef(v12, &v15);
    v9 = *a3;
    v12[1] = a2;
    v13 = v9;
    wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1 + 40);
    *(_QWORD *)(a1 + 152) = wistd::__function::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl_unsigned_int_unsigned___int64___int64__::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl_unsigned_int_unsigned___int64___int64__(
                              a1 + 48,
                              v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\handlers.h",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return v8;
}
