/*
 * XREFs of McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq @ 0x1801927A0
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18018E700 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x180191394 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800A3600 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const wchar_t *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        __int64 a14,
        __int64 a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33,
        char a34)
{
  __int64 v34; // rax
  int v35; // ecx
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v38; // [rsp+40h] [rbp-C0h]
  int v39; // [rsp+48h] [rbp-B8h]
  int v40; // [rsp+4Ch] [rbp-B4h]
  __int64 *v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  char *v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  char *v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  char *v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  char *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  char *v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  char *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  char *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  char *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  char *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  char *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  char *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  char *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  char *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  char *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  char *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  char *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  char *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  char *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  char *v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  char *v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]
  char *v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1C8h] [rbp+C8h]
  char *v89; // [rsp+1D0h] [rbp+D0h]
  __int64 v90; // [rsp+1D8h] [rbp+D8h]
  char *v91; // [rsp+1E0h] [rbp+E0h]
  __int64 v92; // [rsp+1E8h] [rbp+E8h]
  char *v93; // [rsp+1F0h] [rbp+F0h]
  __int64 v94; // [rsp+1F8h] [rbp+F8h]
  char *v95; // [rsp+200h] [rbp+100h]
  __int64 v96; // [rsp+208h] [rbp+108h]
  char *v97; // [rsp+210h] [rbp+110h]
  __int64 v98; // [rsp+218h] [rbp+118h]
  char *v99; // [rsp+220h] [rbp+120h]
  __int64 v100; // [rsp+228h] [rbp+128h]
  __int64 v101; // [rsp+268h] [rbp+168h] BYREF

  v101 = a4;
  if ( a3 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a3[v34] );
    v35 = 2 * v34 + 2;
  }
  else
  {
    v35 = 10;
  }
  v39 = v35;
  v40 = 0;
  v42 = 8LL;
  if ( !a3 )
    a3 = L"NULL";
  v44 = 4LL;
  v38 = a3;
  v41 = &v101;
  v43 = &a5;
  v45 = &a6;
  v47 = &a7;
  v49 = &a8;
  v51 = &a9;
  v53 = &a10;
  v55 = &a11;
  v57 = &a12;
  v59 = &a13;
  v61 = a15;
  v63 = &a16;
  v65 = &a17;
  v67 = &a18;
  v69 = &a19;
  v71 = &a20;
  v73 = &a21;
  v75 = &a22;
  v77 = &a23;
  v79 = &a24;
  v81 = &a25;
  v83 = &a26;
  v85 = &a27;
  v87 = &a28;
  v89 = &a29;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 2LL;
  v54 = 2LL;
  v56 = 2LL;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 8LL;
  v64 = 4LL;
  v66 = 4LL;
  v68 = 4LL;
  v70 = 4LL;
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
  v91 = &a30;
  v94 = 4LL;
  v93 = &a31;
  v96 = 4LL;
  v95 = &a32;
  v97 = &a33;
  v99 = &a34;
  v98 = 4LL;
  v100 = 4LL;
  return McGenEventWrite(Microsoft_Windows_Dwm_Core_Provider_Context, a2, (__int64)a3, 0x20u, &v37);
}
