/*
 * XREFs of ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180159120
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_29a847c4660959470cc6efb1525d9b8c___1_long_::Invoke @ 0x180150720 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180150720.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180069D68 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007CAC8 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18012999C (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::_lambda_9c39f2de9248b3982b3805f9f5b1e7b6_ @ 0x18014C4C4 (_lambda_9c39f2de9248b3982b3805f9f5b1e7b6_--_lambda_9c39f2de9248b3982b3805f9f5b1e7b6_.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_9c39f2de9248b3982b3805f9f5b1e7b6___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_9c39f2de9248b3982b3805f9f5b1e7b6___1_long_ @ 0x18014C918 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_18014C918.c)
 *     _lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::__lambda_9c39f2de9248b3982b3805f9f5b1e7b6_ @ 0x18014CEB4 (_lambda_9c39f2de9248b3982b3805f9f5b1e7b6_--__lambda_9c39f2de9248b3982b3805f9f5b1e7b6_.c)
 *     ?UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180155CEC (-UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180157204 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CAppViewManager::_WindowProvidedWorker(CAppViewManager *this, struct _GUID *a2, HWND a3)
{
  const struct _GUID *v3; // rbx
  char v5; // r13
  RTL_SRWLOCK *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  char v10; // r12
  int v11; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, struct _GUID *, __int128 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, __int128 *, __int64 *); // rbx
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  int ViewForApplication; // eax
  __int64 v26; // rdx
  struct IApplicationView **v27; // r9
  HWND v28; // rbx
  __int64 (__fastcall *v29)(HWND, GUID *, __int64 *); // rsi
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, _QWORD, GUID *, __int64 *); // rsi
  __int64 v34; // rbx
  int v35; // eax
  void *v36; // rax
  int v37; // eax
  int v39[2]; // [rsp+48h] [rbp-C0h] BYREF
  HWND v40; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h] BYREF
  struct IImmersiveApplicationInternal *v46; // [rsp+80h] [rbp-88h] BYREF
  struct _GUID *v47; // [rsp+88h] [rbp-80h]
  int v48; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v49[4]; // [rsp+94h] [rbp-74h] BYREF
  __int128 v50; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-60h]
  PSRWLOCK v52; // [rsp+B0h] [rbp-58h]
  _WORD v53[12]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-38h]
  char v55; // [rsp+E0h] [rbp-28h]
  __int128 v56; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v57[7]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v51 = -2LL;
  v40 = a3;
  v3 = a2;
  v47 = a2;
  *(_QWORD *)&v56 = this;
  *((_QWORD *)&v56 + 1) = a2;
  v54 = v56;
  v5 = 1;
  v55 = 1;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  v52 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         v3,
         &v48);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1450LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_54;
  }
  if ( v48 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, _BYTE *))(**((_QWORD **)this + 23) + 48LL))(
           *((_QWORD *)this + 23),
           v3,
           v49);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1454LL;
      goto LABEL_6;
    }
    if ( (v49[0] & 1) != 0 )
    {
      v10 = 1;
      LOBYTE(v39[0]) = 1;
    }
    else
    {
      v10 = 0;
      LOBYTE(v39[0]) = 0;
      v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
              *((_QWORD *)this + 23),
              v3,
              2LL,
              2LL);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5B5,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
    }
    v41 = 0LL;
    v12 = *((_QWORD *)this + 23);
    v13 = *(__int64 (__fastcall **)(__int64, struct _GUID *, __int128 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v12 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
    v14 = v13(v12, v47, &v56, &v41);
    v8 = v14;
    v15 = 0LL;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5BB,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_53:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
      v3 = v47;
LABEL_54:
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      goto LABEL_61;
    }
    v46 = 0LL;
    if ( v41 )
    {
      v16 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v41, (__int64 *)&v46);
      v8 = v16;
      if ( v16 < 0 )
      {
        v17 = 1473LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v16);
LABEL_52:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
        goto LABEL_53;
      }
      v16 = CAppViewManager::UnensureApplication(this, v40, v46);
      v8 = v16;
      if ( v16 < 0 )
      {
        v17 = 1475LL;
        goto LABEL_18;
      }
    }
    v45 = 0LL;
    v43 = 0LL;
    v18 = v56 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v56 == *(_QWORD *)&GUID_NULL.Data1 )
      v18 = *((_QWORD *)&v56 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v18 )
    {
      v19 = *((_QWORD *)this + 25);
      v20 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v19 + 96LL);
      v50 = v56;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      v21 = v20(v19, &v50, &v43);
      v8 = v21;
      v15 = 0LL;
      if ( v21 < 0 )
      {
        v22 = (unsigned int)v21;
        v23 = 1483LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)v22);
LABEL_51:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
        goto LABEL_52;
      }
      v24 = v43;
      if ( !v43 )
      {
        v8 = -2147023728;
        v22 = 2147943568LL;
        v23 = 1484LL;
        goto LABEL_26;
      }
      if ( v41 )
      {
        v40 = 0LL;
        ViewForApplication = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
                               (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v46,
                               (__int64 *)&v40);
        v8 = ViewForApplication;
        if ( ViewForApplication < 0 )
        {
          v26 = 1490LL;
LABEL_32:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v26,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)ViewForApplication);
LABEL_43:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
          goto LABEL_51;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
        ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                               *((IUnknown **)this + 15),
                               (struct IUnknown *)v40,
                               (struct IImmersiveApplication *)&v45,
                               v27);
        v8 = ViewForApplication;
        if ( ViewForApplication < 0 )
        {
          v26 = 1492LL;
          goto LABEL_32;
        }
        v42 = 0LL;
        v44 = 0LL;
        v28 = v40;
        v29 = **(__int64 (__fastcall ***)(HWND, GUID *, __int64 *))v40;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
        v30 = v29(v28, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v44);
        v8 = v30;
        if ( v30 < 0 )
        {
          v31 = 1498LL;
LABEL_37:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v31,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v30);
LABEL_42:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
          goto LABEL_43;
        }
        v32 = v44;
        v33 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v44 + 360LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
        v30 = v33(v32, 0LL, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &v42);
        v8 = v30;
        if ( v30 < 0 )
        {
          v31 = 1499LL;
          goto LABEL_37;
        }
        v34 = v42;
        *(_QWORD *)&v50 = v42;
        if ( v42 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
        v53[0] = 11;
        v53[4] = -1;
        v35 = (*(__int64 (__fastcall **)(__int64, __int128 *, _WORD *))(*(_QWORD *)v34 + 48LL))(
                v34,
                &PKEY_ImmersiveApplication_IsPartOfTabDragOperation,
                v53);
        v8 = v35;
        if ( v35 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5DE,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v35);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          goto LABEL_42;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
        v24 = v43;
        v15 = 0LL;
      }
      if ( v24 )
        goto LABEL_47;
    }
    if ( v10 )
    {
LABEL_47:
      v40 = (HWND)this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v40);
      lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::_lambda_9c39f2de9248b3982b3805f9f5b1e7b6_(
        (__int64)v57,
        &v40,
        &v43,
        &v45,
        v39,
        v47,
        &v41);
      v36 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v36 )
        v15 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_9c39f2de9248b3982b3805f9f5b1e7b6___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_9c39f2de9248b3982b3805f9f5b1e7b6___1_long_(
                (__int64)v36,
                (__int64)v57);
      v42 = v15;
      v37 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 15) + 72LL))(
              *((_QWORD *)this + 15),
              v15,
              1LL);
      v8 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5FD,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v37);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
        lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::__lambda_9c39f2de9248b3982b3805f9f5b1e7b6_(v57);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
        goto LABEL_51;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::__lambda_9c39f2de9248b3982b3805f9f5b1e7b6_(v57);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
    v3 = v47;
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v5 = 0;
  v8 = 0;
LABEL_61:
  if ( v5 )
    CAppViewManager::_ObliterateOperation(this, v3);
  return v8;
}
