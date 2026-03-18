/*
 * XREFs of ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z @ 0x1C0145A10
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0146F48 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C014AB2C (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0127CA4 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C013E49C (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::SpeedHitTest(
        const union POINTERINFOUNION *a1,
        const struct CInputDest *a2,
        char a3)
{
  int v6; // eax
  __int64 v7; // r8
  _QWORD *v8; // rdx
  __int64 WindowDetails; // rax
  __int64 v10; // r10
  int v11; // ecx
  __int64 v12; // r10
  const char *v13; // rax
  int v14; // ecx
  __int64 v15; // r10
  __int64 v16; // r10
  int v17; // ecx
  __int64 v18; // r10
  const char *v19; // rax
  int v20; // ecx
  __int64 v21; // r10
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  HWND v32; // [rsp+58h] [rbp-A8h] BYREF
  HWND WindowHandle; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR v34[2]; // [rsp+68h] [rbp-98h]
  LPCWSTR pwsz[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v37[48]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  HWND *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  HWND *p_WindowHandle; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  LPCWSTR *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  char *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  __int64 *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+150h] [rbp+50h] BYREF
  char *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  int *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+180h] [rbp+80h] BYREF
  int *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  int *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  int *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  int *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  int *v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  int *v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1E8h] [rbp+E8h]
  int *v69; // [rsp+1F0h] [rbp+F0h]
  __int64 v70; // [rsp+1F8h] [rbp+F8h]
  int *v71; // [rsp+200h] [rbp+100h]
  __int64 v72; // [rsp+208h] [rbp+108h]
  int *v73; // [rsp+210h] [rbp+110h]
  __int64 v74; // [rsp+218h] [rbp+118h]
  char *v75; // [rsp+220h] [rbp+120h]
  __int64 v76; // [rsp+228h] [rbp+128h]

  if ( !TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C01C7F10, 0, 0LL) )
    return;
  v6 = *((_DWORD *)a2 + 21);
  if ( v6 == 1 )
  {
    v7 = *((_QWORD *)a2 + 9);
LABEL_4:
    v8 = 0LL;
    goto LABEL_5;
  }
  v7 = 0LL;
  if ( v6 != 2 )
    goto LABEL_4;
  v8 = (_QWORD *)*((_QWORD *)a2 + 9);
LABEL_5:
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v37, v8, v7);
  *(_OWORD *)v34 = *(_OWORD *)WindowDetails;
  *(_OWORD *)pwsz = *(_OWORD *)(WindowDetails + 16);
  v36 = *(_QWORD *)(WindowDetails + 32);
  if ( a3 )
  {
    if ( dword_1C01C7F10 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x20uLL) )
      {
        v32 = (HWND)*((_QWORD *)a1 + 10);
        v39 = &v32;
        v40 = 8LL;
        WindowHandle = CInputDest::GetWindowHandle(a2);
        p_WindowHandle = &WindowHandle;
        v42 = 8LL;
        TlgCreateWsz(&pDesc, pwsz[0]);
        v46 = (char *)&pwsz[1] + 4;
        v44 = &pwsz[1];
        v48 = &v36;
        v45 = v10;
        v47 = v10;
        v49 = v10;
        TlgCreateWsz(&v50, v34[1]);
        TlgCreateSz(&v51, (LPCSTR)v34[0]);
        v22 = *((_DWORD *)a1 + 2);
        v52 = (char *)a1 + 4;
        v11 = *(_DWORD *)a1;
        v54 = &v22;
        v53 = v12;
        v55 = v12;
        v13 = InputTraceLogging::PointerTypeToString(v11);
        TlgCreateSz(&v56, v13);
        v14 = *((_DWORD *)a1 + 3);
        v57 = &v23;
        v24 = *((_DWORD *)a1 + 8);
        v59 = &v24;
        v25 = *((_DWORD *)a1 + 9);
        v61 = &v25;
        v26 = *((_DWORD *)a1 + 12);
        v63 = &v26;
        v27 = *((_DWORD *)a1 + 13);
        v65 = &v27;
        v28 = *((_DWORD *)a1 + 10);
        v67 = &v28;
        v29 = *((_DWORD *)a1 + 11);
        v69 = &v29;
        v30 = *((_DWORD *)a1 + 14);
        v71 = &v30;
        v23 = v14;
        v58 = v15;
        v60 = v15;
        v62 = v15;
        v64 = v15;
        v66 = v15;
        v68 = v15;
        v70 = v15;
        v31 = *((_DWORD *)a1 + 15);
        v73 = &v31;
        v75 = (char *)a1 + 72;
        v72 = v15;
        v74 = v15;
        v76 = v15;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A070F, 0LL, 0LL, 0x17u, &pData);
      }
    }
  }
  else if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x20uLL) )
  {
    WindowHandle = (HWND)*((_QWORD *)a1 + 10);
    v39 = &WindowHandle;
    v40 = 8LL;
    v32 = CInputDest::GetWindowHandle(a2);
    p_WindowHandle = &v32;
    v42 = 8LL;
    TlgCreateWsz(&pDesc, pwsz[0]);
    v46 = (char *)&pwsz[1] + 4;
    v44 = &pwsz[1];
    v48 = &v36;
    v45 = v16;
    v47 = v16;
    v49 = v16;
    TlgCreateWsz(&v50, v34[1]);
    TlgCreateSz(&v51, (LPCSTR)v34[0]);
    v31 = *((_DWORD *)a1 + 2);
    v52 = (char *)a1 + 4;
    v17 = *(_DWORD *)a1;
    v54 = &v31;
    v53 = v18;
    v55 = v18;
    v19 = InputTraceLogging::PointerTypeToString(v17);
    TlgCreateSz(&v56, v19);
    v20 = *((_DWORD *)a1 + 3);
    v57 = &v30;
    v29 = *((_DWORD *)a1 + 8);
    v59 = &v29;
    v28 = *((_DWORD *)a1 + 9);
    v61 = &v28;
    v27 = *((_DWORD *)a1 + 12);
    v63 = &v27;
    v26 = *((_DWORD *)a1 + 13);
    v65 = &v26;
    v25 = *((_DWORD *)a1 + 10);
    v67 = &v25;
    v24 = *((_DWORD *)a1 + 11);
    v69 = &v24;
    v23 = *((_DWORD *)a1 + 14);
    v71 = &v23;
    v30 = v20;
    v58 = v21;
    v60 = v21;
    v62 = v21;
    v64 = v21;
    v66 = v21;
    v68 = v21;
    v70 = v21;
    v22 = *((_DWORD *)a1 + 15);
    v73 = &v22;
    v75 = (char *)a1 + 72;
    v72 = v21;
    v74 = v21;
    v76 = v21;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0838, 0LL, 0LL, 0x17u, &pData);
  }
}
