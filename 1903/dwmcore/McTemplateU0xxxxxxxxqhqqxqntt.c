/*
 * XREFs of McTemplateU0xxxxxxxxqhqqxqntt @ 0x180192380
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x18001D4A8 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 * Callees:
 *     McGenEventWrite @ 0x1800A3600 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxxxxxxxqhqqxqntt(
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
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-C0h]
  __int64 v18; // [rsp+48h] [rbp-B8h]
  __int64 *v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  char *v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  char *v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  char *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  char *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  char *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  char *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  char *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  char *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  char *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  char *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  va_list v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  __int64 v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  va_list v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  va_list v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  __int64 v51; // [rsp+180h] [rbp+80h] BYREF
  __int64 v52; // [rsp+188h] [rbp+88h] BYREF
  __int64 v53; // [rsp+1E8h] [rbp+E8h] BYREF
  va_list va; // [rsp+1E8h] [rbp+E8h]
  __int64 v55; // [rsp+1F0h] [rbp+F0h]
  __int64 v56; // [rsp+1F8h] [rbp+F8h]
  __int64 v57; // [rsp+200h] [rbp+100h] BYREF
  va_list va1; // [rsp+200h] [rbp+100h]
  va_list va2; // [rsp+208h] [rbp+108h] BYREF

  va_start(va2, a15);
  va_start(va1, a15);
  va_start(va, a15);
  v53 = va_arg(va1, _QWORD);
  v55 = va_arg(va1, _QWORD);
  v56 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v57 = va_arg(va2, _QWORD);
  v52 = a4;
  v51 = a3;
  v18 = 8LL;
  v17 = &v51;
  v20 = 8LL;
  v19 = &v52;
  v22 = 8LL;
  v21 = &a5;
  v24 = 8LL;
  v23 = &a6;
  v25 = &a7;
  v27 = &a8;
  v29 = &a9;
  v31 = &a10;
  v33 = &a11;
  v35 = &a12;
  v37 = &a13;
  v39 = &a14;
  v41 = &a15;
  va_copy(v43, va);
  v45 = v56;
  va_copy(v47, va1);
  va_copy(v49, va2);
  v26 = 8LL;
  v28 = 8LL;
  v30 = 8LL;
  v32 = 8LL;
  v34 = 4LL;
  v36 = 2LL;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 8LL;
  v44 = 4LL;
  v46 = 8LL;
  v48 = 4LL;
  v50 = 4LL;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEAPI_EVENT,
           a3,
           0x12u,
           &v16);
}
