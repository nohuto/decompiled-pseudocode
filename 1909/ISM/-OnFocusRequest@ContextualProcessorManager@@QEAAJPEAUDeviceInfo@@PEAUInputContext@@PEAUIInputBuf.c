/*
 * XREFs of ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18000B940
 * Callers:
 *     ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18000B6E0 (-GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PE.c)
 *     ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800C3D30 (-GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PE.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x18000BF60 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014BAC (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001D4EC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001D7EC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CA-AW4wil_.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180027B3C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18002BC68 (atexit.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x1800F96F8 (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ContextualProcessorManager::OnFocusRequest(
        ContextualProcessorManager *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct InputContext *v5; // r14
  struct DeviceInfo *v6; // rdi
  ContextualProcessorManager *v7; // rbx
  struct IInputTarget **v8; // r15
  unsigned int v9; // esi
  BOOL inited; // eax
  void *v11; // rdx
  const struct _TlgProvider_t *v12; // rcx
  ContextualProcessorManager **v13; // r12
  ContextualProcessorManager **v14; // r13
  const struct _TlgProvider_t *v15; // rcx
  int v16; // eax
  const WCHAR *v17; // rbx
  const WCHAR *v18; // rdi
  unsigned int v19; // ecx
  struct DeviceInfo *v20; // rsi
  struct DeviceInfo *v21; // rax
  struct DeviceInfo *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 (__fastcall *v25)(struct DeviceInfo *, GUID *, struct DeviceInfo **); // rdi
  struct DeviceInfo *v26; // rcx
  int v27; // eax
  ContextualProcessorManager *v28; // rdi
  unsigned int v29; // r14d
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  struct DeviceInfo *v33; // rcx
  unsigned int v34; // ebx
  struct DeviceInfo *v35; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  TraceLoggingHProvider v39; // r10
  __int64 v40; // rcx
  __int64 v41; // rax
  TraceLoggingHProvider v42; // r10
  TraceLoggingHProvider v43; // r10
  const CHAR *v44; // rax
  TraceLoggingHProvider v45; // r10
  TraceLoggingHProvider v46; // r10
  TraceLoggingHProvider v47; // r10
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  WINBOOL v49; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v50; // [rsp+34h] [rbp-CCh]
  int v51; // [rsp+38h] [rbp-C8h]
  struct DeviceInfo *v52; // [rsp+40h] [rbp-C0h] BYREF
  struct DeviceInfo *v53; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B0h] BYREF
  const struct _TlgProvider_t *v55; // [rsp+58h] [rbp-A8h] BYREF
  WINBOOL fPending; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL v57; // [rsp+64h] [rbp-9Ch] BYREF
  WINBOOL v58; // [rsp+68h] [rbp-98h] BYREF
  WINBOOL v59; // [rsp+6Ch] [rbp-94h] BYREF
  WINBOOL v60; // [rsp+70h] [rbp-90h] BYREF
  int v61; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v62; // [rsp+78h] [rbp-88h]
  LPVOID Context; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v64; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v65; // [rsp+90h] [rbp-70h] BYREF
  LPVOID v66; // [rsp+98h] [rbp-68h] BYREF
  LPVOID v67; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-58h] BYREF
  LPVOID v69; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v70; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-40h]
  ContextualProcessorManager *v72; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-30h]
  struct IInputTarget **v74; // [rsp+D8h] [rbp-28h]
  struct DeviceInfo **v75; // [rsp+E0h] [rbp-20h]
  struct InputContext *v76; // [rsp+E8h] [rbp-18h]
  ContextualProcessorManager *v77; // [rsp+F0h] [rbp-10h]
  struct IInputTarget **v78; // [rsp+F8h] [rbp-8h]
  struct DeviceInfo *v79; // [rsp+100h] [rbp+0h]
  __int64 v80; // [rsp+108h] [rbp+8h]
  __int64 v81; // [rsp+110h] [rbp+10h]
  LPCWSTR v82; // [rsp+118h] [rbp+18h]
  GUID pActivityId; // [rsp+120h] [rbp+20h] BYREF
  GUID v84; // [rsp+130h] [rbp+30h] BYREF
  LPCGUID v85; // [rsp+140h] [rbp+40h]
  LPCWSTR pwsz; // [rsp+148h] [rbp+48h]
  GUID ActivityId; // [rsp+150h] [rbp+50h] BYREF
  __int64 v88; // [rsp+160h] [rbp+60h]
  __int64 v89; // [rsp+168h] [rbp+68h]
  LPCGUID pRelatedActivityId; // [rsp+170h] [rbp+70h]
  EVENT_DATA_DESCRIPTOR v91; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+1B0h] [rbp+B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+E0h] BYREF
  EVENT_DATA_DESCRIPTOR v96; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+210h] [rbp+110h] BYREF
  EVENT_DATA_DESCRIPTOR v98; // [rsp+220h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+240h] [rbp+140h] BYREF
  EVENT_DATA_DESCRIPTOR v100; // [rsp+250h] [rbp+150h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v101; // [rsp+270h] [rbp+170h] BYREF
  EVENT_DATA_DESCRIPTOR v102; // [rsp+280h] [rbp+180h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+2A0h] [rbp+1A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  v81 = -2LL;
  v5 = a3;
  v76 = a3;
  v6 = a2;
  v79 = a2;
  v7 = this;
  v77 = this;
  v8 = a5;
  v78 = a5;
  pwsz = L"ContextualProcessingFocusRequest";
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v9 = 0;
  pRelatedActivityId = 0LL;
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  v11 = &`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
  if ( inited && fPending )
  {
    Context = qword_1801E14B0;
    qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
  }
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v12 )
  {
    if ( TlgKeywordOn(v12, 1uLL) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v38 = wil::details::static_lazy<InputTraceLogging>::get(
              v37,
              lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v38 + 8) > 6u )
      {
        if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v38 + 8), 1uLL) )
        {
          TlgCreateWsz(&pDesc, pwsz);
          TlgWrite(v39, &unk_18019D8C8, &ActivityId, pRelatedActivityId, 3u, &pData);
        }
      }
    }
  }
  v53 = 0LL;
  v52 = 0LL;
  v51 = 0;
  v13 = (ContextualProcessorManager **)*((_QWORD *)v7 + 2);
  v14 = (ContextualProcessorManager **)*((_QWORD *)v7 + 3);
  if ( v13 != v14 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v55 = 0LL;
      v54 = 0LL;
      v82 = L"ContextualProcessorFocusRequest";
      *(_QWORD *)&pActivityId.Data1 = 0LL;
      *(_QWORD *)pActivityId.Data4 = 0LL;
      v84 = ActivityId;
      v85 = &v84;
      v64 = 0LL;
      if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &v57, &v64) && v57 )
      {
        v7 = (ContextualProcessorManager *)qword_1801E14B0;
        v64 = qword_1801E14B0;
        qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
        qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
        InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
      }
      v15 = (const struct _TlgProvider_t *)*((_QWORD *)v64 + 1);
      if ( *(_DWORD *)v15 )
      {
        if ( TlgKeywordOn(v15, 1uLL) )
        {
          EventActivityIdControl(3u, &pActivityId);
          v41 = wil::details::static_lazy<InputTraceLogging>::get(
                  v40,
                  lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
          if ( **(_DWORD **)(v41 + 8) > 6u )
          {
            if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v41 + 8), 1uLL) )
            {
              TlgCreateWsz(&v97, v82);
              TlgWrite(v42, &unk_18019D8C8, &pActivityId, v85, 3u, &v96);
            }
          }
        }
      }
      v16 = (*(__int64 (__fastcall **)(ContextualProcessorManager *, struct DeviceInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v13 + 32LL))(
              *v13,
              v6,
              v5,
              &v54);
      if ( v16 < 0 )
        break;
      v17 = (const WCHAR *)(*(__int64 (__fastcall **)(ContextualProcessorManager *))(*(_QWORD *)*v13 + 48LL))(*v13);
      v65 = 0LL;
      if ( InitOnceBeginInitialize(&`InputETW::Instance'::`2'::wrapper, 0, &v58, &v65) && v58 )
      {
        v65 = &qword_1801E1488;
        qword_1801E1488 = &RawInputProvidersContinuousTracing::`vftable';
        qword_1801E14A0 = (struct _TlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801E1488, qword_1801E14A0);
        InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_1801E1488);
      }
      if ( **((_DWORD **)v65 + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v65 + 1), 1uLL) )
      {
        TlgCreateWsz(&v99, v17);
        TlgWrite(v43, &unk_1801A0366, 0LL, 0LL, 3u, &v98);
      }
      v7 = (ContextualProcessorManager *)(unsigned int)v54;
      v18 = (const WCHAR *)(*(__int64 (__fastcall **)(ContextualProcessorManager *))(*(_QWORD *)*v13 + 48LL))(*v13);
      v66 = 0LL;
      if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &v59, &v66) && v59 )
      {
        v66 = qword_1801E14B0;
        qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
        qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
        InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
      }
      if ( **((_DWORD **)v66 + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v66 + 1), 0x400uLL) )
      {
        TlgCreateWsz(&v92, v18);
        v44 = (const CHAR *)InputTraceLogging::ProcessorStateToString((unsigned int)v7);
        TlgCreateSz(&v93, v44);
        TlgWrite(v45, &unk_1801A03DD, 0LL, 0LL, 4u, &v91);
      }
      v67 = 0LL;
      if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &v49, &v67) && v49 )
      {
        v7 = (ContextualProcessorManager *)qword_1801E14B0;
        v67 = qword_1801E14B0;
        qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
        qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
        InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
      }
      if ( **((_DWORD **)v67 + 1) > 6u && TlgKeywordOn(*((TraceLoggingHProvider *)v67 + 1), 1uLL) )
      {
        TlgCreateWsz(&v101, v82);
        TlgWrite(v46, &unk_18019D8E7, &pActivityId, v85, 3u, &v100);
      }
      v19 = v54;
      if ( (unsigned int)(v54 - 1) <= 2 )
      {
        v20 = v52;
        if ( !v52 )
        {
          v75 = &v52;
          v21 = (struct DeviceInfo *)malloc(0x70uLL);
          v22 = v21;
          if ( v21 )
          {
            memset_0(v21, 0, 0x70uLL);
            v23 = *(_QWORD *)v5;
            *((_QWORD *)v22 + 3) = &RefCountedObject::`vftable';
            *((_DWORD *)v22 + 8) = 1;
            *(_QWORD *)v22 = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
            *((_QWORD *)v22 + 1) = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
            *((_QWORD *)v22 + 2) = &ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferTarget'};
            *((_QWORD *)v22 + 3) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
            *((_QWORD *)v22 + 5) = 0LL;
            *((_QWORD *)v22 + 6) = 0LL;
            *((_QWORD *)v22 + 7) = 0LL;
            *((_QWORD *)v22 + 8) = 0LL;
            *((_QWORD *)v22 + 9) = 0LL;
            *((_QWORD *)v22 + 10) = 0LL;
            *((_QWORD *)v22 + 11) = v5;
            *((_QWORD *)v22 + 12) = v23;
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
            *((_QWORD *)v22 + 13) = 0LL;
            v52 = v22;
            v24 = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
              (const char *)0x8007000ELL,
              cData);
            v24 = 2147942414LL;
            v22 = v52;
          }
          if ( (int)v24 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xD8,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualproc"
                            "essormanager.cpp",
              (const char *)v24,
              cData);
LABEL_90:
            Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v55);
            v9 = v51;
LABEL_56:
            v8 = v78;
            v7 = v77;
            goto LABEL_57;
          }
          v25 = **(__int64 (__fastcall ***)(struct DeviceInfo *, GUID *, struct DeviceInfo **))v22;
          v26 = v53;
          if ( v53 )
          {
            v53 = 0LL;
            (*(void (__fastcall **)(struct DeviceInfo *))(*(_QWORD *)v26 + 16LL))(v26);
          }
          v27 = v25(v22, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, &v53);
          if ( v27 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xDA,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualproc"
                            "essormanager.cpp",
              (const char *)(unsigned int)v27,
              cData);
            __debugbreak();
          }
          v20 = v52;
          v19 = v54;
        }
        v70 = v19;
        v71 = (__int64)v55;
        if ( v55 )
          (*(void (__fastcall **)(const struct _TlgProvider_t *))(*(_QWORD *)v55 + 8LL))(v55);
        v75 = (struct DeviceInfo **)&v70;
        v28 = *v13;
        v7 = 0LL;
        v72 = 0LL;
        v73 = 0LL;
        v74 = 0LL;
        if ( v28 )
        {
          (*(void (__fastcall **)(ContextualProcessorManager *))(*(_QWORD *)v28 + 8LL))(v28);
          v80 = 0LL;
          v7 = v28;
          v72 = v28;
        }
        v29 = v70;
        v73 = v70;
        if ( v71 )
        {
          v8 = (struct IInputTarget **)v71;
          v68 = v71;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v68);
          v68 = 0LL;
          v74 = v8;
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v68);
        }
        v30 = (__int64)v20 + 40;
        v31 = *((_QWORD *)v20 + 6);
        if ( *(_QWORD *)(v30 + 16) == v31 )
        {
          std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
            v30,
            v31,
            &v72);
          v8 = v74;
          v7 = v72;
        }
        else
        {
          *(_QWORD *)v31 = v7;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v31);
          *(_DWORD *)(v31 + 8) = v29;
          *(_DWORD *)(v31 + 12) = 0;
          *(_QWORD *)(v31 + 16) = v8;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(v31 + 16));
          *(_QWORD *)(v30 + 8) += 24LL;
        }
        if ( v8 )
        {
          v74 = 0LL;
          (*((void (__fastcall **)(struct IInputTarget **))*v8 + 2))(v8);
        }
        v8 = 0LL;
        if ( v7 )
        {
          v72 = 0LL;
          (*(void (__fastcall **)(ContextualProcessorManager *))(*(_QWORD *)v7 + 16LL))(v7);
        }
        v32 = v71;
        if ( v71 )
        {
          v71 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
        if ( (_DWORD)v54 == 2 )
          goto LABEL_90;
        v5 = v76;
        if ( (_DWORD)v54 == 3 )
        {
          v9 = 1;
          v51 = 1;
        }
        else
        {
          v9 = v51;
        }
      }
      v12 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(const struct _TlgProvider_t *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( ++v13 == v14 )
        goto LABEL_56;
      v6 = v79;
    }
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)(unsigned int)v16,
      cData);
    goto LABEL_92;
  }
LABEL_57:
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GameCoreCP>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GameCoreCP>::GetCachedFeatureEnabledState(v12, v11);
  v6 = 0LL;
  v49 = 0;
  LOBYTE(v50) = 3;
  v61 = 0;
  v62 = v50;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GameCoreCP>::GetFeaturePropertyCache'::`2'::data,
    18977415LL,
    &v61,
    1LL,
    3);
  if ( v9 != *((_DWORD *)v7 + 10) )
  {
LABEL_92:
    NtMITSetKeyboardInputRoutingPolicy(v9);
    *((_DWORD *)v7 + 10) = v9;
  }
  v33 = v53;
  if ( v53 )
  {
    (*(void (__fastcall **)(struct DeviceInfo *))(*(_QWORD *)v53 + 8LL))(v53);
    v33 = v53;
    *v8 = v53;
    v34 = (unsigned int)v6;
  }
  else
  {
    v34 = -2147467259;
  }
  v35 = v52;
  if ( v52 )
  {
    v52 = v6;
    (*(void (__fastcall **)(struct DeviceInfo *))(*(_QWORD *)v35 + 16LL))(v35);
    v33 = v53;
  }
  if ( v33 )
  {
    v53 = v6;
    (*(void (__fastcall **)(struct DeviceInfo *))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v69 = v6;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &v60, &v69) && v60 )
  {
    v69 = qword_1801E14B0;
    qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
  }
  if ( **((_DWORD **)v69 + 1) > 6u && TlgKeywordOn(*((TraceLoggingHProvider *)v69 + 1), 1uLL) )
  {
    TlgCreateWsz(&v103, pwsz);
    TlgWrite(v47, &unk_18019D8E7, &ActivityId, pRelatedActivityId, 3u, &v102);
  }
  return v34;
}
