/*
 * XREFs of McTemplateU0xxxxxxxxxqqqqqqqqqqqqxqnt @ 0x180192530
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z @ 0x18001D8AC (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800A3600 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxxxxxxxxqqqqqqqqqqqqxqnt(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
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
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int64 *v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  char *v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  char *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  char *v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  char *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  char *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  char *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  char *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  char *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  char *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  char *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  char *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  char *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  char *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  char *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  char *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  char *v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  char *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  char *v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  char *v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  va_list v70; // [rsp+1A0h] [rbp+A0h]
  __int64 v71; // [rsp+1A8h] [rbp+A8h]
  __int64 v72; // [rsp+1B0h] [rbp+B0h]
  __int64 v73; // [rsp+1B8h] [rbp+B8h]
  va_list v74; // [rsp+1C0h] [rbp+C0h]
  __int64 v75; // [rsp+1C8h] [rbp+C8h]
  __int64 v76; // [rsp+200h] [rbp+100h] BYREF
  __int64 v77; // [rsp+208h] [rbp+108h] BYREF
  __int64 v78; // [rsp+2B0h] [rbp+1B0h] BYREF
  va_list va; // [rsp+2B0h] [rbp+1B0h]
  __int64 v80; // [rsp+2B8h] [rbp+1B8h]
  __int64 v81; // [rsp+2C0h] [rbp+1C0h]
  va_list va1; // [rsp+2C8h] [rbp+1C8h] BYREF

  va_start(va1, a24);
  va_start(va, a24);
  v78 = va_arg(va1, _QWORD);
  v80 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, _QWORD);
  v77 = a4;
  v76 = a3;
  v27 = 8LL;
  v26 = &v76;
  v29 = 8LL;
  v28 = &v77;
  v31 = 8LL;
  v30 = &a5;
  v33 = 8LL;
  v32 = &a6;
  v34 = &a7;
  v36 = &a8;
  v38 = &a9;
  v40 = &a10;
  v42 = &a11;
  v44 = &a12;
  v46 = &a13;
  v48 = &a14;
  v50 = &a15;
  v52 = &a16;
  v54 = &a17;
  v56 = &a18;
  v58 = &a19;
  v60 = &a20;
  v62 = &a21;
  v64 = &a22;
  v66 = &a23;
  v68 = &a24;
  va_copy(v70, va);
  v72 = v81;
  va_copy(v74, va1);
  v35 = 8LL;
  v37 = 8LL;
  v39 = 8LL;
  v41 = 8LL;
  v43 = 8LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 4LL;
  v65 = 4LL;
  v67 = 4LL;
  v69 = 8LL;
  v71 = 4LL;
  v73 = 8LL;
  v75 = 4LL;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_LATENCIESCALCULATED_EVENT,
           a3,
           0x1Au,
           &v25);
}
