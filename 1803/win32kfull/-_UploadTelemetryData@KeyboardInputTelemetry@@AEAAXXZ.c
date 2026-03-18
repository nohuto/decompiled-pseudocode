/*
 * XREFs of ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00BD230
 * Callers:
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C00BD580 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00BD6A4 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00BD824 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::_UploadTelemetryData(const WCHAR *this)
{
  int v2; // ecx
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+54h] [rbp-ACh] BYREF
  int v15; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+5Ch] [rbp-A4h] BYREF
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+64h] [rbp-9Ch] BYREF
  int v19; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+6Ch] [rbp-94h] BYREF
  int v21; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+74h] [rbp-8Ch] BYREF
  int v23; // [rsp+78h] [rbp-88h] BYREF
  int v24; // [rsp+7Ch] [rbp-84h] BYREF
  int v25; // [rsp+80h] [rbp-80h] BYREF
  int v26; // [rsp+84h] [rbp-7Ch] BYREF
  int v27; // [rsp+88h] [rbp-78h] BYREF
  int v28; // [rsp+8Ch] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  int *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
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
  int *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  int *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  int *v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  int *v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1E8h] [rbp+E8h]
  int *v69; // [rsp+1F0h] [rbp+F0h]
  __int64 v70; // [rsp+1F8h] [rbp+F8h]
  int *v71; // [rsp+200h] [rbp+100h]
  __int64 v72; // [rsp+208h] [rbp+108h]
  int *v73; // [rsp+210h] [rbp+110h]
  __int64 v74; // [rsp+218h] [rbp+118h]
  int *v75; // [rsp+220h] [rbp+120h]
  __int64 v76; // [rsp+228h] [rbp+128h]
  int *v77; // [rsp+230h] [rbp+130h]
  __int64 v78; // [rsp+238h] [rbp+138h]

  if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    TlgCreateWsz(&pDesc, this + 4);
    v2 = *((_DWORD *)this + 22);
    v31 = &v5;
    v6 = *((_DWORD *)this + 23);
    v33 = &v6;
    v7 = *((_DWORD *)this + 24);
    v35 = &v7;
    v8 = *((_DWORD *)this + 25);
    v37 = &v8;
    v9 = *((_DWORD *)this + 26);
    v39 = &v9;
    v10 = *((_DWORD *)this + 27);
    v41 = &v10;
    v11 = *((_DWORD *)this + 28);
    v43 = &v11;
    v12 = *((_DWORD *)this + 29);
    v45 = &v12;
    v13 = *((_DWORD *)this + 30);
    v47 = &v13;
    v14 = *((_DWORD *)this + 31);
    v49 = &v14;
    v15 = *((_DWORD *)this + 32);
    v51 = &v15;
    v16 = *((_DWORD *)this + 33);
    v53 = &v16;
    v17 = *((_DWORD *)this + 10);
    v55 = &v17;
    v18 = *((_DWORD *)this + 11);
    v57 = &v18;
    v19 = *((_DWORD *)this + 12);
    v59 = &v19;
    v20 = *((_DWORD *)this + 13);
    v5 = v2;
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
    v61 = &v20;
    v21 = *((_DWORD *)this + 14);
    v63 = &v21;
    v22 = *((_DWORD *)this + 15);
    v65 = &v22;
    v23 = *((_DWORD *)this + 16);
    v67 = &v23;
    v24 = *((_DWORD *)this + 17);
    v69 = &v24;
    v25 = *((_DWORD *)this + 18);
    v71 = &v25;
    v26 = *((_DWORD *)this + 19);
    v73 = &v26;
    v27 = *((_DWORD *)this + 20);
    v75 = &v27;
    v28 = *((_DWORD *)this + 21);
    v77 = &v28;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E3308, v3, v4, 0x1Bu, &pData);
  }
  memset((void *)(this + 20), 0, 0x60uLL);
  *(_QWORD *)this = 0LL;
}
