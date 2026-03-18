/*
 * XREFs of ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1C0033CC4
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C0017438 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0031E30 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C016C854 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestRequest(__int64 a1, const struct _InputHitTestRequest *a2)
{
  unsigned int *v2; // r10
  __int64 v3; // r11
  unsigned int v4; // ecx
  const CHAR *v5; // rax
  __int64 v6; // r10
  int v7; // ecx
  bool v8; // zf
  const WCHAR *v9; // rdx
  const WCHAR *v10; // r11
  __int64 v11; // r10
  const WCHAR *v12; // rdx
  const WCHAR *v13; // r11
  __int64 v14; // r10
  const WCHAR *v15; // rdx
  const WCHAR *v16; // r11
  __int64 v17; // r10
  const WCHAR *v18; // rdx
  const WCHAR *v19; // r11
  __int64 v20; // r10
  const WCHAR *v21; // rdx
  const WCHAR *v22; // r11
  __int64 v23; // r10
  const WCHAR *v24; // rdx
  const WCHAR *v25; // r11
  __int64 v26; // r10
  const WCHAR *v27; // rdx
  const WCHAR *v28; // r11
  __int64 v29; // r10
  const WCHAR *v30; // rdx
  const WCHAR *v31; // r11
  __int64 v32; // r10
  const WCHAR *v33; // rdx
  __int64 v34; // r10
  int v35; // ecx
  int v36; // [rsp+30h] [rbp-D0h] BYREF
  int v37; // [rsp+34h] [rbp-CCh] BYREF
  int v38; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+3Ch] [rbp-C4h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  int *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+140h] [rbp+40h] BYREF
  int *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  __int64 v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  int *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  int *v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  __int64 *v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  __int64 v70; // [rsp+1A0h] [rbp+A0h]
  __int64 v71; // [rsp+1A8h] [rbp+A8h]
  __int64 v72; // [rsp+1B0h] [rbp+B0h]
  __int64 v73; // [rsp+1B8h] [rbp+B8h]
  __int64 v74; // [rsp+1C0h] [rbp+C0h]
  __int64 v75; // [rsp+1C8h] [rbp+C8h]
  __int64 v76; // [rsp+1D0h] [rbp+D0h]
  __int64 v77; // [rsp+1D8h] [rbp+D8h]
  __int64 v78; // [rsp+1E0h] [rbp+E0h]
  __int64 v79; // [rsp+1E8h] [rbp+E8h]
  __int64 v80; // [rsp+1F0h] [rbp+F0h]
  __int64 v81; // [rsp+1F8h] [rbp+F8h]
  __int64 v82; // [rsp+200h] [rbp+100h]
  __int64 v83; // [rsp+208h] [rbp+108h]
  __int64 v84; // [rsp+210h] [rbp+110h]
  __int64 v85; // [rsp+218h] [rbp+118h]
  __int64 v86; // [rsp+220h] [rbp+120h]
  __int64 v87; // [rsp+228h] [rbp+128h]
  __int64 v88; // [rsp+230h] [rbp+130h]
  __int64 v89; // [rsp+238h] [rbp+138h]
  __int64 v90; // [rsp+240h] [rbp+140h]
  __int64 v91; // [rsp+248h] [rbp+148h]
  __int64 v92; // [rsp+250h] [rbp+150h]
  __int64 v93; // [rsp+258h] [rbp+158h]
  __int64 v94; // [rsp+260h] [rbp+160h]
  __int64 v95; // [rsp+268h] [rbp+168h]
  __int64 v96; // [rsp+270h] [rbp+170h]
  __int64 v97; // [rsp+278h] [rbp+178h]
  __int64 v98; // [rsp+280h] [rbp+180h]
  __int64 v99; // [rsp+288h] [rbp+188h]
  __int64 v100; // [rsp+290h] [rbp+190h]
  __int64 v101; // [rsp+298h] [rbp+198h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C020CB50, 0, 0LL)
    && dword_1C020CB50 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 2uLL) )
  {
    v4 = *v2;
    v44 = &v41;
    v41 = v3;
    v45 = 8LL;
    v5 = InputTraceLogging::PointerTypeToString(v4);
    TlgCreateSz(&pDesc, v5);
    v7 = *(_DWORD *)(v6 + 16);
    v8 = (*(_BYTE *)(v6 + 88) & 1) == 0;
    v47 = &v36;
    v9 = L"MouseWheel";
    if ( v8 )
      v9 = &pwsz;
    v37 = *(_DWORD *)(v6 + 20);
    v36 = v7;
    v49 = &v37;
    v48 = 4LL;
    v50 = 4LL;
    TlgCreateWsz(&v51, v9);
    v12 = L"WheelIncreasing";
    if ( (*(_BYTE *)(v11 + 88) & 2) == 0 )
      v12 = v10;
    TlgCreateWsz(&v52, v12);
    v15 = L"WheelHorizontal";
    if ( (*(_BYTE *)(v14 + 88) & 4) == 0 )
      v15 = v13;
    TlgCreateWsz(&v53, v15);
    v18 = L"ButtonDown";
    if ( (*(_BYTE *)(v17 + 88) & 8) == 0 )
      v18 = v16;
    TlgCreateWsz(&v54, v18);
    v21 = L"TouchTargeting";
    if ( (*(_BYTE *)(v20 + 88) & 0x10) == 0 )
      v21 = v19;
    TlgCreateWsz(&v55, v21);
    v24 = L"NoHoverPointer";
    if ( (*(_BYTE *)(v23 + 88) & 0x20) == 0 )
      v24 = v22;
    TlgCreateWsz(&v56, v24);
    v27 = L"BarrelButtonDown";
    if ( (*(_BYTE *)(v26 + 88) & 0x40) == 0 )
      v27 = v25;
    TlgCreateWsz(&v57, v27);
    v30 = L"EraserDown";
    if ( *(char *)(v29 + 88) >= 0 )
      v30 = v28;
    TlgCreateWsz(&v58, v30);
    v33 = L"ControlDown";
    if ( (*(_DWORD *)(v32 + 88) & 0x100) == 0 )
      v33 = v31;
    TlgCreateWsz(&v59, v33);
    v35 = *(_DWORD *)(v34 + 88);
    v60 = &v38;
    v62 = v34 + 92;
    v39 = *(_DWORD *)(v34 + 100);
    v64 = &v39;
    v40 = *(_DWORD *)(v34 + 96);
    v38 = v35;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v66 = &v40;
    v42 = *(_QWORD *)(v34 + 8);
    v68 = &v42;
    v70 = v34 + 24;
    v72 = v34 + 28;
    v74 = v34 + 32;
    v76 = v34 + 36;
    v78 = v34 + 40;
    v80 = v34 + 44;
    v82 = v34 + 48;
    v84 = v34 + 52;
    v86 = v34 + 56;
    v88 = v34 + 60;
    v90 = v34 + 64;
    v92 = v34 + 68;
    v94 = v34 + 72;
    v96 = v34 + 76;
    v98 = v34 + 80;
    v100 = v34 + 84;
    v67 = 4LL;
    v69 = 8LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 4LL;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 4LL;
    v91 = 4LL;
    v93 = 4LL;
    v95 = 4LL;
    v97 = 4LL;
    v99 = 4LL;
    v101 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E5782, 0LL, 0LL, 0x24u, &pData);
  }
}
