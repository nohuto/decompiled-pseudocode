/*
 * XREFs of ?get@?$static_lazy@VChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@@details@wil@@QEAAPEAVChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18014BC84
 * Callers:
 *     ??$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18013F8C8 (--$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTy.c)
 *     ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18013F9A0 (--$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTyp.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<Windows::Internal::Shell::Chaining::ChainLinkTraceLogging>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(
         &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v4,
         (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_180599BD0;
    qword_180599BD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599BE8 = (struct _TlgProvider_t *)&`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599BD0, qword_180599BE8);
    InitOnceComplete(
      &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
      0,
      qword_180599BD0);
  }
  return v5;
}
