/*
 * XREFs of ??$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$QEAPEBG@Z @ 0x18022E574
 * Callers:
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x18023402C (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::PropertyChange<unsigned int &,unsigned short const *>(
        __int64 a1,
        int *a2,
        const WCHAR **a3)
{
  TLG_STATUS result; // eax
  int v7; // eax
  const WCHAR *v8; // rdx
  TraceLoggingHProvider v9; // r10
  UINT32 cData; // r11d
  WINBOOL fPending; // [rsp+30h] [rbp-19h] BYREF
  int v12; // [rsp+34h] [rbp-15h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+27h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  result = (int)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    v7 = *a2;
    v17 = 0;
    v8 = *a3;
    v12 = v7;
    v15 = &v12;
    v16 = 4;
    TlgCreateWsz(&pDesc, v8);
    return TlgWrite(v9, &unk_18045C5DB, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, cData, &pData);
  }
  return result;
}
