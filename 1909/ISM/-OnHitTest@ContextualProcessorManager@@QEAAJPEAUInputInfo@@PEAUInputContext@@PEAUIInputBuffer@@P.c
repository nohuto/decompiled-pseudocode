/*
 * XREFs of ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800F93EC
 * Callers:
 *     ?DoConvergedInputTargeting@DWMInputRouter@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C3210 (-DoConvergedInputTargeting@DWMInputRouter@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffe.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800C3EE0 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180014C54 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800BA720 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??$As@UIInputTarget@@@?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C1878 (--$As@UIInputTarget@@@-$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??0ContextualProcessorInitialState@@QEAA@AEBU0@@Z @ 0x1800C202C (--0ContextualProcessorInitialState@@QEAA@AEBU0@@Z.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x1800F92DC (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorSt.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800F9EAC (-AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     ?Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1800F9FBC (-Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContextualProcessorManager::OnHitTest(
        ContextualProcessorManager *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  const WCHAR *v13; // rbx
  __int64 v14; // rcx
  LPVOID v15; // rax
  TraceLoggingHProvider v16; // r10
  const WCHAR *v17; // rax
  struct ContextualProcessorBuffer *v18; // rbx
  int v19; // eax
  int v20; // eax
  ContextualProcessorInitialState *v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  struct IInputTarget *v24; // rcx
  struct ContextualProcessorBuffer *v26; // [rsp+30h] [rbp-D0h] BYREF
  struct IInputTarget *v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v30[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[48]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v32[48]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v29[1] = -2LL;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v31, L"ContextualProcessingHitTest", 0LL);
  v27 = 0LL;
  v26 = 0LL;
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  v10 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v9 == v10 )
  {
LABEL_21:
    v23 = -2147467259;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v29[0] = 0LL;
    v28 = 0LL;
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v32,
      L"ContextualProcessorHitTest",
      (const struct InputTraceLogging::PerfRegion *)v31);
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v9 + 24LL))(
            *v9,
            a2,
            a3,
            &v28);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_20;
    v13 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 48LL))(*v9);
    v15 = wil::details::static_lazy<InputETW>::get(
            v14,
            lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v15 + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v15 + 1), 1uLL) )
    {
      TlgCreateWsz(&pDesc, v13);
      TlgWrite(v16, &unk_1801A03A4, 0LL, 0LL, 3u, &pData);
    }
    v17 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 48LL))(*v9);
    InputTraceLogging::ContextualProcessing::OnHitTest((__int64)a2, v17, v28);
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v32);
    if ( (unsigned int)(v28 - 1) > 2 )
      goto LABEL_13;
    v18 = v26;
    if ( !v26 )
      break;
LABEL_11:
    v21 = ContextualProcessorInitialState::ContextualProcessorInitialState(
            (ContextualProcessorInitialState *)v30,
            (const struct ContextualProcessorInitialState *)&v28);
    v22 = ContextualProcessorBuffer::AddProcessor(v18, *v9, v21);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        139LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v22);
LABEL_20:
      wil::details::in1diag3::FailFast_Hr(
        v12,
        106LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_21;
    }
    if ( (_DWORD)v28 == 2 )
      goto LABEL_18;
LABEL_13:
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v29);
    if ( ++v9 == v10 )
      goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v26);
  v19 = ContextualProcessorBuffer::Create(a3, a4, &v26);
  if ( v19 >= 0 )
  {
    v20 = Microsoft::WRL::ComPtr<IDCompInputTarget>::As<IInputTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v26,
            (__int64 *)&v27);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        130LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
    v18 = v26;
    goto LABEL_11;
  }
  wil::details::in1diag3::FailFast_Hr(
    retaddr,
    128LL,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
    (const char *)(unsigned int)v19);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v29);
LABEL_14:
  if ( !v27 )
    goto LABEL_21;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v27);
  *a5 = v27;
  v23 = 0;
LABEL_22:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v26);
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *, _QWORD))(*(_QWORD *)v24 + 16LL))(v24, *(_QWORD *)v24);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v31);
  return v23;
}
