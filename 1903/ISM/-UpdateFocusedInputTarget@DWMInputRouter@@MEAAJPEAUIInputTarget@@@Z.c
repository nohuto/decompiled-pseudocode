/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000D0D0
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000C610 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180056080 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x180001E30 (-GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Naviga.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DF64 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x1800147C8 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18002801C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18002BFE8 (atexit.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(DWMInputRouter *this, struct IInputTarget *a2)
{
  int ServerWindowForViewId; // r15d
  __int64 v5; // rbx
  struct IInputTarget *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rsi
  LPVOID v16; // rcx
  __int64 v18; // r12
  __int64 (__fastcall *v19)(struct IInputTarget *, GUID *, LPVOID *); // rsi
  __int64 (__fastcall *v20)(struct IInputTarget *, GUID *, __int64 *); // rsi
  int v21; // eax
  int v22; // eax
  struct IViewHierarchy *ViewHierarchy; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  int (__fastcall *v27)(struct IInputTarget *, GUID *, WINBOOL *); // rsi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  const struct _TlgProvider_t *v31; // rcx
  const struct _TlgProvider_t *v32; // rcx
  UINT32 cData; // [rsp+20h] [rbp-A9h]
  WINBOOL fPending[2]; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-8Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-89h] BYREF
  __int64 v38; // [rsp+48h] [rbp-81h] BYREF
  _QWORD v39[3]; // [rsp+50h] [rbp-79h] BYREF
  _OWORD v40[2]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v41; // [rsp+88h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-39h] BYREF
  LPVOID *p_Context; // [rsp+B0h] [rbp-19h]
  __int64 v44; // [rsp+B8h] [rbp-11h]
  WINBOOL *v45; // [rsp+C0h] [rbp-9h]
  __int64 v46; // [rsp+C8h] [rbp-1h]
  _QWORD *v47; // [rsp+D0h] [rbp+7h]
  __int64 v48; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v39[1] = -2LL;
  ServerWindowForViewId = 0;
  v5 = *((_QWORD *)this + 40);
  v39[2] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (struct IInputTarget *)*((_QWORD *)this + 40);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct IInputTarget *)*((_QWORD *)this + 40);
    }
    *((_QWORD *)this + 40) = a2;
    if ( v6 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x3DDA1) != 0 )
  {
    v18 = 0LL;
    memset_0(v40, 0, 0x28uLL);
    if ( a2 )
    {
      Context = 0LL;
      v19 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, LPVOID *))a2;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&Context);
      ServerWindowForViewId = v19(a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &Context);
      if ( ServerWindowForViewId >= 0 )
      {
        v38 = 0LL;
        v20 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2;
        Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v38);
        v21 = v20(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v38);
        if ( v21 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x7B3,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v21,
            cData);
          __debugbreak();
        }
        v35 = 0;
        v22 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 48LL))(v38, &v35);
        if ( v22 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x7B6,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v22,
            cData);
          __debugbreak();
        }
        if ( v35 )
        {
          *(_QWORD *)fPending = 0LL;
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)fPending);
          ViewHierarchy = ISMStatics::GetViewHierarchy();
          ServerWindowForViewId = ViewHelper::GetServerWindowForViewId(
                                    ViewHierarchy,
                                    v35,
                                    (struct Navigation::Server::IServerWindow **)fPending);
          if ( ServerWindowForViewId >= 0 )
          {
            v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 24LL))(
                    *(_QWORD *)fPending,
                    &v36);
            if ( v24 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x7CB,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
                (const char *)(unsigned int)v24,
                cData);
              __debugbreak();
            }
            v18 = (int)v36;
            v25 = (*(__int64 (__fastcall **)(LPVOID, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)Context + 72LL))(
                    Context,
                    &pData);
            v40[0] = *(_OWORD *)v25;
            v40[1] = *(_OWORD *)(v25 + 16);
            v41 = *(_QWORD *)(v25 + 32);
          }
          else
          {
            ServerWindowForViewId = 0;
          }
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)fPending);
        }
        Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v38);
      }
      else
      {
        ServerWindowForViewId = 0;
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&Context);
    }
    MITSetForegroundRoutingInfo(v18, v40);
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
  {
    LODWORD(v38) = 0;
    v35 = 0;
    if ( a2 )
    {
      *(_QWORD *)fPending = 0LL;
      v7 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2)(
             a2,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             fPending);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7E2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v7,
          cData);
        __debugbreak();
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 72LL))(*(_QWORD *)fPending, &v38);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7E3,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v8,
          cData);
        __debugbreak();
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 80LL))(*(_QWORD *)fPending, &v35);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7E4,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v9,
          cData);
LABEL_59:
        Context = &qword_1801E1488;
        qword_1801E1488 = &RawInputProvidersContinuousTracing::`vftable';
        qword_1801E14A0 = (struct _TlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801E1488, qword_1801E14A0);
        InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_1801E1488);
        goto LABEL_21;
      }
      v10 = *(_QWORD *)fPending;
      if ( *(_QWORD *)fPending )
      {
        *(_QWORD *)fPending = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    MITSetInputDelegationMode((unsigned int)v38, v35);
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputETW::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
    goto LABEL_59;
LABEL_21:
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u && TlgKeywordOn(v11, 1uLL) )
  {
    LODWORD(v38) = 0;
    v35 = 0;
    v36 = 0;
    if ( a2 )
    {
      *(_QWORD *)fPending = 0LL;
      v27 = **(int (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2;
      Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease((__int64 *)fPending);
      if ( v27(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, fPending) >= 0 )
      {
        v28 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 32LL))(*(_QWORD *)fPending, &v38);
        if ( v28 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x92,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\inputetw.tlh",
            (const char *)(unsigned int)v28,
            cData);
          __debugbreak();
        }
        v29 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 40LL))(
                *(_QWORD *)fPending,
                &v35);
        if ( v29 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x93,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\inputetw.tlh",
            (const char *)(unsigned int)v29,
            cData);
          __debugbreak();
        }
        v30 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 48LL))(
                *(_QWORD *)fPending,
                &v36);
        if ( v30 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x94,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\inputetw.tlh",
            (const char *)(unsigned int)v30,
            cData);
      }
      Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease((__int64 *)fPending);
    }
    v31 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputETW>::get(
                                              v26,
                                              lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                          + 8);
    if ( *(_DWORD *)v31 > 5u && TlgKeywordOn(v31, 1uLL) )
    {
      Context = (LPVOID)(unsigned int)v38;
      p_Context = &Context;
      v44 = 8LL;
      *(_QWORD *)fPending = v35;
      v45 = fPending;
      v46 = 8LL;
      v39[0] = v36;
      v47 = v39;
      v48 = 8LL;
      TlgWrite(v32, &unk_18019DD6C, 0LL, 0LL, 5u, &pData);
    }
  }
  v12 = *((_QWORD *)this + 41);
  if ( v12
    && (v13 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInputTarget *))(*(_QWORD *)v12 + 24LL))(v12, v5, a2),
        v14 = v13,
        v13 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7EF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v13,
      cData);
  }
  else
  {
    v15 = *((_QWORD *)this + 49);
    v36 = 0;
    v39[0] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    Context = 0LL;
    if ( a2
      && (**(int (__fastcall ***)(struct IInputTarget *, GUID *, LPVOID *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &Context) >= 0 )
    {
      (*(void (__fastcall **)(LPVOID, unsigned int *))(*(_QWORD *)Context + 48LL))(Context, &v36);
    }
    *(_DWORD *)(v15 + 72) = v36;
    v16 = Context;
    if ( Context )
    {
      Context = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
    v14 = ServerWindowForViewId;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v14;
}
