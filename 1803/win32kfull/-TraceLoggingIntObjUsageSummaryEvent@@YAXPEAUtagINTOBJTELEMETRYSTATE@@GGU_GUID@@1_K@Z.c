/*
 * XREFs of ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1C0198A7C
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0212CA0 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingIntObjUsageSummaryEvent(
        struct tagINTOBJTELEMETRYSTATE *a1,
        __int16 a2,
        __int16 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        unsigned __int64 a6)
{
  const GUID *v6; // r9
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v9; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v10; // [rsp+38h] [rbp-C8h] BYREF
  struct tagINTOBJTELEMETRYSTATE near *v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v18; // [rsp+5Ch] [rbp-A4h] BYREF
  int v19; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+64h] [rbp-9Ch] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+6Ch] [rbp-94h] BYREF
  int v23; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+74h] [rbp-8Ch] BYREF
  int v25; // [rsp+78h] [rbp-88h] BYREF
  int v26; // [rsp+7Ch] [rbp-84h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  const GUID *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  char *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  struct _GUID *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  char *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  unsigned int *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  __int16 *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  __int16 *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  unsigned int *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  struct tagINTOBJTELEMETRYSTATE near **v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  char *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  int *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  int *v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  int *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  int *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]
  int *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  int *v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  unsigned int *v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  int *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  int *v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  int *v66; // [rsp+1D0h] [rbp+D0h]
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  int *v68; // [rsp+1E0h] [rbp+E0h]
  __int64 v69; // [rsp+1E8h] [rbp+E8h]
  int *v70; // [rsp+1F0h] [rbp+F0h]
  __int64 v71; // [rsp+1F8h] [rbp+F8h]
  int *v72; // [rsp+200h] [rbp+100h]
  __int64 v73; // [rsp+208h] [rbp+108h]
  int *v74; // [rsp+210h] [rbp+110h]
  __int64 v75; // [rsp+218h] [rbp+118h]
  int *v76; // [rsp+220h] [rbp+120h]
  __int64 v77; // [rsp+228h] [rbp+128h]
  void *v78; // [rsp+230h] [rbp+130h]
  __int64 v79; // [rsp+238h] [rbp+138h]
  __int16 v80; // [rsp+268h] [rbp+168h] BYREF
  __int16 v81; // [rsp+270h] [rbp+170h] BYREF

  v81 = a3;
  v80 = a2;
  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
    {
      v30 = &v7;
      v32 = a5;
      v34 = &v8;
      v7 = 1;
      v31 = 1LL;
      v8 = 1;
      v35 = 1LL;
      v16 = dword_1C032FC88;
      v36 = &v9;
      v38 = &v80;
      v40 = &v81;
      v9 = (unsigned int)a6 / 0x3E8;
      v56 = &v16;
      v42 = &v10;
      v11 = gIntObjTelemetryState;
      v44 = &v11;
      v46 = (char *)&v11 + 4;
      v12 = dword_1C032FC78;
      v48 = &v12;
      v13 = dword_1C032FC7C;
      v50 = &v13;
      v14 = dword_1C032FC80;
      v52 = &v14;
      v15 = dword_1C032FC84;
      v54 = &v15;
      v10 = (unsigned int)qword_1C032FC98 / 0x3E8;
      v17 = dword_1C032FC8C;
      v18 = (unsigned int)qword_1C032FCC8 / 0x3E8;
      v28 = v6;
      v29 = 16LL;
      v33 = 16LL;
      v37 = 4LL;
      v39 = 2LL;
      v41 = 2LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v58 = &v17;
      v59 = 4LL;
      v60 = &v18;
      v19 = dword_1C032FCA0;
      v62 = &v19;
      v20 = dword_1C032FCA4;
      v64 = &v20;
      v21 = dword_1C032FCA8;
      v66 = &v21;
      v22 = dword_1C032FCAC;
      v68 = &v22;
      v23 = dword_1C032FCB0;
      v70 = &v23;
      v24 = dword_1C032FCB4;
      v72 = &v24;
      v25 = dword_1C032FCB8;
      v74 = &v25;
      v26 = dword_1C032FCBC;
      v76 = &v26;
      v78 = &unk_1C032FCC0;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      v71 = 4LL;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 4LL;
      v79 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E1E66, (LPCGUID)0x10624DD3, v6, 0x1Cu, &pData);
    }
  }
}
