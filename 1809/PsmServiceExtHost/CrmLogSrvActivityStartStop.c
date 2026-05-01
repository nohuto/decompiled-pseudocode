/*
 * XREFs of CrmLogSrvActivityStartStop @ 0x180034874
 * Callers:
 *     CrmSrvActivityStart @ 0x18003465C (CrmSrvActivityStart.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall CrmLogSrvActivityStartStop(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const WCHAR *a4,
        const WCHAR *pwsz,
        int a6,
        __int64 a7,
        __int16 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // r11d
  int v17; // r9d
  __int16 v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  UUID *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+F0h] [rbp-10h] BYREF
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  __int16 *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  __int64 v44; // [rsp+120h] [rbp+20h]
  int v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  __int64 *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  __int64 *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  __int64 *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  int *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]

  if ( dword_18009B128 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B128, 0x400000000000uLL) )
    {
      v19 = *(_DWORD *)(v15 + 24);
      v21 = a6;
      v24 = a9;
      v25 = a10;
      v26 = a11;
      v27 = a12;
      v22 = a13;
      v29 = &Uuid;
      v23 = v14;
      v31 = &v19;
      v20 = v16;
      v18 = a8;
      v30 = 16LL;
      v32 = 4LL;
      TlgCreateSid(&pDesc, (const SID *)(v15 + 72));
      v35 = 4LL;
      v34 = &v20;
      v36 = &v23;
      v37 = 8LL;
      TlgCreateWsz(&v38, a4);
      TlgCreateWsz(&v39, pwsz);
      v42 = &v18;
      v44 = a7;
      v47 = &v24;
      v49 = &v25;
      v51 = &v26;
      v53 = &v27;
      v55 = &v22;
      v40 = &v21;
      v41 = 4LL;
      v43 = 2LL;
      v45 = 4 * v17;
      v46 = 0;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C7B3, 0LL, 0LL, 0x11u, &pData);
    }
  }
}
