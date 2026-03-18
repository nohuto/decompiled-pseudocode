/*
 * XREFs of ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@_N@Z @ 0x1C002FE14
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C002F9CC (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C013E49C (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Mouse::SpeedHitTest(
        HWND a1,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        const struct CInputDest *a4,
        bool a5)
{
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 WindowDetails; // rax
  __int64 v13; // r10
  LONG x; // ecx
  __int64 v15; // r10
  __int64 v16; // r10
  LONG v17; // ecx
  __int64 v18; // r10
  LONG v19; // [rsp+30h] [rbp-D0h] BYREF
  LONG y; // [rsp+34h] [rbp-CCh] BYREF
  LONG v21; // [rsp+38h] [rbp-C8h] BYREF
  LONG v22; // [rsp+3Ch] [rbp-C4h] BYREF
  HWND v23; // [rsp+40h] [rbp-C0h] BYREF
  HWND WindowHandle; // [rsp+48h] [rbp-B8h] BYREF
  LPCWSTR v25[2]; // [rsp+50h] [rbp-B0h]
  LPCWSTR pwsz[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[40]; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  HWND *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  HWND *p_WindowHandle; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  LPCWSTR *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  char *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+130h] [rbp+30h] BYREF
  LONG *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  LONG *p_y; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  LONG *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  LONG *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]

  if ( !TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C01C7F10, 0, 0LL) )
    return;
  v9 = *((_DWORD *)a4 + 21);
  if ( v9 == 1 )
  {
    v10 = *((_QWORD *)a4 + 9);
LABEL_5:
    v11 = 0LL;
    goto LABEL_6;
  }
  v10 = 0LL;
  if ( v9 != 2 )
    goto LABEL_5;
  v11 = *((_QWORD *)a4 + 9);
LABEL_6:
  WindowDetails = InputTraceLogging::GetWindowDetails(v28, v11, v10);
  *(_OWORD *)v25 = *(_OWORD *)WindowDetails;
  *(_OWORD *)pwsz = *(_OWORD *)(WindowDetails + 16);
  v27 = *(_QWORD *)(WindowDetails + 32);
  if ( a5 )
  {
    if ( dword_1C01C7F10 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
      {
        v23 = a1;
        v30 = &v23;
        v31 = 8LL;
        WindowHandle = CInputDest::GetWindowHandle(a4);
        p_WindowHandle = &WindowHandle;
        v33 = 8LL;
        TlgCreateWsz(&pDesc, pwsz[0]);
        v37 = (char *)&pwsz[1] + 4;
        v35 = &pwsz[1];
        v39 = &v27;
        v36 = v13;
        v38 = v13;
        v40 = v13;
        TlgCreateWsz(&v41, v25[1]);
        TlgCreateSz(&v42, (LPCSTR)v25[0]);
        x = a2->x;
        v43 = &v19;
        y = a2->y;
        p_y = &y;
        v21 = a3->x;
        v47 = &v21;
        v22 = a3->y;
        v49 = &v22;
        v19 = x;
        v44 = v15;
        v46 = v15;
        v48 = v15;
        v50 = v15;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A1765, 0LL, 0LL, 0xEu, &pData);
      }
    }
  }
  else if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
  {
    WindowHandle = a1;
    v30 = &WindowHandle;
    v31 = 8LL;
    v23 = CInputDest::GetWindowHandle(a4);
    p_WindowHandle = &v23;
    v33 = 8LL;
    TlgCreateWsz(&pDesc, pwsz[0]);
    v37 = (char *)&pwsz[1] + 4;
    v35 = &pwsz[1];
    v39 = &v27;
    v36 = v16;
    v38 = v16;
    v40 = v16;
    TlgCreateWsz(&v41, v25[1]);
    TlgCreateSz(&v42, (LPCSTR)v25[0]);
    v17 = a2->x;
    v43 = &v22;
    v21 = a2->y;
    p_y = &v21;
    y = a3->x;
    v47 = &y;
    v19 = a3->y;
    v49 = &v19;
    v22 = v17;
    v44 = v18;
    v46 = v18;
    v48 = v18;
    v50 = v18;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A181C, 0LL, 0LL, 0xEu, &pData);
  }
}
