/*
 * XREFs of ?UpdateCursorOrientation@Cursor@InputTraceLogging@@SAX_KN@Z @ 0x1800BFEAC
 * Callers:
 *     ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x1800BFD9C (-ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014BAC (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall InputTraceLogging::Cursor::UpdateCursorOrientation(__int64 a1, double a2)
{
  const struct _TlgProvider_t *v2; // rcx
  int v3; // edx
  const struct _TlgProvider_t *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v6; // [rsp+50h] [rbp-38h]
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  double *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  __int64 v12; // [rsp+90h] [rbp+8h] BYREF
  double v13; // [rsp+98h] [rbp+10h] BYREF

  v13 = a2;
  v12 = a1;
  v2 = (const struct _TlgProvider_t *)wil::details::static_lazy<InputTraceLogging>::get(
                                        a1,
                                        lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v2 > 4u )
  {
    if ( TlgKeywordOn(v2, 8uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v12;
      v9 = &v13;
      v7 = v3;
      v10 = v3;
      TlgWrite(v4, &unk_18019DC14, 0LL, 0LL, 4u, &pData);
    }
  }
}
