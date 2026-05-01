/*
 * XREFs of ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180017774
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180018C04 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180064630 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?StashPendingShow@CSingleViewShellExperience@@AEAAXW4ShowOptions@1@@Z @ 0x1800178E0 (-StashPendingShow@CSingleViewShellExperience@@AEAAXW4ShowOptions@1@@Z.c)
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180017918 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180017940 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x1800191E0 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180019860 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180042738 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::ShowViewAsync(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // eax
  const WCHAR *StringRawBuffer; // rsi
  const WCHAR *v7; // r14
  int v8; // eax
  TraceLoggingHProvider v9; // r10
  int cData; // [rsp+28h] [rbp-89h]
  char v11[4]; // [rsp+38h] [rbp-79h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-75h] BYREF
  int v13; // [rsp+40h] [rbp-71h] BYREF
  int v14; // [rsp+44h] [rbp-6Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v16[3]; // [rsp+50h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+98h] [rbp-19h] BYREF
  int *v20; // [rsp+A8h] [rbp-9h]
  int v21; // [rsp+B0h] [rbp-1h]
  int v22; // [rsp+B4h] [rbp+3h]
  __int64 v23; // [rsp+B8h] [rbp+7h]
  int v24; // [rsp+C0h] [rbp+Fh]
  int v25; // [rsp+C4h] [rbp+13h]
  int *v26; // [rsp+C8h] [rbp+17h]
  int v27; // [rsp+D0h] [rbp+1Fh]
  int v28; // [rsp+D4h] [rbp+23h]
  __int64 v29; // [rsp+D8h] [rbp+27h]
  int v30; // [rsp+E0h] [rbp+2Fh]
  int v31; // [rsp+E4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v16[1] = -2LL;
  result = CSingleViewShellExperience::WaitForWindowReadyForPresentation();
  if ( (int)result >= 0 )
  {
    CSingleViewShellExperience::BoostDiskIo((CSingleViewShellExperience *)a1);
    if ( (*(_BYTE *)(a1 + 132) & 0x20) == 0 && !*(_BYTE *)(a1 + 140) )
    {
      *(_BYTE *)(a1 + 140) = 1;
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x457,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v5,
          cData);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
    v7 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_18050F938;
      qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      TlgCreateWsz(&pDesc, v7);
      TlgCreateWsz(&v19, StringRawBuffer);
      v13 = 1;
      v20 = &v13;
      v21 = 4;
      v22 = 0;
      v23 = a1 + 141;
      v24 = 1;
      v25 = 0;
      v14 = 0;
      v26 = &v14;
      v27 = 4;
      v28 = 0;
      v29 = a1 + 140;
      v30 = 1;
      v31 = 0;
      TlgWrite(v9, &unk_18046A8D1, 0LL, 0LL, 8u, &pData);
    }
    CSingleViewShellExperience::StashPendingShow(a1, a2);
    v16[0] = 0LL;
    v11[0] = 1;
    if ( (int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
                a1 + 24,
                v16) >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v16[0] + 72LL))(v16[0], v11);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x281,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v8,
          cData);
    }
    if ( v11[0] )
    {
      CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation((CSingleViewShellExperience *)a1);
      CSingleViewShellExperience::ShowView(a1, a2);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
    return 0LL;
  }
  return result;
}
