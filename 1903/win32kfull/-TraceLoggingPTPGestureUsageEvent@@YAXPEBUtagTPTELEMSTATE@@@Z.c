/*
 * XREFs of ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C01CE114
 * Callers:
 *     HandlePTPTelemetry @ 0x1C0161420 (HandlePTPTelemetry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPGestureUsageEvent(const struct tagTPTELEMSTATE *a1)
{
  int *v1; // r9
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3; // [rsp+34h] [rbp-CCh] BYREF
  int v4; // [rsp+38h] [rbp-C8h] BYREF
  int v5; // [rsp+3Ch] [rbp-C4h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  int v7; // [rsp+44h] [rbp-BCh] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  int v9; // [rsp+4Ch] [rbp-B4h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh] BYREF
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h] BYREF
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+64h] [rbp-9Ch] BYREF
  int v16; // [rsp+68h] [rbp-98h] BYREF
  int v17; // [rsp+6Ch] [rbp-94h] BYREF
  int v18; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+74h] [rbp-8Ch] BYREF
  int v20; // [rsp+78h] [rbp-88h] BYREF
  int v21; // [rsp+7Ch] [rbp-84h] BYREF
  int v22; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+84h] [rbp-7Ch] BYREF
  int v24; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  int *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  int *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  int *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  int *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  int *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  int *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  int *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  int *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  int *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  int *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  int *v63; // [rsp+1E0h] [rbp+E0h]
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  int *v65; // [rsp+1F0h] [rbp+F0h]
  __int64 v66; // [rsp+1F8h] [rbp+F8h]
  int *v67; // [rsp+200h] [rbp+100h]
  __int64 v68; // [rsp+208h] [rbp+108h]
  int *v69; // [rsp+210h] [rbp+110h]
  __int64 v70; // [rsp+218h] [rbp+118h]
  int *v71; // [rsp+220h] [rbp+120h]
  __int64 v72; // [rsp+228h] [rbp+128h]
  int *v73; // [rsp+230h] [rbp+130h]
  __int64 v74; // [rsp+238h] [rbp+138h]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v25 = 0x1000000LL;
      v27 = &v25;
      v2 = *v1;
      v29 = &v2;
      v3 = v1[1];
      v31 = &v3;
      v4 = v1[2];
      v33 = &v4;
      v5 = v1[3];
      v35 = &v5;
      v6 = v1[4];
      v37 = &v6;
      v7 = v1[5];
      v39 = &v7;
      v8 = v1[6];
      v41 = &v8;
      v9 = v1[7];
      v43 = &v9;
      v10 = v1[8];
      v45 = &v10;
      v11 = v1[9];
      v47 = &v11;
      v12 = v1[10];
      v49 = &v12;
      v13 = v1[11];
      v51 = &v13;
      v14 = v1[12];
      v53 = &v14;
      v15 = v1[13];
      v55 = &v15;
      v16 = v1[14];
      v57 = &v16;
      v17 = v1[15];
      v28 = 8LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v59 = &v17;
      v18 = v1[16];
      v61 = &v18;
      v19 = v1[17];
      v63 = &v19;
      v20 = v1[18];
      v65 = &v20;
      v21 = v1[19];
      v67 = &v21;
      v22 = v1[20];
      v69 = &v22;
      v23 = v1[21];
      v71 = &v23;
      v24 = v1[22];
      v73 = &v24;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v74 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E63FD, 0LL, 0LL, 0x1Au, &pData);
    }
  }
}
