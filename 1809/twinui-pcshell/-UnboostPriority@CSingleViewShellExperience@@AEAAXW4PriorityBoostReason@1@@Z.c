/*
 * XREFs of ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180017534
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180061B90 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18006EDDC (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke @ 0x1803AE970 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1803AE970.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1803AF248 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001432C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180019AE0 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall CSingleViewShellExperience::UnboostPriority(__int64 a1, int a2)
{
  const WCHAR *StringRawBuffer; // rsi
  PCWSTR v5; // rax
  const WCHAR *v6; // r14
  BOOLEAN result; // al
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  TraceLoggingHProvider v11; // r10
  int cData; // [rsp+28h] [rbp-79h]
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  int v14; // [rsp+3Ch] [rbp-65h] BYREF
  int v15; // [rsp+40h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+88h] [rbp-19h] BYREF
  int *v20; // [rsp+98h] [rbp-9h]
  int v21; // [rsp+A0h] [rbp-1h]
  int v22; // [rsp+A4h] [rbp+3h]
  __int64 v23; // [rsp+A8h] [rbp+7h]
  int v24; // [rsp+B0h] [rbp+Fh]
  int v25; // [rsp+B4h] [rbp+13h]
  int *v26; // [rsp+B8h] [rbp+17h]
  int v27; // [rsp+C0h] [rbp+1Fh]
  int v28; // [rsp+C4h] [rbp+23h]
  __int64 v29; // [rsp+C8h] [rbp+27h]
  int v30; // [rsp+D0h] [rbp+2Fh]
  int v31; // [rsp+D4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( *(_BYTE *)(a1 + 140) )
      {
        *(_BYTE *)(a1 + 140) = 0;
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
        if ( v9 < 0 )
        {
          v10 = 1152LL;
          goto LABEL_14;
        }
      }
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)(a1 + 144),
      0LL);
    CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1);
    if ( *(_BYTE *)(a1 + 141) )
    {
      v8 = *(_QWORD *)(a1 + 88);
      *(_BYTE *)(a1 + 141) = 0;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 128LL))(v8, a1);
      if ( v9 < 0 )
      {
        v10 = 1143LL;
LABEL_14:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v10,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v9,
          cData);
      }
    }
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v5 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  Context = 0LL;
  v6 = v5;
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
  result = (unsigned __int8)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    result = TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, v6);
      TlgCreateWsz(&v19, StringRawBuffer);
      v22 = 0;
      v25 = 0;
      v15 = 0;
      v28 = 0;
      v31 = 0;
      v20 = &v14;
      v14 = a2;
      v23 = a1 + 141;
      v26 = &v15;
      v29 = a1 + 140;
      v21 = 4;
      v24 = 1;
      v27 = 4;
      v30 = 1;
      return TlgWrite(v11, &unk_18046A82B, 0LL, 0LL, 8u, &pData);
    }
  }
  return result;
}
