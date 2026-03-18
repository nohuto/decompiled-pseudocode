/*
 * XREFs of ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0132090
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0058A7C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::RimDeviceFlags(const struct RIMDEV *a1)
{
  _DWORD *v1; // r9
  __int64 v2; // r10
  int v3; // ecx
  int v4; // edx
  char v5; // cf
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+3Ch] [rbp-C4h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+54h] [rbp-ACh] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+5Ch] [rbp-A4h] BYREF
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+64h] [rbp-9Ch] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+6Ch] [rbp-94h] BYREF
  int v22; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+74h] [rbp-8Ch] BYREF
  int v24; // [rsp+78h] [rbp-88h] BYREF
  int v25; // [rsp+7Ch] [rbp-84h] BYREF
  int v26; // [rsp+80h] [rbp-80h] BYREF
  int v27; // [rsp+84h] [rbp-7Ch] BYREF
  int v28; // [rsp+88h] [rbp-78h] BYREF
  int v29; // [rsp+8Ch] [rbp-74h] BYREF
  int v30; // [rsp+90h] [rbp-70h] BYREF
  int v31; // [rsp+94h] [rbp-6Ch] BYREF
  int v32; // [rsp+98h] [rbp-68h] BYREF
  int v33; // [rsp+9Ch] [rbp-64h] BYREF
  int v34; // [rsp+A0h] [rbp-60h] BYREF
  int v35; // [rsp+A4h] [rbp-5Ch] BYREF
  int v36; // [rsp+A8h] [rbp-58h] BYREF
  int v37; // [rsp+ACh] [rbp-54h] BYREF
  int v38; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+B4h] [rbp-4Ch] BYREF
  int v40; // [rsp+B8h] [rbp-48h] BYREF
  int v41; // [rsp+BCh] [rbp-44h] BYREF
  int v42; // [rsp+C0h] [rbp-40h] BYREF
  int v43; // [rsp+C4h] [rbp-3Ch] BYREF
  int v44; // [rsp+C8h] [rbp-38h] BYREF
  int v45; // [rsp+CCh] [rbp-34h] BYREF
  _DWORD *v46; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  int *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  int *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  int *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  int *v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  int *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  int *v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  int *v64; // [rsp+180h] [rbp+80h]
  __int64 v65; // [rsp+188h] [rbp+88h]
  int *v66; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  int *v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  int *v70; // [rsp+1B0h] [rbp+B0h]
  __int64 v71; // [rsp+1B8h] [rbp+B8h]
  int *v72; // [rsp+1C0h] [rbp+C0h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]
  int *v74; // [rsp+1D0h] [rbp+D0h]
  __int64 v75; // [rsp+1D8h] [rbp+D8h]
  int *v76; // [rsp+1E0h] [rbp+E0h]
  __int64 v77; // [rsp+1E8h] [rbp+E8h]
  int *v78; // [rsp+1F0h] [rbp+F0h]
  __int64 v79; // [rsp+1F8h] [rbp+F8h]
  int *v80; // [rsp+200h] [rbp+100h]
  __int64 v81; // [rsp+208h] [rbp+108h]
  int *v82; // [rsp+210h] [rbp+110h]
  __int64 v83; // [rsp+218h] [rbp+118h]
  int *v84; // [rsp+220h] [rbp+120h]
  __int64 v85; // [rsp+228h] [rbp+128h]
  int *v86; // [rsp+230h] [rbp+130h]
  __int64 v87; // [rsp+238h] [rbp+138h]
  int *v88; // [rsp+240h] [rbp+140h]
  __int64 v89; // [rsp+248h] [rbp+148h]
  int *v90; // [rsp+250h] [rbp+150h]
  __int64 v91; // [rsp+258h] [rbp+158h]
  int *v92; // [rsp+260h] [rbp+160h]
  __int64 v93; // [rsp+268h] [rbp+168h]
  int *v94; // [rsp+270h] [rbp+170h]
  __int64 v95; // [rsp+278h] [rbp+178h]
  int *v96; // [rsp+280h] [rbp+180h]
  __int64 v97; // [rsp+288h] [rbp+188h]
  int *v98; // [rsp+290h] [rbp+190h]
  __int64 v99; // [rsp+298h] [rbp+198h]
  int *v100; // [rsp+2A0h] [rbp+1A0h]
  __int64 v101; // [rsp+2A8h] [rbp+1A8h]
  int *v102; // [rsp+2B0h] [rbp+1B0h]
  __int64 v103; // [rsp+2B8h] [rbp+1B8h]
  int *v104; // [rsp+2C0h] [rbp+1C0h]
  __int64 v105; // [rsp+2C8h] [rbp+1C8h]
  int *v106; // [rsp+2D0h] [rbp+1D0h]
  __int64 v107; // [rsp+2D8h] [rbp+1D8h]
  int *v108; // [rsp+2E0h] [rbp+1E0h]
  __int64 v109; // [rsp+2E8h] [rbp+1E8h]
  int *v110; // [rsp+2F0h] [rbp+1F0h]
  __int64 v111; // [rsp+2F8h] [rbp+1F8h]
  int *v112; // [rsp+300h] [rbp+200h]
  __int64 v113; // [rsp+308h] [rbp+208h]
  int *v114; // [rsp+310h] [rbp+210h]
  __int64 v115; // [rsp+318h] [rbp+218h]
  int *v116; // [rsp+320h] [rbp+220h]
  __int64 v117; // [rsp+328h] [rbp+228h]
  int *v118; // [rsp+330h] [rbp+230h]
  __int64 v119; // [rsp+338h] [rbp+238h]
  int *v120; // [rsp+340h] [rbp+240h]
  __int64 v121; // [rsp+348h] [rbp+248h]
  int *v122; // [rsp+350h] [rbp+250h]
  __int64 v123; // [rsp+358h] [rbp+258h]
  int *v124; // [rsp+360h] [rbp+260h]
  __int64 v125; // [rsp+368h] [rbp+268h]
  int *v126; // [rsp+370h] [rbp+270h]
  __int64 v127; // [rsp+378h] [rbp+278h]
  int *v128; // [rsp+380h] [rbp+280h]
  __int64 v129; // [rsp+388h] [rbp+288h]

  if ( dword_1C020CB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL) )
    {
      v3 = v1[46];
      v48 = &v46;
      v46 = v1;
      v49 = 8LL;
      v6 = -(v3 & 1);
      v50 = &v6;
      v51 = v2;
      v53 = v2;
      v7 = -__CFSHR__(v3, 2);
      v52 = &v7;
      v55 = v2;
      v57 = v2;
      v8 = -__CFSHR__(v3, 3);
      v54 = &v8;
      v59 = v2;
      v61 = v2;
      v9 = -__CFSHR__(v3, 4);
      v56 = &v9;
      v63 = v2;
      v65 = v2;
      v10 = -__CFSHR__(v3, 5);
      v58 = &v10;
      v67 = v2;
      v69 = v2;
      v11 = -__CFSHR__(v3, 6);
      v60 = &v11;
      v12 = -__CFSHR__(v3, 8);
      v62 = &v12;
      v13 = -__CFSHR__(v3, 9);
      v64 = &v13;
      v14 = -__CFSHR__(v3, 10);
      v66 = &v14;
      v15 = -__CFSHR__(v3, 11);
      v68 = &v15;
      v16 = -__CFSHR__(v3, 12);
      v70 = &v16;
      v71 = v2;
      v73 = v2;
      v75 = v2;
      v17 = -__CFSHR__(v3, 13);
      v72 = &v17;
      v77 = v2;
      v79 = v2;
      v18 = -__CFSHR__(v3, 14);
      v74 = &v18;
      v81 = v2;
      v83 = v2;
      v19 = -__CFSHR__(v3, 15);
      v76 = &v19;
      v85 = v2;
      v87 = v2;
      v20 = -__CFSHR__(v3, 17);
      v78 = &v20;
      v89 = v2;
      v91 = v2;
      v21 = -__CFSHR__(v3, 18);
      v80 = &v21;
      v93 = v2;
      v22 = -__CFSHR__(v3, 19);
      v82 = &v22;
      v23 = -__CFSHR__(v3, 20);
      v84 = &v23;
      v24 = -__CFSHR__(v3, 21);
      v86 = &v24;
      v25 = -__CFSHR__(v3, 22);
      v88 = &v25;
      v26 = -__CFSHR__(v3, 23);
      v90 = &v26;
      v27 = -__CFSHR__(v3, 24);
      v92 = &v27;
      v28 = -__CFSHR__(v3, 25);
      v94 = &v28;
      v4 = v1[50];
      v95 = v2;
      v29 = -__CFSHR__(v3, 26);
      v96 = &v29;
      v97 = v2;
      v99 = v2;
      v30 = -__CFSHR__(v3, 27);
      v98 = &v30;
      v101 = v2;
      v103 = v2;
      v31 = -__CFSHR__(v3, 28);
      v100 = &v31;
      v105 = v2;
      v107 = v2;
      v32 = -__CFSHR__(v3, 29);
      v102 = &v32;
      v33 = (2 * v3) >> 31;
      v104 = &v33;
      v106 = &v34;
      v5 = v1[47] & 1;
      v34 = v3 >> 31;
      v109 = v2;
      v35 = -v5;
      v108 = &v35;
      v111 = v2;
      v113 = v2;
      v36 = -(v4 & 1);
      v110 = &v36;
      v115 = v2;
      v117 = v2;
      v37 = -__CFSHR__(v4, 2);
      v112 = &v37;
      v38 = -__CFSHR__(v4, 3);
      v114 = &v38;
      v39 = -__CFSHR__(v4, 4);
      v116 = &v39;
      v119 = v2;
      v40 = -__CFSHR__(v4, 5);
      v118 = &v40;
      v121 = v2;
      v123 = v2;
      v41 = -__CFSHR__(v4, 6);
      v120 = &v41;
      v125 = v2;
      v127 = v2;
      v42 = -__CFSHR__(v4, 7);
      v122 = &v42;
      v129 = v2;
      v43 = -__CFSHR__(v4, 8);
      v124 = &v43;
      v44 = -__CFSHR__(v4, 9);
      v126 = &v44;
      v128 = &v45;
      v45 = -__CFSHR__(v4, 10);
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E2008, 0LL, 0LL, 0x2Bu, &pData);
    }
  }
}
