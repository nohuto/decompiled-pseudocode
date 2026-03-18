/*
 * XREFs of ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0133D04
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0140200 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0127CA4 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::AssignPointerId(
        const struct CPointerInputFrame *a1,
        const struct tagPOINTEREVENTINT *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // ecx
  const char *v5; // rax
  _DWORD *v6; // r9
  int v7; // ecx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  __int64 *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  __int64 v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  int *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  int *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  int *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  _DWORD *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]

  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x20uLL) )
    {
      v4 = *(_DWORD *)(v2 + 8);
      v18 = *(_QWORD *)(v3 + 80);
      v21 = &v18;
      v19 = *(_QWORD *)(v3 + 72);
      v23 = &v19;
      v27 = v2 + 12;
      v8 = *(_DWORD *)(v2 + 16);
      v29 = &v8;
      v22 = 8LL;
      v24 = 8LL;
      v25 = v2;
      v26 = 2LL;
      v28 = 4LL;
      v30 = 4LL;
      v5 = InputTraceLogging::PointerTypeToString(v4);
      TlgCreateSz(&pDesc, v5);
      v7 = v6[5];
      v32 = &v9;
      v10 = v6[10];
      v34 = &v10;
      v11 = v6[11];
      v36 = &v11;
      v12 = v6[14];
      v38 = &v12;
      v13 = v6[15];
      v40 = &v13;
      v14 = v6[12];
      v42 = &v14;
      v15 = v6[13];
      v44 = &v15;
      v16 = v6[16];
      v46 = &v16;
      v17 = v6[17];
      v48 = &v17;
      v50 = v6 + 20;
      v9 = v7;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0968, 0LL, 0LL, 0x12u, &pData);
    }
  }
}
