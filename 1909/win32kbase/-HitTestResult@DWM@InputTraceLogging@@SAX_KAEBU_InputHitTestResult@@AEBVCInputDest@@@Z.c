/*
 * XREFs of ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C0033D38
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C0017438 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0031E30 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C016ADCC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C016F988 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestResult(
        __int64 a1,
        const struct _InputHitTestResult *a2,
        const struct CInputDest *a3)
{
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 WindowDetails; // rax
  __int64 v10; // r10
  __int64 v11; // r10
  int v12; // eax
  __int64 v13; // rcx
  const CHAR *v14; // rax
  int v15; // ecx
  __int64 v16; // r10
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  LPCWSTR v23[2]; // [rsp+50h] [rbp-B0h]
  LPCWSTR pwsz[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  char v26[120]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v27; // [rsp+F0h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v29; // [rsp+140h] [rbp+40h]
  __int64 v30; // [rsp+148h] [rbp+48h]
  char *v31; // [rsp+150h] [rbp+50h]
  __int64 v32; // [rsp+158h] [rbp+58h]
  __int64 *v33; // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF
  LPCWSTR *v36; // [rsp+180h] [rbp+80h]
  __int64 v37; // [rsp+188h] [rbp+88h]
  char *v38; // [rsp+190h] [rbp+90h]
  __int64 v39; // [rsp+198h] [rbp+98h]
  __int64 *v40; // [rsp+1A0h] [rbp+A0h]
  __int64 v41; // [rsp+1A8h] [rbp+A8h]
  int *v42; // [rsp+1B0h] [rbp+B0h]
  __int64 v43; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v46; // [rsp+1E0h] [rbp+E0h]
  __int64 v47; // [rsp+1E8h] [rbp+E8h]
  char *v48; // [rsp+1F0h] [rbp+F0h]
  __int64 v49; // [rsp+1F8h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+200h] [rbp+100h] BYREF
  int *v51; // [rsp+210h] [rbp+110h]
  __int64 v52; // [rsp+218h] [rbp+118h]
  int *v53; // [rsp+220h] [rbp+120h]
  __int64 v54; // [rsp+228h] [rbp+128h]
  char *v55; // [rsp+230h] [rbp+130h]
  __int64 v56; // [rsp+238h] [rbp+138h]
  char *v57; // [rsp+240h] [rbp+140h]
  __int64 v58; // [rsp+248h] [rbp+148h]
  char *v59; // [rsp+250h] [rbp+150h]
  __int64 v60; // [rsp+258h] [rbp+158h]
  char *v61; // [rsp+260h] [rbp+160h]
  __int64 v62; // [rsp+268h] [rbp+168h]
  char *v63; // [rsp+270h] [rbp+170h]
  __int64 v64; // [rsp+278h] [rbp+178h]
  char *v65; // [rsp+280h] [rbp+180h]
  __int64 v66; // [rsp+288h] [rbp+188h]
  char *v67; // [rsp+290h] [rbp+190h]
  __int64 v68; // [rsp+298h] [rbp+198h]
  char *v69; // [rsp+2A0h] [rbp+1A0h]
  __int64 v70; // [rsp+2A8h] [rbp+1A8h]
  char *v71; // [rsp+2B0h] [rbp+1B0h]
  __int64 v72; // [rsp+2B8h] [rbp+1B8h]
  char *v73; // [rsp+2C0h] [rbp+1C0h]
  __int64 v74; // [rsp+2C8h] [rbp+1C8h]
  char *v75; // [rsp+2D0h] [rbp+1D0h]
  __int64 v76; // [rsp+2D8h] [rbp+1D8h]
  char *v77; // [rsp+2E0h] [rbp+1E0h]
  __int64 v78; // [rsp+2E8h] [rbp+1E8h]
  char *v79; // [rsp+2F0h] [rbp+1F0h]
  __int64 v80; // [rsp+2F8h] [rbp+1F8h]
  char *v81; // [rsp+300h] [rbp+200h]
  __int64 v82; // [rsp+308h] [rbp+208h]
  char *v83; // [rsp+310h] [rbp+210h]
  __int64 v84; // [rsp+318h] [rbp+218h]
  char *v85; // [rsp+320h] [rbp+220h]
  __int64 v86; // [rsp+328h] [rbp+228h]

  if ( !TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C020CB50, 0, 0LL) )
    return;
  v6 = *((_DWORD *)a3 + 23);
  if ( v6 == 1 )
  {
    v7 = *((_QWORD *)a3 + 10);
  }
  else
  {
    v7 = 0LL;
    if ( v6 == 2 )
    {
      v8 = *((_QWORD *)a3 + 10);
      goto LABEL_6;
    }
  }
  v8 = 0LL;
LABEL_6:
  WindowDetails = InputTraceLogging::GetWindowDetails(v26, v8, v7);
  *(_OWORD *)v23 = *(_OWORD *)WindowDetails;
  *(_OWORD *)pwsz = *(_OWORD *)(WindowDetails + 16);
  v25 = *(_QWORD *)(WindowDetails + 32);
  v27 = *((_OWORD *)a3 + 5);
  if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 2uLL) )
  {
    v29 = &v21;
    v21 = a1;
    v31 = (char *)a2 + 16;
    v22 = *((_QWORD *)a2 + 1);
    v33 = &v22;
    v30 = 8LL;
    v32 = 8LL;
    v34 = 8LL;
    TlgCreateWsz(&pDesc, pwsz[0]);
    v38 = (char *)&pwsz[1] + 4;
    v36 = &pwsz[1];
    v40 = &v25;
    v17 = HIDWORD(v25);
    v42 = &v17;
    v37 = v10;
    v39 = v10;
    v41 = v10;
    v43 = v10;
    TlgCreateWsz(&v44, v23[1]);
    TlgCreateSz(&v45, (LPCSTR)v23[0]);
    if ( HIDWORD(v27) == 2 )
      v12 = -(BYTE8(v27) & 1);
    else
      v12 = 0;
    v13 = *((unsigned int *)a2 + 27);
    v18 = v12;
    v46 = &v18;
    v48 = (char *)a2 + 88;
    v47 = v11;
    v49 = v11;
    v14 = (const CHAR *)InputTraceLogging::RoutingModeToString(v13);
    TlgCreateSz(&v50, v14);
    v15 = *(_DWORD *)a2;
    v51 = &v19;
    v20 = *((_DWORD *)a2 + 1);
    v53 = &v20;
    v55 = (char *)a2 + 24;
    v57 = (char *)a2 + 28;
    v59 = (char *)a2 + 32;
    v61 = (char *)a2 + 36;
    v63 = (char *)a2 + 40;
    v65 = (char *)a2 + 44;
    v67 = (char *)a2 + 48;
    v69 = (char *)a2 + 52;
    v71 = (char *)a2 + 56;
    v73 = (char *)a2 + 60;
    v75 = (char *)a2 + 64;
    v77 = (char *)a2 + 68;
    v79 = (char *)a2 + 72;
    v81 = (char *)a2 + 76;
    v83 = (char *)a2 + 80;
    v85 = (char *)a2 + 84;
    v19 = v15;
    v52 = v16;
    v54 = v16;
    v56 = v16;
    v58 = v16;
    v60 = v16;
    v62 = v16;
    v64 = v16;
    v66 = v16;
    v68 = v16;
    v70 = v16;
    v72 = v16;
    v74 = v16;
    v76 = v16;
    v78 = v16;
    v80 = v16;
    v82 = v16;
    v84 = v16;
    v86 = v16;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E5643, 0LL, 0LL, 0x21u, &pData);
  }
}
