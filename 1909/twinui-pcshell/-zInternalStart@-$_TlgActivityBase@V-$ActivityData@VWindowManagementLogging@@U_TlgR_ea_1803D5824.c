/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@QEAAXXZ @ 0x1803D5824
 * Callers:
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x1803D0CB4 (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18003B260 (TraceLoggingProviderEnabled.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 */

ULONG __fastcall _TlgActivityBase<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rcx
  wil::TraceLoggingProvider *v3; // rax
  _QWORD *v4; // rcx
  int v5; // r8d
  ULONG result; // eax
  WINBOOL v7; // [rsp+30h] [rbp+8h] BYREF
  TraceLoggingHProvider *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v8 = (TraceLoggingHProvider *)&unk_1805C2098;
    v3 = (wil::TraceLoggingProvider *)operator new(v2, &unk_1805C2098);
    wil::TraceLoggingProvider::TraceLoggingProvider(v3);
    *v4 = &ImmersiveIconsLogging::`vftable';
    v4[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
  }
  if ( TraceLoggingProviderEnabled(v8[1], 5u, 0LL) )
  {
    result = EventActivityIdControl(v5 + 3, (LPGUID)(a1 + 8));
  }
  else
  {
    result = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 1;
  return result;
}
