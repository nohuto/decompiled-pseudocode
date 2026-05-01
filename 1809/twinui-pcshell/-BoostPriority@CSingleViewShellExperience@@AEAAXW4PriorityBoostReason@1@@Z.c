/*
 * XREFs of ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1800638EC
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180061B90 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001432C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180017918 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x180063A44 (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall CSingleViewShellExperience::BoostPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  struct _TP_TIMER *v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const WCHAR *StringRawBuffer; // rdi
  PCWSTR v12; // rax
  const WCHAR *v13; // r14
  BOOLEAN result; // al
  __int64 v15; // rdx
  TraceLoggingHProvider v16; // r10
  int cData; // [rsp+28h] [rbp-79h]
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-61h] BYREF
  int v20; // [rsp+44h] [rbp-5Dh] BYREF
  int v21; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+88h] [rbp-19h] BYREF
  int *v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+A0h] [rbp-1h]
  int v27; // [rsp+A4h] [rbp+3h]
  __int64 v28; // [rsp+A8h] [rbp+7h]
  int v29; // [rsp+B0h] [rbp+Fh]
  int v30; // [rsp+B4h] [rbp+13h]
  int *v31; // [rsp+B8h] [rbp+17h]
  int v32; // [rsp+C0h] [rbp+1Fh]
  int v33; // [rsp+C4h] [rbp+23h]
  __int64 v34; // [rsp+C8h] [rbp+27h]
  int v35; // [rsp+D0h] [rbp+2Fh]
  int v36; // [rsp+D4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v4 = a2;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      goto LABEL_9;
    if ( (*(_BYTE *)(a1 + 132) & 0x20) != 0 )
      goto LABEL_9;
    if ( *(_BYTE *)(a1 + 140) )
      goto LABEL_9;
    *(_BYTE *)(a1 + 140) = a2;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v8 >= 0 )
      goto LABEL_9;
    v15 = 1111LL;
LABEL_20:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8,
      cData);
    goto LABEL_9;
  }
  CSingleViewShellExperience::BoostDiskIo((CSingleViewShellExperience *)a1, a2, a3, a4, cData);
  if ( !*(_BYTE *)(a1 + 141) )
  {
    v6 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 120LL))(v6, a1);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x41F,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v7,
        cData);
  }
  v8 = CSingleViewShellExperience::EnsureUnboostCallback((CSingleViewShellExperience *)a1);
  if ( v8 < 0 )
  {
    v15 = 1058LL;
    goto LABEL_20;
  }
  pftDueTime = (struct _FILETIME)-300000000LL;
  v9 = *(struct _TP_TIMER **)(a1 + 144);
  if ( v9
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_40342370c51e0bf7d97df89dc2547852_::_lambda_invoker_cdecl_,
                            (PVOID)a1,
                            0LL),
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          (struct _TP_TIMER **)(a1 + 144),
          ThreadpoolTimer),
        (v9 = *(struct _TP_TIMER **)(a1 + 144)) != 0LL) )
  {
    SetThreadpoolTimer(v9, &pftDueTime, 0, 0);
  }
LABEL_9:
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v12 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  pftDueTime = 0LL;
  v13 = v12;
  if ( InitOnceBeginInitialize(
         &`SingleViewExperienceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         (LPVOID *)&pftDueTime)
    && fPending )
  {
    pftDueTime = (struct _FILETIME)qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  result = pftDueTime.dwLowDateTime;
  if ( **(_DWORD **)(*(_QWORD *)&pftDueTime + 8LL) > 5u )
  {
    result = TlgKeywordOn(*(TraceLoggingHProvider *)(*(_QWORD *)&pftDueTime + 8LL), 0x200000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, v13);
      TlgCreateWsz(&v24, StringRawBuffer);
      v27 = 0;
      v30 = 0;
      v21 = 0;
      v33 = 0;
      v36 = 0;
      v25 = &v20;
      v28 = a1 + 141;
      v31 = &v21;
      v34 = a1 + 140;
      v20 = v4;
      v26 = 4;
      v29 = 1;
      v32 = 4;
      v35 = 1;
      return TlgWrite(v16, &unk_18046A8D1, 0LL, 0LL, 8u, &pData);
    }
  }
  return result;
}
