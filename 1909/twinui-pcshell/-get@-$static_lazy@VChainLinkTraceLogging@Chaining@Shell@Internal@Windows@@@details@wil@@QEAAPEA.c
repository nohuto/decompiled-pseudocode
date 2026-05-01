/*
 * XREFs of ?get@?$static_lazy@VChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@@details@wil@@QEAAPEAVChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18016AEF4
 * Callers:
 *     ??$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18015EEE8 (--$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTy.c)
 *     ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18015EFC0 (--$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTyp.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<Windows::Internal::Shell::Chaining::ChainLinkTraceLogging>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(
         &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v4,
         &v5)
    && (_DWORD)v4 )
  {
    v5 = &qword_1805C1FE8;
    qword_1805C1FE8 = &ShellScreenClippingLogging::`vftable';
    qword_1805C2000 = (struct _TlgProvider_t *)&`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1FE8, qword_1805C2000);
    InitOnceComplete(
      &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
      0,
      &qword_1805C1FE8);
  }
  return v5;
}
