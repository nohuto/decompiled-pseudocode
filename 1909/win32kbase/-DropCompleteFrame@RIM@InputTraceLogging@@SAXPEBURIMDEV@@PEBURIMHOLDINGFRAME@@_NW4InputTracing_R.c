/*
 * XREFs of ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1C014C16C
 * Callers:
 *     rimFindAndReclaimHoldingFrame @ 0x1C014D6B4 (rimFindAndReclaimHoldingFrame.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x1C014C110 (-CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z.c)
 */

char __fastcall InputTraceLogging::RIM::DropCompleteFrame(__int64 a1, __int64 a2, unsigned __int8 a3, int a4)
{
  _UNKNOWN **v4; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  const char *v14; // rax
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v23; // [rsp+88h] [rbp-80h]
  int v24; // [rsp+90h] [rbp-78h]
  int v25; // [rsp+94h] [rbp-74h]
  __int64 *v26; // [rsp+98h] [rbp-70h]
  int v27; // [rsp+A0h] [rbp-68h]
  int v28; // [rsp+A4h] [rbp-64h]
  __int64 *v29; // [rsp+A8h] [rbp-60h]
  int v30; // [rsp+B0h] [rbp-58h]
  int v31; // [rsp+B4h] [rbp-54h]
  __int64 v32; // [rsp+B8h] [rbp-50h]
  int v33; // [rsp+C0h] [rbp-48h]
  int v34; // [rsp+C4h] [rbp-44h]
  int *v35; // [rsp+C8h] [rbp-40h]
  int v36; // [rsp+D0h] [rbp-38h]
  int v37; // [rsp+D4h] [rbp-34h]
  int *v38; // [rsp+D8h] [rbp-30h]
  int v39; // [rsp+E0h] [rbp-28h]
  int v40; // [rsp+E4h] [rbp-24h]
  __int64 *v41; // [rsp+E8h] [rbp-20h]
  int v42; // [rsp+F0h] [rbp-18h]
  int v43; // [rsp+F4h] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v4 = &retaddr;
  if ( *(_DWORD *)(a2 + 40) )
    v4 = *(_UNKNOWN ***)(a2 + 72);
  if ( dword_1C020CB50 > 4u )
  {
    LOBYTE(v4) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL);
    if ( (_BYTE)v4 )
    {
      v11 = *(_QWORD *)(a1 + 472);
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v23 = &v19;
      v26 = &v20;
      v21 = *(_QWORD *)(v8 + 32);
      v29 = &v21;
      v24 = 8;
      v27 = 8;
      v30 = 8;
      v16 = a3;
      v35 = &v16;
      v19 = a1;
      v20 = v9;
      v32 = v10;
      v33 = 4;
      v36 = 4;
      v12 = *(unsigned __int16 *)(v11 + 16);
      v40 = 0;
      v17 = v12;
      v38 = &v17;
      v39 = 4;
      v13 = *(unsigned __int16 *)(v11 + 18);
      v43 = 0;
      LODWORD(v18) = v13;
      v41 = &v18;
      v42 = 4;
      v14 = InputTraceLogging::CompletionReasonToString(a4);
      TlgCreateSz(&pDesc, v14);
      LOBYTE(v4) = TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E30C3, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return (char)v4;
}
