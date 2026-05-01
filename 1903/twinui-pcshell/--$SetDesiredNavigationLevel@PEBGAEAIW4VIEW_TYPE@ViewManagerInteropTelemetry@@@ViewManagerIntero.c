/*
 * XREFs of ??$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerInteropTelemetry@@SAX$$QEAPEBGAEAI$$QEAW4VIEW_TYPE@0@@Z @ 0x1802925DC
 * Callers:
 *     ?v_SetDesiredNavigationLevel@LegacyViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180292C60 (-v_SetDesiredNavigationLevel@LegacyViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@.c)
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180293920 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

BOOLEAN __fastcall ViewManagerInteropTelemetry::SetDesiredNavigationLevel<unsigned short const *,unsigned int &,enum ViewManagerInteropTelemetry::VIEW_TYPE>(
        LPCWSTR *a1,
        int *a2,
        int *a3)
{
  BOOLEAN result; // al
  int v7; // ecx
  TraceLoggingHProvider v8; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  int *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  int *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180599EB0;
    qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
  }
  result = (unsigned __int8)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    result = TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, *a1);
      v7 = *a2;
      v17 = 0;
      v20 = 0;
      v15 = &v10;
      v11 = *a3;
      v10 = v7;
      v18 = &v11;
      v16 = 4;
      v19 = 4;
      return TlgWrite(v8, &unk_1804D413E, 0LL, 0LL, 5u, &pData);
    }
  }
  return result;
}
