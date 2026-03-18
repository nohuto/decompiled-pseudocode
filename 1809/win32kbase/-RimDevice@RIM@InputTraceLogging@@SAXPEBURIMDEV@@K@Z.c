/*
 * XREFs of ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0051990
 * Callers:
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C00A4344 (RIMEnumerateDevicesForTelemetry.c)
 *     _lambda_3346b6da4304b6cf0870d144c3e6654c_::_lambda_invoker_cdecl_ @ 0x1C010A690 (_lambda_3346b6da4304b6cf0870d144c3e6654c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C010A83C (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C010A880 (-RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C010A950 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C010AAF0 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevice(const struct RIMDEV *a1)
{
  unsigned int v2; // ecx
  const CHAR *v3; // rax
  int v4; // r10d
  int v5; // r10d
  int v6; // r10d
  int v7; // r10d
  int v8; // r10d
  const CHAR *v9; // rdx
  int v10; // ecx
  int v11; // ecx
  const CHAR *v12; // rdx
  const WCHAR *v13; // rdx
  int v14; // ecx
  __int64 v15; // r11
  char v16; // cf
  int v17; // ecx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  int v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+5Ch] [rbp-A4h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+64h] [rbp-9Ch] BYREF
  int v32; // [rsp+68h] [rbp-98h] BYREF
  int v33; // [rsp+6Ch] [rbp-94h] BYREF
  int v34; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+74h] [rbp-8Ch] BYREF
  int v36; // [rsp+78h] [rbp-88h] BYREF
  int v37; // [rsp+7Ch] [rbp-84h] BYREF
  int v38; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+84h] [rbp-7Ch] BYREF
  int v40; // [rsp+88h] [rbp-78h] BYREF
  int v41; // [rsp+8Ch] [rbp-74h] BYREF
  int v42; // [rsp+90h] [rbp-70h] BYREF
  int v43; // [rsp+94h] [rbp-6Ch] BYREF
  int v44; // [rsp+98h] [rbp-68h] BYREF
  int v45; // [rsp+9Ch] [rbp-64h] BYREF
  int v46; // [rsp+A0h] [rbp-60h] BYREF
  int v47; // [rsp+A4h] [rbp-5Ch] BYREF
  int v48; // [rsp+A8h] [rbp-58h] BYREF
  int v49; // [rsp+ACh] [rbp-54h] BYREF
  int v50; // [rsp+B0h] [rbp-50h] BYREF
  int v51; // [rsp+B4h] [rbp-4Ch] BYREF
  int v52; // [rsp+B8h] [rbp-48h] BYREF
  int v53; // [rsp+BCh] [rbp-44h] BYREF
  int v54; // [rsp+C0h] [rbp-40h] BYREF
  int v55; // [rsp+C4h] [rbp-3Ch] BYREF
  int v56; // [rsp+C8h] [rbp-38h] BYREF
  int v57; // [rsp+CCh] [rbp-34h] BYREF
  const struct RIMDEV *v58; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  const struct RIMDEV **v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+120h] [rbp+20h] BYREF
  _DWORD *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  __int64 v66; // [rsp+140h] [rbp+40h]
  _DWORD v67[2]; // [rsp+148h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+150h] [rbp+50h] BYREF
  char *v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+170h] [rbp+70h] BYREF
  char *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  char *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  char *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  char *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  char *v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  int *v82; // [rsp+1D0h] [rbp+D0h]
  __int64 v83; // [rsp+1D8h] [rbp+D8h]
  int *v84; // [rsp+1E0h] [rbp+E0h]
  __int64 v85; // [rsp+1E8h] [rbp+E8h]
  int *v86; // [rsp+1F0h] [rbp+F0h]
  __int64 v87; // [rsp+1F8h] [rbp+F8h]
  int *v88; // [rsp+200h] [rbp+100h]
  __int64 v89; // [rsp+208h] [rbp+108h]
  int *v90; // [rsp+210h] [rbp+110h]
  __int64 v91; // [rsp+218h] [rbp+118h]
  int *v92; // [rsp+220h] [rbp+120h]
  __int64 v93; // [rsp+228h] [rbp+128h]
  int *v94; // [rsp+230h] [rbp+130h]
  __int64 v95; // [rsp+238h] [rbp+138h]
  int *v96; // [rsp+240h] [rbp+140h]
  __int64 v97; // [rsp+248h] [rbp+148h]
  int *v98; // [rsp+250h] [rbp+150h]
  __int64 v99; // [rsp+258h] [rbp+158h]
  int *v100; // [rsp+260h] [rbp+160h]
  __int64 v101; // [rsp+268h] [rbp+168h]
  int *v102; // [rsp+270h] [rbp+170h]
  __int64 v103; // [rsp+278h] [rbp+178h]
  int *v104; // [rsp+280h] [rbp+180h]
  __int64 v105; // [rsp+288h] [rbp+188h]
  int *v106; // [rsp+290h] [rbp+190h]
  __int64 v107; // [rsp+298h] [rbp+198h]
  int *v108; // [rsp+2A0h] [rbp+1A0h]
  __int64 v109; // [rsp+2A8h] [rbp+1A8h]
  int *v110; // [rsp+2B0h] [rbp+1B0h]
  __int64 v111; // [rsp+2B8h] [rbp+1B8h]
  int *v112; // [rsp+2C0h] [rbp+1C0h]
  __int64 v113; // [rsp+2C8h] [rbp+1C8h]
  int *v114; // [rsp+2D0h] [rbp+1D0h]
  __int64 v115; // [rsp+2D8h] [rbp+1D8h]
  int *v116; // [rsp+2E0h] [rbp+1E0h]
  __int64 v117; // [rsp+2E8h] [rbp+1E8h]
  int *v118; // [rsp+2F0h] [rbp+1F0h]
  __int64 v119; // [rsp+2F8h] [rbp+1F8h]
  int *v120; // [rsp+300h] [rbp+200h]
  __int64 v121; // [rsp+308h] [rbp+208h]
  int *v122; // [rsp+310h] [rbp+210h]
  __int64 v123; // [rsp+318h] [rbp+218h]
  int *v124; // [rsp+320h] [rbp+220h]
  __int64 v125; // [rsp+328h] [rbp+228h]
  int *v126; // [rsp+330h] [rbp+230h]
  __int64 v127; // [rsp+338h] [rbp+238h]
  int *v128; // [rsp+340h] [rbp+240h]
  __int64 v129; // [rsp+348h] [rbp+248h]
  int *v130; // [rsp+350h] [rbp+250h]
  __int64 v131; // [rsp+358h] [rbp+258h]
  int *v132; // [rsp+360h] [rbp+260h]
  __int64 v133; // [rsp+368h] [rbp+268h]
  int *v134; // [rsp+370h] [rbp+270h]
  __int64 v135; // [rsp+378h] [rbp+278h]
  int *v136; // [rsp+380h] [rbp+280h]
  __int64 v137; // [rsp+388h] [rbp+288h]
  int *v138; // [rsp+390h] [rbp+290h]
  __int64 v139; // [rsp+398h] [rbp+298h]
  int *v140; // [rsp+3A0h] [rbp+2A0h]
  __int64 v141; // [rsp+3A8h] [rbp+2A8h]
  int *v142; // [rsp+3B0h] [rbp+2B0h]
  __int64 v143; // [rsp+3B8h] [rbp+2B8h]
  int *v144; // [rsp+3C0h] [rbp+2C0h]
  __int64 v145; // [rsp+3C8h] [rbp+2C8h]
  int *v146; // [rsp+3D0h] [rbp+2D0h]
  __int64 v147; // [rsp+3D8h] [rbp+2D8h]
  int *v148; // [rsp+3E0h] [rbp+2E0h]
  __int64 v149; // [rsp+3E8h] [rbp+2E8h]
  int *v150; // [rsp+3F0h] [rbp+2F0h]
  __int64 v151; // [rsp+3F8h] [rbp+2F8h]
  int *v152; // [rsp+400h] [rbp+300h]
  __int64 v153; // [rsp+408h] [rbp+308h]
  int *v154; // [rsp+410h] [rbp+310h]
  __int64 v155; // [rsp+418h] [rbp+318h]
  int *v156; // [rsp+420h] [rbp+320h]
  __int64 v157; // [rsp+428h] [rbp+328h]
  int *v158; // [rsp+430h] [rbp+330h]
  __int64 v159; // [rsp+438h] [rbp+338h]
  int *v160; // [rsp+440h] [rbp+340h]
  __int64 v161; // [rsp+448h] [rbp+348h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C01C7F10, 0, 0LL) )
  {
    if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v2 = *((unsigned __int8 *)a1 + 48);
      v60 = &v58;
      v58 = a1;
      v61 = 8LL;
      v3 = InputTraceLogging::RimDevTypeToString(v2);
      TlgCreateSz(&pDesc, v3);
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( v8 == 1 )
                v9 = "Reset";
              else
                v9 = (const CHAR *)&unk_1C01A3F2C;
            }
            else
            {
              v9 = "Destroyed";
            }
          }
          else
          {
            v9 = "Closed";
          }
        }
        else
        {
          v9 = "Opened";
        }
      }
      else
      {
        v9 = "Created";
      }
      TlgCreateSz(&v63, v9);
      v10 = *((_DWORD *)a1 + 494);
      v64 = v67;
      v66 = *((_QWORD *)a1 + 27);
      v67[0] = *((unsigned __int16 *)a1 + 104);
      v65 = 2LL;
      v67[1] = 0;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            v12 = "Unknown";
          else
            v12 = "UNKNOWN";
        }
        else
        {
          v12 = "External";
        }
      }
      else
      {
        v12 = "Integrated";
      }
      TlgCreateSz(&v68, v12);
      v13 = (const WCHAR *)*((_QWORD *)a1 + 248);
      v69 = (char *)a1 + 1960;
      v70 = 16LL;
      TlgCreateWsz(&v71, v13);
      v73 = 8LL;
      v74 = (char *)a1 + 204;
      v72 = (char *)a1 + 192;
      v14 = *((_DWORD *)a1 + 46);
      v76 = (char *)a1 + 205;
      v78 = (char *)a1 + 206;
      v80 = (char *)a1 + 248;
      v75 = 1LL;
      v77 = 1LL;
      v18 = -(v14 & 1);
      v82 = &v18;
      v79 = 1LL;
      v81 = 8LL;
      v19 = -__CFSHR__(v14, 2);
      v84 = &v19;
      v83 = v15;
      v85 = v15;
      v20 = -__CFSHR__(v14, 3);
      v86 = &v20;
      v87 = v15;
      v89 = v15;
      v21 = -__CFSHR__(v14, 4);
      v88 = &v21;
      v91 = v15;
      v93 = v15;
      v22 = -__CFSHR__(v14, 5);
      v90 = &v22;
      v95 = v15;
      v97 = v15;
      v23 = -__CFSHR__(v14, 6);
      v92 = &v23;
      v24 = -__CFSHR__(v14, 8);
      v94 = &v24;
      v25 = -__CFSHR__(v14, 9);
      v96 = &v25;
      v99 = v15;
      v101 = v15;
      v26 = -__CFSHR__(v14, 10);
      v98 = &v26;
      v103 = v15;
      v105 = v15;
      v27 = -__CFSHR__(v14, 11);
      v100 = &v27;
      v107 = v15;
      v109 = v15;
      v28 = -__CFSHR__(v14, 12);
      v102 = &v28;
      v111 = v15;
      v113 = v15;
      v29 = -__CFSHR__(v14, 13);
      v104 = &v29;
      v115 = v15;
      v117 = v15;
      v30 = -__CFSHR__(v14, 14);
      v106 = &v30;
      v119 = v15;
      v31 = -__CFSHR__(v14, 15);
      v108 = &v31;
      v32 = -__CFSHR__(v14, 17);
      v110 = &v32;
      v33 = -__CFSHR__(v14, 18);
      v112 = &v33;
      v34 = -__CFSHR__(v14, 19);
      v114 = &v34;
      v35 = -__CFSHR__(v14, 20);
      v116 = &v35;
      v36 = -__CFSHR__(v14, 21);
      v118 = &v36;
      v37 = -__CFSHR__(v14, 22);
      v120 = &v37;
      v121 = v15;
      v123 = v15;
      v38 = -__CFSHR__(v14, 23);
      v122 = &v38;
      v125 = v15;
      v127 = v15;
      v39 = -__CFSHR__(v14, 24);
      v124 = &v39;
      v129 = v15;
      v131 = v15;
      v40 = -__CFSHR__(v14, 25);
      v126 = &v40;
      v133 = v15;
      v135 = v15;
      v41 = -__CFSHR__(v14, 26);
      v128 = &v41;
      v137 = v15;
      v139 = v15;
      v42 = -__CFSHR__(v14, 27);
      v130 = &v42;
      v141 = v15;
      v143 = v15;
      v43 = -__CFSHR__(v14, 28);
      v132 = &v43;
      v44 = -__CFSHR__(v14, 29);
      v134 = &v44;
      v45 = (2 * v14) >> 31;
      v136 = &v45;
      v138 = &v46;
      v16 = *((_DWORD *)a1 + 47) & 1;
      v46 = v14 >> 31;
      v17 = *((_DWORD *)a1 + 50);
      v47 = -v16;
      v140 = &v47;
      v48 = -(v17 & 1);
      v142 = &v48;
      v49 = -__CFSHR__(v17, 2);
      v145 = v15;
      v144 = &v49;
      v147 = v15;
      v149 = v15;
      v50 = -__CFSHR__(v17, 3);
      v146 = &v50;
      v151 = v15;
      v153 = v15;
      v51 = -__CFSHR__(v17, 4);
      v148 = &v51;
      v155 = v15;
      v157 = v15;
      v52 = -__CFSHR__(v17, 5);
      v150 = &v52;
      v159 = v15;
      v161 = v15;
      v53 = -__CFSHR__(v17, 6);
      v152 = &v53;
      v54 = -__CFSHR__(v17, 7);
      v154 = &v54;
      v55 = -__CFSHR__(v17, 8);
      v156 = &v55;
      v56 = -__CFSHR__(v17, 9);
      v158 = &v56;
      v160 = &v57;
      v57 = -__CFSHR__(v17, 10);
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019E56B, 0LL, 0LL, 0x37u, &pData);
    }
    if ( (*((_DWORD *)a1 + 50) & 0x80u) == 0 )
    {
      if ( *((_BYTE *)a1 + 48) == 2 )
        InputTraceLogging::RIM::RimDeviceHidData(a1);
    }
    else
    {
      InputTraceLogging::RIM::RimDevicePointerData(a1);
    }
    if ( *((_DWORD *)a1 + 298) )
      InputTraceLogging::RIM::RimDeviceMonitorMapping(a1);
  }
}
