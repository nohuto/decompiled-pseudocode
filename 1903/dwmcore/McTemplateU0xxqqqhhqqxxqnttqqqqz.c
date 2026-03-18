/*
 * XREFs of McTemplateU0xxqqqhhqqxxqnttqqqqz @ 0x180191E14
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001DA78 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800A3600 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxqqqhhqqxxqnttqqqqz(
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
        ...)
{
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  __int64 *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  char *v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  char *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  char *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  char *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  char *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  char *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  va_list v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  va_list v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  va_list v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  va_list v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  va_list v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  va_list v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  va_list v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  const wchar_t *v56; // [rsp+170h] [rbp+70h]
  int v57; // [rsp+178h] [rbp+78h]
  int v58; // [rsp+17Ch] [rbp+7Ch]
  __int64 v59; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v60; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v61; // [rsp+208h] [rbp+108h] BYREF
  va_list va; // [rsp+208h] [rbp+108h]
  __int64 v63; // [rsp+210h] [rbp+110h]
  __int64 v64; // [rsp+218h] [rbp+118h]
  __int64 v65; // [rsp+220h] [rbp+120h] BYREF
  va_list va1; // [rsp+220h] [rbp+120h]
  __int64 v67; // [rsp+228h] [rbp+128h] BYREF
  va_list va2; // [rsp+228h] [rbp+128h]
  __int64 v69; // [rsp+230h] [rbp+130h] BYREF
  va_list va3; // [rsp+230h] [rbp+130h]
  __int64 v71; // [rsp+238h] [rbp+138h] BYREF
  va_list va4; // [rsp+238h] [rbp+138h]
  __int64 v73; // [rsp+240h] [rbp+140h] BYREF
  va_list va5; // [rsp+240h] [rbp+140h]
  __int64 v75; // [rsp+248h] [rbp+148h] BYREF
  va_list va6; // [rsp+248h] [rbp+148h]
  const wchar_t *v77; // [rsp+250h] [rbp+150h]
  va_list va7; // [rsp+258h] [rbp+158h] BYREF

  va_start(va7, a13);
  va_start(va6, a13);
  va_start(va5, a13);
  va_start(va4, a13);
  va_start(va3, a13);
  va_start(va2, a13);
  va_start(va1, a13);
  va_start(va, a13);
  v61 = va_arg(va1, _QWORD);
  v63 = va_arg(va1, _QWORD);
  v64 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v65 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v67 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v69 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v71 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v73 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v75 = va_arg(va7, _QWORD);
  v77 = va_arg(va7, const wchar_t *);
  v60 = a4;
  v59 = a3;
  v13 = v77;
  v18 = &v59;
  v19 = 8LL;
  v20 = &v60;
  v22 = &a5;
  v24 = &a6;
  v26 = &a7;
  v28 = &a8;
  v30 = &a9;
  v32 = &a10;
  v34 = &a11;
  v36 = &a12;
  v38 = &a13;
  va_copy(v40, va);
  v42 = v64;
  va_copy(v44, va1);
  va_copy(v46, va2);
  va_copy(v48, va3);
  va_copy(v50, va4);
  va_copy(v52, va5);
  va_copy(v54, va6);
  v21 = 8LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 2LL;
  v31 = 2LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 8LL;
  v39 = 8LL;
  v41 = 4LL;
  v43 = 8LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  if ( v77 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v77[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v57 = v15;
  v58 = 0;
  if ( !v77 )
    v13 = L"NULL";
  v56 = v13;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIORETIRE_EVENT,
           a3,
           0x15u,
           &v17);
}
