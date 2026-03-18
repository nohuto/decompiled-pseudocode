/*
 * XREFs of ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C0198E8C
 * Callers:
 *     HandlePTPTelemetry @ 0x1C0138E50 (HandlePTPTelemetry.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPGestureUsageEvent(const struct tagTPTELEMSTATE *a1)
{
  const GUID *v1; // r8
  const GUID *v2; // r9
  unsigned int v3; // eax
  unsigned int Data1; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v16; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+64h] [rbp-9Ch] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v20; // [rsp+70h] [rbp-90h] BYREF
  int v21; // [rsp+74h] [rbp-8Ch] BYREF
  int v22; // [rsp+78h] [rbp-88h] BYREF
  int v23; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v24; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+84h] [rbp-7Ch] BYREF
  int v26; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *p_Data1; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  int *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  int *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  int *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  int *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  int *v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  int *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  int *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  int *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  int *v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h]
  int *v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  int *v60; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B8h] [rbp+B8h]
  int *v62; // [rsp+1C0h] [rbp+C0h]
  __int64 v63; // [rsp+1C8h] [rbp+C8h]
  int *v64; // [rsp+1D0h] [rbp+D0h]
  __int64 v65; // [rsp+1D8h] [rbp+D8h]
  int *v66; // [rsp+1E0h] [rbp+E0h]
  __int64 v67; // [rsp+1E8h] [rbp+E8h]
  int *v68; // [rsp+1F0h] [rbp+F0h]
  __int64 v69; // [rsp+1F8h] [rbp+F8h]
  int *v70; // [rsp+200h] [rbp+100h]
  __int64 v71; // [rsp+208h] [rbp+108h]
  int *v72; // [rsp+210h] [rbp+110h]
  __int64 v73; // [rsp+218h] [rbp+118h]

  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      Data1 = v2->Data1;
      p_Data1 = (int *)&Data1;
      v5 = *(_DWORD *)&v2->Data2;
      v30 = &v5;
      v6 = *(_DWORD *)v2->Data4;
      v32 = &v6;
      v7 = *(_DWORD *)&v2->Data4[4];
      v34 = &v7;
      v8 = v2[1].Data1;
      v36 = (int *)&v8;
      v9 = *(_DWORD *)&v2[1].Data2;
      v38 = &v9;
      v10 = *(_DWORD *)v2[1].Data4;
      v40 = &v10;
      v11 = *(_DWORD *)&v2[1].Data4[4];
      v42 = &v11;
      v12 = v2[2].Data1;
      v44 = (int *)&v12;
      v13 = *(_DWORD *)&v2[2].Data2;
      v46 = &v13;
      v14 = *(_DWORD *)v2[2].Data4;
      v48 = &v14;
      v15 = *(_DWORD *)&v2[2].Data4[4];
      v50 = &v15;
      v16 = v2[3].Data1;
      v52 = (int *)&v16;
      v17 = *(_DWORD *)&v2[3].Data2;
      v54 = &v17;
      v18 = *(_DWORD *)v2[3].Data4;
      v56 = &v18;
      v19 = *(_DWORD *)&v2[3].Data4[4];
      v58 = &v19;
      v3 = v2[4].Data1;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v20 = v3;
      v60 = (int *)&v20;
      v21 = *(_DWORD *)&v2[4].Data2;
      v62 = &v21;
      v22 = *(_DWORD *)v2[4].Data4;
      v64 = &v22;
      v23 = *(_DWORD *)&v2[4].Data4[4];
      v66 = &v23;
      v24 = v2[5].Data1;
      v68 = (int *)&v24;
      v25 = *(_DWORD *)&v2[5].Data2;
      v70 = &v25;
      v26 = *(_DWORD *)v2[5].Data4;
      v72 = &v26;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      v71 = 4LL;
      v73 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E289C, v1, v2, 0x19u, &pData);
    }
  }
}
