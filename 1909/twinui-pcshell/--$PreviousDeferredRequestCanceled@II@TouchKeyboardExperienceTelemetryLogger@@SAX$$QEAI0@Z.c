/*
 * XREFs of ??$PreviousDeferredRequestCanceled@II@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0@Z @ 0x18033B6D4
 * Callers:
 *     ?CreateDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18033EF98 (-CreateDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Inte.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18033AEA4 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::PreviousDeferredRequestCanceled<unsigned int,unsigned int>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  __int64 v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  __int64 *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]

  v4 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         a1,
         (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v5 = (const struct _TlgProvider_t *)v4[1];
  if ( *(_DWORD *)v5 > 5u )
  {
    LOBYTE(v4) = TlgKeywordOn(v5, 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      v10 = a1;
      v14 = &v8;
      v11 = 4LL;
      v12 = a2;
      v13 = 4LL;
      v8 = 0x2000000LL;
      v15 = 8LL;
      LOBYTE(v4) = TlgWrite(v6, &unk_180501C80, 0LL, 0LL, 5u, &pData);
    }
  }
  return (char)v4;
}
