/*
 * XREFs of ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C002FF64
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001A108 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C013E49C (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
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
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // r10
  __int64 v20; // r10
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  LPCWSTR v29[2]; // [rsp+50h] [rbp-B0h]
  LPCWSTR pwsz[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  char v32[40]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-60h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  __int128 v35; // [rsp+C0h] [rbp-40h]
  __int128 v36; // [rsp+D0h] [rbp-30h]
  __int128 v37; // [rsp+E0h] [rbp-20h]
  __int128 v38; // [rsp+F0h] [rbp-10h]
  __int128 v39; // [rsp+100h] [rbp+0h]
  __int128 v40; // [rsp+110h] [rbp+10h]
  __int128 v41; // [rsp+120h] [rbp+20h]
  __int128 v42; // [rsp+130h] [rbp+30h]
  __int128 v43; // [rsp+140h] [rbp+40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF
  __int64 *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  char *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  __int64 *v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A0h] [rbp+A0h] BYREF
  LPCWSTR *v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]
  char *v54; // [rsp+1C0h] [rbp+C0h]
  __int64 v55; // [rsp+1C8h] [rbp+C8h]
  __int64 *v56; // [rsp+1D0h] [rbp+D0h]
  __int64 v57; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v60; // [rsp+200h] [rbp+100h]
  __int64 v61; // [rsp+208h] [rbp+108h]
  char *v62; // [rsp+210h] [rbp+110h]
  __int64 v63; // [rsp+218h] [rbp+118h]
  int *v64; // [rsp+220h] [rbp+120h]
  __int64 v65; // [rsp+228h] [rbp+128h]
  int *v66; // [rsp+230h] [rbp+130h]
  __int64 v67; // [rsp+238h] [rbp+138h]
  int *v68; // [rsp+240h] [rbp+140h]
  __int64 v69; // [rsp+248h] [rbp+148h]
  char *v70; // [rsp+250h] [rbp+150h]
  __int64 v71; // [rsp+258h] [rbp+158h]
  char *v72; // [rsp+260h] [rbp+160h]
  __int64 v73; // [rsp+268h] [rbp+168h]
  char *v74; // [rsp+270h] [rbp+170h]
  __int64 v75; // [rsp+278h] [rbp+178h]
  char *v76; // [rsp+280h] [rbp+180h]
  __int64 v77; // [rsp+288h] [rbp+188h]
  char *v78; // [rsp+290h] [rbp+190h]
  __int64 v79; // [rsp+298h] [rbp+198h]
  char *v80; // [rsp+2A0h] [rbp+1A0h]
  __int64 v81; // [rsp+2A8h] [rbp+1A8h]
  char *v82; // [rsp+2B0h] [rbp+1B0h]
  __int64 v83; // [rsp+2B8h] [rbp+1B8h]
  char *v84; // [rsp+2C0h] [rbp+1C0h]
  __int64 v85; // [rsp+2C8h] [rbp+1C8h]
  char *v86; // [rsp+2D0h] [rbp+1D0h]
  __int64 v87; // [rsp+2D8h] [rbp+1D8h]
  char *v88; // [rsp+2E0h] [rbp+1E0h]
  __int64 v89; // [rsp+2E8h] [rbp+1E8h]
  char *v90; // [rsp+2F0h] [rbp+1F0h]
  __int64 v91; // [rsp+2F8h] [rbp+1F8h]
  char *v92; // [rsp+300h] [rbp+200h]
  __int64 v93; // [rsp+308h] [rbp+208h]
  char *v94; // [rsp+310h] [rbp+210h]
  __int64 v95; // [rsp+318h] [rbp+218h]
  char *v96; // [rsp+320h] [rbp+220h]
  __int64 v97; // [rsp+328h] [rbp+228h]
  char *v98; // [rsp+330h] [rbp+230h]
  __int64 v99; // [rsp+338h] [rbp+238h]
  char *v100; // [rsp+340h] [rbp+240h]
  __int64 v101; // [rsp+348h] [rbp+248h]

  if ( !TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C01C7F10, 0, 0LL) )
    return;
  v6 = *((_DWORD *)a3 + 21);
  if ( v6 == 1 )
  {
    v7 = *((_QWORD *)a3 + 9);
  }
  else
  {
    v7 = 0LL;
    if ( v6 == 2 )
    {
      v8 = *((_QWORD *)a3 + 9);
      goto LABEL_6;
    }
  }
  v8 = 0LL;
LABEL_6:
  WindowDetails = InputTraceLogging::GetWindowDetails(v32, v8, v7);
  *(_OWORD *)v29 = *(_OWORD *)WindowDetails;
  *(_OWORD *)pwsz = *(_OWORD *)(WindowDetails + 16);
  v10 = *((_OWORD *)a3 + 1);
  v31 = *(_QWORD *)(WindowDetails + 32);
  v33 = *(_OWORD *)a3;
  v11 = *((_OWORD *)a3 + 2);
  v34 = v10;
  v12 = *((_OWORD *)a3 + 3);
  v35 = v11;
  v13 = *((_OWORD *)a3 + 4);
  v36 = v12;
  v14 = *((_OWORD *)a3 + 5);
  v37 = v13;
  v15 = *((_OWORD *)a3 + 6);
  v38 = v14;
  v16 = *((_OWORD *)a3 + 8);
  v39 = v15;
  v40 = *((_OWORD *)a3 + 7);
  v17 = *((_OWORD *)a3 + 9);
  v41 = v16;
  v18 = *((_OWORD *)a3 + 10);
  v42 = v17;
  v43 = v18;
  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 2uLL) )
  {
    v45 = &v27;
    v27 = a1;
    v47 = (char *)a2 + 16;
    v28 = *((_QWORD *)a2 + 1);
    v49 = &v28;
    v46 = 8LL;
    v48 = 8LL;
    v50 = 8LL;
    TlgCreateWsz(&pDesc, pwsz[0]);
    v54 = (char *)&pwsz[1] + 4;
    v52 = &pwsz[1];
    v56 = &v31;
    v53 = v19;
    v55 = v19;
    v57 = v19;
    TlgCreateWsz(&v58, v29[1]);
    TlgCreateSz(&v59, (LPCSTR)v29[0]);
    if ( DWORD1(v38) == 2 )
      v21 = -(v38 & 1);
    else
      v21 = 0;
    v23 = v21;
    v60 = &v23;
    v62 = (char *)a2 + 88;
    v22 = *((_DWORD *)a2 + 34) & 1;
    v61 = v20;
    v24 = v22;
    v64 = &v24;
    v25 = *(_DWORD *)a2;
    v66 = &v25;
    v26 = *((_DWORD *)a2 + 1);
    v68 = &v26;
    v70 = (char *)a2 + 24;
    v72 = (char *)a2 + 28;
    v74 = (char *)a2 + 32;
    v76 = (char *)a2 + 36;
    v78 = (char *)a2 + 40;
    v80 = (char *)a2 + 44;
    v82 = (char *)a2 + 48;
    v84 = (char *)a2 + 52;
    v86 = (char *)a2 + 56;
    v88 = (char *)a2 + 60;
    v90 = (char *)a2 + 64;
    v92 = (char *)a2 + 68;
    v94 = (char *)a2 + 72;
    v96 = (char *)a2 + 76;
    v98 = (char *)a2 + 80;
    v100 = (char *)a2 + 84;
    v63 = v20;
    v65 = v20;
    v67 = v20;
    v69 = v20;
    v71 = v20;
    v73 = v20;
    v75 = v20;
    v77 = v20;
    v79 = v20;
    v81 = v20;
    v83 = v20;
    v85 = v20;
    v87 = v20;
    v89 = v20;
    v91 = v20;
    v93 = v20;
    v95 = v20;
    v97 = v20;
    v99 = v20;
    v101 = v20;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0EA4, 0LL, 0LL, 0x20u, &pData);
  }
}
