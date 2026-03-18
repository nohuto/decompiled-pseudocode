/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0115D80
 * Callers:
 *     DxgkRender @ 0x1C00EAB30 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C0115420 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0012DE4 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C0012E10 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0021FE0 (McTemplateK0ppxppttqddddddddq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0p @ 0x1C002FD94 (McTemplateK0p.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0035970 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     TraceDxgkPatchLocationList @ 0x1C003A4A4 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C003D57C (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00DDED4 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA9E0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C0114974 (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C012CB5C (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C0233D38 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
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
  struct _D3DKMT_RENDER *v8; // r12
  int v9; // eax
  __int64 v10; // rax
  __int64 v12; // rax
  D3DKMT_RENDERFLAGS Flags; // eax
  int v14; // ecx
  ULONG v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  char *pNewCommandBuffer; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rbx
  struct _VIDMM_DMA_BUFFER *v24; // r10
  char v25; // r13
  bool v26; // zf
  struct _VIDMM_DMA_BUFFER *v27; // r9
  __int64 v28; // rdx
  int v29; // r14d
  int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rcx
  PERESOURCE *Global; // rax
  struct DXGDEVICE *v40; // r15
  __int64 v41; // rcx
  unsigned int v42; // r14d
  struct ADAPTER_RENDER *v43; // r12
  struct DXGGLOBAL *v44; // rax
  int SyncObject; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  DXGDEVICESYNCOBJECT *v49; // rcx
  __int64 v50; // r14
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r15
  COREDEVICEACCESS *v55; // rsi
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  D3DKMT_RENDERFLAGS v60; // eax
  const EVENT_DESCRIPTOR *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r15
  __int64 v64; // rcx
  PSLIST_ENTRY v65; // r14
  __int64 v66; // rax
  int v67; // ecx
  int v68; // edx
  unsigned int v70; // eax
  __int64 v71; // rcx
  int v72; // eax
  int v73; // edx
  bool v74; // al
  __int64 v75; // r8
  int v76; // ecx
  int v77; // edx
  int v78; // eax
  D3DKMT_RENDERFLAGS v79; // eax
  unsigned __int64 *v80; // r15
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  __int64 v82; // r13
  struct DXGPROCESS *Current; // rax
  char *v84; // rsi
  __int64 v85; // rcx
  const GUID *v86; // r8
  int v87; // r9d
  __int64 v88; // rdx
  __int64 v89; // rcx
  char *v90; // rcx
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rcx
  const GUID *v96; // r8
  __int64 v97; // rcx
  struct DXGADAPTER *v98; // rsi
  struct DXGGLOBAL *v99; // rax
  size_t v100; // r8
  void *v101; // rcx
  int v102; // eax
  __int64 v103; // rdx
  const GUID *v104; // r8
  __int64 v105; // rax
  __int64 v106; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v109; // rcx
  __int64 v110; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v112; // r15
  __int64 v113; // r13
  __int64 v114; // rax
  __int64 v115; // rcx
  const GUID *v116; // r8
  int v117; // r9d
  __int64 v118; // rcx
  int v119; // r12d
  __int64 v120; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v122; // rax
  int CurrentProcessSessionId; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v125; // rsi
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  _QWORD *v130; // rax
  unsigned __int8 v131; // cl
  _QWORD *v132; // rax
  __int64 v133; // r12
  _QWORD *v134; // rax
  struct _VIDMM_DMA_BUFFER *v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rcx
  bool v139; // r15
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGHWQUEUE **v141; // r13
  int v142; // eax
  __int64 v143; // r15
  int v144; // eax
  int v145; // r12d
  int v146; // r13d
  __int64 v147; // rax
  __int64 v148; // rax
  int v149; // eax
  int v150; // r9d
  unsigned int v151; // ecx
  int v152; // eax
  unsigned int v153; // ecx
  int v154; // eax
  struct _VIDMM_DMA_BUFFER *v155; // rcx
  int v156; // r13d
  struct DXGCONTEXT **v157; // r15
  struct DXGCONTEXT *v158; // rcx
  __int64 v159; // rax
  struct DXGHWQUEUE **v160; // rax
  int v161; // eax
  __int64 v162; // rdx
  __int64 v163; // rcx
  int v164; // r12d
  PSLIST_ENTRY v165; // r15
  __int64 v166; // r14
  union _SLIST_HEADER *v167; // rcx
  UINT64 PresentHistoryToken; // rax
  int v169; // eax
  __int64 v170; // rdx
  __int64 v171; // r8
  __int64 v172; // rax
  _QWORD *v173; // rax
  __int64 v174; // rax
  char v175; // bl
  __int64 v176; // rbx
  struct DXGCONTEXT **v177; // r13
  int v178; // r14d
  __int64 v179; // rbx
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rbx
  __int64 v185; // rbx
  int v186; // [rsp+20h] [rbp-100h]
  struct DXGK_PRESENT_PARAMS *v187; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v188; // [rsp+38h] [rbp-E8h]
  bool v189; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v190; // [rsp+A1h] [rbp-7Fh]
  char v191; // [rsp+A1h] [rbp-7Fh]
  char v192; // [rsp+A2h] [rbp-7Eh]
  struct _VIDMM_DMA_BUFFER *v193; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int AllocationCount; // [rsp+B0h] [rbp-70h]
  int v195; // [rsp+B4h] [rbp-6Ch]
  struct _D3DKMT_RENDER *v196; // [rsp+B8h] [rbp-68h]
  unsigned __int64 v197; // [rsp+C0h] [rbp-60h] BYREF
  UINT v198; // [rsp+C8h] [rbp-58h] BYREF
  int v199; // [rsp+CCh] [rbp-54h]
  PSLIST_ENTRY ListEntry; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v201; // [rsp+D8h] [rbp-48h]
  void *v202; // [rsp+E0h] [rbp-40h] BYREF
  struct _VIDMM_DMA_BUFFER *v203; // [rsp+E8h] [rbp-38h]
  struct DXGHWQUEUE **v204; // [rsp+F0h] [rbp-30h]
  struct DXGPROCESS *v205; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v206; // [rsp+100h] [rbp-20h]
  __int64 v207; // [rsp+108h] [rbp-18h] BYREF
  COREDEVICEACCESS *v208; // [rsp+110h] [rbp-10h]
  struct _DXGKARG_RENDER Src; // [rsp+120h] [rbp+0h] BYREF
  LARGE_INTEGER v210; // [rsp+190h] [rbp+70h] BYREF
  __int64 CurrentIrql; // [rsp+198h] [rbp+78h]
  struct DXGCONTEXT **v212; // [rsp+1A0h] [rbp+80h]
  char v213[8]; // [rsp+1A8h] [rbp+88h] BYREF
  char v214; // [rsp+1B0h] [rbp+90h]
  int v215; // [rsp+1B8h] [rbp+98h] BYREF
  __int64 v216; // [rsp+1C0h] [rbp+A0h]
  char v217; // [rsp+1C8h] [rbp+A8h]
  char *v218; // [rsp+1D0h] [rbp+B0h] BYREF
  UINT CommandLength; // [rsp+1D8h] [rbp+B8h]
  void *pDmaBuffer; // [rsp+1E0h] [rbp+C0h]
  unsigned __int64 v221; // [rsp+1E8h] [rbp+C8h]
  __int64 DmaSize; // [rsp+1F0h] [rbp+D0h]
  void *pDmaBufferPrivateData; // [rsp+1F8h] [rbp+D8h]
  __int64 DmaBufferPrivateDataSize; // [rsp+200h] [rbp+E0h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+208h] [rbp+E8h]
  UINT AllocationListSize; // [rsp+210h] [rbp+F0h]
  UINT MultipassOffset; // [rsp+214h] [rbp+F4h]
  int v228; // [rsp+220h] [rbp+100h]
  struct DXGALLOCATION **v229; // [rsp+228h] [rbp+108h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v230; // [rsp+230h] [rbp+110h]
  int v231; // [rsp+238h] [rbp+118h]
  __int64 v232; // [rsp+240h] [rbp+120h]
  __int64 v233; // [rsp+248h] [rbp+128h]
  __int64 v234; // [rsp+250h] [rbp+130h]
  __int64 v235; // [rsp+258h] [rbp+138h]
  _BYTE v236[16]; // [rsp+260h] [rbp+140h] BYREF
  _QWORD v237[10]; // [rsp+270h] [rbp+150h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v238; // [rsp+2C0h] [rbp+1A0h] BYREF
  char v239[8]; // [rsp+700h] [rbp+5E0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+708h] [rbp+5E8h] BYREF

  v8 = a2;
  v212 = a5;
  v229 = a6;
  v9 = *((_DWORD *)this + 99);
  v230 = a4;
  v208 = a3;
  v196 = a2;
  v204 = a7;
  if ( (v9 & 0x10) != 0 && !a7 )
  {
    v10 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v10 + 24) = 476LL;
    WdLogEvent5_WdError(v10);
    return 3221225473LL;
  }
  if ( (v9 & 8) != 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(a7, a2, a3);
    *(_QWORD *)(v12 + 24) = 483LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
  v197 = 0LL;
  Flags = a2->Flags;
  v14 = (*(_BYTE *)&Flags & 8) << 12;
  v15 = a2->BroadcastContextCount + 1;
  v190 = 1;
  v199 = v14 | 0x100;
  v197 = v14 | 0x100u;
  v195 = v15;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v199 = v14 | 0x1A0;
    LODWORD(v197) = v14 | 0x1A0;
    v16 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1, a3);
    v19 = v16;
    if ( v16 < 0 )
    {
      v20 = WdLogNewEntry5_WdEvent(v18, v17);
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
  memset(&Src.pDmaBuffer, 0, 0x60uLL);
  v23 = v197;
  v24 = 0LL;
  v25 = 1;
  v202 = 0LL;
  v192 = 0;
  v189 = 1;
  while ( 1 )
  {
    v26 = *((_BYTE *)this + 433) == 0;
    v193 = v24;
    if ( !v26 )
    {
      v27 = v24;
      v193 = v24;
      goto LABEL_46;
    }
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
    v29 = 3;
    if ( *((_DWORD *)this + 18) > 3u )
      v29 = *((_DWORD *)this + 18);
    if ( *((_QWORD *)this + 29) )
      goto LABEL_32;
    v30 = *((_DWORD *)this + 26);
    LODWORD(v188) = v30;
    LODWORD(v187) = v29;
    LOBYTE(v186) = 1;
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, int, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 432LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
            *((unsigned int *)this + 98),
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            this,
            v186,
            *((_DWORD *)this + 50),
            v187,
            v188,
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
        v37 = *((_DWORD *)this + 99);
        *((_DWORD *)this + 53) = v29;
        *((_DWORD *)this + 54) = v30;
        if ( (v37 & 0x10) == 0 )
          goto LABEL_32;
        memset(v237, 0, sizeof(v237));
        LODWORD(v237[0]) = 5;
        *((_QWORD *)this + 31) = 0LL;
        v237[1] = 0LL;
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v38);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v213, Global);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v213);
        v40 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
        v41 = *((unsigned int *)this + 98);
        v231 = 4;
        v42 = 1 << v41;
        v43 = (struct ADAPTER_RENDER *)*((_QWORD *)v40 + 2);
        v44 = DXGGLOBAL::GetGlobal(v41);
        SyncObject = DXGGLOBAL::CreateSyncObject(
                       (__int64)v44,
                       v43,
                       v40,
                       v42,
                       (__int64)v237,
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
          if ( v214 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v213);
          v8 = v196;
LABEL_32:
          v50 = *((_QWORD *)this + 29);
          goto LABEL_33;
        }
        v48 = WdLogNewEntry5_WdWarning(v46, v28, v47);
        *(_QWORD *)(v48 + 24) = this;
        *(_QWORD *)(v48 + 32) = v36;
        WdLogEvent5_WdWarning(v48);
        if ( v214 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v213);
        v8 = v196;
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
    v49 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v49 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v49);
      *((_QWORD *)this + 30) = 0LL;
    }
    v50 = *((_QWORD *)this + 29);
    if ( v50 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                     + 448LL))(*((_QWORD *)this + 29));
      *((_QWORD *)this + 29) = 0LL;
      v50 = 0LL;
    }
    if ( (int)v36 < 0 )
    {
      v58 = WdLogNewEntry5_WdWarning(v49, v28, v35);
      *(_QWORD *)(v58 + 24) = this;
      WdLogEvent5_WdWarning(v58);
      goto LABEL_44;
    }
LABEL_33:
    LOBYTE(v28) = 1;
    v51 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                           + 488LL))(
            v50,
            v28,
            0LL,
            &v193);
    v54 = v51;
    if ( v51 != -1071775486 )
    {
      if ( v51 < 0 )
      {
        v59 = WdLogNewEntry5_WdEvent(v53, v52);
        *(_QWORD *)(v59 + 24) = this;
        *(_QWORD *)(v59 + 32) = v54;
        WdLogEvent5_WdEvent(v59);
      }
LABEL_43:
      LODWORD(v36) = v54;
      goto LABEL_44;
    }
    v55 = v208;
    if ( !v208 )
      goto LABEL_43;
    COREDEVICEACCESS::Release(v208);
    LODWORD(v54) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 488LL))(
                     v50,
                     0LL,
                     0LL,
                     &v193);
    v56 = COREDEVICEACCESS::AcquireShared(v55);
    v36 = v56;
    if ( v56 >= 0 )
      goto LABEL_43;
    v57 = WdLogNewEntry5_WdEvent(v53, v52);
    *(_QWORD *)(v57 + 24) = this;
    *(_QWORD *)(v57 + 32) = v36;
    WdLogEvent5_WdEvent(v57);
    COREDEVICEACCESS::AcquireSharedUncheck(v208);
LABEL_44:
    if ( (int)v36 < 0 )
    {
      v183 = WdLogNewEntry5_WdEvent(v53, v52);
      *(_QWORD *)(v183 + 32) = (int)v36;
      *(_QWORD *)(v183 + 24) = this;
      WdLogEvent5_WdEvent(v183);
LABEL_239:
      v175 = 0;
LABEL_240:
      v178 = v195;
      goto LABEL_241;
    }
    v27 = v193;
    HIDWORD(v24) = 0;
LABEL_46:
    if ( !bTracingEnabled )
      goto LABEL_56;
    v60 = v8->Flags;
    if ( (*(_BYTE *)&v60 & 0x10) != 0 )
    {
      v234 = 0LL;
      v228 = 0;
      v235 = 0LL;
      v232 = 0LL;
      v233 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        HIDWORD(v188) = HIDWORD(v24);
        HIDWORD(v187) = HIDWORD(v24);
        McTemplateK0ppxppttqddddddddq(0LL, 0LL, 0LL, 0LL, v27);
      }
    }
    else
    {
      if ( (*(_BYTE *)&v60 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_56;
        v61 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_56;
        v61 = &EventRender;
      }
      McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, v61, (const GUID *)v22, v27);
    }
LABEL_56:
    v210.QuadPart = 0LL;
    v62 = *((_QWORD *)this + 2);
    v198 = 0;
    v197 = 0LL;
    v207 = 0LL;
    v63 = *(_QWORD *)(v62 + 16);
    v201 = v63;
    ++*(_DWORD *)(v63 + 1140);
    v65 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v63 + 1120));
    if ( !v65 )
    {
      ++*(_DWORD *)(v63 + 1144);
      v65 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v63 + 1168))(
                            *(unsigned int *)(v63 + 1156),
                            *(unsigned int *)(v63 + 1164),
                            *(unsigned int *)(v63 + 1160),
                            v63 + 1120);
    }
    ListEntry = v65;
    if ( !v65 )
    {
      v182 = WdLogNewEntry5_WdLowResource(v64);
      *(_QWORD *)(v182 + 24) = 595LL;
      WdLogEvent5_WdLowResource(v182);
      CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
      return 3221225495LL;
    }
    v66 = *(_QWORD *)(v63 + 16);
    v67 = *(_DWORD *)(v66 + 2160);
    if ( v67 < 0x2000 )
      v68 = 1;
    else
      v68 = *(_DWORD *)(v66 + 256);
    if ( v67 >= 0x2000 || *(_BYTE *)(v66 + 2452) )
      v70 = *(_DWORD *)(v66 + 2368) * ((v68 << 6) + ((8 * v68 + 191) & 0xFFFFFFF8)) + 8 * (v68 + 72);
    else
      v70 = 1296;
    memset(v65, 0, v70);
    v71 = *(_QWORD *)(v201 + 16);
    v72 = *(_DWORD *)(v71 + 2160);
    if ( v72 < 0x2000 )
      v73 = 1;
    else
      v73 = *(_DWORD *)(v71 + 256);
    v74 = v72 >= 0x2000 || *(_BYTE *)(v71 + 2452);
    v75 = *(unsigned int *)(v71 + 2368);
    BYTE4(v65[22].Next) = v74;
    if ( v74 )
    {
      v76 = 8 * v73;
      *((_DWORD *)&v65[35].Next + 2) = v73;
      v77 = v73 << 6;
      HIDWORD(v65[35].Next) = v75;
      *((_DWORD *)&v65[35].Next + 3) = v75 * (v77 + ((v76 + 191) & 0xFFFFFFF8)) + 16;
      v78 = v75 * (v77 + ((v76 + 191) & 0xFFFFFFF8)) + 576;
      *((_DWORD *)&v65[33].Next + 2) = v78;
      *((_DWORD *)&v65[33].Next + 3) = v76 + v78;
    }
    if ( (*((_DWORD *)this + 56) & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2448LL) & 2) != 0 )
    {
      v79 = v8->Flags;
      if ( (*(_BYTE *)&v79 & 0x20) == 0 )
      {
        LODWORD(v36) = 0;
        v191 = 0;
        goto LABEL_102;
      }
    }
    else
    {
      v79 = v8->Flags;
    }
    v80 = &v197;
    if ( !*((_BYTE *)this + 430) )
      v80 = 0LL;
    if ( (*(_BYTE *)&v79 & 0x20) != 0 )
      pNewAllocationList = v8->pNewAllocationList;
    else
      pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
    v82 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL);
    AllocationCount = v196->AllocationCount;
    v203 = v193;
    Current = DXGPROCESS::GetCurrent();
    v205 = Current;
    if ( Current )
    {
      v84 = (char *)Current + 144;
      if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
      {
        v205 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v84, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v87 = *((_DWORD *)v84 + 4);
            if ( v87 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v85, &EventBlockThread, v86, v87);
          }
          ExAcquirePushLockExclusiveEx(v84, 0LL);
        }
        *((_QWORD *)v84 + 1) = KeGetCurrentThread();
      }
    }
    v36 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, int, UINT *, LARGE_INTEGER *, unsigned __int64 *, struct DXGPROCESS **, __int64 *, struct _SLIST_ENTRY **, struct DXGALLOCATION **))(*(_QWORD *)(v82 + 8) + 568LL))(
            v203,
            pNewAllocationList,
            AllocationCount,
            v190,
            v195,
            &v198,
            &v210,
            v80,
            &v205,
            &v207,
            &v65[12].Next + 1,
            v229);
    if ( v205 )
    {
      v90 = (char *)v205 + 144;
      *((_QWORD *)v205 + 19) = 0LL;
      ExReleasePushLockExclusiveEx(v90, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (int)v36 < 0 )
    {
      v181 = WdLogNewEntry5_WdWarning(v89, v88, v75);
      *(_QWORD *)(v181 + 24) = this;
      *(_QWORD *)(v181 + 32) = v36;
      WdLogEvent5_WdWarning(v181);
      CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
      goto LABEL_239;
    }
    v25 = v189;
    v8 = v196;
    v191 = 1;
LABEL_102:
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 544LL)
                                                                                     + 8LL)
                                                                         + 504LL))(
      v193,
      &v202,
      v75);
    Src.pDmaBuffer = v202;
    Src.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 528LL))(v193);
    Src.pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                              + 560LL))(v193);
    Src.DmaBufferPrivateDataSize = *((_DWORD *)this + 52);
    if ( v192 )
    {
      v91 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v204, v197);
      v36 = v91;
      if ( v91 == -1071775743 )
      {
        v173 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v93);
        v173[3] = 275LL;
        v173[4] = 40LL;
        v173[5] = this;
        v173[6] = 0LL;
        v173[7] = 0LL;
        WdLogEvent5_WdCriticalError(v173);
LABEL_224:
        v174 = WdLogNewEntry5_WdWarning(v93, v92, v94);
        *(_QWORD *)(v174 + 24) = this;
        *(_QWORD *)(v174 + 32) = v36;
LABEL_225:
        WdLogEvent5_WdWarning(v174);
        CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
        v175 = v191;
        goto LABEL_240;
      }
      if ( v91 < 0 )
        goto LABEL_224;
      v192 = 0;
    }
    if ( !v25 )
      goto LABEL_184;
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    {
      Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 552LL))(v193);
      Src.AllocationListSize = v8->AllocationCount;
      Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
      Src.PatchLocationListInSize = v8->PatchLocationCount;
      Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 544LL))(v193);
      Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                           + 536LL))(v193);
      v97 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v98 = *(struct DXGADAPTER **)(v97 + 16);
      v99 = DXGGLOBAL::GetGlobal(v97);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v99 + 1316), v98) )
      {
        memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
        v100 = *((_QWORD *)this + 14);
        v101 = (void *)*((_QWORD *)this + 16);
        Src.pCommand = (const void *)*((_QWORD *)this + 8);
        memmove(v101, Src.pPatchLocationListIn, v100);
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
    Src.DmaBufferSegmentId = v198;
    Src.DmaBufferPhysicalAddress = v210;
    if ( (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    {
      if ( *((_BYTE *)this + 430) )
      {
        v218 = (char *)v8->pNewCommandBuffer + v8->CommandOffset;
        CommandLength = v8->CommandLength;
        pDmaBuffer = Src.pDmaBuffer;
        v221 = v197;
        DmaSize = Src.DmaSize;
        pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
        DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
        pAllocationList = Src.pAllocationList;
        AllocationListSize = Src.AllocationListSize;
        MultipassOffset = Src.MultipassOffset;
        v203 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 23);
        v105 = *((_QWORD *)this + 2);
        v215 = -1;
        v216 = 0LL;
        v106 = *(_QWORD *)(v105 + 16);
        v206 = v106;
        if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
        {
          v217 = 1;
          v215 = 5066;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v95, &EventProfilerEnter, v96, 5066);
        }
        else
        {
          v217 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v215, 5066);
        CurrentProcess = PsGetCurrentProcess();
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        v110 = ProcessDxgProcess;
        if ( ProcessDxgProcess )
        {
          if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
          {
            ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
            v112 = ThreadProperty;
            if ( ThreadProperty )
            {
              ObfDereferenceObject(ThreadProperty);
              v110 = *v112;
            }
          }
        }
        v113 = v110 + 120;
        if ( !v110 )
          v113 = 0LL;
        AllocationCount = 0;
        if ( v113 && *(struct _KTHREAD **)(v113 + 8) == KeGetCurrentThread() )
        {
          v114 = WdLogNewEntry5_WdAssertion(v109);
          *(_QWORD *)(v114 + 24) = 1309LL;
          WdLogEvent5_WdAssertion(v114);
        }
        if ( v110 )
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v113, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v117 = *(_DWORD *)(v113 + 16);
              if ( v117 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v115, &EventBlockThread, v116, v117);
            }
            ExAcquirePushLockExclusiveEx(v113, 0LL);
          }
          *(_QWORD *)(v113 + 8) = KeGetCurrentThread();
          AllocationCount = 2;
        }
        DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v106 + 16), 1);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v106 + 16) + 4256LL));
        v119 = 0;
        CurrentIrql = KeGetCurrentIrql();
        v120 = 0LL;
        if ( (unsigned __int8)CurrentIrql < 2u )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v122 = WdLogNewEntry5_WdAssertion(v118);
            *(_QWORD *)(v122 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v122);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v118);
          if ( CurrentProcessSessionId
            && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
            && !IsThreadCrossSessionAttached()
            && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
            && *(_QWORD *)ThreadWin32Thread )
          {
            v120 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
            if ( v120 )
              v119 = *(_DWORD *)(v120 + 136);
          }
          else
          {
            v120 = 0LL;
          }
        }
        v125 = v206;
        DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
          (DXGVALIDATIONPROCESSATTACH *)v239,
          *(struct DXGADAPTER **)(v206 + 16));
        v36 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(v125 + 16) + 808LL))(v203, &v218);
        if ( v239[0] )
          KeUnstackDetachProcess(&ApcState);
        if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
        {
          v130 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v127);
          v130[5] = v206;
          v130[6] = (unsigned __int8)CurrentIrql;
          v130[3] = 275LL;
          v130[4] = 16LL;
          v131 = KeGetCurrentIrql();
          v130[7] = v131;
          WdLogEvent5_WdCriticalError(v130);
        }
        if ( v120 && *(_DWORD *)(v120 + 136) != v119 )
        {
          v132 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v127);
          v132[3] = 275LL;
          v132[4] = 38LL;
          v132[5] = *(int *)(v120 + 136);
          v132[6] = v119;
          v132[7] = 0LL;
          WdLogEvent5_WdCriticalError(v132);
        }
        v133 = v206;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v206 + 16) + 4256LL));
        v134 = (_QWORD *)WdLogNewEntry5_WdTrace(v127, v126, v128, v129);
        v135 = v203;
        v134[3] = v36;
        v134[4] = v135;
        v134[5] = pDmaBuffer;
        v134[6] = (unsigned int)DmaSize;
        v136 = (__int64)pAllocationList;
        v134[7] = pAllocationList;
        if ( (_DWORD)v36 )
        {
          if ( (_DWORD)v36 != -1073741592 )
          {
            if ( (unsigned int)(v36 + 1073741816) > 0xF
              || (v136 = 32801LL, !_bittest((const int *)&v136, v36 + 1073741816)) )
            {
              if ( (_DWORD)v36 != -1071775743 && (_DWORD)v36 != -1071775232 )
              {
                v137 = WdLogNewEntry5_WdError(v136);
                *(_QWORD *)(v137 + 24) = v36;
                WdLogEvent5_WdError(v137);
              }
            }
          }
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v133 + 16));
        if ( AllocationCount == 2 )
        {
          *(_QWORD *)(v113 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v113, 0LL);
          KeLeaveCriticalRegion();
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v215);
        if ( v217 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v138, &EventProfilerExit, v104, v215);
        Src.pDmaBuffer = pDmaBuffer;
        Src.pDmaBufferPrivateData = pDmaBufferPrivateData;
        Src.MultipassOffset = MultipassOffset;
        if ( (*((_DWORD *)this + 99) & 0x10) != 0 )
        {
          Src.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
          Src.DmaSize = DmaSize;
        }
        goto LABEL_173;
      }
      v102 = ADAPTER_RENDER::DdiRenderKm(
               *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
               *((void **)this + 23),
               &Src);
LABEL_172:
      LODWORD(v36) = v102;
LABEL_173:
      if ( (int)(v36 + 0x80000000) < 0 || (_DWORD)v36 == -1071775743 )
        goto LABEL_175;
      v174 = WdLogNewEntry5_WdWarning(0x80000000LL, v103, v104);
      *(_QWORD *)(v174 + 24) = this;
      *(_QWORD *)(v174 + 32) = (int)v36;
      goto LABEL_225;
    }
    if ( (*((_DWORD *)this + 56) & 1) == 0
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2448LL) & 4) == 0 )
    {
      v102 = ADAPTER_RENDER::DdiRender(
               *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
               *((void **)this + 23),
               (const GUID *)&Src);
      goto LABEL_172;
    }
    LODWORD(v36) = 0;
LABEL_175:
    v189 = (_DWORD)v36 == -1071775743;
    v139 = v189;
    if ( (*((_DWORD *)this + 99) & 0x10) != 0 )
    {
      if ( *((_QWORD *)this + 31) )
      {
        v141 = v204;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v236,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v236);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
        v141 = v204;
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                         + 8LL)
                                                                             + 272LL))(
          *((_QWORD *)*v204 + 5),
          VidSchSyncObject,
          0LL);
        if ( v236[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v236);
      }
      ++*((_QWORD *)this + 31);
      v189 = (_DWORD)v36 == -1071775743;
      if ( !*((_BYTE *)this + 296) )
      {
        v142 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v141, v197);
        v36 = v142;
        v189 = v139;
        if ( v142 == -1071775743 )
        {
          v192 = 1;
        }
        else if ( v142 < 0 )
        {
          goto LABEL_224;
        }
      }
    }
LABEL_184:
    LODWORD(v143) = 0;
    v144 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 560LL))(v193);
    v145 = LODWORD(Src.pDmaBufferPrivateData) - v144;
    v146 = LODWORD(Src.pDmaBuffer) - (_DWORD)v202;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 544LL)
                                                                   + 8LL)
                                                       + 512LL))(v193);
    v202 = 0LL;
    if ( DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      v22 = (unsigned int)v24;
    }
    else
    {
      v147 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 544LL)
                                                                               + 8LL)
                                                                   + 544LL))(v193);
      v143 = ((__int64)Src.pPatchLocationListOut - v147) / 24;
      v22 = v196->AllocationCount;
      AllocationCount = v196->AllocationCount;
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 0x10) != 0 )
      {
        v148 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 544LL))(v193);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v193, v143, v148);
        v22 = AllocationCount;
      }
      v24 = 0LL;
    }
    v65->Next = (struct _SLIST_ENTRY *)v23;
    if ( *((_BYTE *)this + 430) )
    {
      LODWORD(v65->Next) |= 0x8000000u;
      v65[3].Next = (struct _SLIST_ENTRY *)v197;
    }
    if ( (v199 & 0x20) != 0 )
    {
      if ( v189 || (v149 = (int)v24, v192) )
        v149 = 64;
      v150 = v195;
      v151 = v149 | (__int64)v65->Next & 0xFFFFFFBF;
      v152 = 2048;
      v153 = v151 & 0xFFFFFBFF;
      if ( v195 > 1 )
        v152 = 3072;
      LODWORD(v65->Next) = v152 | v153;
      if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
        *((_DWORD *)&v65[7].Next + 3) = (_DWORD)v24;
    }
    else
    {
      v150 = v195;
    }
    *((_QWORD *)&v65->Next + 1) = v193;
    *((_DWORD *)&v65[3].Next + 3) = v146;
    *((_DWORD *)&v65[3].Next + 2) = (_DWORD)v24;
    HIDWORD(v65[4].Next) = v22;
    LODWORD(v65[4].Next) = (_DWORD)v24;
    *((_DWORD *)&v65[4].Next + 3) = v143;
    *((_DWORD *)&v65[4].Next + 2) = (_DWORD)v24;
    HIDWORD(v65[5].Next) = v145;
    LODWORD(v65[5].Next) = (_DWORD)v24;
    if ( v207 )
    {
      v154 = 1;
      v155 = (struct _VIDMM_DMA_BUFFER *)&v207;
    }
    else
    {
      v154 = (int)v24;
      v155 = v24;
    }
    *((_QWORD *)&v65[21].Next + 1) = v155;
    v156 = (int)v24;
    LODWORD(v65[22].Next) = v154;
    AllocationCount = (unsigned int)v24;
    if ( v150 > 0 )
      break;
LABEL_212:
    v165 = ListEntry;
    v193 = v24;
    v190 = 0;
    if ( ListEntry )
    {
      v166 = v201 + 1120;
      v167 = (union _SLIST_HEADER *)(v201 + 1120);
      ++*(_DWORD *)(v201 + 1148);
      if ( ExQueryDepthSList(v167) < *(_WORD *)(v166 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v166, ListEntry);
      }
      else
      {
        ++*(_DWORD *)(v166 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v166 + 56))(v165, v166);
      }
      v24 = 0LL;
    }
    v25 = v189;
    if ( !v192 && !v189 )
    {
      if ( (*(_DWORD *)&v196->Flags & 0x10) != 0 )
      {
        PresentHistoryToken = v196->PresentHistoryToken;
        v238.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v238.Token.Flip.FenceValue = PresentHistoryToken;
        v169 = SubmitPresentHistoryToken(
                 &v238,
                 v208,
                 v230,
                 0LL,
                 (char)v24,
                 (union _LARGE_INTEGER *)v24,
                 v24,
                 v24,
                 this,
                 v24);
        v36 = v169;
        if ( (int)(v169 + 0x80000000) >= 0 && v169 != -1073741130 )
        {
          v172 = WdLogNewEntry5_WdWarning(0x80000000LL, v170, v171);
          *(_QWORD *)(v172 + 24) = this;
          *(_QWORD *)(v172 + 32) = v36;
          WdLogEvent5_WdWarning(v172);
          LODWORD(v36) = 0;
        }
      }
      return (unsigned int)v36;
    }
    v8 = v196;
  }
  v157 = v212;
  while ( 1 )
  {
    v158 = *v157;
    if ( *((struct _KTHREAD **)*v157 + 56) != KeGetCurrentThread() )
    {
      v159 = WdLogNewEntry5_WdAssertion(v158);
      *(_QWORD *)(v159 + 24) = 917LL;
      WdLogEvent5_WdAssertion(v159);
      v158 = *v157;
      LODWORD(v24) = 0;
    }
    if ( (*((_DWORD *)v158 + 99) & 0x10) != 0 )
    {
      *((_QWORD *)&v65[30].Next + 1) = *((_QWORD *)this + 31);
      LODWORD(v65[31].Next) = (_DWORD)v24;
      v65[32].Next = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 30) + 64LL);
      v160 = v204;
      *((_QWORD *)&v65[31].Next + 1) = *(_QWORD *)(*((_QWORD *)this + 30) + 48LL);
      v161 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 520LL)
                                                                         + 8LL)
                                                             + 432LL))(
               *((_QWORD *)*v160 + 5),
               v65);
    }
    else
    {
      v161 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 520LL)
                                                                         + 8LL)
                                                             + 424LL))(
               *((_QWORD *)v158 + 32),
               v65);
    }
    v164 = v161;
    if ( v161 < 0 )
      break;
    LODWORD(v65->Next) &= ~0x800u;
    ++v156;
    ++v157;
    AllocationCount = v156;
    v24 = 0LL;
    if ( v156 >= v195 )
      goto LABEL_212;
  }
  if ( (*((_DWORD *)this + 99) & 0x10) == 0 )
  {
    v176 = v156;
    if ( v156 >= 0 )
    {
      v177 = v212;
      do
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 520LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)v177[v176--] + 32),
          0LL);
      while ( v176 >= 0 );
      v156 = AllocationCount;
    }
  }
  v178 = v195;
  if ( v156 < v195 )
  {
    v179 = (unsigned int)(v195 - v156);
    do
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
        v193);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v193,
        0LL);
      --v179;
    }
    while ( v179 );
  }
  v175 = 0;
  v193 = 0LL;
  v180 = WdLogNewEntry5_WdWarning(v163, v162, v22);
  *(_QWORD *)(v180 + 32) = v164;
  *(_QWORD *)(v180 + 24) = this;
  WdLogEvent5_WdWarning(v180);
  CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
LABEL_241:
  if ( !v193 )
    return (unsigned int)v36;
  if ( v202 )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 512LL))();
  if ( v175 )
  {
    if ( v178 <= 0 )
      return (unsigned int)v36;
    v184 = (unsigned int)v178;
    do
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
        v193);
      --v184;
    }
    while ( v184 );
  }
  if ( v178 > 0 )
  {
    v185 = (unsigned int)v178;
    do
    {
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v193,
        0LL);
      --v185;
    }
    while ( v185 );
  }
  return (unsigned int)v36;
}
