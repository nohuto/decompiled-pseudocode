/*
 * XREFs of ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x180079220
 * Callers:
 *     ?ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x180073B90 (-ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall LampArrayTelemetry::LogPnPDeviceInfo(
        LampArrayTelemetry *this,
        const unsigned __int16 *a2,
        __int16 a3,
        __int16 a4,
        char a5,
        char a6)
{
  __int64 v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-39h] BYREF
  const unsigned __int16 *v8; // [rsp+50h] [rbp-19h]
  int v9; // [rsp+58h] [rbp-11h]
  int v10; // [rsp+5Ch] [rbp-Dh]
  __int16 *v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  __int16 *v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  char *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  char *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]
  __int16 v19; // [rsp+D0h] [rbp+67h] BYREF
  __int16 v20; // [rsp+D8h] [rbp+6Fh] BYREF

  v20 = a4;
  v19 = a3;
  if ( (unsigned int)hProvider > 5
    && (qword_180191050 & 0x400000000000LL) != 0
    && (qword_180191058 & 0x400000000000LL) == qword_180191058 )
  {
    LODWORD(v6) = 0;
    if ( a2 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( a2[v6] );
    }
    v10 = 0;
    v9 = 2 * v6 + 2;
    v12 = 2LL;
    v11 = &v19;
    v14 = 2LL;
    v13 = &v20;
    if ( !a2 )
      a2 = &sourceString;
    v8 = a2;
    v15 = &a5;
    v17 = &a6;
    v16 = 2LL;
    v18 = 2LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801686FD, 0LL, 0LL, 7u, &pData);
  }
}
