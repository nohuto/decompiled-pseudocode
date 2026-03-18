/*
 * XREFs of ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00E8EE0
 * Callers:
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C0094E68 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00E8E10 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::_UploadTelemetryData(KeyboardInputTelemetry *this)
{
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+44h] [rbp-BCh] BYREF
  int v7; // [rsp+48h] [rbp-B8h] BYREF
  int v8; // [rsp+4Ch] [rbp-B4h] BYREF
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  int v10; // [rsp+54h] [rbp-ACh] BYREF
  int v11; // [rsp+58h] [rbp-A8h] BYREF
  int v12; // [rsp+5Ch] [rbp-A4h] BYREF
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch] BYREF
  int v15; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+6Ch] [rbp-94h] BYREF
  int v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+74h] [rbp-8Ch] BYREF
  int v19; // [rsp+78h] [rbp-88h] BYREF
  int v20; // [rsp+7Ch] [rbp-84h] BYREF
  int v21; // [rsp+80h] [rbp-80h] BYREF
  int v22; // [rsp+84h] [rbp-7Ch] BYREF
  int v23; // [rsp+88h] [rbp-78h] BYREF
  int v24; // [rsp+8Ch] [rbp-74h] BYREF
  int v25; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+94h] [rbp-6Ch] BYREF
  int v27; // [rsp+98h] [rbp-68h] BYREF
  int v28; // [rsp+9Ch] [rbp-64h] BYREF
  int v29; // [rsp+A0h] [rbp-60h] BYREF
  int v30; // [rsp+A4h] [rbp-5Ch] BYREF
  int v31; // [rsp+A8h] [rbp-58h] BYREF
  int v32; // [rsp+ACh] [rbp-54h] BYREF
  int v33; // [rsp+B0h] [rbp-50h] BYREF
  int v34; // [rsp+B4h] [rbp-4Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
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
  int *v79; // [rsp+240h] [rbp+140h]
  __int64 v80; // [rsp+248h] [rbp+148h]
  int *v81; // [rsp+250h] [rbp+150h]
  __int64 v82; // [rsp+258h] [rbp+158h]
  int *v83; // [rsp+260h] [rbp+160h]
  __int64 v84; // [rsp+268h] [rbp+168h]
  int *v85; // [rsp+270h] [rbp+170h]
  __int64 v86; // [rsp+278h] [rbp+178h]
  int *v87; // [rsp+280h] [rbp+180h]
  __int64 v88; // [rsp+288h] [rbp+188h]
  int *v89; // [rsp+290h] [rbp+190h]
  __int64 v90; // [rsp+298h] [rbp+198h]
  int *v91; // [rsp+2A0h] [rbp+1A0h]
  __int64 v92; // [rsp+2A8h] [rbp+1A8h]
  int *v93; // [rsp+2B0h] [rbp+1B0h]
  __int64 v94; // [rsp+2B8h] [rbp+1B8h]
  int *v95; // [rsp+2C0h] [rbp+1C0h]
  __int64 v96; // [rsp+2C8h] [rbp+1C8h]
  int *v97; // [rsp+2D0h] [rbp+1D0h]
  __int64 v98; // [rsp+2D8h] [rbp+1D8h]
  int *v99; // [rsp+2E0h] [rbp+1E0h]
  __int64 v100; // [rsp+2E8h] [rbp+1E8h]
  int *v101; // [rsp+2F0h] [rbp+1F0h]
  __int64 v102; // [rsp+2F8h] [rbp+1F8h]
  int *v103; // [rsp+300h] [rbp+200h]
  __int64 v104; // [rsp+308h] [rbp+208h]

  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    TlgCreateWsz(&pDesc, pwsz);
    v37 = &v1;
    v39 = &v2;
    v3 = dword_1C032AB28;
    v41 = &v3;
    v4 = dword_1C032AB2C;
    v43 = &v4;
    v5 = dword_1C032AB30;
    v45 = &v5;
    v6 = dword_1C032AB34;
    v47 = &v6;
    v7 = dword_1C032AB38;
    v49 = &v7;
    v8 = dword_1C032AB3C;
    v51 = &v8;
    v9 = dword_1C032AB40;
    v53 = &v9;
    v10 = dword_1C032AB44;
    v55 = &v10;
    v11 = dword_1C032AB48;
    v57 = &v11;
    v12 = dword_1C032AB4C;
    v59 = &v12;
    v13 = dword_1C032AB50;
    v61 = &v13;
    v14 = dword_1C032AB54;
    v63 = &v14;
    v15 = dword_1C032AB58;
    v65 = &v15;
    v16 = dword_1C032AB5C;
    v67 = &v16;
    v1 = dword_1C032AB68;
    v38 = 4LL;
    v2 = dword_1C032AB68;
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
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v17 = dword_1C032AB60;
    v69 = &v17;
    v18 = dword_1C032AB64;
    v71 = &v18;
    v19 = dword_1C032AAE8;
    v73 = &v19;
    v20 = dword_1C032AAEC;
    v75 = &v20;
    v21 = dword_1C032AAF0;
    v77 = &v21;
    v22 = dword_1C032AAF4;
    v79 = &v22;
    v23 = dword_1C032AAF8;
    v81 = &v23;
    v24 = dword_1C032AAFC;
    v83 = &v24;
    v25 = dword_1C032AB00;
    v85 = &v25;
    v26 = dword_1C032AB04;
    v87 = &v26;
    v27 = dword_1C032AB08;
    v89 = &v27;
    v28 = dword_1C032AB0C;
    v91 = &v28;
    v29 = dword_1C032AB10;
    v93 = &v29;
    v30 = dword_1C032AB14;
    v95 = &v30;
    v31 = dword_1C032AB18;
    v97 = &v31;
    v32 = dword_1C032AB1C;
    v99 = &v32;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    v80 = 4LL;
    v82 = 4LL;
    v84 = 4LL;
    v86 = 4LL;
    v88 = 4LL;
    v90 = 4LL;
    v92 = 4LL;
    v94 = 4LL;
    v96 = 4LL;
    v98 = 4LL;
    v100 = 4LL;
    v33 = dword_1C032AB20;
    v101 = &v33;
    v34 = dword_1C032AB24;
    v103 = &v34;
    v102 = 4LL;
    v104 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7E8B, 0LL, 0LL, 0x25u, &pData);
  }
  memset(&dword_1C032AAE8, 0, 0x80uLL);
  gKeyboardInputTelemetry[0] = 0LL;
}
