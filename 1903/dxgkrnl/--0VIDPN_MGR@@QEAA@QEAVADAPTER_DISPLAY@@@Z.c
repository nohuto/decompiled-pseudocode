/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C016AC38
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C016AB90 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003D00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001B730 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C001F560 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z @ 0x1C001F5AC (--0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C001F6A0 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z @ 0x1C001F76C (-reset@-$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C001F79C (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     DpiReadPnpRegistryValue @ 0x1C0142644 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01427C0 (DpiOpenPnpRegistryKey.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C016B378 (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C016B424 (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C016B4F8 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C016BA58 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C016BD9C (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C016BE6C (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C016C230 (--0Lockable@@QEAA@XZ.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C016F4B8 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  DXGDIAGNOSTICS *v2; // rsi
  VIDPN_MGR *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  void **v7; // rcx
  char *v8; // r12
  char *v9; // r15
  DMMVIDEOPRESENTSOURCESET *v10; // rax
  __int64 v11; // r8
  DMMVIDEOPRESENTSOURCESET *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DMMVIDEOPRESENTTARGETSET *v17; // rax
  __int64 v18; // r8
  DMMVIDEOPRESENTTARGETSET *v19; // rax
  int (__high *v20)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *); // rdx
  __int64 v21; // rcx
  void *v22; // r8
  __int64 v23; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r15
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // r14
  __int64 v63; // rbx
  _QWORD *v64; // r14
  MONITOR_MGR *v65; // rcx
  int inserted; // ebx
  DXGDIAGNOSTICS *v67; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r14
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // rax
  HANDLE v90; // rcx
  void ***v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r14
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r14
  _QWORD *v103; // rbx
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  unsigned __int64 v112; // r15
  __int64 v113; // rax
  unsigned __int64 v114; // r15
  unsigned int v115; // r12d
  __int64 v116; // rdi
  __int64 v117; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  struct DMMVIDEOPRESENTTARGET *v122; // r13
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  _QWORD *v126; // r14
  unsigned int *i; // r14
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r14
  unsigned __int64 v133; // r15
  __int64 v134; // rax
  unsigned __int64 v135; // r15
  unsigned int v136; // r12d
  __int64 v137; // rdi
  __int64 v138; // r14
  struct DMMVIDEOPRESENTTARGET *v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  struct DMMVIDEOPRESENTTARGET *v143; // r13
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r14
  __int64 v151; // rax
  HANDLE v152; // rcx
  __int64 v153; // rax
  __int64 v154; // r14
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // rcx
  __int64 v159; // r15
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r15
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r14
  __int64 v174; // rax
  __int64 v175; // rax
  unsigned int v176; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v178; // [rsp+50h] [rbp-B0h]
  _QWORD v179[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v180[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD InputBuffer[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v182[2]; // [rsp+88h] [rbp-78h] BYREF
  void **v183; // [rsp+98h] [rbp-68h] BYREF
  __int128 v184; // [rsp+A0h] [rbp-60h]
  void **v185; // [rsp+B0h] [rbp-50h]
  __int64 v186; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v187; // [rsp+C0h] [rbp-40h]
  int v188; // [rsp+C8h] [rbp-38h]
  void **v189; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v190; // [rsp+D8h] [rbp-28h]
  void **v191; // [rsp+E8h] [rbp-18h]
  __int64 v192; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v193; // [rsp+F8h] [rbp-8h]
  int v194; // [rsp+100h] [rbp+0h]
  _OWORD v195[2]; // [rsp+108h] [rbp+8h] BYREF
  int v196; // [rsp+128h] [rbp+28h]
  wchar_t v197; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v198[3]; // [rsp+130h] [rbp+30h] BYREF

  v178 = this;
  v2 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  v3 = this;
  Lockable::Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_DWORD *)v3 + 14) = 0;
  *(_QWORD *)v3 = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  v7 = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  v8 = (char *)v3 + 72;
  *((_QWORD *)v3 + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v9 = (char *)v3 + 80;
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
    v69 = WdLogNewEntry5_WdAssertion(
            &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable',
            v5);
    WdLogEvent5_WdAssertion(v69);
  }
  *((_DWORD *)v3 + 16) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v3 + 1) )
    {
      v71 = WdLogNewEntry5_WdAssertion(v7, v5);
      WdLogEvent5_WdAssertion(v71);
    }
    *((_QWORD *)v3 + 1) = a2;
  }
  else
  {
    v70 = WdLogNewEntry5_WdError(v7, v5, v6);
    *(_QWORD *)(v70 + 24) = v3;
    *(_QWORD *)(v70 + 32) = *((_QWORD *)v3 + 1);
    WdLogEvent5_WdError(v70);
  }
  if ( *((_DWORD *)v3 + 8) != 2 )
  {
    v72 = WdLogNewEntry5_WdError(v7, v5, v6);
    *(_QWORD *)(v72 + 24) = v3;
    WdLogEvent5_WdError(v72);
    *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 6);
    return v3;
  }
  v10 = (DMMVIDEOPRESENTSOURCESET *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
  if ( v10 )
    v12 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v10, v3);
  else
    v12 = 0LL;
  auto_rc<DMMVIDEOPRESENTSOURCESET>::reset((__int64 *)v3 + 9, (__int64)v12, v11);
  if ( !*(_QWORD *)v8
    || ((v17 = (DMMVIDEOPRESENTTARGETSET *)operator new[](0x80uLL, 0x4E506456u, PagedPool)) == 0LL
      ? (v19 = 0LL)
      : (v19 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v17, v3)),
        auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 10, (__int64)v19, v18),
        !*(_QWORD *)v9) )
  {
    v73 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    WdLogEvent5_WdLowResource(v73);
    *((_DWORD *)v3 + 14) = -1073741801;
    return v3;
  }
  LODWORD(v23) = VIDPN_MGR::_ReadConfiguration(v3);
  if ( (int)v23 < 0
    || (LODWORD(v23) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v3), (int)v23 < 0)
    || (LODWORD(v23) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v3), (int)v23 < 0) )
  {
LABEL_68:
    v74 = WdLogNewEntry5_WdError(v21, v20, v22);
    v76 = *((_QWORD *)v3 + 1);
    v77 = v74;
    if ( !v76 )
    {
      v78 = WdLogNewEntry5_WdAssertion(0LL, v75);
      WdLogEvent5_WdAssertion(v78);
      v76 = *((_QWORD *)v3 + 1);
    }
    v79 = *(_QWORD *)(v76 + 16);
LABEL_72:
    *(_QWORD *)(v77 + 24) = v79;
    WdLogEvent5_WdError(v77);
    *((_DWORD *)v3 + 14) = v23;
    return v3;
  }
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v8 + 72LL), 1u);
  v24 = *(_QWORD **)v8;
  if ( *(_QWORD *)v8 == -112LL )
    InputBuffer[0] = 0LL;
  else
    InputBuffer[0] = *(_QWORD *)v8;
  v25 = *((_QWORD *)v3 + 1);
  InputBuffer[1] = *((_QWORD *)v3 + 44);
  if ( !v25 )
  {
    v81 = WdLogNewEntry5_WdAssertion(0LL, v20);
    WdLogEvent5_WdAssertion(v81);
    v25 = *((_QWORD *)v3 + 1);
  }
  v29 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v25 + 16) + 192LL),
          0x23204Fu,
          InputBuffer,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v29 < 0 )
    goto LABEL_74;
  if ( !v24[5] )
  {
    v93 = WdLogNewEntry5_WdError(v27, v26, v28);
    v95 = *((_QWORD *)v3 + 1);
    v96 = v93;
    if ( !v95 )
    {
      v97 = WdLogNewEntry5_WdAssertion(0LL, v94);
      WdLogEvent5_WdAssertion(v97);
      v95 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v96 + 24) = *(_QWORD *)(v95 + 16);
    WdLogEvent5_WdError(v96);
    *((_DWORD *)v3 + 14) = -1071774936;
    goto LABEL_82;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v24 + 8), v26, v28);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v9 + 72LL));
  v24 = *(_QWORD **)v9;
  if ( *(_QWORD *)v9 == -112LL )
    v182[0] = 0LL;
  else
    v182[0] = *(_QWORD *)v9;
  v31 = *((_QWORD *)v3 + 1);
  v182[1] = *((_QWORD *)v3 + 45);
  if ( !v31 )
  {
    v98 = WdLogNewEntry5_WdAssertion(0LL, v30);
    WdLogEvent5_WdAssertion(v98);
    v31 = *((_QWORD *)v3 + 1);
  }
  v29 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v31 + 16) + 192LL),
          0x232053u,
          v182,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v29 < 0 )
  {
LABEL_74:
    v82 = WdLogNewEntry5_WdError(v27, v26, v28);
    v84 = *((_QWORD *)v3 + 1);
    v85 = v82;
    if ( !v84 )
    {
      v86 = WdLogNewEntry5_WdAssertion(0LL, v83);
      WdLogEvent5_WdAssertion(v86);
      v84 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v85 + 24) = *(_QWORD *)(v84 + 16);
    WdLogEvent5_WdError(v85);
    *((_DWORD *)v3 + 14) = v29;
LABEL_79:
    if ( !v24 )
      return v3;
LABEL_82:
    ReferenceCounted::Release((ReferenceCounted *)(v24 + 8), v87, v88);
    return v3;
  }
  if ( !v24[5] )
  {
    v99 = WdLogNewEntry5_WdError(v27, v26, v28);
    v101 = *((_QWORD *)v3 + 1);
    v102 = v99;
    if ( !v101 )
    {
      v92 = WdLogNewEntry5_WdAssertion(0LL, v100);
      WdLogEvent5_WdAssertion(v92);
      v101 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v102 + 24) = *(_QWORD *)(v101 + 16);
    WdLogEvent5_WdError(v102);
    *((_DWORD *)v3 + 14) = -1071774935;
    goto LABEL_82;
  }
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)v24[3];
  if ( NextTarget == (const struct DMMVIDEOPRESENTTARGET *)(v24 + 3) )
    goto LABEL_34;
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)((char *)NextTarget - 8);
  if ( !NextTarget )
    goto LABEL_34;
  do
  {
    if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
      break;
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v24, NextTarget);
  }
  while ( NextTarget );
  if ( NextTarget )
    v33 = *((_DWORD *)NextTarget + 6);
  else
LABEL_34:
    v33 = -1;
  *((_DWORD *)v3 + 124) = v33;
  ReferenceCounted::Release((ReferenceCounted *)(v24 + 8), (__int64)NextTarget, v28);
  v36 = *(_QWORD *)v9;
  if ( *(_QWORD *)(*(_QWORD *)v9 + 40LL) >= *(_QWORD *)(*(_QWORD *)v8 + 40LL) )
  {
    v37 = *((_QWORD *)v3 + 1);
    if ( !v37 )
    {
      v108 = WdLogNewEntry5_WdAssertion(v36, v34);
      WdLogEvent5_WdAssertion(v108);
      v37 = *((_QWORD *)v3 + 1);
    }
    v38 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 192LL), 1u, 0x20019u, &Handle);
    v23 = v38;
    if ( v38 < 0 )
    {
      v109 = WdLogNewEntry5_WdError(v40, v39, v41);
      v111 = *((_QWORD *)v3 + 1);
      v77 = v109;
      if ( !v111 )
      {
        v80 = WdLogNewEntry5_WdAssertion(0LL, v110);
        WdLogEvent5_WdAssertion(v80);
        v111 = *((_QWORD *)v3 + 1);
      }
      v79 = *(_QWORD *)(v111 + 16);
      *(_QWORD *)(v77 + 32) = v23;
      goto LABEL_72;
    }
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v9 + 72LL), 1u);
    v24 = *(_QWORD **)v9;
    v196 = *(_DWORD *)L"st";
    v197 = aTargetpriority[18];
    v179[1] = v195;
    v183 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v195[0] = *(_OWORD *)L"TargetPriorityList";
    v185 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v179[0] = 2490404LL;
    v195[1] = *(_OWORD *)L"iorityList";
    v186 = 0LL;
    v184 = 0LL;
    v187 = 0LL;
    v188 = 3;
    v42 = VIDPN_MGR::_ReadTargetPriorityList(v40, Handle, v179, &v183);
    v46 = v42;
    if ( v42 >= 0 )
    {
      v112 = v187;
      if ( !v187 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v44, v43);
        WdLogEvent5_WdAssertion(v113);
      }
      v114 = v112 >> 2;
      v115 = 0;
      if ( v114 )
      {
        v116 = v186;
        v117 = 0LL;
        do
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v24,
                         *(_DWORD *)(v116 + 4 * v117));
          v122 = TargetById;
          if ( TargetById )
          {
            if ( *((_DWORD *)TargetById + 31) == -1 )
            {
              *((_DWORD *)TargetById + 31) = v115;
              v125 = WdLogNewEntry5_WdTrace(v120, v119);
              *(_QWORD *)(v125 + 24) = v117;
              v44 = *((unsigned int *)v122 + 6);
              *(_QWORD *)(v125 + 32) = v44;
            }
            else
            {
              v124 = WdLogNewEntry5_WdError(v120, v119, v121);
              *(_QWORD *)(v124 + 24) = *((unsigned int *)v122 + 6);
              WdLogEvent5_WdError(v124);
            }
          }
          else
          {
            v123 = WdLogNewEntry5_WdWarning(v120, v119, v121);
            *(_QWORD *)(v123 + 24) = *(unsigned int *)(v116 + 4 * v117);
            *(_QWORD *)(v123 + 32) = v117;
            WdLogEvent5_WdWarning(v123);
          }
          v117 = ++v115;
        }
        while ( v115 < v114 );
        v3 = v178;
      }
      v126 = (_QWORD *)v24[3];
      if ( v126 != v24 + 3 )
      {
        for ( i = (unsigned int *)(v126 - 1);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v24,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i) )
        {
          if ( i[31] == -1 )
          {
            v128 = WdLogNewEntry5_WdWarning(v44, v43, v45);
            *(_QWORD *)(v128 + 24) = i[6];
            WdLogEvent5_WdWarning(v128);
          }
        }
      }
    }
    else if ( v42 != -1073741275 )
    {
      v129 = WdLogNewEntry5_WdError(v44, v43, v45);
      v131 = *((_QWORD *)v3 + 1);
      v132 = v129;
      if ( !v131 )
      {
        v89 = WdLogNewEntry5_WdAssertion(0LL, v130);
        WdLogEvent5_WdAssertion(v89);
        v131 = *((_QWORD *)v3 + 1);
      }
      *(_QWORD *)(v132 + 24) = *(_QWORD *)(v131 + 16);
      *(_QWORD *)(v132 + 32) = v46;
      WdLogEvent5_WdError(v132);
      v90 = Handle;
      *((_DWORD *)v3 + 14) = v46;
      ZwClose(v90);
      v91 = &v183;
LABEL_78:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(v91);
      goto LABEL_79;
    }
    DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v183);
    v180[1] = v198;
    v198[0] = *(_OWORD *)L"TargetForcePriorityList";
    v189 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v180[0] = 3145774LL;
    v191 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v198[2] = *(_OWORD *)L"ityList";
    v192 = 0LL;
    v193 = 0LL;
    v190 = 0LL;
    v194 = 3;
    v198[1] = *(_OWORD *)L"rcePriorityList";
    v48 = VIDPN_MGR::_ReadTargetPriorityList(v47, Handle, v180, &v189);
    v52 = v48;
    if ( v48 >= 0 )
    {
      v133 = v193;
      if ( !v193 )
      {
        v134 = WdLogNewEntry5_WdAssertion(v50, v49);
        WdLogEvent5_WdAssertion(v134);
      }
      v135 = v133 >> 2;
      v136 = 0;
      if ( v135 )
      {
        v137 = v192;
        v138 = 0LL;
        do
        {
          v139 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, *(_DWORD *)(v137 + 4 * v138));
          v143 = v139;
          if ( v139 )
          {
            if ( *((_DWORD *)v139 + 32) == -1 )
            {
              *((_DWORD *)v139 + 32) = v136;
              v146 = WdLogNewEntry5_WdTrace(v141, v140);
              *(_QWORD *)(v146 + 24) = v138;
              *(_QWORD *)(v146 + 32) = *((unsigned int *)v143 + 6);
            }
            else
            {
              v145 = WdLogNewEntry5_WdError(v141, v140, v142);
              *(_QWORD *)(v145 + 24) = *((unsigned int *)v143 + 6);
              WdLogEvent5_WdError(v145);
            }
          }
          else
          {
            v144 = WdLogNewEntry5_WdWarning(v141, v140, v142);
            *(_QWORD *)(v144 + 24) = *(unsigned int *)(v137 + 4 * v138);
            *(_QWORD *)(v144 + 32) = v138;
            WdLogEvent5_WdWarning(v144);
          }
          v138 = ++v136;
        }
        while ( v136 < v135 );
        v3 = v178;
      }
LABEL_43:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v189);
      ZwClose(Handle);
      v55 = *((_QWORD *)v3 + 1);
      v176 = -1;
      if ( !v55 )
      {
        v153 = WdLogNewEntry5_WdAssertion(v54, v53);
        WdLogEvent5_WdAssertion(v153);
        v55 = *((_QWORD *)v3 + 1);
      }
      if ( (int)DpiReadPnpRegistryValue(
                  *(_QWORD *)(*(_QWORD *)(v55 + 16) + 192LL),
                  L"DefaultSimulatedTarget",
                  (char *)&v176,
                  4u,
                  1u) < 0
        || (v154 = v176, v176 == -1) )
      {
        v58 = WdLogNewEntry5_WdTrace(v57, v56);
        v61 = *((_QWORD *)v3 + 1);
        v62 = v58;
        if ( !v61 )
        {
          v167 = WdLogNewEntry5_WdAssertion(0LL, v59);
          WdLogEvent5_WdAssertion(v167);
          v61 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v62 + 24) = *(_QWORD *)(v61 + 16);
      }
      else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, v176) )
      {
        v159 = WdLogNewEntry5_WdTrace(v156, v155);
        *(_QWORD *)(v159 + 24) = v154;
        v160 = *((_QWORD *)v3 + 1);
        if ( !v160 )
        {
          v161 = WdLogNewEntry5_WdAssertion(v158, v59);
          WdLogEvent5_WdAssertion(v161);
          v160 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v159 + 32) = *(_QWORD *)(v160 + 16);
        *((_DWORD *)v3 + 123) = v154;
      }
      else
      {
        v164 = WdLogNewEntry5_WdError(v156, v155, v157);
        *(_QWORD *)(v164 + 24) = v154;
        v165 = *((_QWORD *)v3 + 1);
        if ( !v165 )
        {
          v166 = WdLogNewEntry5_WdAssertion(v163, v162);
          WdLogEvent5_WdAssertion(v166);
          v165 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v164 + 32) = *(_QWORD *)(v165 + 16);
        WdLogEvent5_WdError(v164);
      }
      if ( v24 )
        ReferenceCounted::Release((ReferenceCounted *)(v24 + 8), v59, v60);
      LODWORD(v23) = VIDPN_MGR::_InitializeDmmClientInterfaces(v3);
      if ( (int)v23 >= 0 )
      {
        v63 = *((_QWORD *)v3 + 1);
        if ( v63
          || (v168 = WdLogNewEntry5_WdAssertion(v21, v20),
              WdLogEvent5_WdAssertion(v168),
              (v63 = *((_QWORD *)v3 + 1)) != 0) )
        {
          v64 = (_QWORD *)((char *)v3 + 472);
          if ( v3 != (VIDPN_MGR *)-472LL )
          {
            *v64 = 0LL;
            v65 = *(MONITOR_MGR **)(v63 + 96);
            if ( !v65 )
            {
              v169 = WdLogNewEntry5_WdError(0LL, v20, v22);
              *(_QWORD *)(v169 + 24) = *(_QWORD *)(v63 + 16);
              WdLogEvent5_WdError(v169);
              inserted = -1073741811;
LABEL_140:
              v170 = WdLogNewEntry5_WdError(v21, v20, v22);
              v172 = *((_QWORD *)v3 + 1);
              v173 = v170;
              if ( !v172 )
              {
                v174 = WdLogNewEntry5_WdAssertion(0LL, v171);
                WdLogEvent5_WdAssertion(v174);
                v172 = *((_QWORD *)v3 + 1);
              }
              *(_QWORD *)(v173 + 24) = *(_QWORD *)(v172 + 16);
              WdLogEvent5_WdError(v173);
              *((_DWORD *)v3 + 14) = inserted;
              return v3;
            }
            inserted = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
                         v65,
                         v20,
                         v22,
                         (struct HDXGMONITOREVENT__ **)v3 + 59);
LABEL_56:
            if ( inserted >= 0 )
            {
              if ( !*v64 )
              {
                v175 = WdLogNewEntry5_WdAssertion(v21, v20);
                WdLogEvent5_WdAssertion(v175);
              }
              v67 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x4E506456u, PagedPool);
              if ( v67 )
                v2 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v67, 0x8000u, 1, PagedPool, 0x12Cu);
              *((_QWORD *)v3 + 63) = v2;
              *((_DWORD *)v3 + 16) = 2;
              return v3;
            }
            goto LABEL_140;
          }
        }
        else
        {
          v64 = (_QWORD *)((char *)v3 + 472);
        }
        inserted = -1073741811;
        goto LABEL_56;
      }
      goto LABEL_68;
    }
    if ( v48 == -1073741275 )
      goto LABEL_43;
    v147 = WdLogNewEntry5_WdError(v50, v49, v51);
    v149 = *((_QWORD *)v3 + 1);
    v150 = v147;
    if ( !v149 )
    {
      v151 = WdLogNewEntry5_WdAssertion(0LL, v148);
      WdLogEvent5_WdAssertion(v151);
      v149 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v150 + 24) = *(_QWORD *)(v149 + 16);
    *(_QWORD *)(v150 + 32) = v52;
    WdLogEvent5_WdError(v150);
    v152 = Handle;
    *((_DWORD *)v3 + 14) = v52;
    ZwClose(v152);
    v91 = &v189;
    goto LABEL_78;
  }
  v103 = (_QWORD *)WdLogNewEntry5_WdError(v36, v34, v35);
  v103[3] = *(_QWORD *)(*(_QWORD *)v9 + 40LL);
  v104 = *(_QWORD *)v8;
  v105 = *(_QWORD *)(*(_QWORD *)v8 + 40LL);
  v103[4] = v105;
  v106 = *((_QWORD *)v3 + 1);
  if ( !v106 )
  {
    v107 = WdLogNewEntry5_WdAssertion(v104, v105);
    WdLogEvent5_WdAssertion(v107);
    v106 = *((_QWORD *)v3 + 1);
  }
  v103[5] = *(_QWORD *)(v106 + 16);
  WdLogEvent5_WdError(v103);
  *((_DWORD *)v3 + 14) = -1071774938;
  return v3;
}
