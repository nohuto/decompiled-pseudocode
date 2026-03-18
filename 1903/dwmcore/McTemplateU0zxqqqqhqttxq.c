/*
 * XREFs of McTemplateU0zxqqqqhqttxq @ 0x180192AC4
 * Callers:
 *     ?RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800A5B0C (-RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800A3600 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

ULONG McTemplateU0zxqqqqhqttxq(__int64 a1, __int64 a2, const wchar_t *a3, ...)
{
  __int64 v3; // rax
  int v4; // ecx
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v7; // [rsp+40h] [rbp-C0h]
  int v8; // [rsp+48h] [rbp-B8h]
  int v9; // [rsp+4Ch] [rbp-B4h]
  va_list v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+58h] [rbp-A8h]
  va_list v12; // [rsp+60h] [rbp-A0h]
  __int64 v13; // [rsp+68h] [rbp-98h]
  va_list v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  va_list v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  va_list v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  va_list v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  va_list v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  va_list v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  va_list v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  va_list v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  va_list v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  __int64 v32; // [rsp+138h] [rbp+38h] BYREF
  va_list va; // [rsp+138h] [rbp+38h]
  __int64 v34; // [rsp+140h] [rbp+40h] BYREF
  va_list va1; // [rsp+140h] [rbp+40h]
  __int64 v36; // [rsp+148h] [rbp+48h] BYREF
  va_list va2; // [rsp+148h] [rbp+48h]
  __int64 v38; // [rsp+150h] [rbp+50h] BYREF
  va_list va3; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h] BYREF
  va_list va4; // [rsp+158h] [rbp+58h]
  __int64 v42; // [rsp+160h] [rbp+60h] BYREF
  va_list va5; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h] BYREF
  va_list va6; // [rsp+168h] [rbp+68h]
  __int64 v46; // [rsp+170h] [rbp+70h] BYREF
  va_list va7; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h] BYREF
  va_list va8; // [rsp+178h] [rbp+78h]
  __int64 v50; // [rsp+180h] [rbp+80h] BYREF
  va_list va9; // [rsp+180h] [rbp+80h]
  va_list va10; // [rsp+188h] [rbp+88h] BYREF

  va_start(va10, a3);
  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v32 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v34 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v36 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v38 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v40 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v42 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v44 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v46 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v48 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v50 = va_arg(va10, _QWORD);
  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v8 = v4;
  v9 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v11 = 8LL;
  v7 = a3;
  va_copy(v10, va);
  v13 = 4LL;
  va_copy(v12, va1);
  v15 = 4LL;
  va_copy(v14, va2);
  v17 = 4LL;
  va_copy(v16, va3);
  va_copy(v18, va4);
  va_copy(v20, va5);
  va_copy(v22, va6);
  va_copy(v24, va7);
  va_copy(v26, va8);
  va_copy(v28, va9);
  va_copy(v30, va10);
  v19 = 4LL;
  v21 = 2LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 8LL;
  v31 = 4LL;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIO_RECORDGLITCH_EVENT,
           (__int64)a3,
           0xDu,
           &v6);
}
