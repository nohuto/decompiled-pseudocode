/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18003B5F4
 * Callers:
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180027D9C (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002AD60 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18003AB24 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180073D18 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800B3E28 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x18003B3C8 (TraceLoggingRegisterEx.c)
 */

void __fastcall wil::TraceLoggingProvider::Register(
        wil::TraceLoggingProvider *this,
        const struct _TlgProvider_t *a2,
        void *a3)
{
  __int64 v4; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 1;
  TraceLoggingRegisterEx(a2, (TLG_PENABLECALLBACK)a2, a3);
  v4 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(wil::TraceLoggingProvider *))(v4 + 8))(this);
}
