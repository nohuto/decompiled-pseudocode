/*
 * XREFs of McTemplateU0xxhhxqnttzqqxxqqxxq @ 0x180191AC0
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x18001D4A8 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 * Callees:
 *     McGenEventWrite @ 0x1800A3600 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xxhhxqnttzqqxxqqxxq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        __int64 a10,
        char a11,
        char a12,
        const wchar_t *a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22)
{
  const wchar_t *v22; // rcx
  __int64 v23; // rax
  int v24; // edx
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  __int64 *v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  char *v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  char *v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  char *v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  char *v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  char *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  char *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  const wchar_t *v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  char *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  char *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  char *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  char *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  char *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  char *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  char *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  char *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  char *v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  __int64 v66; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v67; // [rsp+1A8h] [rbp+A8h] BYREF

  v67 = a4;
  v66 = a3;
  v22 = a13;
  v27 = &v66;
  v28 = 8LL;
  v29 = &v67;
  v31 = &a5;
  v33 = &a6;
  v35 = &a7;
  v37 = &a8;
  v39 = a10;
  v41 = &a11;
  v43 = &a12;
  v30 = 8LL;
  v32 = 2LL;
  v34 = 2LL;
  v36 = 8LL;
  v38 = 4LL;
  v40 = 8LL;
  v42 = 4LL;
  v44 = 4LL;
  if ( a13 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a13[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v46 = v24;
  v47 = 0;
  if ( !a13 )
    v22 = L"NULL";
  v49 = 4LL;
  v45 = v22;
  v48 = &a14;
  v51 = 4LL;
  v50 = &a15;
  v53 = 8LL;
  v52 = &a16;
  v55 = 8LL;
  v54 = &a17;
  v56 = &a18;
  v58 = &a19;
  v60 = &a20;
  v62 = &a21;
  v64 = &a22;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 8LL;
  v63 = 8LL;
  v65 = 4LL;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOUPDATED_EVENT,
           0LL,
           0x14u,
           &v26);
}
