/*
 * XREFs of ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x18011249C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_277c662c7ed9fcbf55656d98f0e29d57___1_long_::Invoke @ 0x18008ADB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18008ADB0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800658D8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x180071B38 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180078A9C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___ @ 0x18008A694 (Microsoft--WRL--Callback_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___.c)
 *     _lambda_a6a1a1620cd1726c3c4e0031d0123816_::_lambda_a6a1a1620cd1726c3c4e0031d0123816_ @ 0x18008A990 (_lambda_a6a1a1620cd1726c3c4e0031d0123816_--_lambda_a6a1a1620cd1726c3c4e0031d0123816_.c)
 *     _lambda_a6a1a1620cd1726c3c4e0031d0123816_::__lambda_a6a1a1620cd1726c3c4e0031d0123816_ @ 0x18008AAC8 (_lambda_a6a1a1620cd1726c3c4e0031d0123816_--__lambda_a6a1a1620cd1726c3c4e0031d0123816_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18010F9A4 (-UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180110E98 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CAppViewManager::_WindowProvidedWorker(CAppViewManager *this, struct _GUID *a2, HWND a3)
{
  const struct _GUID *v3; // rbx
  char v5; // r12
  RTL_SRWLOCK *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  char v10; // r15
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  int ViewForApplication; // eax
  __int64 v23; // rdx
  struct IApplicationView **v24; // r9
  HWND v25; // rbx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rbx
  int v30; // eax
  int v31; // eax
  int v33[2]; // [rsp+48h] [rbp-C0h] BYREF
  HWND v34; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  struct IImmersiveApplicationInternal *v40; // [rsp+80h] [rbp-88h] BYREF
  struct _GUID *v41; // [rsp+88h] [rbp-80h]
  int v42; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v43[4]; // [rsp+94h] [rbp-74h] BYREF
  __int128 v44; // [rsp+98h] [rbp-70h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-60h]
  PSRWLOCK v46; // [rsp+B0h] [rbp-58h]
  _WORD v47[12]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v48; // [rsp+D0h] [rbp-38h]
  char v49; // [rsp+E0h] [rbp-28h]
  __int64 v50[8]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v51; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v45 = -2LL;
  v34 = a3;
  v3 = a2;
  v41 = a2;
  *(_QWORD *)&v51 = this;
  *((_QWORD *)&v51 + 1) = a2;
  v48 = v51;
  v5 = 1;
  v49 = 1;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  v46 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         v3,
         &v42);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1466LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_51;
  }
  if ( v42 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, _BYTE *))(**((_QWORD **)this + 23) + 48LL))(
           *((_QWORD *)this + 23),
           v3,
           v43);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1470LL;
      goto LABEL_6;
    }
    v10 = v43[0] & 1;
    LOBYTE(v33[0]) = v43[0] & 1;
    if ( (v43[0] & 1) == 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
              *((_QWORD *)this + 23),
              v3,
              2LL,
              2LL);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1477LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
    }
    v36 = 0LL;
    v12 = *((_QWORD *)this + 23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
    v13 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int128 *, __int64 *))(*(_QWORD *)v12 + 56LL))(
            v12,
            v41,
            &v51,
            &v36);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5CB,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_50:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      v3 = v41;
LABEL_51:
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      goto LABEL_59;
    }
    v40 = 0LL;
    if ( v36 )
    {
      v14 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v36, (__int64 *)&v40);
      v8 = v14;
      if ( v14 < 0 )
      {
        v15 = 1489LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v14);
LABEL_49:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v40);
        goto LABEL_50;
      }
      v14 = CAppViewManager::UnensureApplication(this, v34, v40);
      v8 = v14;
      if ( v14 < 0 )
      {
        v15 = 1491LL;
        goto LABEL_17;
      }
    }
    v39 = 0LL;
    v37 = 0LL;
    v16 = v51 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v51 == *(_QWORD *)&GUID_NULL.Data1 )
      v16 = *((_QWORD *)&v51 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v16 )
    {
      v44 = v51;
      v17 = *((_QWORD *)this + 25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      v18 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v17 + 96LL))(v17, &v44, &v37);
      v8 = v18;
      if ( v18 < 0 )
      {
        v19 = (unsigned int)v18;
        v20 = 1499LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)v19);
LABEL_48:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
        goto LABEL_49;
      }
      v21 = v37;
      if ( !v37 )
      {
        v8 = -2147023728;
        v19 = 2147943568LL;
        v20 = 1500LL;
        goto LABEL_25;
      }
      if ( v36 )
      {
        v34 = 0LL;
        ViewForApplication = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v40, (__int64 *)&v34);
        v8 = ViewForApplication;
        if ( ViewForApplication < 0 )
        {
          v23 = 1506LL;
LABEL_31:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v23,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)ViewForApplication);
LABEL_42:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
          goto LABEL_48;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
        ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                               *((IUnknown **)this + 15),
                               (struct IUnknown *)v34,
                               (struct IImmersiveApplication *)&v39,
                               v24);
        v8 = ViewForApplication;
        if ( ViewForApplication < 0 )
        {
          v23 = 1508LL;
          goto LABEL_31;
        }
        v35 = 0LL;
        v38 = 0LL;
        v25 = v34;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
        v26 = (**(__int64 (__fastcall ***)(HWND, GUID *, __int64 *))v25)(
                v25,
                &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                &v38);
        v8 = v26;
        if ( v26 < 0 )
        {
          v27 = 1514LL;
LABEL_36:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v27,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v26);
LABEL_41:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
          goto LABEL_42;
        }
        v28 = v38;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v28 + 360LL))(
                v28,
                0LL,
                &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
                &v35);
        v8 = v26;
        if ( v26 < 0 )
        {
          v27 = 1515LL;
          goto LABEL_36;
        }
        v29 = v35;
        *(_QWORD *)&v44 = v35;
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
        v47[0] = 11;
        v47[4] = -1;
        v30 = (*(__int64 (__fastcall **)(__int64, __int128 *, _WORD *))(*(_QWORD *)v29 + 48LL))(
                v29,
                &PKEY_ImmersiveApplication_IsPartOfTabDragOperation,
                v47);
        v8 = v30;
        if ( v30 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5EE,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v30);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          goto LABEL_41;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
        v21 = v37;
      }
      if ( v21 )
        goto LABEL_46;
    }
    if ( v10 )
    {
LABEL_46:
      v34 = (HWND)this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
      v3 = v41;
      lambda_a6a1a1620cd1726c3c4e0031d0123816_::_lambda_a6a1a1620cd1726c3c4e0031d0123816_(
        (__int64)v50,
        &v34,
        &v37,
        &v39,
        v33,
        v41,
        &v36);
      Microsoft::WRL::Callback_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___(&v35, (__int64)v50);
      v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 15) + 72LL))(
              *((_QWORD *)this + 15),
              v35,
              1LL);
      v8 = v31;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x613,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v31);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        lambda_a6a1a1620cd1726c3c4e0031d0123816_::__lambda_a6a1a1620cd1726c3c4e0031d0123816_(v50);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
        goto LABEL_48;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      lambda_a6a1a1620cd1726c3c4e0031d0123816_::__lambda_a6a1a1620cd1726c3c4e0031d0123816_(v50);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    }
    else
    {
      v3 = v41;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v40);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v5 = 0;
  v8 = 0;
LABEL_59:
  if ( v5 )
    CAppViewManager::_ObliterateOperation(this, v3);
  return v8;
}
