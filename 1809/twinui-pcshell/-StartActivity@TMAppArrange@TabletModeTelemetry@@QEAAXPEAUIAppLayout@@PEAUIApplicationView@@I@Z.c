/*
 * XREFs of ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x18035DD88
 * Callers:
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18035D720 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180147F44 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_.c)
 *     ?ComputeRectAlignment@ImmersiveApplicationLayout@@YA?AW4RectAlignment@1@PEBUtagRECT@@00@Z @ 0x1803AC8D0 (-ComputeRectAlignment@ImmersiveApplicationLayout@@YA-AW4RectAlignment@1@PEBUtagRECT@@00@Z.c)
 */

void __fastcall TabletModeTelemetry::TMAppArrange::StartActivity(
        TabletModeTelemetry::TMAppArrange *this,
        struct IAppLayout *a2,
        struct IApplicationView *a3,
        int a4)
{
  int v7; // r14d
  const struct _TlgProvider_t *v8; // rbx
  DWORD CurrentThreadId; // eax
  const GUID *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-99h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-91h] BYREF
  DWORD v13; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v14; // [rsp+40h] [rbp-89h] BYREF
  int v15; // [rsp+44h] [rbp-85h] BYREF
  char v16[8]; // [rsp+48h] [rbp-81h] BYREF
  LPVOID Context[2]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v18[48]; // [rsp+60h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-39h] BYREF
  DWORD *v20; // [rsp+B0h] [rbp-19h]
  int v21; // [rsp+B8h] [rbp-11h]
  int v22; // [rsp+BCh] [rbp-Dh]
  int *v23; // [rsp+C0h] [rbp-9h]
  int v24; // [rsp+C8h] [rbp-1h]
  int v25; // [rsp+CCh] [rbp+3h]
  int *v26; // [rsp+D0h] [rbp+7h]
  int v27; // [rsp+D8h] [rbp+Fh]
  int v28; // [rsp+DCh] [rbp+13h]
  int *v29; // [rsp+E0h] [rbp+17h]
  int v30; // [rsp+E8h] [rbp+1Fh]
  int v31; // [rsp+ECh] [rbp+23h]
  int v32; // [rsp+148h] [rbp+7Fh] BYREF

  v32 = a4;
  v7 = 0;
  v15 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( (*(int (__fastcall **)(struct IAppLayout *, struct IApplicationView *, __int64 *, char *))(*(_QWORD *)a2 + 152LL))(
         a2,
         a3,
         &v11,
         v16) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v11 + 56LL))(v11, 0LL, Context);
    (*(void (__fastcall **)(struct IAppLayout *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v18);
    v7 = ImmersiveApplicationLayout::ComputeRectAlignment(v18, Context, Context);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = &qword_18050F8E8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
    qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
    qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
  }
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context[0] + 1), 0x400000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v13 = CurrentThreadId;
    v20 = &v13;
    v23 = &v14;
    v26 = &v15;
    v29 = &v32;
    v21 = 4;
    v14 = v7;
    v24 = 4;
    v27 = 4;
    v30 = 4;
    v10 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v8, &unk_180467687, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v10, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabletModeTelemetry::TMAppArrange *)((char *)this + 8));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
}
