/*
 * XREFs of ?get@?$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z @ 0x1803A8670
 * Callers:
 *     ??$ComponentAlreadyDisconnectedInCRS@AEAI@CUITelemetry@@SAXAEAI@Z @ 0x1803A3BFC (--$ComponentAlreadyDisconnectedInCRS@AEAI@CUITelemetry@@SAXAEAI@Z.c)
 *     ??$RegisteredComponentInCRS@AEAIAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAI0AEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1803A4100 (--$RegisteredComponentInCRS@AEAIAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@A.c)
 *     ??$RegisteringDisconnectedComponent@AEAIAEAI@CUITelemetry@@SAXAEAI0@Z @ 0x1803A41EC (--$RegisteringDisconnectedComponent@AEAIAEAI@CUITelemetry@@SAXAEAI0@Z.c)
 *     ??$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1803A4288 (--$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@A.c)
 *     ??$UnregisteredComponentFromCRSFreeList@AEAI@CUITelemetry@@SAXAEAI@Z @ 0x1803A4364 (--$UnregisteredComponentFromCRSFreeList@AEAI@CUITelemetry@@SAXAEAI@Z.c)
 *     ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1803A4FA0 (-DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1803A7DA0 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<CUITelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`CUITelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = qword_180510238;
    qword_180510238[0] = &ShellScreenClippingLogging::`vftable';
    qword_180510250 = (struct _TlgProvider_t *)&`CUITelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180510238, qword_180510250);
    InitOnceComplete(&`CUITelemetry::Instance'::`2'::wrapper, 0, qword_180510238);
  }
  return v5;
}
