/*
 * XREFs of ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C3984
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C36EC (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     _TlgCreateSz @ 0x180033404 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180086A80 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022D9B8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x18022DA20 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022DA4C (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x1802384FC (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z @ 0x180238524 (-InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180238614 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

char __fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMousewheelInteractionConfigurationPrimitive>(
        unsigned int *a1)
{
  __int64 v1; // r12
  _DWORD *v2; // r15
  _QWORD *v4; // rax
  const struct _TlgProvider_t *v5; // r14
  _QWORD *v6; // rax
  const CHAR *updated; // rax
  const struct CInteraction *v8; // rcx
  char *v9; // rax
  const CHAR *v10; // rax
  const CHAR *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  const struct CInteraction *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  bool v19; // al
  int v20; // eax
  __int64 v21; // rcx
  const CHAR *v22; // rax
  const CHAR *v23; // rax
  const CHAR *v24; // rdx
  const CHAR *v25; // r10
  __int64 v26; // r9
  const CHAR *v27; // rdx
  const CHAR *v28; // r10
  __int64 v29; // r9
  const CHAR *v30; // rdx
  const CHAR *v31; // r10
  __int64 v32; // r9
  const CHAR *v33; // rdx
  const CHAR *v34; // r10
  __int64 v35; // r9
  const CHAR *v36; // rdx
  const CHAR *v37; // r10
  __int64 v38; // r9
  const CHAR *v39; // rdx
  const CHAR *v40; // r10
  __int64 v41; // r9
  const CHAR *v42; // rdx
  const CHAR *v43; // r10
  __int64 v44; // r9
  const CHAR *v45; // rdx
  const CHAR *v46; // r10
  __int64 v47; // r9
  const CHAR *v48; // rdx
  const CHAR *v49; // r10
  __int64 v50; // r9
  const CHAR *v51; // rdx
  const CHAR *v52; // r10
  __int64 v53; // r9
  const CHAR *v54; // rdx
  const CHAR *v55; // r10
  __int64 v56; // r9
  const CHAR *v57; // rdx
  const CHAR *v58; // r10
  __int64 v59; // r9
  const CHAR *v60; // rdx
  const CHAR *v61; // r10
  __int64 v62; // r9
  const CHAR *v63; // rdx
  __int64 v64; // r9
  const struct _TlgProvider_t *v65; // r14
  const CHAR *v66; // rax
  const struct CInteraction *v67; // rcx
  char *v68; // rax
  const CHAR *v69; // rax
  const CHAR *v70; // rax
  __int64 v71; // rcx
  int v72; // eax
  const struct CInteraction *v73; // rax
  __int64 v74; // rdx
  unsigned int v75; // eax
  __int64 v76; // rcx
  unsigned __int8 v77; // al
  bool v78; // al
  int v79; // eax
  __int64 v80; // rcx
  const CHAR *v81; // rax
  const CHAR *v82; // rax
  unsigned int v84; // [rsp+30h] [rbp-D0h] BYREF
  int v85; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v86; // [rsp+38h] [rbp-C8h] BYREF
  int v87; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v88; // [rsp+40h] [rbp-C0h] BYREF
  int v89; // [rsp+44h] [rbp-BCh] BYREF
  const struct CInteraction *v90; // [rsp+48h] [rbp-B8h] BYREF
  char *v91; // [rsp+50h] [rbp-B0h] BYREF
  const struct CInteraction *v92; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  const struct CInteraction **v95; // [rsp+90h] [rbp-70h]
  __int64 v96; // [rsp+98h] [rbp-68h]
  char **v97; // [rsp+A0h] [rbp-60h]
  __int64 v98; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+C0h] [rbp-40h] BYREF
  int *v101; // [rsp+D0h] [rbp-30h]
  __int64 v102; // [rsp+D8h] [rbp-28h]
  const struct CInteraction **v103; // [rsp+E0h] [rbp-20h]
  __int64 v104; // [rsp+E8h] [rbp-18h]
  unsigned int *v105; // [rsp+F0h] [rbp-10h]
  __int64 v106; // [rsp+F8h] [rbp-8h]
  int *v107; // [rsp+100h] [rbp+0h]
  __int64 v108; // [rsp+108h] [rbp+8h]
  unsigned int *v109; // [rsp+110h] [rbp+10h]
  __int64 v110; // [rsp+118h] [rbp+18h]
  int *v111; // [rsp+120h] [rbp+20h]
  __int64 v112; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v113; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+140h] [rbp+40h] BYREF
  _DWORD *v115; // [rsp+150h] [rbp+50h]
  __int64 v116; // [rsp+158h] [rbp+58h]
  unsigned int *v117; // [rsp+160h] [rbp+60h]
  __int64 v118; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v124; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v127; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+200h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v129; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v130; // [rsp+220h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+230h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v132; // [rsp+240h] [rbp+140h] BYREF
  __int64 v133; // [rsp+250h] [rbp+150h]
  __int64 v134; // [rsp+258h] [rbp+158h]
  __int64 v135; // [rsp+260h] [rbp+160h]
  __int64 v136; // [rsp+268h] [rbp+168h]

  v1 = *((_QWORD *)a1 + 7);
  v2 = a1 + 12;
  if ( a1[12] )
  {
    v84 = 0;
    do
    {
      v4 = wil::details::static_lazy<InputTraceLogging>::get(
             (__int64)a1,
             (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
      v5 = (const struct _TlgProvider_t *)v4[1];
      if ( *(_DWORD *)v5 > 4u && TlgKeywordOn((TraceLoggingHProvider)v4[1], 0x800uLL) )
      {
        updated = (const CHAR *)InputTraceLogging::MidManipulationUpdateTypeToString(*a1);
        TlgCreateSz(&pDesc, updated);
        v8 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
        v95 = &v90;
        v90 = v8;
        v96 = 8LL;
        v9 = (char *)v8 + 8;
        if ( !v8 )
          v9 = 0LL;
        v91 = v9;
        v97 = &v91;
        v98 = 8LL;
        v10 = InputTraceLogging::InteractionSourceTypeToString(v8);
        TlgCreateSz(&v99, v10);
        v11 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
        TlgCreateSz(&v100, v11);
        v12 = *((_QWORD *)a1 + 2);
        if ( v12 )
          v13 = *(_DWORD *)(v12 + 1696);
        else
          v13 = 0;
        v85 = v13;
        v101 = &v85;
        v14 = 0LL;
        v102 = 4LL;
        if ( v12 )
        {
          v15 = *(_QWORD *)(v12 + 96);
          if ( v15 )
            v14 = *(const struct CInteraction **)(v15 + 64);
        }
        v92 = v14;
        v103 = &v92;
        v104 = 8LL;
        v16 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v12);
        v17 = *((_QWORD *)a1 + 2);
        v86 = v16;
        v105 = &v86;
        v106 = 4LL;
        if ( v17 )
          v18 = *(_BYTE *)(v17 + 184) & 1;
        else
          v18 = 0;
        v87 = v18;
        v107 = &v87;
        v108 = 4LL;
        if ( v17 )
          v19 = (*(_BYTE *)(v17 + 184) & 4) != 0;
        else
          v19 = 0;
        v88 = v19;
        v109 = &v88;
        v20 = 0;
        v110 = 4LL;
        if ( v17 )
          LOBYTE(v20) = *(_QWORD *)(v17 + 272) != 0LL;
        v21 = a1[10];
        v89 = v20;
        v111 = &v89;
        v112 = 4LL;
        v22 = (const CHAR *)InputTraceLogging::InteractionConfigurationUpdateTypeToString(v21);
        TlgCreateSz(&v113, v22);
        v23 = (const CHAR *)InputTraceLogging::InteractionInputTypeToString(a1[11]);
        TlgCreateSz(&v114, v23);
        v115 = v2;
        v117 = &v84;
        v24 = "PanX+";
        v116 = 4LL;
        v118 = 4LL;
        if ( (*(_BYTE *)(v1 + 12LL * v84 + 8) & 1) == 0 )
          v24 = byte_1802B2AA6;
        TlgCreateSz(&v119, v24);
        v27 = "PanX-";
        if ( (*(_BYTE *)(v26 + 8) & 2) == 0 )
          v27 = v25;
        TlgCreateSz(&v120, v27);
        v30 = "PanY+";
        if ( (*(_BYTE *)(v29 + 8) & 4) == 0 )
          v30 = v28;
        TlgCreateSz(&v121, v30);
        v33 = "PanY-";
        if ( (*(_BYTE *)(v32 + 8) & 8) == 0 )
          v33 = v31;
        TlgCreateSz(&v122, v33);
        v36 = "Zoom+";
        if ( (*(_BYTE *)(v35 + 8) & 0x10) == 0 )
          v36 = v34;
        TlgCreateSz(&v123, v36);
        v39 = "Zoom-";
        if ( (*(_BYTE *)(v38 + 8) & 0x20) == 0 )
          v39 = v37;
        TlgCreateSz(&v124, v39);
        v42 = "Tap";
        if ( (*(_BYTE *)(v41 + 8) & 0x40) == 0 )
          v42 = v40;
        TlgCreateSz(&v125, v42);
        v45 = "Hold";
        if ( *(char *)(v44 + 8) >= 0 )
          v45 = v43;
        TlgCreateSz(&v126, v45);
        v48 = "Button";
        if ( (*(_DWORD *)(v47 + 8) & 0x100) == 0 )
          v48 = v46;
        TlgCreateSz(&v127, v48);
        v51 = "Eraser";
        if ( (*(_DWORD *)(v50 + 8) & 0x200) == 0 )
          v51 = v49;
        TlgCreateSz(&v128, v51);
        v54 = "Hover";
        if ( (*(_DWORD *)(v53 + 8) & 0x400) == 0 )
          v54 = v52;
        TlgCreateSz(&v129, v54);
        v57 = "Wheel";
        if ( (*(_DWORD *)(v56 + 8) & 0x8000) == 0 )
          v57 = v55;
        TlgCreateSz(&v130, v57);
        v60 = "DisableGestures";
        if ( (*(_DWORD *)(v59 + 8) & 0x10000000) == 0 )
          v60 = v58;
        TlgCreateSz(&v131, v60);
        v63 = "StopInertia";
        if ( (*(_DWORD *)(v62 + 8) & 0x20000000) == 0 )
          v63 = v61;
        TlgCreateSz(&v132, v63);
        v133 = v64;
        v135 = v64 + 4;
        v134 = 4LL;
        v136 = 4LL;
        TlgWrite(v5, &unk_1802DF9A6, 0LL, 0LL, 0x21u, &pData);
      }
      LODWORD(v6) = v84 + 1;
      v84 = (unsigned int)v6;
    }
    while ( (unsigned int)v6 < *v2 );
  }
  else
  {
    v6 = wil::details::static_lazy<InputTraceLogging>::get(
           (__int64)a1,
           (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v65 = (const struct _TlgProvider_t *)v6[1];
    if ( *(_DWORD *)v65 > 4u )
    {
      LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)v6[1], 0x800uLL);
      if ( (_BYTE)v6 )
      {
        v66 = (const CHAR *)InputTraceLogging::MidManipulationUpdateTypeToString(*a1);
        TlgCreateSz(&pDesc, v66);
        v67 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
        v95 = &v92;
        v92 = v67;
        v96 = 8LL;
        v68 = (char *)v67 + 8;
        if ( !v67 )
          v68 = 0LL;
        v91 = v68;
        v97 = &v91;
        v98 = 8LL;
        v69 = InputTraceLogging::InteractionSourceTypeToString(v67);
        TlgCreateSz(&v99, v69);
        v70 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
        TlgCreateSz(&v100, v70);
        v71 = *((_QWORD *)a1 + 2);
        if ( v71 )
          v72 = *(_DWORD *)(v71 + 1696);
        else
          v72 = 0;
        v89 = v72;
        v101 = &v89;
        v73 = 0LL;
        v102 = 4LL;
        if ( v71 )
        {
          v74 = *(_QWORD *)(v71 + 96);
          if ( v74 )
            v73 = *(const struct CInteraction **)(v74 + 64);
        }
        v90 = v73;
        v103 = &v90;
        v104 = 8LL;
        v75 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v71);
        v76 = *((_QWORD *)a1 + 2);
        v88 = v75;
        v105 = &v88;
        v106 = 4LL;
        if ( v76 )
          v77 = *(_BYTE *)(v76 + 184) & 1;
        else
          v77 = 0;
        v87 = v77;
        v107 = &v87;
        v108 = 4LL;
        if ( v76 )
          v78 = (*(_BYTE *)(v76 + 184) & 4) != 0;
        else
          v78 = 0;
        v86 = v78;
        v109 = &v86;
        v79 = 0;
        v110 = 4LL;
        if ( v76 )
          LOBYTE(v79) = *(_QWORD *)(v76 + 272) != 0LL;
        v80 = a1[10];
        v85 = v79;
        v111 = &v85;
        v112 = 4LL;
        v81 = (const CHAR *)InputTraceLogging::InteractionConfigurationUpdateTypeToString(v80);
        TlgCreateSz(&v113, v81);
        v82 = (const CHAR *)InputTraceLogging::InteractionInputTypeToString(a1[11]);
        TlgCreateSz(&v114, v82);
        v115 = v2;
        v116 = 4LL;
        LOBYTE(v6) = TlgWrite(v65, &unk_1802DF8BC, 0LL, 0LL, 0x10u, &pData);
      }
    }
  }
  return (char)v6;
}
