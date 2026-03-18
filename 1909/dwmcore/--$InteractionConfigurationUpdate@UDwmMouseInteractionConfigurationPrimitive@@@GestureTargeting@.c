/*
 * XREFs of ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800AA120
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A9F34 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     _TlgCreateSz @ 0x180031784 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x1800A9A74 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C2A8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x18022C310 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C33C (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x180236DEC (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z @ 0x180236E14 (-InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180236F04 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

char __fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMouseInteractionConfigurationPrimitive>(
        unsigned int *a1)
{
  char *v1; // r12
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
  bool v24; // zf
  const CHAR *v25; // rdx
  const CHAR *v26; // r9
  const CHAR *v27; // rdx
  const CHAR *v28; // r9
  const CHAR *v29; // rdx
  const CHAR *v30; // r9
  const CHAR *v31; // rdx
  const CHAR *v32; // r9
  const CHAR *v33; // rdx
  const CHAR *v34; // r9
  const CHAR *v35; // rdx
  const CHAR *v36; // r9
  const CHAR *v37; // rdx
  const CHAR *v38; // r9
  const CHAR *v39; // rdx
  const CHAR *v40; // r9
  const CHAR *v41; // rdx
  const CHAR *v42; // r9
  const CHAR *v43; // rdx
  const CHAR *v44; // r9
  const CHAR *v45; // rdx
  const CHAR *v46; // r9
  const CHAR *v47; // rdx
  const CHAR *v48; // r9
  const CHAR *v49; // rdx
  const CHAR *v50; // r9
  const CHAR *v51; // rdx
  const struct _TlgProvider_t *v52; // r14
  const CHAR *v53; // rax
  const struct CInteraction *v54; // rcx
  char *v55; // rax
  const CHAR *v56; // rax
  const CHAR *v57; // rax
  __int64 v58; // rcx
  int v59; // eax
  const struct CInteraction *v60; // rax
  __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rcx
  unsigned __int8 v64; // al
  bool v65; // al
  int v66; // eax
  __int64 v67; // rcx
  const CHAR *v68; // rax
  const CHAR *v69; // rax
  int v71; // [rsp+30h] [rbp-D0h] BYREF
  int v72; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v73; // [rsp+38h] [rbp-C8h] BYREF
  int v74; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v75; // [rsp+40h] [rbp-C0h] BYREF
  int v76; // [rsp+44h] [rbp-BCh] BYREF
  const struct CInteraction *v77; // [rsp+48h] [rbp-B8h] BYREF
  char *v78; // [rsp+50h] [rbp-B0h] BYREF
  const struct CInteraction *v79; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  const struct CInteraction **v82; // [rsp+90h] [rbp-70h]
  __int64 v83; // [rsp+98h] [rbp-68h]
  char **v84; // [rsp+A0h] [rbp-60h]
  __int64 v85; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+C0h] [rbp-40h] BYREF
  int *v88; // [rsp+D0h] [rbp-30h]
  __int64 v89; // [rsp+D8h] [rbp-28h]
  const struct CInteraction **v90; // [rsp+E0h] [rbp-20h]
  __int64 v91; // [rsp+E8h] [rbp-18h]
  unsigned int *v92; // [rsp+F0h] [rbp-10h]
  __int64 v93; // [rsp+F8h] [rbp-8h]
  int *v94; // [rsp+100h] [rbp+0h]
  __int64 v95; // [rsp+108h] [rbp+8h]
  unsigned int *v96; // [rsp+110h] [rbp+10h]
  __int64 v97; // [rsp+118h] [rbp+18h]
  int *v98; // [rsp+120h] [rbp+20h]
  __int64 v99; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v101; // [rsp+140h] [rbp+40h] BYREF
  _DWORD *v102; // [rsp+150h] [rbp+50h]
  __int64 v103; // [rsp+158h] [rbp+58h]
  int *v104; // [rsp+160h] [rbp+60h]
  __int64 v105; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v111; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v113; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+200h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v117; // [rsp+220h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v118; // [rsp+230h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+240h] [rbp+140h] BYREF

  v1 = (char *)*((_QWORD *)a1 + 7);
  v2 = a1 + 12;
  if ( a1[12] )
  {
    v71 = 0;
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
        v82 = &v77;
        v77 = v8;
        v83 = 8LL;
        v9 = (char *)v8 + 8;
        if ( !v8 )
          v9 = 0LL;
        v78 = v9;
        v84 = &v78;
        v85 = 8LL;
        v10 = InputTraceLogging::InteractionSourceTypeToString(v8);
        TlgCreateSz(&v86, v10);
        v11 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
        TlgCreateSz(&v87, v11);
        v12 = *((_QWORD *)a1 + 2);
        if ( v12 )
          v13 = *(_DWORD *)(v12 + 1696);
        else
          v13 = 0;
        v72 = v13;
        v88 = &v72;
        v14 = 0LL;
        v89 = 4LL;
        if ( v12 )
        {
          v15 = *(_QWORD *)(v12 + 96);
          if ( v15 )
            v14 = *(const struct CInteraction **)(v15 + 64);
        }
        v79 = v14;
        v90 = &v79;
        v91 = 8LL;
        v16 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v12);
        v17 = *((_QWORD *)a1 + 2);
        v73 = v16;
        v92 = &v73;
        v93 = 4LL;
        if ( v17 )
          v18 = *(_BYTE *)(v17 + 184) & 1;
        else
          v18 = 0;
        v74 = v18;
        v94 = &v74;
        v95 = 4LL;
        if ( v17 )
          v19 = (*(_BYTE *)(v17 + 184) & 4) != 0;
        else
          v19 = 0;
        v75 = v19;
        v96 = &v75;
        v20 = 0;
        v97 = 4LL;
        if ( v17 )
          LOBYTE(v20) = *(_QWORD *)(v17 + 272) != 0LL;
        v21 = a1[10];
        v76 = v20;
        v98 = &v76;
        v99 = 4LL;
        v22 = (const CHAR *)InputTraceLogging::InteractionConfigurationUpdateTypeToString(v21);
        TlgCreateSz(&v100, v22);
        v23 = (const CHAR *)InputTraceLogging::InteractionInputTypeToString(a1[11]);
        TlgCreateSz(&v101, v23);
        v24 = (*v1 & 1) == 0;
        v25 = "PanX+";
        v102 = v2;
        v103 = 4LL;
        if ( v24 )
          v25 = byte_18028123E;
        v104 = &v71;
        v105 = 4LL;
        TlgCreateSz(&v106, v25);
        v27 = "PanX-";
        if ( (*v1 & 2) == 0 )
          v27 = v26;
        TlgCreateSz(&v107, v27);
        v29 = "PanY+";
        if ( (*v1 & 4) == 0 )
          v29 = v28;
        TlgCreateSz(&v108, v29);
        v31 = "PanY-";
        if ( (*v1 & 8) == 0 )
          v31 = v30;
        TlgCreateSz(&v109, v31);
        v33 = "Zoom+";
        if ( (*v1 & 0x10) == 0 )
          v33 = v32;
        TlgCreateSz(&v110, v33);
        v35 = "Zoom-";
        if ( (*v1 & 0x20) == 0 )
          v35 = v34;
        TlgCreateSz(&v111, v35);
        v37 = "Tap";
        if ( (*v1 & 0x40) == 0 )
          v37 = v36;
        TlgCreateSz(&v112, v37);
        v39 = "Hold";
        if ( *v1 >= 0 )
          v39 = v38;
        TlgCreateSz(&v113, v39);
        v41 = "Button";
        if ( (*(_DWORD *)v1 & 0x100) == 0 )
          v41 = v40;
        TlgCreateSz(&v114, v41);
        v43 = "Eraser";
        if ( (*(_DWORD *)v1 & 0x200) == 0 )
          v43 = v42;
        TlgCreateSz(&v115, v43);
        v45 = "Hover";
        if ( (*(_DWORD *)v1 & 0x400) == 0 )
          v45 = v44;
        TlgCreateSz(&v116, v45);
        v47 = "Wheel";
        if ( (*(_DWORD *)v1 & 0x8000) == 0 )
          v47 = v46;
        TlgCreateSz(&v117, v47);
        v49 = "DisableGestures";
        if ( (*(_DWORD *)v1 & 0x10000000) == 0 )
          v49 = v48;
        TlgCreateSz(&v118, v49);
        v51 = "StopInertia";
        if ( (*(_DWORD *)v1 & 0x20000000) == 0 )
          v51 = v50;
        TlgCreateSz(&v119, v51);
        TlgWrite(v5, &unk_1802DE01B, 0LL, 0LL, 0x1Fu, &pData);
      }
      LODWORD(v6) = v71 + 1;
      v71 = (int)v6;
    }
    while ( (unsigned int)v6 < *v2 );
  }
  else
  {
    v6 = wil::details::static_lazy<InputTraceLogging>::get(
           (__int64)a1,
           (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v52 = (const struct _TlgProvider_t *)v6[1];
    if ( *(_DWORD *)v52 > 4u )
    {
      LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)v6[1], 0x800uLL);
      if ( (_BYTE)v6 )
      {
        v53 = (const CHAR *)InputTraceLogging::MidManipulationUpdateTypeToString(*a1);
        TlgCreateSz(&pDesc, v53);
        v54 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
        v82 = &v79;
        v79 = v54;
        v83 = 8LL;
        v55 = (char *)v54 + 8;
        if ( !v54 )
          v55 = 0LL;
        v78 = v55;
        v84 = &v78;
        v85 = 8LL;
        v56 = InputTraceLogging::InteractionSourceTypeToString(v54);
        TlgCreateSz(&v86, v56);
        v57 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
        TlgCreateSz(&v87, v57);
        v58 = *((_QWORD *)a1 + 2);
        if ( v58 )
          v59 = *(_DWORD *)(v58 + 1696);
        else
          v59 = 0;
        v76 = v59;
        v88 = &v76;
        v60 = 0LL;
        v89 = 4LL;
        if ( v58 )
        {
          v61 = *(_QWORD *)(v58 + 96);
          if ( v61 )
            v60 = *(const struct CInteraction **)(v61 + 64);
        }
        v77 = v60;
        v90 = &v77;
        v91 = 8LL;
        v62 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v58);
        v63 = *((_QWORD *)a1 + 2);
        v75 = v62;
        v92 = &v75;
        v93 = 4LL;
        if ( v63 )
          v64 = *(_BYTE *)(v63 + 184) & 1;
        else
          v64 = 0;
        v74 = v64;
        v94 = &v74;
        v95 = 4LL;
        if ( v63 )
          v65 = (*(_BYTE *)(v63 + 184) & 4) != 0;
        else
          v65 = 0;
        v73 = v65;
        v96 = &v73;
        v66 = 0;
        v97 = 4LL;
        if ( v63 )
          LOBYTE(v66) = *(_QWORD *)(v63 + 272) != 0LL;
        v67 = a1[10];
        v72 = v66;
        v98 = &v72;
        v99 = 4LL;
        v68 = (const CHAR *)InputTraceLogging::InteractionConfigurationUpdateTypeToString(v67);
        TlgCreateSz(&v100, v68);
        v69 = (const CHAR *)InputTraceLogging::InteractionInputTypeToString(a1[11]);
        TlgCreateSz(&v101, v69);
        v102 = v2;
        v103 = 4LL;
        LOBYTE(v6) = TlgWrite(v52, &unk_1802DDA1C, 0LL, 0LL, 0x10u, &pData);
      }
    }
  }
  return (char)v6;
}
