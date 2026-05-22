/*
 * XREFs of ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x180079340
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x180079740 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
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
  __int64 v11; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-B1h] BYREF
  const unsigned __int16 *v13; // [rsp+50h] [rbp-91h]
  int v14; // [rsp+58h] [rbp-89h]
  int v15; // [rsp+5Ch] [rbp-85h]
  __int16 *v16; // [rsp+60h] [rbp-81h]
  __int64 v17; // [rsp+68h] [rbp-79h]
  __int16 *v18; // [rsp+70h] [rbp-71h]
  __int64 v19; // [rsp+78h] [rbp-69h]
  char *v20; // [rsp+80h] [rbp-61h]
  __int64 v21; // [rsp+88h] [rbp-59h]
  char *v22; // [rsp+90h] [rbp-51h]
  __int64 v23; // [rsp+98h] [rbp-49h]
  char *v24; // [rsp+A0h] [rbp-41h]
  __int64 v25; // [rsp+A8h] [rbp-39h]
  char *v26; // [rsp+B0h] [rbp-31h]
  __int64 v27; // [rsp+B8h] [rbp-29h]
  char *v28; // [rsp+C0h] [rbp-21h]
  __int64 v29; // [rsp+C8h] [rbp-19h]
  char *v30; // [rsp+D0h] [rbp-11h]
  __int64 v31; // [rsp+D8h] [rbp-9h]
  char *v32; // [rsp+E0h] [rbp-1h]
  __int64 v33; // [rsp+E8h] [rbp+7h]
  __int16 v34; // [rsp+120h] [rbp+3Fh] BYREF
  __int16 v35; // [rsp+128h] [rbp+47h] BYREF

  v35 = a4;
  v34 = a3;
  if ( (unsigned int)hProvider > 5
    && (qword_180191050 & 0x400000000000LL) != 0
    && (qword_180191058 & 0x400000000000LL) == qword_180191058 )
  {
    LODWORD(v11) = 0;
    if ( a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
    }
    v15 = 0;
    v14 = 2 * v11 + 2;
    v17 = 2LL;
    v16 = &v34;
    v19 = 2LL;
    v18 = &v35;
    if ( !a2 )
      a2 = &sourceString;
    v13 = a2;
    v20 = &a5;
    v22 = &a6;
    v24 = &a7;
    v26 = &a8;
    v28 = &a9;
    v30 = &a10;
    v32 = &a11;
    v21 = 2LL;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18016875F, 0LL, 0LL, 0xCu, &pData);
  }
}
