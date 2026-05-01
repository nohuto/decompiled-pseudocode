/*
 * XREFs of ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18004593C
 * Callers:
 *     ?Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180083000 (-Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?Uncloak@CStartExperienceManager@@UEAAJXZ @ 0x180083A60 (-Uncloak@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180033774 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180045BBC (--1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180046830 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180046830.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060D34 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::Uncloak(HSTRING *this)
{
  const WCHAR *StringRawBuffer; // rsi
  const WCHAR *v3; // r14
  const struct _TlgProvider_t *v4; // rbx
  int v5; // eax
  int v6; // ebx
  const GUID *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  int cData; // [rsp+28h] [rbp-E0h]
  WINBOOL fPending[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID Context[3]; // [rsp+40h] [rbp-C8h] BYREF
  void **v14; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v15[24]; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+88h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v19; // [rsp+1B8h] [rbp+B0h]
  int v20; // [rsp+1C0h] [rbp+B8h]
  int v21; // [rsp+1C4h] [rbp+BCh]
  WINBOOL *v22; // [rsp+1C8h] [rbp+C0h]
  int v23; // [rsp+1D0h] [rbp+C8h]
  int v24; // [rsp+1D4h] [rbp+CCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+1E8h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  Context[1] = (LPVOID)-2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v3 = WindowsGetStringRawBuffer(this[1], 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    &v14,
    "Uncloak");
  v14 = &SingleViewExperienceTelemetry::Uncloak::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)&v14);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, Context)
    && fPending[0] )
  {
    Context[0] = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v4 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context[0] + 1), 0x200000000000uLL) )
  {
    v19 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v20 = 8;
    v21 = 0;
    fPending[1] = GetCurrentThreadId();
    v22 = &fPending[1];
    v23 = 4;
    v24 = 0;
    TlgCreateWsz(&pDesc, v3);
    TlgCreateWsz(&v26, StringRawBuffer);
    v8 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v14);
    TlgWrite(v4, &unk_1804E50A7, (LPCGUID)(v17 + 8), v8, 6u, &pData);
  }
  if ( !v16 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  if ( *((_DWORD *)this + 10) != 2 )
  {
    v6 = -2147024809;
    v9 = 2147942487LL;
    v10 = 1023LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v9,
      cData);
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 32LL))(this[11], this);
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = (unsigned int)v5;
    v10 = 1024LL;
    goto LABEL_16;
  }
  v6 = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)this[10] + 40LL))(this[10]);
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 40LL))(this[11], this);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v14);
    v6 = 0;
  }
LABEL_11:
  SingleViewExperienceTelemetry::Uncloak::~Uncloak((SingleViewExperienceTelemetry::Uncloak *)&v14);
  return (unsigned int)v6;
}
