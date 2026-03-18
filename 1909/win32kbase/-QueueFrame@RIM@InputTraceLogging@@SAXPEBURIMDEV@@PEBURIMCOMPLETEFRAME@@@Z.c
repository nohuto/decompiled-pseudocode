/*
 * XREFs of ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C0150040
 * Callers:
 *     rimQueueCompleteFrame @ 0x1C015201C (rimQueueCompleteFrame.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::QueueFrame(const struct RIMDEV *a1, const struct RIMCOMPLETEFRAME *a2)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+34h] [rbp-65h] BYREF
  const struct RIMDEV *v11; // [rsp+38h] [rbp-61h] BYREF
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  __int64 v13; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  const struct RIMDEV **v15; // [rsp+70h] [rbp-29h]
  int v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+7Ch] [rbp-1Dh]
  __int64 *v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  __int64 *v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+9Ch] [rbp+3h]
  __int64 v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  __int64 v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]
  int *v30; // [rsp+C0h] [rbp+27h]
  int v31; // [rsp+C8h] [rbp+2Fh]
  int v32; // [rsp+CCh] [rbp+33h]
  int *v33; // [rsp+D0h] [rbp+37h]
  int v34; // [rsp+D8h] [rbp+3Fh]
  int v35; // [rsp+DCh] [rbp+43h]

  if ( dword_1C020CB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL) )
    {
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v6 = *((_QWORD *)a1 + 59);
      v15 = &v11;
      v18 = &v12;
      v13 = *(_QWORD *)(v3 + 40);
      v21 = &v13;
      v27 = v3 + 76;
      v11 = a1;
      v16 = 8;
      v12 = v4;
      v19 = 8;
      v22 = 8;
      v24 = v5;
      v25 = 4;
      v28 = 4;
      v7 = *(unsigned __int16 *)(v6 + 16);
      v32 = 0;
      v9 = v7;
      v30 = &v9;
      v31 = 4;
      v8 = *(unsigned __int16 *)(v6 + 18);
      v35 = 0;
      v10 = v8;
      v33 = &v10;
      v34 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E37FD, 0LL, 0LL, 9u, &pData);
    }
  }
}
