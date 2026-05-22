/*
 * XREFs of ?ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x1800075AC
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800073F0 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x1800BCEC0 (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180027B3C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18002BC68 (atexit.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall InputTraceLogging::ISM::ReceiveCursorPos(__int64 a1, const struct tagPOINT *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  int v6; // r9d
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  LONG x; // [rsp+3Ch] [rbp-25h] BYREF
  LONG y; // [rsp+40h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-19h] BYREF
  __int64 v11; // [rsp+50h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+17h]
  int v14; // [rsp+80h] [rbp+1Fh]
  int v15; // [rsp+84h] [rbp+23h]
  LONG *p_x; // [rsp+88h] [rbp+27h]
  int v17; // [rsp+90h] [rbp+2Fh]
  int v18; // [rsp+94h] [rbp+33h]
  LONG *p_y; // [rsp+98h] [rbp+37h]
  int v20; // [rsp+A0h] [rbp+3Fh]
  int v21; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801E14B0;
    qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 4u )
  {
    if ( TlgKeywordOn(v4, 0x200uLL) )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = &v11;
      x = a2->x;
      p_x = &x;
      y = a2->y;
      p_y = &y;
      v11 = a1;
      v14 = 8;
      v17 = v6;
      v20 = v6;
      TlgWrite(v5, &unk_18019D887, 0LL, 0LL, 5u, &pData);
    }
  }
}
