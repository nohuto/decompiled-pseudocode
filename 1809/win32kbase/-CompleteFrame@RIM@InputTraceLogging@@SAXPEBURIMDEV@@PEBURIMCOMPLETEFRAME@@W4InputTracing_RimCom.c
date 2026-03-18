/*
 * XREFs of ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C0122698
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0122F24 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x1C0122804 (-CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::CompleteFrame(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  const CHAR *v11; // rax
  int v12; // [rsp+30h] [rbp-79h] BYREF
  int v13; // [rsp+34h] [rbp-75h] BYREF
  __int64 v14; // [rsp+38h] [rbp-71h] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h] BYREF
  __int64 v16; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v18; // [rsp+70h] [rbp-39h]
  int v19; // [rsp+78h] [rbp-31h]
  int v20; // [rsp+7Ch] [rbp-2Dh]
  __int64 *v21; // [rsp+80h] [rbp-29h]
  int v22; // [rsp+88h] [rbp-21h]
  int v23; // [rsp+8Ch] [rbp-1Dh]
  __int64 *v24; // [rsp+90h] [rbp-19h]
  int v25; // [rsp+98h] [rbp-11h]
  int v26; // [rsp+9Ch] [rbp-Dh]
  __int64 v27; // [rsp+A0h] [rbp-9h]
  int v28; // [rsp+A8h] [rbp-1h]
  int v29; // [rsp+ACh] [rbp+3h]
  __int64 v30; // [rsp+B0h] [rbp+7h]
  int v31; // [rsp+B8h] [rbp+Fh]
  int v32; // [rsp+BCh] [rbp+13h]
  int *v33; // [rsp+C0h] [rbp+17h]
  int v34; // [rsp+C8h] [rbp+1Fh]
  int v35; // [rsp+CCh] [rbp+23h]
  int *v36; // [rsp+D0h] [rbp+27h]
  int v37; // [rsp+D8h] [rbp+2Fh]
  int v38; // [rsp+DCh] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp+37h] BYREF

  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v8 = *(_QWORD *)(a1 + 472);
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v18 = &v14;
      v21 = &v15;
      v16 = *(_QWORD *)(v5 + 40);
      v24 = &v16;
      v30 = v5 + 52;
      v19 = 8;
      v22 = 8;
      v25 = 8;
      v14 = a1;
      v15 = v6;
      v27 = v7;
      v28 = 4;
      v31 = 4;
      v9 = *(unsigned __int16 *)(v8 + 16);
      v35 = 0;
      v12 = v9;
      v33 = &v12;
      v34 = 4;
      v10 = *(unsigned __int16 *)(v8 + 18);
      v38 = 0;
      v13 = v10;
      v36 = &v13;
      v37 = 4;
      v11 = (const CHAR *)InputTraceLogging::CompletionReasonToString(a3);
      TlgCreateSz(&pDesc, v11);
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F0CF, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
