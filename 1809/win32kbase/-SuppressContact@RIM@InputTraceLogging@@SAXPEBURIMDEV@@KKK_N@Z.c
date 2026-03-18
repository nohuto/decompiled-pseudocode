/*
 * XREFs of ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C012E2BC
 * Callers:
 *     RIMCmAddContactSuppressionReasons @ 0x1C012E7A0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C012EC70 (RIMCmRemoveContactSuppressionReasons.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::SuppressContact(
        const struct RIMDEV *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        bool a5)
{
  int v5; // r9d
  int v6; // r10d
  __int64 v7; // r11
  int v8; // [rsp+30h] [rbp-51h] BYREF
  int v9; // [rsp+34h] [rbp-4Dh] BYREF
  BOOL v10; // [rsp+38h] [rbp-49h] BYREF
  __int64 v11; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-31h] BYREF
  __int64 *v13; // [rsp+70h] [rbp-11h]
  __int64 v14; // [rsp+78h] [rbp-9h]
  int *v15; // [rsp+80h] [rbp-1h]
  __int64 v16; // [rsp+88h] [rbp+7h]
  int *v17; // [rsp+90h] [rbp+Fh]
  __int64 v18; // [rsp+98h] [rbp+17h]
  int *v19; // [rsp+A0h] [rbp+1Fh]
  __int64 v20; // [rsp+A8h] [rbp+27h]
  BOOL *v21; // [rsp+B0h] [rbp+2Fh]
  __int64 v22; // [rsp+B8h] [rbp+37h]
  int v23; // [rsp+E8h] [rbp+67h] BYREF

  v23 = a2;
  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v11 = v7;
      v13 = &v11;
      v15 = &v23;
      v17 = &v8;
      v19 = &v9;
      v10 = a5;
      v21 = &v10;
      v14 = 8LL;
      v16 = 4LL;
      v8 = v6;
      v18 = 4LL;
      v9 = v5;
      v20 = 4LL;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019FC35, 0LL, 0LL, 7u, &pData);
    }
  }
}
