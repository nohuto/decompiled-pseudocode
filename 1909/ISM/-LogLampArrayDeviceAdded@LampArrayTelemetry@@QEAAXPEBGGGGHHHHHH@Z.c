/*
 * XREFs of ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800B141C
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800B3CE8 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall LampArrayTelemetry::LogLampArrayDeviceAdded(
        LampArrayTelemetry *this,
        const unsigned __int16 *a2,
        __int16 a3,
        __int16 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  const WCHAR *v11; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-B1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-91h] BYREF
  __int16 *v14; // [rsp+60h] [rbp-81h]
  __int64 v15; // [rsp+68h] [rbp-79h]
  __int16 *v16; // [rsp+70h] [rbp-71h]
  __int64 v17; // [rsp+78h] [rbp-69h]
  char *v18; // [rsp+80h] [rbp-61h]
  __int64 v19; // [rsp+88h] [rbp-59h]
  char *v20; // [rsp+90h] [rbp-51h]
  __int64 v21; // [rsp+98h] [rbp-49h]
  char *v22; // [rsp+A0h] [rbp-41h]
  __int64 v23; // [rsp+A8h] [rbp-39h]
  char *v24; // [rsp+B0h] [rbp-31h]
  __int64 v25; // [rsp+B8h] [rbp-29h]
  char *v26; // [rsp+C0h] [rbp-21h]
  __int64 v27; // [rsp+C8h] [rbp-19h]
  char *v28; // [rsp+D0h] [rbp-11h]
  __int64 v29; // [rsp+D8h] [rbp-9h]
  char *v30; // [rsp+E0h] [rbp-1h]
  __int64 v31; // [rsp+E8h] [rbp+7h]
  __int16 v32; // [rsp+120h] [rbp+3Fh] BYREF
  __int16 v33; // [rsp+128h] [rbp+47h] BYREF

  v33 = a4;
  v32 = a3;
  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, v11);
      v15 = 2LL;
      v16 = &v33;
      v14 = &v32;
      v18 = &a5;
      v20 = &a6;
      v22 = &a7;
      v24 = &a8;
      v26 = &a9;
      v28 = &a10;
      v30 = &a11;
      v17 = 2LL;
      v19 = 2LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D468, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
