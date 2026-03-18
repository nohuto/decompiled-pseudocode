/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0118860
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C01160D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     DxgkRender @ 0x1C011C610 (DxgkRender.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02386DC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C4A4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C000C5C0 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C5F0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000CA30 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0p @ 0x1C0035594 (McTemplateK0p.c)
 *     TraceDxgkPatchLocationList @ 0x1C0040874 (TraceDxgkPatchLocationList.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0043F64 (McTemplateK0ppxppttqddddddddq.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C00E3150 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F5BA0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0101DA0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0110150 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C0268268 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION **a6,
        struct DXGHWQUEUE **a7)
{
  struct _D3DKMT_RENDER *v8; // r14
  int v9; // eax
  __int64 v10; // rax
  __int64 v12; // rax
  D3DKMT_RENDERFLAGS Flags; // eax
  unsigned __int8 v14; // r12
  int v15; // ecx
  COREDEVICEACCESS *v16; // r13
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  char *pNewCommandBuffer; // rcx
  const GUID *v22; // r8
  unsigned __int64 v23; // rbx
  __int64 v24; // r10
  char v25; // r15
  bool v26; // zf
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // r14d
  int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rcx
  int v38; // eax
  PERESOURCE *Global; // rax
  struct DXGDEVICE *v40; // r15
  __int64 v41; // rcx
  unsigned int v42; // r14d
  struct ADAPTER_RENDER *v43; // r12
  __int64 v44; // rdx
  struct DXGGLOBAL *v45; // rax
  int SyncObject; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  DXGDEVICESYNCOBJECT *v50; // rcx
  __int64 v51; // r14
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r15
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  D3DKMT_RENDERFLAGS v59; // eax
  const EVENT_DESCRIPTOR *v60; // rdx
  __int64 v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  PSLIST_ENTRY v66; // r13
  __int64 v67; // rdx
  int v68; // r8d
  unsigned int v69; // eax
  __int64 v70; // rcx
  int v71; // eax
  int v72; // edx
  bool v73; // al
  __int64 v74; // r8
  int v75; // ecx
  int v76; // edx
  int v77; // eax
  struct _D3DKMT_RENDER *v78; // r14
  D3DKMT_RENDERFLAGS v79; // eax
  unsigned __int64 *v80; // rdx
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r11
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rcx
  const GUID *v90; // r8
  __int64 v91; // rcx
  struct DXGADAPTER *v92; // rsi
  __int64 v93; // rdx
  struct DXGGLOBAL *v94; // rax
  size_t v95; // r8
  void *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // r15
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rsi
  __int64 *v106; // rax
  __int64 *v107; // r14
  __int64 v108; // r12
  __int64 v109; // r14
  __int64 v110; // rax
  const GUID *v111; // r8
  int v112; // r9d
  struct DXGADAPTER *v113; // rsi
  struct DXGGLOBAL *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rcx
  struct _KTHREAD *v118; // rsi
  __int64 v119; // rax
  int v120; // r14d
  __int64 v121; // rax
  int v122; // r15d
  __int64 v123; // rsi
  __int64 v124; // rdx
  __int64 v125; // rcx
  _QWORD *v126; // rax
  unsigned __int8 v127; // cl
  _QWORD *v128; // rax
  __int64 v129; // r15
  _QWORD *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  const GUID *v138; // r8
  __int64 v139; // rax
  __int64 v140; // r12
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v149; // r14
  __int64 v150; // r15
  __int64 v151; // rax
  __int64 v152; // rcx
  const GUID *v153; // r8
  int v154; // r9d
  __int64 v155; // rdx
  __int64 v156; // rcx
  int v157; // r12d
  __int64 v158; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v160; // rax
  int CurrentProcessSessionId; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v163; // rsi
  __int64 v164; // rdx
  __int64 v165; // rcx
  _QWORD *v166; // rax
  unsigned __int8 v167; // cl
  _QWORD *v168; // rax
  __int64 v169; // r12
  _QWORD *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // rcx
  __int64 v174; // rcx
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  bool v178; // r14
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGHWQUEUE **v180; // r12
  int v181; // eax
  __int64 v182; // r14
  UINT AllocationCount; // r15d
  int v184; // eax
  int v185; // r12d
  __int64 v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rax
  int v189; // eax
  unsigned int v190; // ecx
  int v191; // eax
  unsigned int v192; // ecx
  int v193; // eax
  _QWORD *v194; // rcx
  int v195; // r12d
  struct DXGCONTEXT **v196; // r14
  struct DXGCONTEXT *v197; // rcx
  __int64 v198; // rax
  struct DXGHWQUEUE **v199; // rax
  int v200; // eax
  __int64 v201; // rcx
  int v202; // r15d
  PSLIST_ENTRY v203; // r15
  __int64 v204; // r14
  union _SLIST_HEADER *v205; // rcx
  ULONGLONG PresentHistoryToken; // rax
  int v207; // eax
  __int64 v208; // rdx
  __int64 v209; // r8
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 v212; // rdx
  _QWORD *v213; // rax
  __int64 v214; // rax
  char v215; // bl
  __int64 v216; // rbx
  struct DXGCONTEXT **v217; // r12
  int v218; // r13d
  __int64 v219; // rbx
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 v222; // rax
  __int64 v223; // rbx
  __int64 v224; // rbx
  int v225; // [rsp+20h] [rbp-100h]
  __int64 v226; // [rsp+30h] [rbp-F0h]
  __int64 v227; // [rsp+38h] [rbp-E8h]
  char v228; // [rsp+A0h] [rbp-80h]
  char v229; // [rsp+A0h] [rbp-80h]
  bool v230; // [rsp+A1h] [rbp-7Fh]
  char v231; // [rsp+A2h] [rbp-7Eh]
  signed int v232; // [rsp+A4h] [rbp-7Ch]
  __int64 v233; // [rsp+A8h] [rbp-78h] BYREF
  int v234; // [rsp+B0h] [rbp-70h]
  unsigned __int64 v235; // [rsp+B8h] [rbp-68h] BYREF
  struct _D3DKMT_RENDER *v236; // [rsp+C0h] [rbp-60h]
  __int64 v237; // [rsp+C8h] [rbp-58h]
  UINT v238; // [rsp+D0h] [rbp-50h] BYREF
  int v239; // [rsp+D4h] [rbp-4Ch]
  PSLIST_ENTRY ListEntry; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v241; // [rsp+E0h] [rbp-40h]
  struct COREDEVICEACCESS *v242; // [rsp+E8h] [rbp-38h]
  void *v243; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v244; // [rsp+F8h] [rbp-28h]
  __int64 CurrentIrql; // [rsp+100h] [rbp-20h]
  struct DXGHWQUEUE **v246; // [rsp+108h] [rbp-18h]
  _QWORD v247[2]; // [rsp+110h] [rbp-10h] BYREF
  struct _DXGKARG_RENDER Src; // [rsp+120h] [rbp+0h] BYREF
  LARGE_INTEGER v249; // [rsp+190h] [rbp+70h] BYREF
  struct DXGCONTEXT **v250; // [rsp+198h] [rbp+78h]
  char v251[8]; // [rsp+1A0h] [rbp+80h] BYREF
  char v252; // [rsp+1A8h] [rbp+88h]
  int v253; // [rsp+1B0h] [rbp+90h] BYREF
  __int64 v254; // [rsp+1B8h] [rbp+98h]
  char v255; // [rsp+1C0h] [rbp+A0h]
  int v256; // [rsp+1C8h] [rbp+A8h] BYREF
  __int64 v257; // [rsp+1D0h] [rbp+B0h]
  char v258; // [rsp+1D8h] [rbp+B8h]
  char *v259; // [rsp+1E0h] [rbp+C0h] BYREF
  UINT CommandLength; // [rsp+1E8h] [rbp+C8h]
  int v261; // [rsp+1ECh] [rbp+CCh]
  void *pDmaBuffer; // [rsp+1F0h] [rbp+D0h]
  unsigned __int64 v263; // [rsp+1F8h] [rbp+D8h]
  UINT DmaSize; // [rsp+200h] [rbp+E0h]
  int v265; // [rsp+204h] [rbp+E4h]
  void *pDmaBufferPrivateData; // [rsp+208h] [rbp+E8h]
  UINT DmaBufferPrivateDataSize; // [rsp+210h] [rbp+F0h]
  int v268; // [rsp+214h] [rbp+F4h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+218h] [rbp+F8h]
  UINT AllocationListSize; // [rsp+220h] [rbp+100h]
  UINT MultipassOffset; // [rsp+224h] [rbp+104h]
  int v272; // [rsp+230h] [rbp+110h]
  struct DXGALLOCATION **v273; // [rsp+238h] [rbp+118h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v274; // [rsp+240h] [rbp+120h]
  __int64 v275; // [rsp+248h] [rbp+128h]
  __int64 v276; // [rsp+250h] [rbp+130h]
  __int64 v277; // [rsp+258h] [rbp+138h]
  __int64 v278; // [rsp+260h] [rbp+140h]
  _BYTE v279[24]; // [rsp+268h] [rbp+148h] BYREF
  _QWORD v280[2]; // [rsp+280h] [rbp+160h] BYREF
  __int128 v281; // [rsp+290h] [rbp+170h]
  __int128 v282; // [rsp+2A0h] [rbp+180h]
  __int128 v283; // [rsp+2B0h] [rbp+190h]
  __int128 v284; // [rsp+2C0h] [rbp+1A0h]
  _QWORD v285[136]; // [rsp+2D0h] [rbp+1B0h] BYREF
  char v286[8]; // [rsp+710h] [rbp+5F0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+718h] [rbp+5F8h] BYREF
  char v288[8]; // [rsp+748h] [rbp+628h] BYREF
  struct _KAPC_STATE v289; // [rsp+750h] [rbp+630h] BYREF

  v8 = a2;
  v250 = a5;
  v273 = a6;
  v9 = *((_DWORD *)this + 103);
  v274 = a4;
  v242 = a3;
  v236 = a2;
  v246 = a7;
  if ( (v9 & 0x10) != 0 && !a7 )
  {
    v10 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v10 + 24) = 470LL;
    WdLogEvent5_WdError(v10);
    return 3221225473LL;
  }
  if ( (v9 & 8) != 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(a7, a2, a3);
    *(_QWORD *)(v12 + 24) = 477LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
  v235 = 0LL;
  Flags = a2->Flags;
  v14 = 1;
  v15 = (*(_BYTE *)&Flags & 8) << 12;
  v232 = a2->BroadcastContextCount + 1;
  v228 = 1;
  v239 = v15 | 0x100;
  v16 = a3;
  v235 = v15 | 0x100u;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v239 = v15 | 0x1A0;
    LODWORD(v235) = v15 | 0x1A0;
    v17 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1, a3);
    v19 = v17;
    if ( v17 < 0 )
    {
      v20 = WdLogNewEntry5_WdEvent(v18);
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = v19;
      WdLogEvent5_WdEvent(v20);
      return (unsigned int)v19;
    }
  }
  if ( (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v8->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  Src.pCommand = &pNewCommandBuffer[v8->CommandOffset];
  Src.CommandLength = v8->CommandLength;
  memset(&Src.CommandLength + 1, 0, 0x64uLL);
  v23 = v235;
  v24 = 0LL;
  v25 = 1;
  v243 = 0LL;
  v231 = 0;
  v230 = 1;
  while ( 1 )
  {
    v26 = *((_BYTE *)this + 449) == 0;
    v27 = v24;
    v233 = v24;
    if ( !v26 )
      goto LABEL_45;
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
    v29 = 3;
    if ( *((_DWORD *)this + 18) > 3u )
      v29 = *((_DWORD *)this + 18);
    if ( *((_QWORD *)this + 29) )
      goto LABEL_31;
    v30 = *((_DWORD *)this + 26);
    LODWORD(v227) = v30;
    LODWORD(v226) = v29;
    LOBYTE(v225) = 1;
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, int, _DWORD, __int64, __int64, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 432LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
            *((unsigned int *)this + 102),
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            this,
            v225,
            *((_DWORD *)this + 50),
            v226,
            v227,
            *((_DWORD *)this + 51),
            *((_DWORD *)this + 52));
    *((_QWORD *)this + 29) = v31;
    if ( v31 )
    {
      LODWORD(v36) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 544LL)
                                                                    + 8LL)
                                                        + 440LL))(v31);
      if ( (int)v36 >= 0 )
      {
        v38 = *((_DWORD *)this + 103);
        *((_DWORD *)this + 53) = v29;
        *((_DWORD *)this + 54) = v30;
        if ( (v38 & 0x10) == 0 )
          goto LABEL_31;
        v280[0] = 5LL;
        *((_QWORD *)this + 31) = 0LL;
        v281 = 0LL;
        v282 = 0LL;
        v283 = 0LL;
        v284 = 0LL;
        v280[1] = 0LL;
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v37, v28);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v251, Global);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v251);
        v40 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
        v41 = *((unsigned int *)this + 102);
        v272 = 4;
        v42 = 1 << v41;
        v43 = (struct ADAPTER_RENDER *)*((_QWORD *)v40 + 2);
        v45 = DXGGLOBAL::GetGlobal(v41, v44);
        SyncObject = DXGGLOBAL::CreateSyncObject(
                       (__int64)v45,
                       v43,
                       v40,
                       v42,
                       (__int64)v280,
                       4u,
                       0,
                       0LL,
                       0LL,
                       (struct DXGDEVICESYNCOBJECT **)this + 30,
                       0LL,
                       0LL);
        v36 = SyncObject;
        if ( SyncObject >= 0 )
        {
          if ( v252 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v251);
          v14 = v228;
LABEL_31:
          v51 = *((_QWORD *)this + 29);
          goto LABEL_32;
        }
        v49 = WdLogNewEntry5_WdWarning(v47, v28, v48);
        *(_QWORD *)(v49 + 24) = this;
        *(_QWORD *)(v49 + 32) = v36;
        WdLogEvent5_WdWarning(v49);
        if ( v252 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v251);
        v14 = v228;
      }
    }
    else
    {
      v34 = WdLogNewEntry5_WdWarning(v32, 0LL, v33);
      *(_QWORD *)(v34 + 24) = this;
      *(_QWORD *)(v34 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v34);
      LODWORD(v36) = -1073741801;
    }
    v50 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v50 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v50);
      *((_QWORD *)this + 30) = 0LL;
    }
    v51 = *((_QWORD *)this + 29);
    if ( v51 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                     + 448LL))(*((_QWORD *)this + 29));
      *((_QWORD *)this + 29) = 0LL;
      v51 = 0LL;
    }
    if ( (int)v36 < 0 )
    {
      v57 = WdLogNewEntry5_WdWarning(v50, v28, v35);
      *(_QWORD *)(v57 + 24) = this;
      WdLogEvent5_WdWarning(v57);
      goto LABEL_43;
    }
LABEL_32:
    LOBYTE(v28) = 1;
    v52 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 544LL)
                                                                                     + 8LL)
                                                                         + 488LL))(
            v51,
            v28,
            0LL,
            &v233);
    v54 = v52;
    if ( v52 != -1071775486 )
    {
      if ( v52 < 0 )
      {
        v58 = WdLogNewEntry5_WdEvent(v53);
        *(_QWORD *)(v58 + 24) = this;
        *(_QWORD *)(v58 + 32) = v54;
        WdLogEvent5_WdEvent(v58);
      }
LABEL_42:
      LODWORD(v36) = v54;
      goto LABEL_43;
    }
    if ( !v16 )
      goto LABEL_42;
    COREDEVICEACCESS::Release(v16);
    LODWORD(v54) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                             + 8LL)
                                                                                 + 488LL))(
                     v51,
                     0LL,
                     0LL,
                     &v233);
    v55 = COREDEVICEACCESS::AcquireShared((__int64)v16, 0xFFFFFFFF, 0LL);
    v36 = v55;
    if ( v55 >= 0 )
      goto LABEL_42;
    v56 = WdLogNewEntry5_WdEvent(v53);
    *(_QWORD *)(v56 + 24) = this;
    *(_QWORD *)(v56 + 32) = v36;
    WdLogEvent5_WdEvent(v56);
    COREDEVICEACCESS::AcquireSharedUncheck((__int64)v16);
LABEL_43:
    if ( (int)v36 < 0 )
    {
      v211 = WdLogNewEntry5_WdEvent(v53);
      *(_QWORD *)(v211 + 32) = (int)v36;
      *(_QWORD *)(v211 + 24) = this;
      WdLogEvent5_WdEvent(v211);
      goto LABEL_278;
    }
    v27 = v233;
    HIDWORD(v24) = 0;
    v25 = v230;
    v8 = v236;
LABEL_45:
    if ( !bTracingEnabled )
      goto LABEL_55;
    v59 = v8->Flags;
    if ( (*(_BYTE *)&v59 & 0x10) != 0 )
    {
      v277 = 0LL;
      v278 = 0LL;
      v275 = 0LL;
      v276 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        HIDWORD(v227) = HIDWORD(v24);
        HIDWORD(v226) = HIDWORD(v24);
        McTemplateK0ppxppttqddddddddq(0LL, 0LL, v22, 0LL, v27);
      }
    }
    else
    {
      if ( (*(_BYTE *)&v59 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_55;
        v60 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_55;
        v60 = &EventRender;
      }
      McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, v60, v22, v27);
    }
LABEL_55:
    v238 = 0;
    v249.QuadPart = 0LL;
    v235 = 0LL;
    v247[0] = 0LL;
    v61 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v241 = v61;
    ++*(_DWORD *)(v61 + 1140);
    v66 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v61 + 1120));
    if ( !v66 )
    {
      ++*(_DWORD *)(v61 + 1144);
      v66 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v61 + 1168))(
                            *(unsigned int *)(v61 + 1156),
                            *(unsigned int *)(v61 + 1164),
                            *(unsigned int *)(v61 + 1160),
                            v61 + 1120);
    }
    ListEntry = v66;
    if ( !v66 )
    {
      v222 = WdLogNewEntry5_WdLowResource(v63, v62, v64, v65);
      *(_QWORD *)(v222 + 24) = 589LL;
      WdLogEvent5_WdLowResource(v222);
      LODWORD(v36) = -1073741801;
LABEL_277:
      CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
LABEL_278:
      v215 = 0;
LABEL_279:
      v218 = v232;
      goto LABEL_280;
    }
    v67 = *(_QWORD *)(v61 + 16);
    if ( *(int *)(v67 + 2184) < 0x2000 )
      v68 = 1;
    else
      v68 = *(_DWORD *)(v67 + 256);
    if ( *(int *)(v67 + 2184) >= 0x2000 || *(_BYTE *)(v67 + 2484) )
      v69 = *(_DWORD *)(v67 + 2392) * ((v68 << 6) + ((8 * v68 + 191) & 0xFFFFFFF8)) + 8 * (v68 + 71);
    else
      v69 = 1296;
    memset(v66, 0, v69);
    v70 = *(_QWORD *)(v241 + 16);
    v71 = *(_DWORD *)(v70 + 2184);
    if ( v71 < 0x2000 )
      v72 = 1;
    else
      v72 = *(_DWORD *)(v70 + 256);
    v73 = v71 >= 0x2000 || *(_BYTE *)(v70 + 2484);
    v74 = *(unsigned int *)(v70 + 2392);
    BYTE4(v66[22].Next) = v73;
    if ( v73 )
    {
      v75 = 8 * v72;
      LODWORD(v66[35].Next) = v72;
      v76 = v72 << 6;
      *((_DWORD *)&v66[34].Next + 3) = v74;
      HIDWORD(v66[35].Next) = v74 * (v76 + ((v75 + 191) & 0xFFFFFFF8)) + 16;
      v77 = v74 * (v76 + ((v75 + 191) & 0xFFFFFFF8)) + 568;
      *((_DWORD *)&v66[33].Next + 2) = v77;
      *((_DWORD *)&v66[33].Next + 3) = v75 + v77;
    }
    if ( (*((_DWORD *)this + 56) & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2480LL) & 2) != 0 )
    {
      v78 = v236;
      v79 = v236->Flags;
      if ( (*(_BYTE *)&v79 & 0x20) == 0 )
      {
        LODWORD(v36) = 0;
        v229 = 0;
        goto LABEL_86;
      }
    }
    else
    {
      v78 = v236;
      v79 = v236->Flags;
    }
    v80 = &v235;
    if ( !*((_BYTE *)this + 446) )
      v80 = 0LL;
    if ( (*(_BYTE *)&v79 & 0x20) != 0 )
      pNewAllocationList = v78->pNewAllocationList;
    else
      pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
    v82 = (*(__int64 (__fastcall **)(__int64, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, signed int, UINT *, LARGE_INTEGER *, unsigned __int64 *, _QWORD *, struct _SLIST_ENTRY **, struct DXGALLOCATION **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 568LL))(
            v233,
            pNewAllocationList,
            v78->AllocationCount,
            v14,
            v232,
            &v238,
            &v249,
            v80,
            v247,
            &v66[12].Next + 1,
            v273);
    v36 = v82;
    if ( v82 < 0 )
    {
      v221 = WdLogNewEntry5_WdWarning(v84, v83, v74);
      *(_QWORD *)(v221 + 24) = this;
      *(_QWORD *)(v221 + 32) = v36;
      WdLogEvent5_WdWarning(v221);
      goto LABEL_277;
    }
    v229 = 1;
LABEL_86:
    (*(void (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 544LL)
                                                                  + 8LL)
                                                      + 504LL))(
      v233,
      &v243,
      v74);
    Src.pDmaBuffer = v243;
    Src.DmaSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 544LL)
                                                                 + 8LL)
                                                     + 528LL))(v233);
    Src.pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                       + 8LL)
                                                                           + 560LL))(v233);
    Src.DmaBufferPrivateDataSize = *((_DWORD *)this + 52);
    if ( v231 )
    {
      v85 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v246, v235);
      v36 = v85;
      if ( v85 == -1071775743 )
      {
        v213 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v87, v86);
        v213[3] = 275LL;
        v213[4] = 40LL;
        v213[5] = this;
        v213[6] = 0LL;
        v213[7] = 0LL;
        WdLogEvent5_WdCriticalError(v213);
LABEL_263:
        v214 = WdLogNewEntry5_WdWarning(v87, v86, v88);
        *(_QWORD *)(v214 + 24) = this;
        *(_QWORD *)(v214 + 32) = v36;
        goto LABEL_264;
      }
      if ( v85 < 0 )
        goto LABEL_263;
      v231 = 0;
    }
    if ( !v25 )
      goto LABEL_223;
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&v78->Flags & 0x20) != 0 )
    {
      Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                                  + 8LL)
                                                                                      + 552LL))(v233);
      Src.AllocationListSize = v78->AllocationCount;
      Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
      Src.PatchLocationListInSize = v78->PatchLocationCount;
      Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                                 + 544LL))(v233);
      Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 536LL))(v233);
      v91 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v92 = *(struct DXGADAPTER **)(v91 + 16);
      v94 = DXGGLOBAL::GetGlobal(v91, v93);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v94 + 1284), v92) )
      {
        memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
        v95 = *((_QWORD *)this + 14);
        v96 = (void *)*((_QWORD *)this + 16);
        Src.pCommand = (const void *)*((_QWORD *)this + 8);
        memmove(v96, Src.pPatchLocationListIn, v95);
        Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 16);
      }
    }
    else
    {
      Src.pAllocationList = 0LL;
      Src.AllocationListSize = 0;
      Src.pPatchLocationListIn = 0LL;
      Src.PatchLocationListInSize = 0;
      Src.pPatchLocationListOut = 0LL;
      Src.PatchLocationListOutSize = 0;
    }
    Src.DmaBufferSegmentId = v238;
    Src.DmaBufferPhysicalAddress = v249;
    if ( (*(_DWORD *)&v78->Flags & 0x20) != 0 )
    {
      if ( *((_BYTE *)this + 446) )
      {
        v259 = (char *)v78->pNewCommandBuffer + v78->CommandOffset;
        CommandLength = v78->CommandLength;
        v261 = 0;
        v265 = 0;
        v268 = 0;
        pDmaBuffer = Src.pDmaBuffer;
        v263 = v235;
        DmaSize = Src.DmaSize;
        pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
        DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
        pAllocationList = Src.pAllocationList;
        AllocationListSize = Src.AllocationListSize;
        MultipassOffset = Src.MultipassOffset;
        v244 = *((_QWORD *)this + 23);
        v139 = *((_QWORD *)this + 2);
        v256 = -1;
        v140 = *(_QWORD *)(v139 + 16);
        v237 = v140;
        v257 = 0LL;
        if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
        {
          v258 = 1;
          v256 = 5066;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v89, &EventProfilerEnter, v90, 5066);
        }
        else
        {
          v258 = 0;
        }
        DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v256, 5066LL);
        CurrentProcess = PsGetCurrentProcess(v142, v141);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        v147 = ProcessDxgProcess;
        if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
        {
          ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v149 = ThreadProperty;
          if ( ThreadProperty )
          {
            ObfDereferenceObject(ThreadProperty);
            v147 = *v149;
          }
        }
        v150 = v147 + 112;
        if ( !v147 )
          v150 = 0LL;
        v234 = 0;
        if ( v150 && *(struct _KTHREAD **)(v150 + 8) == KeGetCurrentThread() )
        {
          v151 = WdLogNewEntry5_WdAssertion(v146, v145);
          *(_QWORD *)(v151 + 24) = 1448LL;
          WdLogEvent5_WdAssertion(v151);
        }
        if ( v147 )
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v150, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v154 = *(_DWORD *)(v150 + 16);
              if ( v154 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v152, &EventBlockThread, v153, v154);
            }
            ExAcquirePushLockExclusiveEx(v150, 0LL);
          }
          *(_QWORD *)(v150 + 8) = KeGetCurrentThread();
          v234 = 2;
        }
        DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v140 + 16), 1);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v140 + 16) + 4248LL));
        v157 = 0;
        CurrentIrql = KeGetCurrentIrql();
        v158 = 0LL;
        if ( (unsigned __int8)CurrentIrql < 2u )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v160 = WdLogNewEntry5_WdAssertion(v156, v155);
            *(_QWORD *)(v160 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v160);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v156, v155);
          if ( CurrentProcessSessionId
            && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
            && !IsThreadCrossSessionAttached()
            && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
            && *(_QWORD *)ThreadWin32Thread )
          {
            v158 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
            if ( v158 )
              v157 = *(_DWORD *)(v158 + 136);
          }
          else
          {
            v158 = 0LL;
          }
        }
        v163 = v237;
        DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
          (DXGVALIDATIONPROCESSATTACH *)v288,
          *(struct DXGADAPTER **)(v237 + 16));
        v36 = (*(int (__fastcall **)(__int64, char **))(*(_QWORD *)(v163 + 16) + 792LL))(v244, &v259);
        if ( v288[0] )
          KeUnstackDetachProcess(&v289);
        if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
        {
          v166 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v165, v164);
          v166[5] = v237;
          v166[6] = (unsigned __int8)CurrentIrql;
          v166[3] = 275LL;
          v166[4] = 16LL;
          v167 = KeGetCurrentIrql();
          v166[7] = v167;
          WdLogEvent5_WdCriticalError(v166);
        }
        if ( v158 && *(_DWORD *)(v158 + 136) != v157 )
        {
          v168 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v165, v164);
          v168[3] = 275LL;
          v168[4] = 38LL;
          v168[5] = *(int *)(v158 + 136);
          v168[6] = v157;
          v168[7] = 0LL;
          WdLogEvent5_WdCriticalError(v168);
        }
        v169 = v237;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v237 + 16) + 4248LL));
        v170 = (_QWORD *)WdLogNewEntry5_WdTrace(v165, v164);
        v173 = v244;
        v170[3] = v36;
        v170[4] = v173;
        v170[5] = pDmaBuffer;
        v170[6] = DmaSize;
        v174 = (__int64)pAllocationList;
        v170[7] = pAllocationList;
        if ( (_DWORD)v36 != -1073741592 )
        {
          if ( (unsigned int)(v36 + 1073741816) > 0xF
            || (v174 = 32801LL, !_bittest((const int *)&v174, v36 + 1073741816)) )
          {
            if ( (_DWORD)v36 != -1071775743 && (_DWORD)v36 != -1071775232 && (_DWORD)v36 )
            {
              v175 = WdLogNewEntry5_WdError(v174, v171, v172);
              *(_QWORD *)(v175 + 24) = v36;
              WdLogEvent5_WdError(v175);
            }
          }
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v169 + 16));
        if ( v234 == 2 )
        {
          *(_QWORD *)(v150 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v150, 0LL);
          KeLeaveCriticalRegion();
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v256, v176);
        if ( v258 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v177, &EventProfilerExit, v138, v256);
        Src.pDmaBuffer = pDmaBuffer;
        Src.pDmaBufferPrivateData = pDmaBufferPrivateData;
        Src.MultipassOffset = MultipassOffset;
        if ( (*((_DWORD *)this + 103) & 0x10) != 0 )
        {
          Src.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
          Src.DmaSize = DmaSize;
        }
      }
      else
      {
        LODWORD(v36) = ADAPTER_RENDER::DdiRenderKm(
                         *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                         *((void **)this + 23),
                         (const GUID *)&Src);
      }
      goto LABEL_212;
    }
    if ( (*((_DWORD *)this + 56) & 1) == 0
      || (v89 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2480LL), (v89 & 4) == 0) )
    {
      CurrentIrql = *((_QWORD *)this + 23);
      v97 = *((_QWORD *)this + 2);
      v253 = -1;
      v254 = 0LL;
      v98 = *(_QWORD *)(v97 + 16);
      v237 = v98;
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
      {
        v255 = 1;
        v253 = 5030;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v89, &EventProfilerEnter, v90, 5030);
      }
      else
      {
        v255 = 0;
      }
      DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v253, 5030LL);
      v101 = PsGetCurrentProcess(v100, v99);
      v102 = PsGetProcessDxgProcess(v101);
      v105 = v102;
      if ( !v102 || (*(_BYTE *)(v102 + 299) & 4) != 0 )
      {
        v106 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v107 = v106;
        if ( v106 )
        {
          ObfDereferenceObject(v106);
          v105 = *v107;
        }
      }
      v108 = v105 + 112;
      v109 = 0LL;
      if ( !v105 )
        v108 = 0LL;
      v234 = 0;
      if ( v108 && *(struct _KTHREAD **)(v108 + 8) == KeGetCurrentThread() )
      {
        v110 = WdLogNewEntry5_WdAssertion(v104, v103);
        *(_QWORD *)(v110 + 24) = 1448LL;
        WdLogEvent5_WdAssertion(v110);
      }
      if ( v105 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v108, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v112 = *(_DWORD *)(v108 + 16);
            if ( v112 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v104, &EventBlockThread, v111, v112);
          }
          ExAcquirePushLockExclusiveEx(v108, 0LL);
        }
        *(_QWORD *)(v108 + 8) = KeGetCurrentThread();
        v234 = 2;
      }
      v113 = *(struct DXGADAPTER **)(v98 + 16);
      v114 = DXGGLOBAL::GetGlobal(v104, v103);
      if ( *((_BYTE *)v114 + 1289)
        && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v114 + 1284), v113) )
      {
        LODWORD(v36) = -1073741637;
LABEL_152:
        if ( v234 == 2 )
        {
          *(_QWORD *)(v108 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v108, 0LL);
          KeLeaveCriticalRegion();
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v253, v115);
        if ( v255 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v137, &EventProfilerExit, v138, v253);
LABEL_212:
        if ( (int)(v36 + 0x80000000) < 0 || (_DWORD)v36 == -1071775743 )
          goto LABEL_214;
        v214 = WdLogNewEntry5_WdWarning(0x80000000LL, v136, v138);
        *(_QWORD *)(v214 + 24) = this;
        *(_QWORD *)(v214 + 32) = (int)v36;
LABEL_264:
        WdLogEvent5_WdWarning(v214);
        CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
        v215 = v229;
        goto LABEL_279;
      }
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v98 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v98 + 16) + 4248LL));
      v244 = KeGetCurrentIrql();
      if ( (unsigned __int8)v244 < 2u )
      {
        v118 = KeGetCurrentThread();
        if ( !v118 )
        {
          v119 = WdLogNewEntry5_WdAssertion(v117, v116);
          *(_QWORD *)(v119 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v119);
        }
        v120 = PsGetCurrentProcessSessionId(v117, v116);
        if ( v120
          && (unsigned int)PsGetThreadSessionId(v118) == v120
          && !IsThreadCrossSessionAttached()
          && (v121 = PsGetThreadWin32Thread(v118)) != 0
          && *(_QWORD *)v121 )
        {
          v109 = *(_QWORD *)(*(_QWORD *)v121 + 80LL);
          if ( v109 )
          {
            v122 = *(_DWORD *)(v109 + 136);
LABEL_136:
            v123 = v237;
            DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
              (DXGVALIDATIONPROCESSATTACH *)v286,
              *(struct DXGADAPTER **)(v237 + 16));
            v36 = (*(int (__fastcall **)(__int64, struct _DXGKARG_RENDER *))(*(_QWORD *)(v123 + 16) + 600LL))(
                    CurrentIrql,
                    &Src);
            if ( v286[0] )
              KeUnstackDetachProcess(&ApcState);
            if ( (_BYTE)v244 != KeGetCurrentIrql() )
            {
              v126 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v125, v124);
              v126[5] = v237;
              v126[6] = (unsigned __int8)v244;
              v126[3] = 275LL;
              v126[4] = 16LL;
              v127 = KeGetCurrentIrql();
              v126[7] = v127;
              WdLogEvent5_WdCriticalError(v126);
            }
            if ( v109 && *(_DWORD *)(v109 + 136) != v122 )
            {
              v128 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v125, v124);
              v128[3] = 275LL;
              v128[4] = 38LL;
              v128[5] = *(int *)(v109 + 136);
              v128[6] = v122;
              v128[7] = 0LL;
              WdLogEvent5_WdCriticalError(v128);
            }
            v129 = v237;
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v237 + 16) + 4248LL));
            v130 = (_QWORD *)WdLogNewEntry5_WdTrace(v125, v124);
            v133 = CurrentIrql;
            v130[3] = v36;
            v130[4] = v133;
            v130[5] = Src.pDmaBuffer;
            v130[6] = Src.DmaSize;
            v134 = (__int64)Src.pAllocationList;
            v130[7] = Src.pAllocationList;
            if ( (_DWORD)v36 )
            {
              if ( (_DWORD)v36 != -1073741674 )
              {
                if ( (unsigned int)(v36 + 1073741816) > 0x15
                  || (v134 = 2129953LL, !_bittest((const int *)&v134, v36 + 1073741816)) )
                {
                  if ( (_DWORD)v36 != -1073741592 && (_DWORD)v36 != -1071775743 && (_DWORD)v36 != -1071775232 )
                  {
                    v135 = WdLogNewEntry5_WdError(v134, v131, v132);
                    *(_QWORD *)(v135 + 24) = v36;
                    WdLogEvent5_WdError(v135);
                  }
                }
              }
            }
            DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v129 + 16));
            goto LABEL_152;
          }
        }
        else
        {
          v109 = 0LL;
        }
      }
      v122 = 0;
      goto LABEL_136;
    }
    LODWORD(v36) = 0;
LABEL_214:
    v230 = (_DWORD)v36 == -1071775743;
    v178 = v230;
    if ( (*((_DWORD *)this + 103) & 0x10) != 0 )
    {
      if ( *((_QWORD *)this + 31) )
      {
        v180 = v246;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v279,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v279);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
        v180 = v246;
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                         + 8LL)
                                                                             + 272LL))(
          *((_QWORD *)*v246 + 5),
          VidSchSyncObject,
          0LL);
        if ( v279[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v279);
      }
      ++*((_QWORD *)this + 31);
      v230 = (_DWORD)v36 == -1071775743;
      if ( !*((_BYTE *)this + 312) )
      {
        v181 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v180, v235);
        v36 = v181;
        v230 = v178;
        if ( v181 == -1071775743 )
        {
          v231 = 1;
        }
        else if ( v181 < 0 )
        {
          goto LABEL_263;
        }
      }
    }
LABEL_223:
    LODWORD(v182) = 0;
    AllocationCount = 0;
    v184 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                          + 8LL)
                                              + 560LL))(v233);
    v185 = LODWORD(Src.pDmaBufferPrivateData) - v184;
    v234 = LODWORD(Src.pDmaBuffer) - (_DWORD)v243;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                    + 512LL))(v233);
    v243 = 0LL;
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      v187 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 544LL)
                                                            + 8LL)
                                                + 544LL))(v233);
      v186 = (unsigned __int128)(((__int128)Src.pPatchLocationListOut - v187) * 0x2AAAAAAAAAAAAAABLL) >> 64;
      v182 = ((__int64)Src.pPatchLocationListOut - v187) / 24;
      AllocationCount = v236->AllocationCount;
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 0x10) != 0 )
      {
        v188 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 544LL)
                                                              + 8LL)
                                                  + 544LL))(v233);
        TraceDxgkPatchLocationList((__int64)this, v233, v182, v188);
      }
      v24 = 0LL;
    }
    v66->Next = (struct _SLIST_ENTRY *)v23;
    if ( *((_BYTE *)this + 446) )
    {
      LODWORD(v66->Next) |= 0x8000000u;
      v66[3].Next = (struct _SLIST_ENTRY *)v235;
    }
    if ( (v239 & 0x20) != 0 )
    {
      if ( v230 || (v189 = v24, v231) )
        v189 = 64;
      v22 = (const GUID *)(unsigned int)v232;
      v190 = v189 | (__int64)v66->Next & 0xFFFFFFBF;
      v191 = 2048;
      v192 = v190 & 0xFFFFFBFF;
      if ( v232 > 1 )
        v191 = 3072;
      LODWORD(v66->Next) = v191 | v192;
      v186 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v186 + 1728) != *(_QWORD *)(*(_QWORD *)(v186 + 16) + 16LL) )
        *((_DWORD *)&v66[7].Next + 3) = v24;
    }
    else
    {
      v22 = (const GUID *)(unsigned int)v232;
    }
    *((_QWORD *)&v66->Next + 1) = v233;
    *((_DWORD *)&v66[3].Next + 3) = v234;
    *((_DWORD *)&v66[3].Next + 2) = v24;
    HIDWORD(v66[4].Next) = AllocationCount;
    LODWORD(v66[4].Next) = v24;
    *((_DWORD *)&v66[4].Next + 3) = v182;
    *((_DWORD *)&v66[4].Next + 2) = v24;
    HIDWORD(v66[5].Next) = v185;
    LODWORD(v66[5].Next) = v24;
    if ( v247[0] )
    {
      v193 = 1;
      v194 = v247;
    }
    else
    {
      v193 = v24;
      v194 = (_QWORD *)v24;
    }
    *((_QWORD *)&v66[21].Next + 1) = v194;
    v195 = v24;
    LODWORD(v66[22].Next) = v193;
    v234 = v24;
    if ( (int)v22 > 0 )
      break;
LABEL_250:
    v203 = ListEntry;
    v14 = 0;
    v233 = v24;
    v228 = 0;
    if ( ListEntry )
    {
      v204 = v241 + 1120;
      v205 = (union _SLIST_HEADER *)(v241 + 1120);
      ++*(_DWORD *)(v241 + 1148);
      if ( ExQueryDepthSList(v205) < *(_WORD *)(v204 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v204, ListEntry);
      }
      else
      {
        ++*(_DWORD *)(v204 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v204 + 56))(v203, v204);
      }
      v24 = 0LL;
    }
    v25 = v230;
    v16 = v242;
    if ( !v231 && !v230 )
    {
      if ( (*(_DWORD *)&v236->Flags & 0x10) != 0 )
      {
        memset(v285, 0, 0x438uLL);
        PresentHistoryToken = v236->PresentHistoryToken;
        LODWORD(v285[0]) = 4;
        v285[2] = PresentHistoryToken;
        v207 = SubmitPresentHistoryToken(
                 v285,
                 (__int64)v242,
                 (__int64)v274,
                 0LL,
                 0,
                 0LL,
                 0LL,
                 0LL,
                 (__int64)this,
                 0LL,
                 0xFFFFFFFF,
                 0LL);
        v36 = v207;
        if ( (int)(v207 + 0x80000000) >= 0 && v207 != -1073741130 )
        {
          v210 = WdLogNewEntry5_WdWarning(0x80000000LL, v208, v209);
          *(_QWORD *)(v210 + 24) = this;
          *(_QWORD *)(v210 + 32) = v36;
          WdLogEvent5_WdWarning(v210);
          LODWORD(v36) = 0;
        }
      }
      return (unsigned int)v36;
    }
    v8 = v236;
  }
  v196 = v250;
  while ( 1 )
  {
    v197 = *v196;
    if ( *((struct _KTHREAD **)*v196 + 58) != KeGetCurrentThread() )
    {
      v198 = WdLogNewEntry5_WdAssertion(v197, v186);
      *(_QWORD *)(v198 + 24) = 913LL;
      WdLogEvent5_WdAssertion(v198);
      v197 = *v196;
      LODWORD(v24) = 0;
    }
    if ( (*((_DWORD *)v197 + 103) & 0x10) != 0 )
    {
      *((_QWORD *)&v66[30].Next + 1) = *((_QWORD *)this + 31);
      LODWORD(v66[31].Next) = v24;
      v66[32].Next = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 30) + 64LL);
      v199 = v246;
      *((_QWORD *)&v66[31].Next + 1) = *(_QWORD *)(*((_QWORD *)this + 30) + 48LL);
      v200 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 520LL)
                                                                         + 8LL)
                                                             + 432LL))(
               *((_QWORD *)*v199 + 5),
               v66);
    }
    else
    {
      v200 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 520LL)
                                                                         + 8LL)
                                                             + 424LL))(
               *((_QWORD *)v197 + 34),
               v66);
    }
    v202 = v200;
    if ( v200 < 0 )
      break;
    LODWORD(v66->Next) &= ~0x800u;
    ++v195;
    ++v196;
    v234 = v195;
    v24 = 0LL;
    if ( v195 >= v232 )
      goto LABEL_250;
  }
  if ( (*((_DWORD *)this + 103) & 0x10) == 0 )
  {
    v216 = v195;
    if ( v195 >= 0 )
    {
      v217 = v250;
      do
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 520LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)v217[v216--] + 34),
          0LL);
      while ( v216 >= 0 );
      v195 = v234;
    }
  }
  v218 = v232;
  if ( v195 < v232 )
  {
    v219 = (unsigned int)(v232 - v195);
    do
    {
      LOBYTE(v186) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 544LL)
                                                           + 8LL)
                                               + 576LL))(
        v233,
        v186);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                          + 8LL)
                                              + 496LL))(
        v233,
        0LL);
      --v219;
    }
    while ( v219 );
  }
  v215 = 0;
  v233 = 0LL;
  v220 = WdLogNewEntry5_WdWarning(v201, v186, v22);
  *(_QWORD *)(v220 + 32) = v202;
  *(_QWORD *)(v220 + 24) = this;
  WdLogEvent5_WdWarning(v220);
  CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
LABEL_280:
  if ( !v233 )
    return (unsigned int)v36;
  if ( v243 )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 512LL))();
  if ( v215 )
  {
    if ( v218 <= 0 )
      return (unsigned int)v36;
    v223 = (unsigned int)v218;
    do
    {
      LOBYTE(v212) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 544LL)
                                                           + 8LL)
                                               + 576LL))(
        v233,
        v212);
      --v223;
    }
    while ( v223 );
  }
  if ( v218 > 0 )
  {
    v224 = (unsigned int)v218;
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                          + 8LL)
                                              + 496LL))(
        v233,
        0LL);
      --v224;
    }
    while ( v224 );
  }
  return (unsigned int)v36;
}
