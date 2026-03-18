/*
 * XREFs of ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x1C0033C34
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAI@Z @ 0x1C0030950 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0031E30 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C016ADCC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C016F988 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 */

void __fastcall InputTraceLogging::Mouse::SpeedHitTest(
        HWND a1,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        const struct CInputDest *a4,
        unsigned int a5,
        bool a6)
{
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 WindowDetails; // rax
  HWND WindowHandle; // rax
  __int64 v15; // rcx
  __int64 v16; // r10
  const CHAR *v17; // rax
  __int64 v18; // r10
  LONG x; // ecx
  __int64 v20; // r10
  HWND v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r10
  const CHAR *v24; // rax
  __int64 v25; // r10
  LONG v26; // ecx
  __int64 v27; // r10
  LONG v28; // [rsp+30h] [rbp-D0h] BYREF
  LONG v29; // [rsp+34h] [rbp-CCh] BYREF
  LONG y; // [rsp+38h] [rbp-C8h] BYREF
  LONG v31; // [rsp+3Ch] [rbp-C4h] BYREF
  LONG v32; // [rsp+40h] [rbp-C0h] BYREF
  HWND v33; // [rsp+48h] [rbp-B8h] BYREF
  HWND v34; // [rsp+50h] [rbp-B0h] BYREF
  LPCWSTR v35[2]; // [rsp+58h] [rbp-A8h]
  LPCWSTR pwsz[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  char v38[48]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  HWND *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  HWND *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  unsigned int *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+110h] [rbp+10h] BYREF
  LPCWSTR *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  char *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  __int64 *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  LONG *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+170h] [rbp+70h] BYREF
  LONG *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  LONG *p_y; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]
  LONG *v62; // [rsp+1A0h] [rbp+A0h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h]
  LONG *v64; // [rsp+1B0h] [rbp+B0h]
  __int64 v65; // [rsp+1B8h] [rbp+B8h]

  if ( !TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C020CB50, 0, 0LL) )
    return;
  v10 = *((_DWORD *)a4 + 23);
  if ( v10 == 1 )
  {
    v11 = *((_QWORD *)a4 + 10);
LABEL_5:
    v12 = 0LL;
    goto LABEL_6;
  }
  v11 = 0LL;
  if ( v10 != 2 )
    goto LABEL_5;
  v12 = *((_QWORD *)a4 + 10);
LABEL_6:
  WindowDetails = InputTraceLogging::GetWindowDetails(v38, v12, v11);
  *(_OWORD *)v35 = *(_OWORD *)WindowDetails;
  *(_OWORD *)pwsz = *(_OWORD *)(WindowDetails + 16);
  v37 = *(_QWORD *)(WindowDetails + 32);
  if ( a6 )
  {
    if ( dword_1C020CB50 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x40uLL) )
      {
        v33 = a1;
        v40 = &v33;
        v41 = 8LL;
        WindowHandle = CInputDest::GetWindowHandle(a4);
        v15 = *((unsigned int *)a4 + 1);
        v34 = WindowHandle;
        v42 = &v34;
        v44 = &a5;
        v43 = 8LL;
        v45 = v16;
        v17 = (const CHAR *)InputTraceLogging::RoutingModeToString(v15);
        TlgCreateSz(&pDesc, v17);
        TlgCreateWsz(&v47, pwsz[0]);
        v50 = (char *)&pwsz[1] + 4;
        v48 = &pwsz[1];
        v52 = &v37;
        v28 = HIDWORD(v37);
        v54 = &v28;
        v49 = v18;
        v51 = v18;
        v53 = v18;
        v55 = v18;
        TlgCreateWsz(&v56, v35[1]);
        TlgCreateSz(&v57, (LPCSTR)v35[0]);
        x = a2->x;
        v58 = &v29;
        y = a2->y;
        p_y = &y;
        v31 = a3->x;
        v62 = &v31;
        v32 = a3->y;
        v64 = &v32;
        v29 = x;
        v59 = v20;
        v61 = v20;
        v63 = v20;
        v65 = v20;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E5FE9, 0LL, 0LL, 0x11u, &pData);
      }
    }
  }
  else if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x40uLL) )
  {
    v34 = a1;
    v40 = &v34;
    v41 = 8LL;
    v21 = CInputDest::GetWindowHandle(a4);
    v22 = *((unsigned int *)a4 + 1);
    v33 = v21;
    v42 = &v33;
    v44 = &a5;
    v43 = 8LL;
    v45 = v23;
    v24 = (const CHAR *)InputTraceLogging::RoutingModeToString(v22);
    TlgCreateSz(&pDesc, v24);
    TlgCreateWsz(&v47, pwsz[0]);
    v50 = (char *)&pwsz[1] + 4;
    v48 = &pwsz[1];
    v52 = &v37;
    v32 = HIDWORD(v37);
    v54 = &v32;
    v49 = v25;
    v51 = v25;
    v53 = v25;
    v55 = v25;
    TlgCreateWsz(&v56, v35[1]);
    TlgCreateSz(&v57, (LPCSTR)v35[0]);
    v26 = a2->x;
    v58 = &v31;
    y = a2->y;
    p_y = &y;
    v29 = a3->x;
    v62 = &v29;
    v28 = a3->y;
    v64 = &v28;
    v31 = v26;
    v59 = v27;
    v61 = v27;
    v63 = v27;
    v65 = v27;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E60D1, 0LL, 0LL, 0x11u, &pData);
  }
}
