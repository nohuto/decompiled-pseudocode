/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0152300
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C01535D0 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C0003CB4 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001A5CC (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C001F0AC (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C001F120 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z @ 0x1C001F1EC (-reset@-$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C001F21C (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     DpiReadPnpRegistryValue @ 0x1C0134C54 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x1C0134DC0 (DpiOpenPnpRegistryKey.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0151F38 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C0152A48 (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C0152AF4 (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0152BC4 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0153124 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0153468 (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C0153538 (--0Lockable@@QEAA@XZ.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C015D0F0 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  DXGDIAGNOSTICS *v2; // rsi
  VIDPN_MGR *v3; // rdi
  void **v5; // rcx
  char *v6; // r13
  char *v7; // r15
  DMMVIDEOPRESENTSOURCESET *v8; // rax
  DMMVIDEOPRESENTSOURCESET *v9; // rax
  __int64 v10; // rcx
  DMMVIDEOPRESENTTARGETSET *v11; // rax
  DMMVIDEOPRESENTTARGETSET *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // r12d
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r15
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r14
  int (__high *v45)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *); // rdx
  void *v46; // r8
  __int64 v47; // rbx
  _QWORD *v48; // r14
  MONITOR_MGR *v49; // rcx
  int inserted; // ebx
  DXGDIAGNOSTICS *v51; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r14
  __int64 v68; // rax
  __int64 v69; // rax
  HANDLE v70; // rcx
  void ***v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r14
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r14
  _QWORD *v81; // rbx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  unsigned __int64 v88; // r15
  __int64 v89; // rax
  unsigned __int64 v90; // r15
  unsigned int v91; // r12d
  __int64 v92; // rdi
  __int64 v93; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  struct DMMVIDEOPRESENTTARGET *v99; // r13
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  _QWORD *v103; // r14
  unsigned int *i; // r14
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // r14
  unsigned __int64 v109; // r15
  __int64 v110; // rax
  unsigned __int64 v111; // r15
  unsigned int v112; // r12d
  __int64 v113; // rdi
  __int64 v114; // r14
  struct DMMVIDEOPRESENTTARGET *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  struct DMMVIDEOPRESENTTARGET *v120; // r13
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // r14
  __int64 v127; // rax
  HANDLE v128; // rcx
  __int64 v129; // rax
  __int64 v130; // r14
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rcx
  __int64 v136; // r15
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // r15
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // r14
  __int64 v149; // rax
  __int64 v150; // rax
  unsigned int v151; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v153; // [rsp+50h] [rbp-B0h]
  _QWORD *InputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v155; // [rsp+60h] [rbp-A0h]
  _QWORD *v156; // [rsp+68h] [rbp-98h] BYREF
  __int64 v157; // [rsp+70h] [rbp-90h]
  int v158; // [rsp+78h] [rbp-88h] BYREF
  _OWORD *v159; // [rsp+80h] [rbp-80h]
  int v160; // [rsp+88h] [rbp-78h] BYREF
  _OWORD *v161; // [rsp+90h] [rbp-70h]
  void **v162; // [rsp+98h] [rbp-68h] BYREF
  __int128 v163; // [rsp+A0h] [rbp-60h]
  void **v164; // [rsp+B0h] [rbp-50h]
  __int64 v165; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v166; // [rsp+C0h] [rbp-40h]
  int v167; // [rsp+C8h] [rbp-38h]
  void **v168; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v169; // [rsp+D8h] [rbp-28h]
  void **v170; // [rsp+E8h] [rbp-18h]
  __int64 v171; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v172; // [rsp+F8h] [rbp-8h]
  int v173; // [rsp+100h] [rbp+0h]
  _OWORD v174[2]; // [rsp+108h] [rbp+8h] BYREF
  int v175; // [rsp+128h] [rbp+28h]
  wchar_t v176; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v177[3]; // [rsp+130h] [rbp+30h] BYREF

  v153 = this;
  v2 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  v3 = this;
  Lockable::Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_DWORD *)v3 + 14) = 0;
  *(_QWORD *)v3 = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  v5 = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  v6 = (char *)v3 + 72;
  *((_QWORD *)v3 + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v7 = (char *)v3 + 80;
  *((_QWORD *)v3 + 9) = 0LL;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 11) = 0LL;
  *((_QWORD *)v3 + 12) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)v3 + 28) = 0;
  *((_QWORD *)v3 + 13) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 17) = 0LL;
  *((_QWORD *)v3 + 16) = (char *)v3 + 120;
  *((_QWORD *)v3 + 15) = (char *)v3 + 120;
  *((_DWORD *)v3 + 36) = 2;
  *((_QWORD *)v3 + 19) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)v3 + 20) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_DWORD *)v3 + 42) = 0;
  *((_QWORD *)v3 + 24) = 0LL;
  *((_QWORD *)v3 + 23) = (char *)v3 + 176;
  *((_QWORD *)v3 + 22) = (char *)v3 + 176;
  *((_DWORD *)v3 + 50) = 2;
  *((_QWORD *)v3 + 26) = 30LL;
  *((_QWORD *)v3 + 27) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)v3 + 58) = 0;
  *((_QWORD *)v3 + 28) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 32) = 0LL;
  *((_QWORD *)v3 + 31) = (char *)v3 + 240;
  *((_QWORD *)v3 + 30) = (char *)v3 + 240;
  *((_DWORD *)v3 + 66) = 2;
  *((_QWORD *)v3 + 34) = 5LL;
  *((_QWORD *)v3 + 35) = 0LL;
  *((_QWORD *)v3 + 36) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)v3 + 37) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_DWORD *)v3 + 76) = 0;
  *((_QWORD *)v3 + 41) = 0LL;
  *((_QWORD *)v3 + 40) = (char *)v3 + 312;
  *((_QWORD *)v3 + 39) = (char *)v3 + 312;
  *((_DWORD *)v3 + 84) = 2;
  *((_QWORD *)v3 + 43) = 40LL;
  *((_QWORD *)v3 + 44) = 0LL;
  *((_QWORD *)v3 + 45) = 0LL;
  *((_QWORD *)v3 + 46) = 0LL;
  *((_QWORD *)v3 + 47) = 0LL;
  *((_QWORD *)v3 + 48) = 0LL;
  *((_QWORD *)v3 + 49) = 0LL;
  *((_QWORD *)v3 + 50) = 0LL;
  *((_QWORD *)v3 + 51) = 0LL;
  *((_QWORD *)v3 + 52) = 0LL;
  *((_QWORD *)v3 + 53) = 0LL;
  *((_QWORD *)v3 + 54) = 0LL;
  *((_QWORD *)v3 + 55) = 0LL;
  *((_QWORD *)v3 + 56) = 0LL;
  *((_QWORD *)v3 + 57) = 0LL;
  *((_BYTE *)v3 + 464) = 0;
  *((_QWORD *)v3 + 59) = 0LL;
  *((_DWORD *)v3 + 120) = 0;
  *((_DWORD *)v3 + 123) = -1;
  *((_DWORD *)v3 + 124) = -1;
  *((_QWORD *)v3 + 63) = 0LL;
  if ( !a2 )
  {
    v53 = WdLogNewEntry5_WdAssertion(&DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable');
    WdLogEvent5_WdAssertion(v53);
  }
  *((_DWORD *)v3 + 16) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v3 + 1) )
    {
      v55 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v55);
    }
    *((_QWORD *)v3 + 1) = a2;
  }
  else
  {
    v54 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v54 + 24) = v3;
    *(_QWORD *)(v54 + 32) = *((_QWORD *)v3 + 1);
    WdLogEvent5_WdError(v54);
  }
  if ( *((_DWORD *)v3 + 8) != 2 )
  {
    v56 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v56 + 24) = v3;
    WdLogEvent5_WdError(v56);
    *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 6);
    return v3;
  }
  v8 = (DMMVIDEOPRESENTSOURCESET *)operator new(0x70uLL, 0x4E506456u, PagedPool);
  if ( v8 )
    v9 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v8, v3);
  else
    v9 = 0LL;
  auto_rc<DMMVIDEOPRESENTSOURCESET>::reset((__int64 *)v3 + 9, (__int64)v9);
  if ( !*(_QWORD *)v6
    || ((v11 = (DMMVIDEOPRESENTTARGETSET *)operator new(0x80uLL, 0x4E506456u, PagedPool)) == 0LL
      ? (v12 = 0LL)
      : (v12 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v11, v3)),
        auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 10, (__int64)v12),
        !*(_QWORD *)v7) )
  {
    v57 = WdLogNewEntry5_WdLowResource(v10);
    WdLogEvent5_WdLowResource(v57);
    *((_DWORD *)v3 + 14) = -1073741801;
    return v3;
  }
  LODWORD(v14) = VIDPN_MGR::_ReadConfiguration((unsigned __int64)v3);
  if ( (int)v14 < 0
    || (LODWORD(v14) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v3), (int)v14 < 0)
    || (LODWORD(v14) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v3), (int)v14 < 0) )
  {
LABEL_68:
    v58 = WdLogNewEntry5_WdError(v13);
    v59 = *((_QWORD *)v3 + 1);
    v60 = v58;
    if ( !v59 )
    {
      v61 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v61);
      v59 = *((_QWORD *)v3 + 1);
    }
    v62 = *(_QWORD *)(v59 + 16);
LABEL_72:
    *(_QWORD *)(v60 + 24) = v62;
    WdLogEvent5_WdError(v60);
    *((_DWORD *)v3 + 14) = v14;
    return v3;
  }
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v6 + 72LL), 1u);
  v15 = *(_QWORD **)v6;
  InputBuffer = 0LL;
  v155 = 0LL;
  if ( v15 == (_QWORD *)-112LL )
    InputBuffer = 0LL;
  else
    InputBuffer = v15;
  v16 = *((_QWORD *)v3 + 1);
  v155 = *((_QWORD *)v3 + 44);
  if ( !v16 )
  {
    v64 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v64);
    v16 = *((_QWORD *)v3 + 1);
  }
  v18 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v16 + 16) + 192LL),
          0x23204Fu,
          &InputBuffer,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v18 < 0 )
    goto LABEL_74;
  if ( !v15[5] )
  {
    v73 = WdLogNewEntry5_WdError(v17);
    v74 = *((_QWORD *)v3 + 1);
    v75 = v73;
    if ( !v74 )
    {
      v76 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v76);
      v74 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v75 + 24) = *(_QWORD *)(v74 + 16);
    WdLogEvent5_WdError(v75);
    *((_DWORD *)v3 + 14) = -1071774936;
    goto LABEL_82;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 8));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL));
  v15 = *(_QWORD **)v7;
  v156 = 0LL;
  v157 = 0LL;
  if ( v15 == (_QWORD *)-112LL )
    v156 = 0LL;
  else
    v156 = v15;
  v19 = *((_QWORD *)v3 + 1);
  v157 = *((_QWORD *)v3 + 45);
  if ( !v19 )
  {
    v77 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v77);
    v19 = *((_QWORD *)v3 + 1);
  }
  v18 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v19 + 16) + 192LL),
          0x232053u,
          &v156,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v18 < 0 )
  {
LABEL_74:
    v65 = WdLogNewEntry5_WdError(v17);
    v66 = *((_QWORD *)v3 + 1);
    v67 = v65;
    if ( !v66 )
    {
      v68 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v68);
      v66 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v67 + 24) = *(_QWORD *)(v66 + 16);
    WdLogEvent5_WdError(v67);
    *((_DWORD *)v3 + 14) = v18;
LABEL_79:
    if ( !v15 )
      return v3;
LABEL_82:
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 8));
    return v3;
  }
  if ( !v15[5] )
  {
    v78 = WdLogNewEntry5_WdError(v17);
    v79 = *((_QWORD *)v3 + 1);
    v80 = v78;
    if ( !v79 )
    {
      v72 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v72);
      v79 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v80 + 24) = *(_QWORD *)(v79 + 16);
    WdLogEvent5_WdError(v80);
    *((_DWORD *)v3 + 14) = -1071774935;
    goto LABEL_82;
  }
  v20 = (_QWORD *)v15[3];
  if ( v20 == v15 + 3 )
    goto LABEL_34;
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v20 - 1);
  if ( !NextTarget )
    goto LABEL_34;
  do
  {
    if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
      break;
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v15, NextTarget);
  }
  while ( NextTarget );
  if ( NextTarget )
    v22 = *((_DWORD *)NextTarget + 6);
  else
LABEL_34:
    v22 = -1;
  *((_DWORD *)v3 + 124) = v22;
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 8));
  v23 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 40LL) >= *(_QWORD *)(*(_QWORD *)v6 + 40LL) )
  {
    v24 = *((_QWORD *)v3 + 1);
    if ( !v24 )
    {
      v85 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v85);
      v24 = *((_QWORD *)v3 + 1);
    }
    v25 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 192LL), 1u, 0x20019u, &Handle);
    v14 = v25;
    if ( v25 < 0 )
    {
      v86 = WdLogNewEntry5_WdError(v26);
      v87 = *((_QWORD *)v3 + 1);
      v60 = v86;
      if ( !v87 )
      {
        v63 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v63);
        v87 = *((_QWORD *)v3 + 1);
      }
      v62 = *(_QWORD *)(v87 + 16);
      *(_QWORD *)(v60 + 32) = v14;
      goto LABEL_72;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL));
    v15 = *(_QWORD **)v7;
    v175 = *(_DWORD *)L"st";
    v176 = aTargetpriority[18];
    v159 = v174;
    v174[0] = *(_OWORD *)L"TargetPriorityList";
    v164 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v158 = 2490404;
    v174[1] = *(_OWORD *)L"iorityList";
    v162 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v163 = 0LL;
    v165 = 0LL;
    v166 = 0LL;
    v167 = 3;
    v27 = VIDPN_MGR::_ReadTargetPriorityList(v26, Handle, &v158, &v162);
    v31 = v27;
    if ( v27 >= 0 )
    {
      v88 = v166;
      if ( !v166 )
      {
        v89 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v89);
      }
      v90 = v88 >> 2;
      v91 = 0;
      if ( v90 )
      {
        v92 = v165;
        v93 = 0LL;
        do
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v15,
                         *(_DWORD *)(v92 + 4 * v93));
          v99 = TargetById;
          if ( TargetById )
          {
            if ( *((_DWORD *)TargetById + 31) == -1 )
            {
              *((_DWORD *)TargetById + 31) = v91;
              v102 = WdLogNewEntry5_WdTrace(v96, v95, v97, v98);
              *(_QWORD *)(v102 + 24) = v93;
              v29 = *((unsigned int *)v99 + 6);
              *(_QWORD *)(v102 + 32) = v29;
            }
            else
            {
              v101 = WdLogNewEntry5_WdError(v96);
              *(_QWORD *)(v101 + 24) = *((unsigned int *)v99 + 6);
              WdLogEvent5_WdError(v101);
            }
          }
          else
          {
            v100 = WdLogNewEntry5_WdWarning(v96, v95, v97);
            *(_QWORD *)(v100 + 24) = *(unsigned int *)(v92 + 4 * v93);
            *(_QWORD *)(v100 + 32) = v93;
            WdLogEvent5_WdWarning(v100);
          }
          v93 = ++v91;
        }
        while ( v91 < v90 );
        v3 = v153;
      }
      v103 = (_QWORD *)v15[3];
      if ( v103 != v15 + 3 )
      {
        for ( i = (unsigned int *)(v103 - 1);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v15,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i) )
        {
          if ( i[31] == -1 )
          {
            v105 = WdLogNewEntry5_WdWarning(v29, v28, v30);
            *(_QWORD *)(v105 + 24) = i[6];
            WdLogEvent5_WdWarning(v105);
          }
        }
      }
    }
    else if ( v27 != -1073741275 )
    {
      v106 = WdLogNewEntry5_WdError(v29);
      v107 = *((_QWORD *)v3 + 1);
      v108 = v106;
      if ( !v107 )
      {
        v69 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v69);
        v107 = *((_QWORD *)v3 + 1);
      }
      *(_QWORD *)(v108 + 24) = *(_QWORD *)(v107 + 16);
      *(_QWORD *)(v108 + 32) = v31;
      WdLogEvent5_WdError(v108);
      v70 = Handle;
      *((_DWORD *)v3 + 14) = v31;
      ZwClose(v70);
      v71 = &v162;
LABEL_78:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(v71);
      goto LABEL_79;
    }
    DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v162);
    v161 = v177;
    v177[0] = *(_OWORD *)L"TargetForcePriorityList";
    v160 = 3145774;
    v168 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v177[1] = *(_OWORD *)L"rcePriorityList";
    v170 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v177[2] = *(_OWORD *)L"ityList";
    v171 = 0LL;
    v172 = 0LL;
    v169 = 0LL;
    v173 = 3;
    v33 = VIDPN_MGR::_ReadTargetPriorityList(v32, Handle, &v160, &v168);
    v35 = v33;
    if ( v33 >= 0 )
    {
      v109 = v172;
      if ( !v172 )
      {
        v110 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v110);
      }
      v111 = v109 >> 2;
      v112 = 0;
      if ( v111 )
      {
        v113 = v171;
        v114 = 0LL;
        do
        {
          v115 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, *(_DWORD *)(v113 + 4 * v114));
          v120 = v115;
          if ( v115 )
          {
            if ( *((_DWORD *)v115 + 32) == -1 )
            {
              *((_DWORD *)v115 + 32) = v112;
              v123 = WdLogNewEntry5_WdTrace(v117, v116, v118, v119);
              *(_QWORD *)(v123 + 24) = v114;
              *(_QWORD *)(v123 + 32) = *((unsigned int *)v120 + 6);
            }
            else
            {
              v122 = WdLogNewEntry5_WdError(v117);
              *(_QWORD *)(v122 + 24) = *((unsigned int *)v120 + 6);
              WdLogEvent5_WdError(v122);
            }
          }
          else
          {
            v121 = WdLogNewEntry5_WdWarning(v117, v116, v118);
            *(_QWORD *)(v121 + 24) = *(unsigned int *)(v113 + 4 * v114);
            *(_QWORD *)(v121 + 32) = v114;
            WdLogEvent5_WdWarning(v121);
          }
          v114 = ++v112;
        }
        while ( v112 < v111 );
        v3 = v153;
      }
LABEL_43:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v168);
      ZwClose(Handle);
      v37 = *((_QWORD *)v3 + 1);
      v151 = -1;
      if ( !v37 )
      {
        v129 = WdLogNewEntry5_WdAssertion(v36);
        WdLogEvent5_WdAssertion(v129);
        v37 = *((_QWORD *)v3 + 1);
      }
      if ( (int)DpiReadPnpRegistryValue(
                  *(_QWORD *)(*(_QWORD *)(v37 + 16) + 192LL),
                  L"DefaultSimulatedTarget",
                  (char *)&v151,
                  4u,
                  1u) < 0
        || (v130 = v151, v151 == -1) )
      {
        v42 = WdLogNewEntry5_WdTrace(v39, v38, v40, v41);
        v43 = *((_QWORD *)v3 + 1);
        v44 = v42;
        if ( !v43 )
        {
          v143 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v143);
          v43 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v44 + 24) = *(_QWORD *)(v43 + 16);
      }
      else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, v151) )
      {
        v136 = WdLogNewEntry5_WdTrace(v132, v131, v133, v134);
        *(_QWORD *)(v136 + 24) = v130;
        v137 = *((_QWORD *)v3 + 1);
        if ( !v137 )
        {
          v138 = WdLogNewEntry5_WdAssertion(v135);
          WdLogEvent5_WdAssertion(v138);
          v137 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v136 + 32) = *(_QWORD *)(v137 + 16);
        *((_DWORD *)v3 + 123) = v130;
      }
      else
      {
        v140 = WdLogNewEntry5_WdError(v132);
        *(_QWORD *)(v140 + 24) = v130;
        v141 = *((_QWORD *)v3 + 1);
        if ( !v141 )
        {
          v142 = WdLogNewEntry5_WdAssertion(v139);
          WdLogEvent5_WdAssertion(v142);
          v141 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v140 + 32) = *(_QWORD *)(v141 + 16);
        WdLogEvent5_WdError(v140);
      }
      if ( v15 )
        ReferenceCounted::Release((ReferenceCounted *)(v15 + 8));
      LODWORD(v14) = VIDPN_MGR::_InitializeDmmClientInterfaces(v3);
      if ( (int)v14 >= 0 )
      {
        v47 = *((_QWORD *)v3 + 1);
        if ( v47
          || (v144 = WdLogNewEntry5_WdAssertion(v13), WdLogEvent5_WdAssertion(v144), (v47 = *((_QWORD *)v3 + 1)) != 0) )
        {
          v48 = (_QWORD *)((char *)v3 + 472);
          if ( v3 != (VIDPN_MGR *)-472LL )
          {
            *v48 = 0LL;
            v49 = *(MONITOR_MGR **)(v47 + 96);
            if ( !v49 )
            {
              v145 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v145 + 24) = *(_QWORD *)(v47 + 16);
              WdLogEvent5_WdError(v145);
              inserted = -1073741811;
LABEL_140:
              v146 = WdLogNewEntry5_WdError(v13);
              v147 = *((_QWORD *)v3 + 1);
              v148 = v146;
              if ( !v147 )
              {
                v149 = WdLogNewEntry5_WdAssertion(0LL);
                WdLogEvent5_WdAssertion(v149);
                v147 = *((_QWORD *)v3 + 1);
              }
              *(_QWORD *)(v148 + 24) = *(_QWORD *)(v147 + 16);
              WdLogEvent5_WdError(v148);
              *((_DWORD *)v3 + 14) = inserted;
              return v3;
            }
            inserted = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
                         v49,
                         v45,
                         v46,
                         (struct HDXGMONITOREVENT__ **)v3 + 59);
LABEL_56:
            if ( inserted >= 0 )
            {
              if ( !*v48 )
              {
                v150 = WdLogNewEntry5_WdAssertion(v13);
                WdLogEvent5_WdAssertion(v150);
              }
              v51 = (DXGDIAGNOSTICS *)operator new(0x28uLL, 0x4E506456u, PagedPool);
              if ( v51 )
                v2 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v51, 0x8000u, PagedPool);
              *((_QWORD *)v3 + 63) = v2;
              *((_DWORD *)v3 + 16) = 2;
              return v3;
            }
            goto LABEL_140;
          }
        }
        else
        {
          v48 = (_QWORD *)((char *)v3 + 472);
        }
        inserted = -1073741811;
        goto LABEL_56;
      }
      goto LABEL_68;
    }
    if ( v33 == -1073741275 )
      goto LABEL_43;
    v124 = WdLogNewEntry5_WdError(v34);
    v125 = *((_QWORD *)v3 + 1);
    v126 = v124;
    if ( !v125 )
    {
      v127 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v127);
      v125 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v126 + 24) = *(_QWORD *)(v125 + 16);
    *(_QWORD *)(v126 + 32) = v35;
    WdLogEvent5_WdError(v126);
    v128 = Handle;
    *((_DWORD *)v3 + 14) = v35;
    ZwClose(v128);
    v71 = &v168;
    goto LABEL_78;
  }
  v81 = (_QWORD *)WdLogNewEntry5_WdError(v23);
  v81[3] = *(_QWORD *)(*(_QWORD *)v7 + 40LL);
  v82 = *(_QWORD *)v6;
  v81[4] = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
  v83 = *((_QWORD *)v3 + 1);
  if ( !v83 )
  {
    v84 = WdLogNewEntry5_WdAssertion(v82);
    WdLogEvent5_WdAssertion(v84);
    v83 = *((_QWORD *)v3 + 1);
  }
  v81[5] = *(_QWORD *)(v83 + 16);
  WdLogEvent5_WdError(v81);
  *((_DWORD *)v3 + 14) = -1071774938;
  return v3;
}
