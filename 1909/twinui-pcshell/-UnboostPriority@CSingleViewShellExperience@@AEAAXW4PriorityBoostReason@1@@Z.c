/*
 * XREFs of ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180015158
 * Callers:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x1800154A8 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C678 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_c4af598836494ce840533c25bf9d8a3e___1_IInspectable___IInspectable___::Invoke @ 0x180430260 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180430260.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180430BA0 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 * Callees:
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180013D38 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180045F20 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall CSingleViewShellExperience::UnboostPriority(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  const WCHAR *StringRawBuffer; // rsi
  PCWSTR v8; // rax
  const WCHAR *v9; // r14
  BOOLEAN result; // al
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  TraceLoggingHProvider v14; // r10
  int cData; // [rsp+28h] [rbp-79h]
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  int v17; // [rsp+3Ch] [rbp-65h] BYREF
  int v18; // [rsp+40h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+88h] [rbp-19h] BYREF
  int *v23; // [rsp+98h] [rbp-9h]
  int v24; // [rsp+A0h] [rbp-1h]
  int v25; // [rsp+A4h] [rbp+3h]
  __int64 v26; // [rsp+A8h] [rbp+7h]
  int v27; // [rsp+B0h] [rbp+Fh]
  int v28; // [rsp+B4h] [rbp+13h]
  int *v29; // [rsp+B8h] [rbp+17h]
  int v30; // [rsp+C0h] [rbp+1Fh]
  int v31; // [rsp+C4h] [rbp+23h]
  __int64 v32; // [rsp+C8h] [rbp+27h]
  int v33; // [rsp+D0h] [rbp+2Fh]
  int v34; // [rsp+D4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( *(_BYTE *)(a1 + 140) )
      {
        *(_BYTE *)(a1 + 140) = 0;
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
        if ( v12 < 0 )
        {
          v13 = 1183LL;
          goto LABEL_14;
        }
      }
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      a1 + 144,
      0LL);
    CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1, v4, v5, v6, cData);
    if ( *(_BYTE *)(a1 + 141) )
    {
      v11 = *(_QWORD *)(a1 + 88);
      *(_BYTE *)(a1 + 141) = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 128LL))(v11, a1);
      if ( v12 < 0 )
      {
        v13 = 1174LL;
LABEL_14:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v13,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v12,
          cData);
      }
    }
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v8 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  Context = 0LL;
  v9 = v8;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805C20F0;
    qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
  }
  result = (unsigned __int8)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    result = TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, v9);
      TlgCreateWsz(&v22, StringRawBuffer);
      v25 = 0;
      v28 = 0;
      v18 = 0;
      v31 = 0;
      v34 = 0;
      v23 = &v17;
      v17 = a2;
      v26 = a1 + 141;
      v29 = &v18;
      v32 = a1 + 140;
      v24 = 4;
      v27 = 1;
      v30 = 4;
      v33 = 1;
      return TlgWrite(v14, &unk_18050A686, 0LL, 0LL, 8u, &pData);
    }
  }
  return result;
}
