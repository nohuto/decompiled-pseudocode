/*
 * XREFs of ?LogDisplayTelemetrySourceInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEBU_DXG_BLACKBOX_DISPLAY_SOURCE_INFO@@@Z @ 0x1C0296BB8
 * Callers:
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0296980 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4Dx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0049E44 (_TlgCreateSz.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayTelemetrySourceInfo(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        const struct _DXG_BLACKBOX_DISPLAY_SOURCE_INFO *a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // r9
  unsigned int v6; // r10d
  __int64 v7; // r11
  LPCGUID v8; // r9
  __int64 v9; // rax
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  int v21; // [rsp+5Ch] [rbp-A4h] BYREF
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int64 *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  char *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  int *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  int *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  int *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  int *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  int *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  int *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+B0h] BYREF

  if ( a3 && a2 )
  {
    v3 = (int)(*((_DWORD *)a3 + 3) << 27) >> 30;
    v25 = *(_QWORD *)a3;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          v10 = 2;
        else
          v10 = 3;
      }
      else
      {
        v10 = 1;
      }
    }
    else
    {
      v10 = 0;
    }
    if ( dword_1C00A1888 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000400uLL) )
      {
        v24 = 33556480LL;
        v27 = &v24;
        v29 = &v25;
        v31 = v5 + 8;
        v28 = 8LL;
        v11 = (v6 >> 1) & 1;
        v33 = &v11;
        v30 = 8LL;
        v12 = v6 & 1;
        v35 = &v12;
        v32 = 4LL;
        v13 = (v6 >> 2) & 1;
        v37 = &v13;
        v39 = &v10;
        v34 = 4LL;
        v14 = (v6 >> 5) & 1;
        v41 = &v14;
        v36 = 4LL;
        v15 = (v6 >> 6) & 1;
        v43 = &v15;
        v38 = 4LL;
        v16 = (v6 >> 7) & 1;
        v45 = &v16;
        v40 = 1LL;
        v17 = (v6 >> 8) & 1;
        v47 = &v17;
        v42 = 4LL;
        v18 = (v6 >> 9) & 1;
        v49 = &v18;
        v44 = 4LL;
        v19 = (v6 >> 10) & 1;
        v51 = &v19;
        v46 = 4LL;
        v20 = (v6 >> 11) & 1;
        v53 = &v20;
        v48 = 4LL;
        v50 = 4LL;
        v52 = 4LL;
        v54 = 4LL;
        v56 = 4LL;
        v21 = (v6 >> 12) & 1;
        v58 = 4LL;
        v55 = &v21;
        v22 = (v6 >> 13) & 1;
        v23 = (v6 >> 14) & 1;
        v57 = &v22;
        v59 = &v23;
        v60 = 4LL;
        TlgCreateSz(&pDesc, (LPCSTR)(v5 + 16));
        TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0073E25, (LPCGUID)(v7 + 8), v8, 0x14u, &pData);
      }
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 313LL;
    WdLogEvent5_WdAssertion(v9);
  }
}
