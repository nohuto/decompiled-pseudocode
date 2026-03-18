/*
 * XREFs of ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0142CD4
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01374A8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
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

void __fastcall InputTraceLogging::Pointer::SecondaryHitTest(
        const union POINTERINFOUNION *a1,
        const struct CInputDest *a2,
        const struct tagPOINT *a3)
{
  _QWORD *v6; // rdx
  __int64 WindowDetails; // rax
  __int64 v8; // r10
  LONG x; // ecx
  int v10; // ecx
  __int64 v11; // r10
  const char *v12; // rax
  int v13; // ecx
  __int64 v14; // r10
  LONG v15; // [rsp+30h] [rbp-D0h] BYREF
  LONG y; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  HWND WindowHandle; // [rsp+68h] [rbp-98h] BYREF
  LPCWSTR v29[2]; // [rsp+70h] [rbp-90h]
  LPCWSTR pwsz[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h] BYREF
  char v32[40]; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  HWND *p_WindowHandle; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  LPCWSTR *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  char *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  __int64 *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+150h] [rbp+50h] BYREF
  LONG *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  LONG *p_y; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  char *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  int *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  int *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]
  int *v60; // [rsp+1D0h] [rbp+D0h]
  __int64 v61; // [rsp+1D8h] [rbp+D8h]
  int *v62; // [rsp+1E0h] [rbp+E0h]
  __int64 v63; // [rsp+1E8h] [rbp+E8h]
  int *v64; // [rsp+1F0h] [rbp+F0h]
  __int64 v65; // [rsp+1F8h] [rbp+F8h]
  int *v66; // [rsp+200h] [rbp+100h]
  __int64 v67; // [rsp+208h] [rbp+108h]
  int *v68; // [rsp+210h] [rbp+110h]
  __int64 v69; // [rsp+218h] [rbp+118h]
  int *v70; // [rsp+220h] [rbp+120h]
  __int64 v71; // [rsp+228h] [rbp+128h]
  int *v72; // [rsp+230h] [rbp+130h]
  __int64 v73; // [rsp+238h] [rbp+138h]
  char *v74; // [rsp+240h] [rbp+140h]
  __int64 v75; // [rsp+248h] [rbp+148h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C01C7F10, 0, 0LL) )
  {
    if ( *((_DWORD *)a2 + 21) == 2 )
      v6 = (_QWORD *)*((_QWORD *)a2 + 9);
    else
      v6 = 0LL;
    WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v32, v6, 0LL);
    *(_OWORD *)v29 = *(_OWORD *)WindowDetails;
    *(_OWORD *)pwsz = *(_OWORD *)(WindowDetails + 16);
    v31 = *(_QWORD *)(WindowDetails + 32);
    if ( dword_1C01C7F10 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x20uLL) )
      {
        v27 = *((_QWORD *)a1 + 10);
        v34 = &v27;
        v35 = 8LL;
        WindowHandle = CInputDest::GetWindowHandle(a2);
        p_WindowHandle = &WindowHandle;
        v37 = 8LL;
        TlgCreateWsz(&pDesc, pwsz[0]);
        v41 = (char *)&pwsz[1] + 4;
        v39 = &pwsz[1];
        v43 = &v31;
        v40 = v8;
        v42 = v8;
        v44 = v8;
        TlgCreateWsz(&v45, v29[1]);
        TlgCreateSz(&v46, (LPCSTR)v29[0]);
        x = a3->x;
        v47 = &v15;
        y = a3->y;
        p_y = &y;
        v51 = (char *)a1 + 4;
        v17 = *((_DWORD *)a1 + 2);
        v15 = x;
        v10 = *(_DWORD *)a1;
        v53 = &v17;
        v48 = v11;
        v50 = v11;
        v52 = v11;
        v54 = v11;
        v12 = InputTraceLogging::PointerTypeToString(v10);
        TlgCreateSz(&v55, v12);
        v13 = *((_DWORD *)a1 + 3);
        v56 = &v18;
        v19 = *((_DWORD *)a1 + 8);
        v58 = &v19;
        v20 = *((_DWORD *)a1 + 9);
        v60 = &v20;
        v21 = *((_DWORD *)a1 + 12);
        v62 = &v21;
        v22 = *((_DWORD *)a1 + 13);
        v64 = &v22;
        v23 = *((_DWORD *)a1 + 10);
        v66 = &v23;
        v18 = v13;
        v57 = v14;
        v59 = v14;
        v61 = v14;
        v63 = v14;
        v65 = v14;
        v24 = *((_DWORD *)a1 + 11);
        v68 = &v24;
        v25 = *((_DWORD *)a1 + 14);
        v70 = &v25;
        v26 = *((_DWORD *)a1 + 15);
        v72 = &v26;
        v74 = (char *)a1 + 72;
        v67 = v14;
        v69 = v14;
        v71 = v14;
        v73 = v14;
        v75 = v14;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A020D, 0LL, 0LL, 0x19u, &pData);
      }
    }
  }
}
