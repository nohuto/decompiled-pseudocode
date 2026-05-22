/*
 * XREFs of ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1800071F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081B0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180019108 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18001FC68 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180027B3C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18002BC68 (atexit.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800531B8 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BD50 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18007C170 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CAB8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z @ 0x180143AF8 (-GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z.c)
 *     ?OnDpiScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z @ 0x180143C4C (-OnDpiScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z.c)
 *     ?UpdateDpiScale@Cursor@InputTraceLogging@@SAX_KH@Z @ 0x180144D78 (-UpdateDpiScale@Cursor@InputTraceLogging@@SAX_KH@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DWMCursor::SetPosition(DWMCursor *this, unsigned int a2, unsigned int a3)
{
  const char *v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  int v8; // ebx
  const char *v9; // r9
  PSRWLOCK v10; // rbx
  PVOID Ptr; // r15
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v17; // rdx
  const struct _TlgProvider_t *v18; // rcx
  DWMCursorBroker *v19; // rbx
  int DCompDevice; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  struct IAnimationDataProvider *AnimationDataProvider; // rbx
  void (__fastcall *v24)(struct IAnimationDataProvider *, LPVOID *, int *); // r15
  void (__fastcall ***v25)(_QWORD); // rcx
  int v26; // eax
  LPVOID v27; // rcx
  LPVOID v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  DWMCursorBroker *v38; // rcx
  int v39; // eax
  unsigned int v40; // ebx
  __int64 v41; // rax
  int *cData; // [rsp+20h] [rbp-A9h]
  int cDataa; // [rsp+20h] [rbp-A9h]
  char v44; // [rsp+30h] [rbp-99h] BYREF
  LPVOID Context[2]; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v46; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-79h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-71h] BYREF
  int v49[4]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v50; // [rsp+70h] [rbp-59h]
  int *v51; // [rsp+78h] [rbp-51h] BYREF
  char *v52; // [rsp+80h] [rbp-49h]
  unsigned int v53; // [rsp+88h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-39h] BYREF
  int *v55; // [rsp+B0h] [rbp-19h]
  __int64 v56; // [rsp+B8h] [rbp-11h]
  unsigned int *v57; // [rsp+C0h] [rbp-9h]
  __int64 v58; // [rsp+C8h] [rbp-1h]
  unsigned int *v59; // [rsp+D0h] [rbp+7h]
  __int64 v60; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v50 = -2LL;
  v46 = a3;
  v47 = a2;
  *(_QWORD *)v49 = *((unsigned int *)this + 10);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = qword_1801E14B0;
    qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
  }
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v7 > 4u && TlgKeywordOn(v7, 8uLL) )
  {
    v55 = v49;
    v56 = v17;
    v57 = &v47;
    v58 = 4LL;
    v59 = &v46;
    v60 = 4LL;
    TlgWrite(v18, &unk_1801A19D7, 0LL, 0LL, 5u, &pData);
  }
  *((_DWORD *)this + 22) = a2;
  *((_DWORD *)this + 23) = a3;
  if ( *((_DWORD *)this + 10) == 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), a2, a3);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v6);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    if ( !*((_QWORD *)this + 8) )
      goto LABEL_10;
    Context[0] = 0LL;
    v19 = (DWMCursorBroker *)*((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)Context);
    DCompDevice = DWMCursorBroker::GetDCompDevice(v19, (struct IDCompositionDevice **)Context);
    v21 = DCompDevice;
    if ( DCompDevice >= 0 )
    {
      DCompDevice = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 40LL))(
                      *((_QWORD *)this + 8),
                      2LL);
      v21 = DCompDevice;
      if ( DCompDevice >= 0 )
      {
        DCompDevice = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 8) + 40LL))(
                        *((_QWORD *)this + 8),
                        2LL,
                        1LL);
        v21 = DCompDevice;
        if ( DCompDevice >= 0 )
        {
          DCompDevice = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Context[0] + 24LL))(Context[0]);
          v21 = DCompDevice;
          if ( DCompDevice >= 0 )
          {
            Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)Context);
LABEL_10:
            if ( *((_QWORD *)this + 10) )
            {
              AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
              v24 = *(void (__fastcall **)(struct IAnimationDataProvider *, LPVOID *, int *))(*(_QWORD *)AnimationDataProvider
                                                                                            + 48LL);
              v25 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
              *(_QWORD *)v49 = v25;
              if ( v25 )
                (**v25)(v25);
              v24(AnimationDataProvider, Context, v49);
              LODWORD(cData) = 0;
              v26 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)Context[0] + 1) + 48LL))(
                      (char *)Context[0] + 8,
                      2LL);
              v8 = v26;
              if ( v26 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xD6,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\l"
                                "ib\\dwmcursor.cpp",
                  (const char *)(unsigned int)v26,
                  0);
                v27 = Context[0];
                if ( Context[0] )
                {
                  Context[0] = 0LL;
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v27 + 8LL))(v27);
                }
                goto LABEL_12;
              }
              v28 = Context[0];
              if ( Context[0] )
              {
                Context[0] = 0LL;
                (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v28 + 8LL))(v28);
              }
            }
            v8 = 0;
LABEL_12:
            if ( v8 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x10D,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
                (const char *)(unsigned int)v8,
                (int)cData);
              __debugbreak();
            }
            goto LABEL_13;
          }
          v22 = 266LL;
        }
        else
        {
          v22 = 264LL;
        }
      }
      else
      {
        v22 = 263LL;
      }
    }
    else
    {
      v22 = 262LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)DCompDevice,
      (int)cData);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)Context);
    return v21;
  }
LABEL_13:
  v44 = 0;
  __ExceptionPtrCreate(v49);
  v51 = v49;
  v52 = &v44;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPC3DStateHelper::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_4bfd0116db80ce4255855ce8af72e9c8_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          &v51) )
  {
    if ( __ExceptionPtrToBool(v49) )
    {
      v41 = std::exception_ptr::exception_ptr((std::exception_ptr *)Context, (const struct std::exception_ptr *)v49);
      std::rethrow_exception(v41);
    }
    std::_XGetLastError();
    JUMPOUT(0x18003FA9ALL);
  }
  __ExceptionPtrDestroy(v49);
  v10 = MPC3DStateHelper::s_instance;
  if ( !MPC3DStateHelper::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v9);
    __debugbreak();
  }
  AcquireSRWLockShared(MPC3DStateHelper::s_instance);
  Ptr = v10[3].Ptr;
  ReleaseSRWLockShared(v10);
  if ( !Ptr )
    goto LABEL_16;
  v46 = 0;
  v47 = 0;
  fPending = 0;
  *(_QWORD *)v49 = 0LL;
  cData = v49;
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 448LL) + 64LL))(
          *(_QWORD *)(*((_QWORD *)this + 4) + 448LL),
          0LL,
          0LL,
          0LL);
  if ( v29 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v29,
      (int)v49);
    __debugbreak();
  }
  Context[0] = 0LL;
  if ( *(_QWORD *)v49 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(v49, Context) >= 0 )
  {
    v30 = (*(__int64 (__fastcall **)(LPVOID, unsigned int *))(*(_QWORD *)Context[0] + 32LL))(Context[0], &v46);
    if ( v30 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x123,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v30,
        (int)v49);
      __debugbreak();
    }
    v31 = (*(__int64 (__fastcall **)(LPVOID, unsigned int *))(*(_QWORD *)Context[0] + 40LL))(Context[0], &v47);
    if ( v31 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x124,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v31,
        (int)v49);
      __debugbreak();
    }
    v32 = (*(__int64 (__fastcall **)(LPVOID, WINBOOL *))(*(_QWORD *)Context[0] + 48LL))(Context[0], &fPending);
    if ( v32 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x125,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v32,
        (int)v49);
      __debugbreak();
    }
  }
  v51 = (int *)__PAIR64__(v47, v46);
  v52 = (char *)__PAIR64__(a2, fPending);
  v53 = a3;
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
  v35 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, int **))(*(_QWORD *)PostProcessor + 56LL))(
          PostProcessor,
          &v51);
  v21 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v35,
      (int)v49);
    Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(Context);
    v36 = *(_QWORD *)v49;
    if ( *(_QWORD *)v49 )
    {
      *(_QWORD *)v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    return v21;
  }
  Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(Context);
  v37 = *(_QWORD *)v49;
  if ( *(_QWORD *)v49 )
  {
    *(_QWORD *)v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
LABEL_16:
  v12 = *((_DWORD *)this + 24);
  v13 = *((_QWORD *)this + 4);
  if ( v13 )
  {
    v12 = 100;
    Context[0] = *((LPVOID *)this + 11);
    v14 = *(_QWORD *)(v13 + 480);
    v15 = *(_QWORD *)(v13 + 488);
    if ( v14 != v15 )
    {
      while ( !PtInRect((const RECT *)v14, (POINT)Context[0]) )
      {
        v14 += 84LL;
        if ( v14 == v15 )
          goto LABEL_21;
      }
      v12 = MulDiv(*(unsigned __int16 *)(v14 + 20), 100, 96);
      if ( !v12 )
        v12 = 100;
    }
  }
LABEL_21:
  if ( *((_DWORD *)this + 24) != v12 )
  {
    *((_DWORD *)this + 24) = v12;
    InputTraceLogging::Cursor::UpdateDpiScale(*((unsigned int *)this + 10), v12);
    v38 = (DWMCursorBroker *)*((_QWORD *)this + 4);
    if ( v38 )
    {
      v39 = DWMCursorBroker::OnDpiScaleChanged(v38, this, *((_DWORD *)this + 24));
      v40 = v39;
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B0,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v39,
          (int)cData);
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1A2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)v40,
          cDataa);
      }
    }
  }
  return 0LL;
}
