/*
 * XREFs of ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0135AD4
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C014A750 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0127CA4 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::CommitFramePointer(
        const void *a1,
        const struct CPointerInputFrame *a2,
        const struct tagPOINTEREVENTINT *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // ecx
  const char *v6; // rax
  _DWORD *v7; // r9
  int v8; // ecx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  const void **v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int64 *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int64 *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  __int64 v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  int *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  int *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  int *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  int *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  int *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  _DWORD *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  const void *v55; // [rsp+1C0h] [rbp+C0h] BYREF

  v55 = a1;
  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x20uLL) )
    {
      v5 = *(_DWORD *)(v3 + 8);
      v22 = &v55;
      v19 = *(_QWORD *)(v4 + 80);
      v24 = &v19;
      v20 = *(_QWORD *)(v4 + 72);
      v26 = &v20;
      v30 = v3 + 12;
      v9 = *(_DWORD *)(v4 + 40) + *(_DWORD *)(v3 + 16);
      v32 = &v9;
      v23 = 8LL;
      v25 = 8LL;
      v27 = 8LL;
      v28 = v3;
      v29 = 2LL;
      v31 = 4LL;
      v33 = 4LL;
      v6 = InputTraceLogging::PointerTypeToString(v5);
      TlgCreateSz(&pDesc, v6);
      v8 = v7[5];
      v35 = &v10;
      v11 = v7[10];
      v37 = &v11;
      v12 = v7[11];
      v39 = &v12;
      v13 = v7[14];
      v41 = &v13;
      v14 = v7[15];
      v43 = &v14;
      v15 = v7[12];
      v45 = &v15;
      v16 = v7[13];
      v47 = &v16;
      v17 = v7[16];
      v49 = &v17;
      v18 = v7[17];
      v51 = &v18;
      v53 = v7 + 20;
      v10 = v8;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A044F, 0LL, 0LL, 0x13u, &pData);
    }
  }
}
