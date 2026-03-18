/*
 * XREFs of McTemplateU0xxxxxxxqqqqqqqqqxqnt @ 0x180150930
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z @ 0x180019648 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxxxxxxqqqqqqqqqxqnt(
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
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  __int64 *v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  char *v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  char *v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  char *v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  char *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  char *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  char *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  char *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  char *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  char *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  char *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  char *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  char *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  char *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  char *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  char *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  va_list v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h]
  __int64 v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  va_list v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]
  __int64 v61; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v62; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v63; // [rsp+238h] [rbp+138h] BYREF
  va_list va; // [rsp+238h] [rbp+138h]
  __int64 v65; // [rsp+240h] [rbp+140h]
  __int64 v66; // [rsp+248h] [rbp+148h]
  va_list va1; // [rsp+250h] [rbp+150h] BYREF

  va_start(va1, a19);
  va_start(va, a19);
  v63 = va_arg(va1, _QWORD);
  v65 = va_arg(va1, _QWORD);
  v66 = va_arg(va1, _QWORD);
  v62 = a4;
  v61 = a3;
  v22 = 8LL;
  v21 = &v61;
  v24 = 8LL;
  v23 = &v62;
  v26 = 8LL;
  v25 = &a5;
  v28 = 8LL;
  v27 = &a6;
  v29 = &a7;
  v31 = &a8;
  v33 = &a9;
  v35 = &a10;
  v37 = &a11;
  v39 = &a12;
  v41 = &a13;
  v43 = &a14;
  v45 = &a15;
  v47 = &a16;
  v49 = &a17;
  v51 = &a18;
  v53 = &a19;
  va_copy(v55, va);
  v57 = v66;
  va_copy(v59, va1);
  v30 = 8LL;
  v32 = 8LL;
  v34 = 8LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 8LL;
  v56 = 4LL;
  v58 = 8LL;
  v60 = 4LL;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_LATENCIESCALCULATED_EVENT,
           a3,
           0x15u,
           &v20);
}
