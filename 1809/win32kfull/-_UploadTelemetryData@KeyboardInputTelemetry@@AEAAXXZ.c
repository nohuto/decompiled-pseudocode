/*
 * XREFs of ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C011CCEC
 * Callers:
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C010F9F0 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C011CC14 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::_UploadTelemetryData(const WCHAR *this)
{
  unsigned int v2; // kr00_4
  int v3; // ecx
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+4Ch] [rbp-B4h] BYREF
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+64h] [rbp-9Ch] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+6Ch] [rbp-94h] BYREF
  int v20; // [rsp+70h] [rbp-90h] BYREF
  int v21; // [rsp+74h] [rbp-8Ch] BYREF
  int v22; // [rsp+78h] [rbp-88h] BYREF
  int v23; // [rsp+7Ch] [rbp-84h] BYREF
  int v24; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+84h] [rbp-7Ch] BYREF
  int v26; // [rsp+88h] [rbp-78h] BYREF
  int v27; // [rsp+8Ch] [rbp-74h] BYREF
  int v28; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+94h] [rbp-6Ch] BYREF
  int v30; // [rsp+98h] [rbp-68h] BYREF
  int v31; // [rsp+9Ch] [rbp-64h] BYREF
  int v32; // [rsp+A0h] [rbp-60h] BYREF
  int v33; // [rsp+A4h] [rbp-5Ch] BYREF
  int v34; // [rsp+A8h] [rbp-58h] BYREF
  int v35; // [rsp+ACh] [rbp-54h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  int *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  int *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  int *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  int *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  int *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  int *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  int *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]
  int *v62; // [rsp+1A0h] [rbp+A0h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h]
  int *v64; // [rsp+1B0h] [rbp+B0h]
  __int64 v65; // [rsp+1B8h] [rbp+B8h]
  int *v66; // [rsp+1C0h] [rbp+C0h]
  __int64 v67; // [rsp+1C8h] [rbp+C8h]
  int *v68; // [rsp+1D0h] [rbp+D0h]
  __int64 v69; // [rsp+1D8h] [rbp+D8h]
  int *v70; // [rsp+1E0h] [rbp+E0h]
  __int64 v71; // [rsp+1E8h] [rbp+E8h]
  int *v72; // [rsp+1F0h] [rbp+F0h]
  __int64 v73; // [rsp+1F8h] [rbp+F8h]
  int *v74; // [rsp+200h] [rbp+100h]
  __int64 v75; // [rsp+208h] [rbp+108h]
  int *v76; // [rsp+210h] [rbp+110h]
  __int64 v77; // [rsp+218h] [rbp+118h]
  int *v78; // [rsp+220h] [rbp+120h]
  __int64 v79; // [rsp+228h] [rbp+128h]
  int *v80; // [rsp+230h] [rbp+130h]
  __int64 v81; // [rsp+238h] [rbp+138h]
  int *v82; // [rsp+240h] [rbp+140h]
  __int64 v83; // [rsp+248h] [rbp+148h]
  int *v84; // [rsp+250h] [rbp+150h]
  __int64 v85; // [rsp+258h] [rbp+158h]
  int *v86; // [rsp+260h] [rbp+160h]
  __int64 v87; // [rsp+268h] [rbp+168h]
  int *v88; // [rsp+270h] [rbp+170h]
  __int64 v89; // [rsp+278h] [rbp+178h]
  int *v90; // [rsp+280h] [rbp+180h]
  __int64 v91; // [rsp+288h] [rbp+188h]
  int *v92; // [rsp+290h] [rbp+190h]
  __int64 v93; // [rsp+298h] [rbp+198h]
  int *v94; // [rsp+2A0h] [rbp+1A0h]
  __int64 v95; // [rsp+2A8h] [rbp+1A8h]
  int *v96; // [rsp+2B0h] [rbp+1B0h]
  __int64 v97; // [rsp+2B8h] [rbp+1B8h]
  int *v98; // [rsp+2C0h] [rbp+1C0h]
  __int64 v99; // [rsp+2C8h] [rbp+1C8h]
  int *v100; // [rsp+2D0h] [rbp+1D0h]
  __int64 v101; // [rsp+2D8h] [rbp+1D8h]

  v2 = rand();
  if ( v2 == 1000 * (v2 / 0x3E8) )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        TlgCreateWsz(&pDesc, this + 4);
        v3 = *((_DWORD *)this + 26);
        v38 = &v4;
        v5 = *((_DWORD *)this + 27);
        v40 = &v5;
        v6 = *((_DWORD *)this + 28);
        v42 = &v6;
        v7 = *((_DWORD *)this + 29);
        v44 = &v7;
        v8 = *((_DWORD *)this + 30);
        v46 = &v8;
        v9 = *((_DWORD *)this + 31);
        v48 = &v9;
        v10 = *((_DWORD *)this + 32);
        v50 = &v10;
        v11 = *((_DWORD *)this + 33);
        v52 = &v11;
        v12 = *((_DWORD *)this + 34);
        v54 = &v12;
        v13 = *((_DWORD *)this + 35);
        v56 = &v13;
        v14 = *((_DWORD *)this + 36);
        v58 = &v14;
        v15 = *((_DWORD *)this + 37);
        v60 = &v15;
        v16 = *((_DWORD *)this + 38);
        v62 = &v16;
        v17 = *((_DWORD *)this + 39);
        v64 = &v17;
        v18 = *((_DWORD *)this + 40);
        v66 = &v18;
        v19 = *((_DWORD *)this + 41);
        v4 = v3;
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
        v61 = 4LL;
        v63 = 4LL;
        v65 = 4LL;
        v67 = 4LL;
        v68 = &v19;
        v20 = *((_DWORD *)this + 10);
        v70 = &v20;
        v21 = *((_DWORD *)this + 11);
        v72 = &v21;
        v22 = *((_DWORD *)this + 12);
        v74 = &v22;
        v23 = *((_DWORD *)this + 13);
        v76 = &v23;
        v24 = *((_DWORD *)this + 14);
        v78 = &v24;
        v25 = *((_DWORD *)this + 15);
        v80 = &v25;
        v26 = *((_DWORD *)this + 16);
        v82 = &v26;
        v27 = *((_DWORD *)this + 17);
        v84 = &v27;
        v28 = *((_DWORD *)this + 18);
        v86 = &v28;
        v29 = *((_DWORD *)this + 19);
        v88 = &v29;
        v30 = *((_DWORD *)this + 20);
        v90 = &v30;
        v31 = *((_DWORD *)this + 21);
        v92 = &v31;
        v32 = *((_DWORD *)this + 22);
        v94 = &v32;
        v33 = *((_DWORD *)this + 23);
        v96 = &v33;
        v34 = *((_DWORD *)this + 24);
        v98 = &v34;
        v35 = *((_DWORD *)this + 25);
        v100 = &v35;
        v69 = 4LL;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 4LL;
        v85 = 4LL;
        v87 = 4LL;
        v89 = 4LL;
        v91 = 4LL;
        v93 = 4LL;
        v95 = 4LL;
        v97 = 4LL;
        v99 = 4LL;
        v101 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5C52, 0LL, 0LL, 0x23u, &pData);
      }
    }
    memset((void *)(this + 20), 0, 0x80uLL);
    *(_QWORD *)this = 0LL;
  }
}
