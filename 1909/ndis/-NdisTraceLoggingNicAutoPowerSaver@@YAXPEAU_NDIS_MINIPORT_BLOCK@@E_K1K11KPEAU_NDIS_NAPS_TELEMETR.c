/*
 * XREFs of ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C00C2D98
 * Callers:
 *     ndisTraceNicAutoPowerSaver @ 0x1C00BA358 (ndisTraceNicAutoPowerSaver.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C001E4B8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031284 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z @ 0x1C00C3DE8 (-ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z.c)
 */

void __fastcall NdisTraceLoggingNicAutoPowerSaver(
        _NDIS_MINIPORT_AOAC *IfOutBroadcastPackets,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7,
        unsigned int a8,
        struct _NDIS_NAPS_TELEMETRY_REASON_DATA *a9,
        unsigned int a10,
        struct _NDIS_NAPS_TELEMETRY_OID_DATA *a11)
{
  struct _NDIS_MINIPORT_BLOCK *v12; // rbx
  unsigned __int64 v13; // rdx
  union _LARGE_INTEGER v14; // rax
  const WCHAR *v15; // rdx
  wchar_t *PnPInstanceId; // rax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  bool v19; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-CCh] BYREF
  _NDIS_SS_RESUME_REASON v21; // [rsp+38h] [rbp-C8h] BYREF
  int WakeCount; // [rsp+3Ch] [rbp-C4h] BYREF
  int BusyCount; // [rsp+40h] [rbp-C0h] BYREF
  _NDIS_SS_RESUME_REASON v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  _NDIS_SS_RESUME_REASON v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  _NDIS_SS_RESUME_REASON v30; // [rsp+5Ch] [rbp-A4h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+64h] [rbp-9Ch] BYREF
  _NDIS_SS_RESUME_REASON v33; // [rsp+68h] [rbp-98h] BYREF
  int v34; // [rsp+6Ch] [rbp-94h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  unsigned int Oid; // [rsp+74h] [rbp-8Ch] BYREF
  int v37; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v38; // [rsp+7Ch] [rbp-84h] BYREF
  int v39; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v40; // [rsp+84h] [rbp-7Ch] BYREF
  int v41; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v42; // [rsp+8Ch] [rbp-74h] BYREF
  int v43; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v44; // [rsp+94h] [rbp-6Ch] BYREF
  int v45; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v46; // [rsp+9Ch] [rbp-64h] BYREF
  int v47; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v48; // [rsp+A4h] [rbp-5Ch] BYREF
  int v49; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v50; // [rsp+ACh] [rbp-54h] BYREF
  int v51; // [rsp+B0h] [rbp-50h] BYREF
  union _LARGE_INTEGER v52; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h] BYREF
  union _LARGE_INTEGER v54; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v55; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v57; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v58; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v61; // [rsp+100h] [rbp+0h] BYREF
  __int64 v62; // [rsp+108h] [rbp+8h] BYREF
  __int64 v63; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  __int64 *v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  bool *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  union _LARGE_INTEGER *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  unsigned __int64 *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  unsigned int *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  __int64 *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  char *v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  char *v82; // [rsp+1D0h] [rbp+D0h]
  __int64 v83; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 *v84; // [rsp+1E0h] [rbp+E0h]
  __int64 v85; // [rsp+1E8h] [rbp+E8h]
  _NDIS_SS_RESUME_REASON *v86; // [rsp+1F0h] [rbp+F0h]
  __int64 v87; // [rsp+1F8h] [rbp+F8h]
  int *p_WakeCount; // [rsp+200h] [rbp+100h]
  __int64 v89; // [rsp+208h] [rbp+108h]
  int *p_BusyCount; // [rsp+210h] [rbp+110h]
  __int64 v91; // [rsp+218h] [rbp+118h]
  unsigned __int64 *p_TotalTimeMs; // [rsp+220h] [rbp+120h]
  __int64 v93; // [rsp+228h] [rbp+128h]
  _NDIS_SS_RESUME_REASON *v94; // [rsp+230h] [rbp+130h]
  __int64 v95; // [rsp+238h] [rbp+138h]
  int *v96; // [rsp+240h] [rbp+140h]
  __int64 v97; // [rsp+248h] [rbp+148h]
  int *v98; // [rsp+250h] [rbp+150h]
  __int64 v99; // [rsp+258h] [rbp+158h]
  unsigned __int64 *v100; // [rsp+260h] [rbp+160h]
  __int64 v101; // [rsp+268h] [rbp+168h]
  _NDIS_SS_RESUME_REASON *v102; // [rsp+270h] [rbp+170h]
  __int64 v103; // [rsp+278h] [rbp+178h]
  int *v104; // [rsp+280h] [rbp+180h]
  __int64 v105; // [rsp+288h] [rbp+188h]
  int *v106; // [rsp+290h] [rbp+190h]
  __int64 v107; // [rsp+298h] [rbp+198h]
  unsigned __int64 *v108; // [rsp+2A0h] [rbp+1A0h]
  __int64 v109; // [rsp+2A8h] [rbp+1A8h]
  _NDIS_SS_RESUME_REASON *v110; // [rsp+2B0h] [rbp+1B0h]
  __int64 v111; // [rsp+2B8h] [rbp+1B8h]
  int *v112; // [rsp+2C0h] [rbp+1C0h]
  __int64 v113; // [rsp+2C8h] [rbp+1C8h]
  int *v114; // [rsp+2D0h] [rbp+1D0h]
  __int64 v115; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int64 *v116; // [rsp+2E0h] [rbp+1E0h]
  __int64 v117; // [rsp+2E8h] [rbp+1E8h]
  _NDIS_SS_RESUME_REASON *v118; // [rsp+2F0h] [rbp+1F0h]
  __int64 v119; // [rsp+2F8h] [rbp+1F8h]
  int *v120; // [rsp+300h] [rbp+200h]
  __int64 v121; // [rsp+308h] [rbp+208h]
  int *v122; // [rsp+310h] [rbp+210h]
  __int64 v123; // [rsp+318h] [rbp+218h]
  unsigned __int64 *v124; // [rsp+320h] [rbp+220h]
  __int64 v125; // [rsp+328h] [rbp+228h]
  unsigned int *p_Oid; // [rsp+330h] [rbp+230h]
  __int64 v127; // [rsp+338h] [rbp+238h]
  int *v128; // [rsp+340h] [rbp+240h]
  __int64 v129; // [rsp+348h] [rbp+248h]
  __int64 *v130; // [rsp+350h] [rbp+250h]
  __int64 v131; // [rsp+358h] [rbp+258h]
  unsigned int *v132; // [rsp+360h] [rbp+260h]
  __int64 v133; // [rsp+368h] [rbp+268h]
  int *v134; // [rsp+370h] [rbp+270h]
  __int64 v135; // [rsp+378h] [rbp+278h]
  __int64 *v136; // [rsp+380h] [rbp+280h]
  __int64 v137; // [rsp+388h] [rbp+288h]
  unsigned int *v138; // [rsp+390h] [rbp+290h]
  __int64 v139; // [rsp+398h] [rbp+298h]
  int *v140; // [rsp+3A0h] [rbp+2A0h]
  __int64 v141; // [rsp+3A8h] [rbp+2A8h]
  __int64 *v142; // [rsp+3B0h] [rbp+2B0h]
  __int64 v143; // [rsp+3B8h] [rbp+2B8h]
  unsigned int *v144; // [rsp+3C0h] [rbp+2C0h]
  __int64 v145; // [rsp+3C8h] [rbp+2C8h]
  int *v146; // [rsp+3D0h] [rbp+2D0h]
  __int64 v147; // [rsp+3D8h] [rbp+2D8h]
  __int64 *v148; // [rsp+3E0h] [rbp+2E0h]
  __int64 v149; // [rsp+3E8h] [rbp+2E8h]
  unsigned int *v150; // [rsp+3F0h] [rbp+2F0h]
  __int64 v151; // [rsp+3F8h] [rbp+2F8h]
  int *v152; // [rsp+400h] [rbp+300h]
  __int64 v153; // [rsp+408h] [rbp+308h]
  __int64 *v154; // [rsp+410h] [rbp+310h]
  __int64 v155; // [rsp+418h] [rbp+318h]
  unsigned int *v156; // [rsp+420h] [rbp+320h]
  __int64 v157; // [rsp+428h] [rbp+328h]
  int *v158; // [rsp+430h] [rbp+330h]
  __int64 v159; // [rsp+438h] [rbp+338h]
  __int64 *v160; // [rsp+440h] [rbp+340h]
  __int64 v161; // [rsp+448h] [rbp+348h]
  unsigned int *v162; // [rsp+450h] [rbp+350h]
  __int64 v163; // [rsp+458h] [rbp+358h]
  int *v164; // [rsp+460h] [rbp+360h]
  __int64 v165; // [rsp+468h] [rbp+368h]
  __int64 *v166; // [rsp+470h] [rbp+370h]
  __int64 v167; // [rsp+478h] [rbp+378h]
  unsigned int *v168; // [rsp+480h] [rbp+380h]
  __int64 v169; // [rsp+488h] [rbp+388h]
  int *v170; // [rsp+490h] [rbp+390h]
  __int64 v171; // [rsp+498h] [rbp+398h]
  __int64 *v172; // [rsp+4A0h] [rbp+3A0h]
  __int64 v173; // [rsp+4A8h] [rbp+3A8h]
  unsigned __int64 v174; // [rsp+500h] [rbp+400h] BYREF
  __int64 v175; // [rsp+508h] [rbp+408h] BYREF

  v175 = a4;
  v174 = a3;
  v12 = (struct _NDIS_MINIPORT_BLOCK *)IfOutBroadcastPackets;
  if ( (IfOutBroadcastPackets->CsTrafficStats[2].IfInMulticastPackets & 0x400000000LL) != 0
    && IfOutBroadcastPackets[3].CsTrafficStats[0].IfInBroadcastPackets
    && a3 >= 0x927C0 )
  {
    if ( a2 )
    {
      v13 = 0LL;
    }
    else
    {
      IfOutBroadcastPackets = (_NDIS_MINIPORT_AOAC *)IfOutBroadcastPackets[3].CsTrafficStats[0].IfOutBroadcastPackets;
      v13 = IfOutBroadcastPackets->TotalCsActiveTime / 0x2710;
    }
    v14.QuadPart = 0LL;
    v55 = v13;
    v52.QuadPart = 0LL;
    if ( !a2 )
    {
      ndisConvertInterruptTimeToLocalTime((unsigned __int64)IfOutBroadcastPackets, &v52);
      v14 = v52;
    }
    v54 = v14;
    if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v66 = 16LL;
      p_InterfaceGuid = &v12->InterfaceGuid;
      v15 = (const WCHAR *)&unk_1C00CDC00;
      v53 = *((unsigned __int16 *)&v12->NetLuid.Info + 3);
      v67 = &v53;
      PnPInstanceId = v12->PnPInstanceId;
      v68 = 8LL;
      if ( PnPInstanceId )
        v15 = (const WCHAR *)PnPInstanceId;
      TlgCreateWsz(&pDesc, v15);
      v70 = &v19;
      v71 = 1LL;
      v72 = &v54;
      v19 = a2 == 0;
      v73 = 8LL;
      v74 = &v174;
      v20 = a5;
      v76 = &v20;
      v78 = &v175;
      v80 = &a6;
      v82 = &a7;
      v84 = &v55;
      v21.StopReason = (_NDIS_SS_STOP_REASON)a9->Reason;
      v86 = &v21;
      WakeCount = a9->WakeCount;
      p_WakeCount = &WakeCount;
      BusyCount = a9->BusyCount;
      p_BusyCount = &BusyCount;
      p_TotalTimeMs = &a9->TotalTimeMs;
      v24.StopReason = (_NDIS_SS_STOP_REASON)a9[1].Reason;
      v94 = &v24;
      v25 = a9[1].WakeCount;
      v96 = &v25;
      v26 = a9[1].BusyCount;
      v98 = &v26;
      v100 = &a9[1].TotalTimeMs;
      v27.StopReason = (_NDIS_SS_STOP_REASON)a9[2].Reason;
      v75 = 8LL;
      v77 = 4LL;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 8LL;
      v87 = 4LL;
      v89 = 4LL;
      v91 = 4LL;
      v93 = 8LL;
      v95 = 4LL;
      v97 = 4LL;
      v99 = 4LL;
      v101 = 8LL;
      v102 = &v27;
      v28 = a9[2].WakeCount;
      v104 = &v28;
      v29 = a9[2].BusyCount;
      v106 = &v29;
      v108 = &a9[2].TotalTimeMs;
      v30.StopReason = (_NDIS_SS_STOP_REASON)a9[3].Reason;
      v110 = &v30;
      v31 = a9[3].WakeCount;
      v112 = &v31;
      v32 = a9[3].BusyCount;
      v114 = &v32;
      v116 = &a9[3].TotalTimeMs;
      v33.StopReason = (_NDIS_SS_STOP_REASON)a9[4].Reason;
      v118 = &v33;
      v34 = a9[4].WakeCount;
      v120 = &v34;
      v35 = a9[4].BusyCount;
      v122 = &v35;
      v124 = &a9[4].TotalTimeMs;
      Oid = a11->Oid;
      p_Oid = &Oid;
      v37 = a11->WakeCount;
      v128 = &v37;
      v56 = a11->BusyCount;
      v130 = &v56;
      v38 = a11[1].Oid;
      v132 = &v38;
      v39 = a11[1].WakeCount;
      v134 = &v39;
      v57 = a11[1].BusyCount;
      v103 = 4LL;
      v105 = 4LL;
      v107 = 4LL;
      v109 = 8LL;
      v111 = 4LL;
      v113 = 4LL;
      v115 = 4LL;
      v117 = 8LL;
      v119 = 4LL;
      v121 = 4LL;
      v123 = 4LL;
      v125 = 8LL;
      v127 = 4LL;
      v129 = 4LL;
      v131 = 8LL;
      v133 = 4LL;
      v135 = 4LL;
      v136 = &v57;
      v40 = a11[2].Oid;
      v138 = &v40;
      v41 = a11[2].WakeCount;
      v140 = &v41;
      v58 = a11[2].BusyCount;
      v142 = &v58;
      v42 = a11[3].Oid;
      v144 = &v42;
      v43 = a11[3].WakeCount;
      v146 = &v43;
      v59 = a11[3].BusyCount;
      v148 = &v59;
      v44 = a11[4].Oid;
      v150 = &v44;
      v45 = a11[4].WakeCount;
      v152 = &v45;
      v60 = a11[4].BusyCount;
      v154 = &v60;
      v46 = a11[5].Oid;
      v156 = &v46;
      v47 = a11[5].WakeCount;
      v158 = &v47;
      v61 = a11[5].BusyCount;
      v160 = &v61;
      v48 = a11[6].Oid;
      v162 = &v48;
      v49 = a11[6].WakeCount;
      v164 = &v49;
      v62 = a11[6].BusyCount;
      v166 = &v62;
      v50 = a11[7].Oid;
      v168 = &v50;
      v137 = 8LL;
      v139 = 4LL;
      v141 = 4LL;
      v143 = 8LL;
      v145 = 4LL;
      v147 = 4LL;
      v149 = 8LL;
      v151 = 4LL;
      v153 = 4LL;
      v155 = 8LL;
      v157 = 4LL;
      v159 = 4LL;
      v161 = 8LL;
      v163 = 4LL;
      v165 = 4LL;
      v167 = 8LL;
      v51 = a11[7].WakeCount;
      v170 = &v51;
      v63 = a11[7].BusyCount;
      v172 = &v63;
      v169 = 4LL;
      v171 = 4LL;
      v173 = 8LL;
      TlgWrite(&hProvider, &unk_1C00D0EE2, v17, v18, 0x39u, &pData);
    }
  }
}
