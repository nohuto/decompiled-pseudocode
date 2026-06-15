/*
 * XREFs of ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x18013CAE0
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x18013C9B8 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x18013CA5C (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800BCD40 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<NUIAudioTracing>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`NUIAudioTracing::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6) && (_DWORD)v5 )
  {
    v6 = qword_1801B7B38;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1801B7B38);
    qword_1801B7B38[0] = &NUIAudioTracing::`vftable';
    qword_1801B7B50 = (struct _TlgProvider_t *)&`NUIAudioTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B7B38, qword_1801B7B50, v3);
    InitOnceComplete(&`NUIAudioTracing::Instance'::`2'::wrapper, 0, qword_1801B7B38);
  }
  return v6;
}
