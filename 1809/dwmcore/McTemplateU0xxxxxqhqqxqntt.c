/*
 * XREFs of McTemplateU0xxxxxqhqqxqntt @ 0x1801507D4
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180019288 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x18014FE14 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxxxxqhqqxqntt(
        _DWORD a1,
        const EVENT_DESCRIPTOR *a2,
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
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  __int64 *v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  char *v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  char *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  char *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  char *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  char *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  char *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  char *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  va_list v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  va_list v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  va_list v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  __int64 v42; // [rsp+150h] [rbp+50h] BYREF
  __int64 v43; // [rsp+158h] [rbp+58h] BYREF
  __int64 v44; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va; // [rsp+1A0h] [rbp+A0h]
  __int64 v46; // [rsp+1A8h] [rbp+A8h]
  __int64 v47; // [rsp+1B0h] [rbp+B0h]
  __int64 v48; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va1; // [rsp+1B8h] [rbp+B8h]
  va_list va2; // [rsp+1C0h] [rbp+C0h] BYREF

  va_start(va2, a12);
  va_start(va1, a12);
  va_start(va, a12);
  v44 = va_arg(va1, _QWORD);
  v46 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v48 = va_arg(va2, _QWORD);
  v43 = a4;
  v42 = a3;
  v15 = 8LL;
  v14 = &v42;
  v17 = 8LL;
  v16 = &v43;
  v19 = 8LL;
  v18 = &a5;
  v20 = &a6;
  v22 = &a7;
  v24 = &a8;
  v26 = &a9;
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  va_copy(v34, va);
  v36 = v47;
  va_copy(v38, va1);
  va_copy(v40, va2);
  v21 = 8LL;
  v23 = 8LL;
  v25 = 4LL;
  v27 = 2LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 8LL;
  v35 = 4LL;
  v37 = 8LL;
  v39 = 4LL;
  v41 = 4LL;
  return McGenEventWrite(Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 0xFu, &v13);
}
