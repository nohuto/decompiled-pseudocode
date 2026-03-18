/*
 * XREFs of ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1C002FFE4
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001A108 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0127CA4 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestRequest(__int64 a1, const struct _InputHitTestRequest *a2)
{
  unsigned int *v2; // r10
  __int64 v3; // r11
  unsigned int v4; // ecx
  const CHAR *v5; // rax
  __int64 v6; // r10
  bool v7; // zf
  const WCHAR *v8; // rdx
  const WCHAR *v9; // r11
  __int64 v10; // r10
  const WCHAR *v11; // rdx
  const WCHAR *v12; // r11
  __int64 v13; // r10
  const WCHAR *v14; // rdx
  const WCHAR *v15; // r11
  __int64 v16; // r10
  const WCHAR *v17; // rdx
  const WCHAR *v18; // r11
  __int64 v19; // r10
  const WCHAR *v20; // rdx
  const WCHAR *v21; // r11
  __int64 v22; // r10
  const WCHAR *v23; // rdx
  const WCHAR *v24; // r11
  __int64 v25; // r10
  const WCHAR *v26; // rdx
  const WCHAR *v27; // r11
  __int64 v28; // r10
  const WCHAR *v29; // rdx
  const WCHAR *v30; // r11
  __int64 v31; // r10
  const WCHAR *v32; // rdx
  __int64 v33; // r10
  int v34; // ecx
  int v35; // [rsp+30h] [rbp-D0h] BYREF
  int v36; // [rsp+34h] [rbp-CCh] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+3Ch] [rbp-C4h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  int *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  int *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+150h] [rbp+50h] BYREF
  int *v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+168h] [rbp+68h]
  __int64 v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+178h] [rbp+78h]
  int *v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+188h] [rbp+88h]
  int *v67; // [rsp+190h] [rbp+90h]
  __int64 v68; // [rsp+198h] [rbp+98h]
  __int64 *v69; // [rsp+1A0h] [rbp+A0h]
  __int64 v70; // [rsp+1A8h] [rbp+A8h]
  __int64 v71; // [rsp+1B0h] [rbp+B0h]
  __int64 v72; // [rsp+1B8h] [rbp+B8h]
  __int64 v73; // [rsp+1C0h] [rbp+C0h]
  __int64 v74; // [rsp+1C8h] [rbp+C8h]
  __int64 v75; // [rsp+1D0h] [rbp+D0h]
  __int64 v76; // [rsp+1D8h] [rbp+D8h]
  __int64 v77; // [rsp+1E0h] [rbp+E0h]
  __int64 v78; // [rsp+1E8h] [rbp+E8h]
  __int64 v79; // [rsp+1F0h] [rbp+F0h]
  __int64 v80; // [rsp+1F8h] [rbp+F8h]
  __int64 v81; // [rsp+200h] [rbp+100h]
  __int64 v82; // [rsp+208h] [rbp+108h]
  __int64 v83; // [rsp+210h] [rbp+110h]
  __int64 v84; // [rsp+218h] [rbp+118h]
  __int64 v85; // [rsp+220h] [rbp+120h]
  __int64 v86; // [rsp+228h] [rbp+128h]
  __int64 v87; // [rsp+230h] [rbp+130h]
  __int64 v88; // [rsp+238h] [rbp+138h]
  __int64 v89; // [rsp+240h] [rbp+140h]
  __int64 v90; // [rsp+248h] [rbp+148h]
  __int64 v91; // [rsp+250h] [rbp+150h]
  __int64 v92; // [rsp+258h] [rbp+158h]
  __int64 v93; // [rsp+260h] [rbp+160h]
  __int64 v94; // [rsp+268h] [rbp+168h]
  __int64 v95; // [rsp+270h] [rbp+170h]
  __int64 v96; // [rsp+278h] [rbp+178h]
  __int64 v97; // [rsp+280h] [rbp+180h]
  __int64 v98; // [rsp+288h] [rbp+188h]
  __int64 v99; // [rsp+290h] [rbp+190h]
  __int64 v100; // [rsp+298h] [rbp+198h]
  __int64 v101; // [rsp+2A0h] [rbp+1A0h]
  __int64 v102; // [rsp+2A8h] [rbp+1A8h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C01C7F10, 0, 0LL)
    && dword_1C01C7F10 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 2uLL) )
  {
    v4 = *v2;
    v43 = &v40;
    v40 = v3;
    v44 = 8LL;
    v5 = InputTraceLogging::PointerTypeToString(v4);
    TlgCreateSz(&pDesc, v5);
    v7 = (*(_BYTE *)(v6 + 92) & 1) == 0;
    v35 = *(_DWORD *)(v6 + 16);
    v8 = L"MouseWheel";
    v46 = v6 + 24;
    v48 = &v35;
    if ( v7 )
      v8 = &word_1C01944BC;
    v36 = *(_DWORD *)(v6 + 20);
    v50 = &v36;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    TlgCreateWsz(&v52, v8);
    v11 = L"WheelIncreasing";
    if ( (*(_BYTE *)(v10 + 92) & 2) == 0 )
      v11 = v9;
    TlgCreateWsz(&v53, v11);
    v14 = L"WheelHorizontal";
    if ( (*(_BYTE *)(v13 + 92) & 4) == 0 )
      v14 = v12;
    TlgCreateWsz(&v54, v14);
    v17 = L"ButtonDown";
    if ( (*(_BYTE *)(v16 + 92) & 8) == 0 )
      v17 = v15;
    TlgCreateWsz(&v55, v17);
    v20 = L"TouchTargeting";
    if ( (*(_BYTE *)(v19 + 92) & 0x10) == 0 )
      v20 = v18;
    TlgCreateWsz(&v56, v20);
    v23 = L"NoHoverPointer";
    if ( (*(_BYTE *)(v22 + 92) & 0x20) == 0 )
      v23 = v21;
    TlgCreateWsz(&v57, v23);
    v26 = L"BarrelButtonDown";
    if ( (*(_BYTE *)(v25 + 92) & 0x40) == 0 )
      v26 = v24;
    TlgCreateWsz(&v58, v26);
    v29 = L"EraserDown";
    if ( *(char *)(v28 + 92) >= 0 )
      v29 = v27;
    TlgCreateWsz(&v59, v29);
    v32 = L"ControlDown";
    if ( (*(_DWORD *)(v31 + 92) & 0x100) == 0 )
      v32 = v30;
    TlgCreateWsz(&v60, v32);
    v34 = *(_DWORD *)(v33 + 92);
    v61 = &v37;
    v63 = v33 + 96;
    v38 = *(_DWORD *)(v33 + 104);
    v65 = &v38;
    v37 = v34;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v39 = *(_DWORD *)(v33 + 100);
    v67 = &v39;
    v41 = *(_QWORD *)(v33 + 8);
    v69 = &v41;
    v71 = v33 + 28;
    v73 = v33 + 32;
    v75 = v33 + 36;
    v77 = v33 + 40;
    v79 = v33 + 44;
    v81 = v33 + 48;
    v83 = v33 + 52;
    v85 = v33 + 56;
    v87 = v33 + 60;
    v89 = v33 + 64;
    v91 = v33 + 68;
    v93 = v33 + 72;
    v95 = v33 + 76;
    v97 = v33 + 80;
    v99 = v33 + 84;
    v101 = v33 + 88;
    v68 = 4LL;
    v70 = 8LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    v80 = 4LL;
    v82 = 4LL;
    v84 = 4LL;
    v86 = 4LL;
    v88 = 4LL;
    v90 = 4LL;
    v92 = 4LL;
    v94 = 4LL;
    v96 = 4LL;
    v98 = 4LL;
    v100 = 4LL;
    v102 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0FD3, 0LL, 0LL, 0x25u, &pData);
  }
}
