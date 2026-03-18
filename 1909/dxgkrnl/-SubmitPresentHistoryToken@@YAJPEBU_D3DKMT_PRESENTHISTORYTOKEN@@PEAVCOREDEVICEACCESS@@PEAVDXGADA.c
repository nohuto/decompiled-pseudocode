/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C01171E0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresent @ 0x1C010F1E0 (DxgkPresent.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C01113B0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0116B20 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C011CE60 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C013DBD8 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C024CAF0 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresentRedirected @ 0x1C025C950 (DxgkPresentRedirected.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C5E0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C6AC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0ppqqx @ 0x1C003DC10 (McTemplateK0ppqqx.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C0043BFC (--1KOBJECTREF@@QEAA@XZ.c)
 *     McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq @ 0x1C0043E3C (McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F61DC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C0118A00 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C0133904 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C013C060 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0227C58 (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C022F1CC (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@_N@Z @ 0x1C025BFC8 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 */

__int64 __fastcall SubmitPresentHistoryToken(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9,
        __int64 *a10,
        unsigned int a11,
        __int64 a12)
{
  _QWORD *p_Next; // r13
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rdx
  DXGADAPTER *v20; // rdi
  struct ADAPTER_RENDER *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // zf
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  int v30; // r9d
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  NTSTATUS v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  const GUID *v46; // r8
  __int64 v47; // rax
  unsigned int v48; // r14d
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rbx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  const GUID *v58; // r8
  __int64 v59; // rdx
  _BYTE *v60; // rcx
  char v61; // al
  _BYTE *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  union _SLIST_HEADER *v65; // rdi
  __int64 v66; // rsi
  union _SLIST_HEADER *v67; // r14
  PSLIST_ENTRY v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  PSLIST_ENTRY v71; // r12
  PSLIST_ENTRY v72; // rbx
  __int64 v73; // rdx
  int v74; // r8d
  unsigned int v75; // eax
  __int64 v76; // rax
  int v77; // edx
  int v78; // edx
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  const void *v85; // rdx
  unsigned int v86; // ebx
  __int64 v87; // rax
  unsigned int v88; // ebx
  __int64 v89; // rax
  int v90; // ebx
  unsigned int v91; // ebx
  unsigned int v92; // ebx
  __int64 v93; // rax
  __int64 v94; // rdx
  CRefCountedBuffer *v95; // rbx
  unsigned int v96; // eax
  DXGADAPTER *v97; // r14
  CRefCountedBuffer *v98; // rdi
  __int64 v99; // rcx
  bool v100; // cc
  __int64 v101; // r15
  unsigned int v102; // edx
  void *v103; // r8
  struct DXGK_PRESENT_PARAMS *v104; // r10
  int v105; // eax
  __int64 v106; // r8
  __int64 v107; // rax
  struct CRefCountedBuffer *v108; // rax
  int v109; // eax
  int Next; // esi
  struct _SLIST_ENTRY *v111; // rax
  int Next_high; // r9d
  __int64 v113; // r8
  char v114; // r14
  char v115; // r15
  __int64 v116; // rcx
  struct _SLIST_ENTRY *v117; // r10
  __int64 v118; // rdx
  __int128 v119; // xmm1
  unsigned int v120; // r11d
  __int64 v121; // r9
  int v122; // ecx
  unsigned int v123; // r8d
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rax
  __int64 v128; // r14
  _QWORD *v129; // r9
  _BYTE *PoolWithTag; // r9
  unsigned int v131; // edx
  __int64 v132; // r8
  __int64 v133; // r10
  __int64 v134; // rcx
  int v135; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rax
  int v143; // esi
  __int64 v144; // rdx
  __int64 v145; // rcx
  struct DXGPROCESS *Current; // r15
  unsigned int v147; // r14d
  __int64 v148; // r9
  __int64 v149; // rax
  __int64 v150; // r8
  unsigned int v151; // r14d
  int v152; // edx
  __int64 v153; // r8
  __int64 v154; // rdx
  __int64 v155; // rax
  __int64 v156; // rsi
  __int64 v157; // r8
  __int64 v158; // rax
  __int64 v159; // r9
  __int64 v160; // rax
  __int64 v161; // r8
  int v162; // edx
  __int64 v163; // r8
  __int64 v164; // rdx
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v169; // r9
  __int64 v170; // r10
  __int64 v171; // r14
  struct DXGPROCESS *v172; // rax
  CRefCountedBuffer *v173; // rcx
  unsigned int v174; // r14d
  __int64 v175; // r15
  int v176; // r8d
  _QWORD *v177; // r10
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // rbx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rax
  __int64 v189; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  unsigned int v192; // [rsp+F0h] [rbp-80h]
  unsigned int v193; // [rsp+F4h] [rbp-7Ch]
  DXGADAPTER *v194; // [rsp+F8h] [rbp-78h]
  struct ADAPTER_RENDER *v195; // [rsp+100h] [rbp-70h]
  PRKSEMAPHORE Semaphore; // [rsp+118h] [rbp-58h]
  __int64 v197; // [rsp+120h] [rbp-50h]
  unsigned int v198; // [rsp+124h] [rbp-4Ch]
  char v199; // [rsp+128h] [rbp-48h]
  int v200; // [rsp+12Ch] [rbp-44h]
  char Srca; // [rsp+130h] [rbp-40h]
  union _SLIST_HEADER *v203; // [rsp+138h] [rbp-38h]
  struct DXGGLOBAL *v204; // [rsp+140h] [rbp-30h] BYREF
  char v205; // [rsp+148h] [rbp-28h]
  CRefCountedBuffer *v206; // [rsp+150h] [rbp-20h]
  struct _SLIST_ENTRY v207; // [rsp+158h] [rbp-18h]
  __int128 v208; // [rsp+168h] [rbp-8h]
  __int128 v209; // [rsp+178h] [rbp+8h]
  struct CRefCountedBuffer *v210; // [rsp+188h] [rbp+18h] BYREF
  signed __int64 v211; // [rsp+190h] [rbp+20h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+198h] [rbp+28h]
  struct _PRESENT_REDIRECTED_PARAMS *v213; // [rsp+1A0h] [rbp+30h]
  CRefCountedBuffer *v214; // [rsp+1A8h] [rbp+38h]
  PSLIST_ENTRY v215; // [rsp+1B0h] [rbp+40h] BYREF
  struct ADAPTER_RENDER *v216; // [rsp+1B8h] [rbp+48h]
  PRKSEMAPHORE v217; // [rsp+1C0h] [rbp+50h] BYREF
  _BYTE v218[16]; // [rsp+1C8h] [rbp+58h] BYREF
  PVOID Object[3]; // [rsp+1D8h] [rbp+68h] BYREF
  PVOID P; // [rsp+1F0h] [rbp+80h]
  _BYTE v221[64]; // [rsp+1F8h] [rbp+88h] BYREF
  int v222; // [rsp+238h] [rbp+C8h]
  char v223[8]; // [rsp+240h] [rbp+D0h] BYREF
  _QWORD *v224; // [rsp+248h] [rbp+D8h]
  int v225; // [rsp+250h] [rbp+E0h]
  _BYTE v227[64]; // [rsp+260h] [rbp+F0h] BYREF
  _BYTE v228[64]; // [rsp+2A0h] [rbp+130h] BYREF
  char v229[64]; // [rsp+2E0h] [rbp+170h] BYREF
  _DWORD v230[16]; // [rsp+320h] [rbp+1B0h] BYREF

  p_Next = a8;
  v16 = a10;
  v213 = (struct _PRESENT_REDIRECTED_PARAMS *)a10;
  if ( a9 )
  {
    if ( a10 )
    {
LABEL_3:
      v17 = WdLogNewEntry5_WdError(a10, a2, a3);
      *(_QWORD *)(v17 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v17);
      return 3221225485LL;
    }
  }
  else if ( !a10 || !*((_DWORD *)a10 + 2) || !*a10 )
  {
    goto LABEL_3;
  }
  v19 = 0LL;
  v192 = 0;
  v197 = 0LL;
  if ( a9 )
  {
    v16 = *(__int64 **)(*(_QWORD *)(a9 + 16) + 16LL);
  }
  else
  {
    v197 = *a10;
    v192 = *((_DWORD *)a10 + 2);
  }
  v20 = (DXGADAPTER *)v16[2];
  v194 = v20;
  v21 = (struct ADAPTER_RENDER *)*((_QWORD *)v20 + 320);
  v195 = v21;
  v22 = *((_QWORD *)v21 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v22 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v22 + 144)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22, v19);
    *(_QWORD *)(v23 + 24) = 2625LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = (struct ADAPTER_RENDER *)((char *)v21 + 736) == 0LL;
  v25 = (_QWORD *)((char *)v21 + 736);
  v224 = v25;
  if ( !v24 && (struct _KTHREAD *)v25[1] == KeGetCurrentThread() )
  {
    v26 = WdLogNewEntry5_WdAssertion(v22, v19);
    *(_QWORD *)(v26 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v26);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v25, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v30 = *((_DWORD *)v25 + 4);
      if ( v30 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v28, &EventBlockThread, v29, v30);
    }
    ExAcquirePushLockSharedEx(v25, 0LL);
  }
  v225 = 1;
  CurrentProcess = PsGetCurrentProcess(v28, v27);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *((_DWORD *)v195 + 190)
    || (v33 = 8LL * ProcessSessionId, !*(_QWORD *)(v33 + *((_QWORD *)v195 + 96)))
    || (_mm_lfence(), v34 = *(_QWORD *)(v33 + *((_QWORD *)v195 + 96)), (v203 = (union _SLIST_HEADER *)v34) == 0LL) )
  {
    v189 = WdLogNewEntry5_WdEvent(v33);
    *(_QWORD *)(v189 + 24) = v20;
    WdLogEvent5_WdEvent(v189);
    v48 = -1073741811;
    goto LABEL_268;
  }
  Semaphore = *(PRKSEMAPHORE *)(v34 + 64);
  v217 = Semaphore;
  ObfReferenceObject(Semaphore);
  v225 = 0;
  ExReleasePushLockSharedEx(v25, 0LL);
  KeLeaveCriticalRegion();
  if ( *(_BYTE *)(a2 + 144) )
    COREACCESS::Release((COREACCESS *)(a2 + 72));
  v37 = a2 + 8;
  if ( !*(_BYTE *)(a2 + 32) )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35);
    v38[3] = 275LL;
    v38[4] = 4LL;
    v38[5] = v37;
    v38[6] = 0LL;
    v38[7] = 0LL;
    WdLogEvent5_WdCriticalError(v38);
  }
  v39 = *(_QWORD *)(a2 + 24);
  *(_BYTE *)(a2 + 32) = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v39 + 160) )
    DXGADAPTER::ReleaseCoreResource(v39, *(_DWORD *)(a2 + 36), *(_QWORD *)(a2 + 40));
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_DWORD *)(a2 + 36) = -1;
  if ( *(_BYTE *)(a3 + 16) )
  {
    v40 = *(_QWORD *)(a3 + 8) + 120LL;
    *(_BYTE *)(a3 + 16) = 0;
    ExReleasePushLockSharedEx(v40, 0LL);
    KeLeaveCriticalRegion();
    v41 = *(_QWORD *)(a3 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v41 + 16), (struct DXGADAPTER *)v41);
  }
  if ( a4 )
  {
    if ( a4[2] )
    {
      (*(void (**)(void))(a4[3] + 24LL))();
      a4[2] = 0LL;
    }
    if ( *a4 )
    {
      v42 = a4[5];
      if ( v42 )
      {
        if ( *((_DWORD *)a4 + 13) )
          (*(void (__fastcall **)(__int64, bool))(a4[4] + 280LL))(v42, *((_DWORD *)a4 + 12) == 0);
        (*(void (**)(void))(a4[4] + 264LL))();
        a4[5] = 0LL;
        a4[6] = 0LL;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(a4[3] + 288LL))(*a4, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(a4[3] + 64LL))(*a4, a4[1]);
      *a4 = 0LL;
    }
  }
  Object[0] = (char *)v194 + 2528;
  Object[1] = Semaphore;
  v43 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, a6, 0LL);
  if ( !v43 )
  {
    v47 = WdLogNewEntry5_WdEvent(v45);
    *(_QWORD *)(v47 + 24) = v194;
    WdLogEvent5_WdEvent(v47);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)a3);
    COREDEVICEACCESS::AcquireSharedUncheck(a2);
    v48 = -1073741130;
    KOBJECTREF::~KOBJECTREF((PVOID *)&v217);
    goto LABEL_268;
  }
  if ( v43 == 258 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v45, &EventPerformanceWarning, v46, 19);
    v49 = WdLogNewEntry5_WdEvent(v45);
    *(_QWORD *)(v49 + 24) = 258LL;
    WdLogEvent5_WdEvent(v49);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)a3);
    v50 = COREDEVICEACCESS::AcquireShared(a2, a11, a12);
    v52 = v50;
    if ( v50 >= 0 )
    {
      v48 = 258;
    }
    else
    {
      v53 = WdLogNewEntry5_WdEvent(v51);
      *(_QWORD *)(v53 + 24) = v52;
      WdLogEvent5_WdEvent(v53);
      COREDEVICEACCESS::AcquireSharedUncheck(a2);
      v48 = -1073741130;
    }
    KOBJECTREF::~KOBJECTREF((PVOID *)&v217);
    goto LABEL_268;
  }
  if ( !*(_BYTE *)(a3 + 16) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a3 + 8) + 24LL));
    v54 = *(_QWORD *)(a3 + 8);
    *(_QWORD *)a3 = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v54 + 120, 0LL);
    *(_BYTE *)(a3 + 16) = 1;
  }
  if ( *(_BYTE *)(a2 + 32) )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v44);
    v55[3] = 275LL;
    v55[4] = 4LL;
    v55[5] = v37;
    v55[6] = 0LL;
    v55[7] = 0LL;
    WdLogEvent5_WdCriticalError(v55);
  }
  v56 = *(_QWORD *)(a2 + 24);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v56 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v56 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v57, &EventBlockThread, v58, 72);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a2 + 24) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*(_QWORD *)(a2 + 24), a11, a12);
  }
  *(_DWORD *)(a2 + 36) = a11;
  *(_QWORD *)(a2 + 40) = 0LL;
  if ( a12 )
  {
    v59 = 17LL;
    v60 = (_BYTE *)(a2 + 48);
    do
    {
      if ( v59 == -2147483629 )
        break;
      v61 = v60[a12 - (a2 + 48)];
      if ( !v61 )
        break;
      *v60++ = v61;
      --v59;
    }
    while ( v59 );
    v62 = v60 - 1;
    if ( v59 )
      v62 = v60;
    *v62 = 0;
    if ( v59 )
      *(_QWORD *)(a2 + 40) = a2 + 48;
  }
  *(_BYTE *)(a2 + 32) = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 136) + 464LL) != 1 )
  {
LABEL_77:
    COREACCESS::Release((COREACCESS *)(a2 + 8));
    KeReleaseSemaphore(Semaphore, 0, 1, 0);
    v64 = WdLogNewEntry5_WdEvent(v63);
    v48 = -1073741130;
    *(_QWORD *)(v64 + 24) = -1073741130LL;
    WdLogEvent5_WdEvent(v64);
    COREDEVICEACCESS::AcquireSharedUncheck(a2);
    KOBJECTREF::~KOBJECTREF((PVOID *)&v217);
    goto LABEL_268;
  }
  if ( *(_BYTE *)(a2 + 144) )
  {
    COREACCESS::AcquireShared(a2 + 72, 0xFFFFFFFF, 0LL);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 88) + 176LL) != 1 )
    {
      COREACCESS::Release((COREACCESS *)(a2 + 72));
      goto LABEL_77;
    }
  }
  v65 = v203;
  LODWORD(v66) = 0;
  v67 = v203 + 3;
  v68 = ExpInterlockedPopEntrySList(v203 + 3);
  if ( !v68
    && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer((DXGPRESENTHISTORYTOKENQUEUE *)v203)
     || (v68 = ExpInterlockedPopEntrySList(v67)) == 0LL)
    || (v71 = v68 + 1, v68 == (PSLIST_ENTRY)-16LL) )
  {
    v48 = -1073741801;
    KeReleaseSemaphore(Semaphore, 0, 1, 0);
    v188 = WdLogNewEntry5_WdLowResource(v185, v184, v186, v187);
    *(_QWORD *)(v188 + 24) = v203;
    *(_QWORD *)(v188 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v188);
    KOBJECTREF::~KOBJECTREF((PVOID *)&v217);
    goto LABEL_268;
  }
  if ( a8 )
  {
    v72 = 0LL;
    v215 = 0LL;
    v216 = v195;
  }
  else
  {
    v216 = v195;
    ++*((_DWORD *)v195 + 285);
    v72 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v195 + 70);
    if ( !v72 )
    {
      ++*((_DWORD *)v195 + 286);
      v72 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))v195 + 146))(
                            *((unsigned int *)v195 + 289),
                            *((unsigned int *)v195 + 291),
                            *((unsigned int *)v195 + 290),
                            (__int64)v195 + 1120);
    }
    v215 = v72;
    if ( !v72 )
    {
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v84 = WdLogNewEntry5_WdLowResource(v81, v80, v82, v83);
      *(_QWORD *)(v84 + 24) = 2713LL;
      WdLogEvent5_WdLowResource(v84);
      v48 = -1073741801;
      CVidSchSubmitData::~CVidSchSubmitData(&v215);
      KOBJECTREF::~KOBJECTREF((PVOID *)&v217);
      goto LABEL_268;
    }
    v73 = *((_QWORD *)v195 + 2);
    if ( *(int *)(v73 + 2184) < 0x2000 )
      v74 = 1;
    else
      v74 = *(_DWORD *)(v73 + 256);
    if ( *(int *)(v73 + 2184) >= 0x2000 || *(_BYTE *)(v73 + 2484) )
      v75 = *(_DWORD *)(v73 + 2392) * ((v74 << 6) + ((8 * v74 + 191) & 0xFFFFFFF8)) + 8 * (v74 + 71);
    else
      v75 = 1296;
    memset(v72, 0, v75);
    v76 = *((_QWORD *)v195 + 2);
    v69 = *(unsigned int *)(v76 + 2184);
    if ( (int)v69 < 0x2000 )
      v77 = 1;
    else
      v77 = *(_DWORD *)(v76 + 256);
    LOBYTE(v69) = (int)v69 >= 0x2000 || *(_BYTE *)(v76 + 2484);
    v70 = *(unsigned int *)(v76 + 2392);
    v65 = v203;
    BYTE4(v72[22].Next) = v69;
    if ( (_BYTE)v69 )
    {
      v69 = (unsigned int)(8 * v77);
      LODWORD(v72[35].Next) = v77;
      v78 = v77 << 6;
      *((_DWORD *)&v72[34].Next + 3) = v70;
      HIDWORD(v72[35].Next) = v70 * (v78 + ((v69 + 191) & 0xFFFFFFF8)) + 16;
      v79 = v70 * (v78 + ((v69 + 191) & 0xFFFFFFF8)) + 568;
      *((_DWORD *)&v72[33].Next + 2) = v79;
      *((_DWORD *)&v72[33].Next + 3) = v69 + v79;
    }
  }
  v85 = a1;
  v193 = 1;
  if ( !a8 )
    p_Next = &v72->Next;
  switch ( *a1 )
  {
    case 1:
      v86 = a1[14];
      if ( v86 > 0x10 )
      {
        v87 = WdLogNewEntry5_WdAssertion(v69, a1);
        *(_QWORD *)(v87 + 24) = 53LL;
        goto LABEL_109;
      }
      v90 = 16 * v86 + 67;
      goto LABEL_121;
    case 2:
      v91 = a1[205];
      if ( v91 > 0x10 )
      {
        v87 = WdLogNewEntry5_WdAssertion(v69, a1);
        *(_QWORD *)(v87 + 24) = 63LL;
        goto LABEL_109;
      }
      v90 = 16 * v91 + 831;
      goto LABEL_121;
    case 3:
      v92 = a1[10];
      if ( v92 > 0x10 )
      {
        v87 = WdLogNewEntry5_WdAssertion(v69, a1);
        *(_QWORD *)(v87 + 24) = 73LL;
LABEL_109:
        WdLogEvent5_WdAssertion(v87);
        v88 = 0;
LABEL_110:
        v89 = WdLogNewEntry5_WdWarning(v69, v85, v70);
        *(_QWORD *)(v89 + 24) = v88;
        WdLogEvent5_WdWarning(v89);
        v48 = -1073741811;
        CVidSchSubmitData::~CVidSchSubmitData(&v215);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v217);
        goto LABEL_268;
      }
      v90 = 16 * v92 + 51;
LABEL_121:
      v88 = v90 & 0xFFFFFFF8;
      if ( v88 - 1 > 0x437 )
        goto LABEL_110;
      break;
    case 4:
    case 5:
    case 7:
    case 8:
      v90 = 31;
      goto LABEL_121;
    case 9:
      v90 = 47;
      goto LABEL_121;
    default:
      v93 = WdLogNewEntry5_WdAssertion(v69, a1);
      *(_QWORD *)(v93 + 24) = 96LL;
      WdLogEvent5_WdAssertion(v93);
      v85 = a1;
      v90 = 7;
      goto LABEL_121;
  }
  memmove(v71, v85, v88);
  switch ( LODWORD(v71->Next) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
      v95 = 0LL;
      v96 = *(_DWORD *)p_Next & 0xFFFFFFDF;
      v97 = v194;
      p_Next[13] = v65;
      v98 = 0LL;
      v99 = v96 | (32 * (a5 & 1 | 0x2000));
      p_Next[14] = v71;
      *(_DWORD *)p_Next = v99;
      *((_DWORD *)p_Next + 31) = -1;
      v100 = *((_DWORD *)v194 + 546) < 0x2000;
      v210 = 0LL;
      v214 = 0LL;
      v206 = 0LL;
      if ( v100 && !*((_BYTE *)v194 + 2484) )
      {
        v101 = a9;
        v104 = (struct DXGK_PRESENT_PARAMS *)a7;
        goto LABEL_135;
      }
      v101 = a9;
      if ( a9 )
      {
        v104 = (struct DXGK_PRESENT_PARAMS *)a7;
        if ( !a7 )
          goto LABEL_135;
        v99 = (__int64)a1;
        if ( ((*a1 - 1) & 0xFFFFFFFD) == 0 )
          goto LABEL_135;
        v102 = *(_DWORD *)(a7 + 1472);
        v103 = *(void **)(a7 + 1480);
      }
      else
      {
        v102 = *(_DWORD *)(v197 + 1104);
        v103 = *(void **)(v197 + 1112);
      }
      v105 = ReadPresentPrivateDriverData(v194, v102, v103, &v210);
      v66 = v105;
      if ( v105 < 0 )
      {
        v107 = WdLogNewEntry5_WdError(v99, v94, v106);
        *(_QWORD *)(v107 + 24) = v66;
        WdLogEvent5_WdError(v107);
        goto LABEL_248;
      }
      v108 = v210;
      v104 = (struct DXGK_PRESENT_PARAMS *)a7;
      if ( v210 )
      {
        *((_DWORD *)p_Next + 1) |= 4u;
        v95 = v108;
        v214 = v108;
        p_Next[3] = v108;
      }
LABEL_135:
      if ( *((_BYTE *)v194 + 185) )
        goto LABEL_139;
      if ( v101 || *((_BYTE *)v194 + 2506) )
      {
        v109 = PrepareIndependentFlipToken(
                 (struct _D3DKMT_PRESENTHISTORYTOKEN *)v71,
                 v104,
                 (struct VIDSCH_SUBMIT_DATA_BASE *)p_Next,
                 (struct DXGCONTEXT *)v101,
                 v213);
        v98 = (CRefCountedBuffer *)p_Next[5];
        LODWORD(v66) = v109;
        v206 = v98;
LABEL_139:
        if ( (int)v66 < 0 )
          goto LABEL_249;
      }
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_167;
      Next = (int)v71->Next;
      LOBYTE(v111) = 0;
      Next_high = HIDWORD(v71->Next);
      v113 = 0LL;
      v114 = 0;
      v207 = (struct _SLIST_ENTRY)0LL;
      v115 = 0;
      v198 = 0;
      v209 = 0uLL;
      LOBYTE(v200) = 0;
      v199 = 0;
      v208 = 0uLL;
      Srca = Next_high;
      v116 = Next - 1;
      switch ( Next )
      {
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          v117 = v71[1].Next;
          break;
        case 2:
          v117 = (struct _SLIST_ENTRY *)*((_QWORD *)&v71[1].Next + 1);
          break;
        default:
          v117 = 0LL;
          break;
      }
      switch ( Next )
      {
        case 1:
          v113 = (__int64)(&v71[3].Next + 1);
          break;
        case 2:
          v113 = (__int64)&v71[51].Next + 4;
          break;
        case 3:
          v113 = (__int64)(&v71[2].Next + 1);
          break;
      }
      v118 = (unsigned int)(Next - 1);
      if ( Next == 1 )
      {
        v111 = v71[3].Next;
        v198 = HIDWORD(v111);
        v207 = v71[2];
      }
      else if ( Next == 2 )
      {
        v111 = *(struct _SLIST_ENTRY **)((char *)&v71[7].Next + 4);
        v198 = HIDWORD(v111);
        v207 = *(struct _SLIST_ENTRY *)((char *)&v71[6] + 4);
        v200 = HIDWORD(v71[47].Next);
        v119 = *(__int128 *)((char *)&v71[47] + 12);
        v116 = *((unsigned int *)&v71[47].Next + 2);
        v209 = *(__int128 *)((char *)&v71[46] + 4);
        v114 = v209;
        v208 = v119;
        v115 = v119;
        v199 = v116;
      }
      if ( v113 )
      {
        v120 = *(_DWORD *)v113;
        if ( *(_DWORD *)v113 >= 0x10u )
        {
          v120 = 16;
        }
        else if ( !v120 )
        {
LABEL_164:
          McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq(
            v198,
            v118,
            v113,
            (__int64)v195,
            (char)v71,
            Next,
            Next_high,
            (char)v117,
            (char)v207.Next,
            *((char *)&v207.Next + 8),
            SBYTE4(v207.Next),
            *((char *)&v207.Next + 12),
            (char)v111,
            v198,
            v120,
            (__int64)v230,
            (__int64)v229,
            (__int64)v228,
            (__int64)v227,
            v114,
            SBYTE8(v209),
            SBYTE4(v209),
            SBYTE12(v209),
            v200,
            v199,
            v115,
            SBYTE8(v208),
            SBYTE4(v208),
            SBYTE12(v208));
          goto LABEL_166;
        }
        v118 = v113 + 12;
        v121 = v120;
        v113 = 0LL;
        do
        {
          v122 = *(_DWORD *)(v118 - 8);
          v118 += 16LL;
          *(_DWORD *)((char *)v230 + v113) = v122;
          v113 += 4LL;
          *(_DWORD *)&v228[v113 + 60] = *(_DWORD *)(v118 - 16);
          *(_DWORD *)&v227[v113 + 60] = *(_DWORD *)(v118 - 20);
          *(_DWORD *)&v227[v113 - 4] = *(_DWORD *)(v118 - 12);
          --v121;
        }
        while ( v121 );
        LOBYTE(Next_high) = Srca;
        goto LABEL_164;
      }
      LODWORD(Timeout) = Next_high;
      *(_DWORD *)Alertable = Next;
      McTemplateK0ppqqx(v116, &EventSubmitPresentHistory, 0LL, v195, v71, *(_QWORD *)Alertable, Timeout, v117);
LABEL_166:
      v97 = v194;
      v101 = a9;
LABEL_167:
      if ( !v101 || !a7 )
        goto LABEL_202;
      *(_BYTE *)(a7 + 1512) = (*((_BYTE *)p_Next + 3) & 1) == 0;
      if ( !*((_BYTE *)v97 + 185) && (*(_DWORD *)(v101 + 412) & 0x10) != 0 )
      {
        v123 = *(_DWORD *)(a7 + 92);
        v193 = v123 + 1;
        DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
          (DXGCONTEXT *)v101,
          *(struct DXGCONTEXT ***)(a7 + 1496),
          v123,
          0LL,
          0);
        goto LABEL_202;
      }
      v94 = *(unsigned int *)(a7 + 92);
      if ( !(_DWORD)v94 || !DXGADAPTER::IsDxgmms2(v97) )
        goto LABEL_202;
      v193 = v94 + 1;
      v211 = _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v101 + 16) + 1776LL));
      BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*(DXGDEVICE **)(v101 + 16));
      if ( !BroadcastPresentSyncObject )
      {
        v127 = WdLogNewEntry5_WdError(v125, v124, v126);
        *(_QWORD *)(v127 + 24) = -1073741801LL;
        *(_QWORD *)(v127 + 32) = 2846LL;
        WdLogEvent5_WdError(v127);
        LODWORD(v66) = -1073741801;
        goto LABEL_249;
      }
      v128 = *(unsigned int *)(a7 + 92);
      v129 = 0LL;
      P = 0LL;
      v222 = 0;
      if ( (unsigned int)v128 <= 8 )
      {
        PoolWithTag = v221;
        P = v221;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v128 < 8 )
          goto LABEL_182;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v128, 0x4B677844u);
        P = PoolWithTag;
      }
      v222 = v128;
      if ( !PoolWithTag )
      {
LABEL_183:
        LODWORD(v66) = -1073741801;
        goto LABEL_249;
      }
      memset(PoolWithTag, 0, 8 * v128);
      v129 = P;
LABEL_182:
      if ( !v129 )
        goto LABEL_183;
      v131 = 1;
      if ( v193 > 1 )
      {
        v132 = 8LL;
        while ( 1 )
        {
          v133 = *(_QWORD *)(v132 + *(_QWORD *)(a7 + 1496));
          if ( (*(_DWORD *)(v133 + 412) & 0x10) != 0 )
            break;
          v134 = v131++ - 1;
          v129[v134] = *(_QWORD *)(v133 + 272);
          v132 += 8LL;
          if ( v131 >= v193 )
            goto LABEL_188;
        }
        LODWORD(v66) = -1073741811;
        if ( P != v221 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_249;
      }
LABEL_188:
      LODWORD(v66) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v195 + 65) + 8LL)
                                                                       + 640LL))(
                       0LL,
                       0LL,
                       *(unsigned int *)(a7 + 92));
      if ( (int)v66 < 0 )
      {
        v99 = (__int64)P;
        if ( P == v221 || !P )
          goto LABEL_248;
        goto LABEL_191;
      }
      v135 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*((_QWORD *)v195 + 65) + 8LL)
                                                                                             + 624LL))(
               *(_QWORD *)(v101 + 272),
               BroadcastPresentSyncObject,
               v211);
      v99 = (__int64)P;
      LODWORD(v66) = v135;
      if ( v135 < 0 )
      {
        if ( P == v221 || !P )
          goto LABEL_248;
LABEL_191:
        ExFreePoolWithTag((PVOID)v99, 0);
        goto LABEL_248;
      }
      if ( P != v221 && P )
        ExFreePoolWithTag(P, 0);
LABEL_202:
      v66 = 0LL;
      Global = DXGGLOBAL::GetGlobal(v99, v94);
      v204 = Global;
      v205 = 0;
      if ( !Global )
      {
        v139 = WdLogNewEntry5_WdAssertion(v138, v137);
        *(_QWORD *)(v139 + 24) = 2313LL;
        WdLogEvent5_WdAssertion(v139);
        Global = v204;
      }
      if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
      {
        v142 = WdLogNewEntry5_WdAssertion(v141, v140);
        *(_QWORD *)(v142 + 24) = 2318LL;
        WdLogEvent5_WdAssertion(v142);
      }
      if ( !v192 )
        goto LABEL_232;
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v204);
      v143 = *((_DWORD *)v194 + 613);
      Current = DXGPROCESS::GetCurrent(v145, v144);
      v147 = (v192 >> 6) & 0xFFFFFF;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
      if ( v143 < 2000 )
      {
        if ( v147 >= *((_DWORD *)Current + 56) )
        {
          v151 = v192;
        }
        else
        {
          v159 = *((_QWORD *)Current + 26);
          v160 = 2LL * v147;
          v161 = v147;
          v151 = v192;
          v162 = *(_DWORD *)(v159 + 8 * v160 + 8);
          if ( ((v192 >> 25) & 0x60) == (*(_BYTE *)(v159 + 8 * v160 + 8) & 0x60)
            && (v162 & 0x2000) == 0
            && (v162 & 0x1F) != 0 )
          {
            v163 = 2 * v161;
            v164 = v162 & 0x1F;
            if ( (_BYTE)v164 == 8 )
            {
              v66 = *(_QWORD *)(v159 + 8 * v163);
              goto LABEL_230;
            }
            v165 = WdLogNewEntry5_WdError((v192 >> 25) & 0x60, v164, v163);
            *(_QWORD *)(v165 + 24) = 267LL;
            WdLogEvent5_WdError(v165);
          }
        }
        v66 = 0LL;
LABEL_230:
        ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
        KeLeaveCriticalRegion();
        if ( !v66 )
        {
LABEL_218:
          v158 = WdLogNewEntry5_WdError(v141, v140, v157);
          LODWORD(v66) = -1073741811;
          *(_QWORD *)(v158 + 24) = v151;
          *(_QWORD *)(v158 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v158);
          if ( v205 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v204);
          goto LABEL_249;
        }
        goto LABEL_231;
      }
      if ( v147 >= *((_DWORD *)Current + 56) )
      {
        v151 = v192;
        goto LABEL_216;
      }
      v148 = *((_QWORD *)Current + 26);
      v149 = 2LL * v147;
      v150 = v147;
      v151 = v192;
      v152 = *(_DWORD *)(v148 + 8 * v149 + 8);
      if ( ((v192 >> 25) & 0x60) != (*(_BYTE *)(v148 + 8 * v149 + 8) & 0x60)
        || (v152 & 0x2000) != 0
        || (v152 & 0x1F) == 0 )
      {
        goto LABEL_216;
      }
      v153 = 2 * v150;
      v154 = v152 & 0x1F;
      if ( (_BYTE)v154 != 11 )
      {
        v155 = WdLogNewEntry5_WdError((v192 >> 25) & 0x60, v154, v153);
        *(_QWORD *)(v155 + 24) = 267LL;
        WdLogEvent5_WdError(v155);
LABEL_216:
        v156 = 0LL;
        goto LABEL_217;
      }
      v156 = *(_QWORD *)(v148 + 8 * v153);
LABEL_217:
      ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
      KeLeaveCriticalRegion();
      if ( !v156 )
        goto LABEL_218;
      v66 = *(_QWORD *)(v156 + 32);
LABEL_231:
      v101 = a9;
LABEL_232:
      if ( *((_BYTE *)v194 + 185) )
      {
        v171 = p_Next[3];
        if ( v171 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v171 + 4));
          v171 = p_Next[3];
        }
        v172 = DXGPROCESS::GetCurrent(v141, v140);
        LODWORD(v66) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                         (char *)v194 + 4144,
                         v172,
                         v101,
                         *p_Next,
                         v203,
                         v71,
                         v171,
                         v66);
        if ( (int)v66 < 0 )
        {
          v173 = (CRefCountedBuffer *)p_Next[3];
          if ( v173 )
            CRefCountedBuffer::RefCountedBufferRelease(v173);
        }
      }
      else if ( v101 )
      {
        if ( *(struct _KTHREAD **)(v101 + 464) != KeGetCurrentThread() )
        {
          v166 = WdLogNewEntry5_WdAssertion(v141, v140);
          *(_QWORD *)(v166 + 24) = 2943LL;
          WdLogEvent5_WdAssertion(v166);
        }
        v167 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v101 + 16) + 16LL) + 520LL) + 8LL);
        if ( (*(_DWORD *)(v101 + 412) & 0x10) != 0 )
          LODWORD(v66) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(v167 + 432))(*(_QWORD *)(v101 + 304), p_Next);
        else
          LODWORD(v66) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(v167 + 424))(*(_QWORD *)(v101 + 272), p_Next);
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v218, (struct DXGFASTMUTEX *const)(v66 + 32), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v218);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v66, v195);
        LODWORD(v66) = (*(__int64 (__fastcall **)(_QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v169 + 8)
                                                                                                  + 1008LL))(
                         p_Next,
                         v170,
                         VidSchSyncObject);
        if ( v218[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v218);
      }
      if ( v205 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v204);
LABEL_248:
      if ( (int)v66 >= 0 )
        goto LABEL_260;
LABEL_249:
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      if ( (*(_DWORD *)p_Next & 0x1000000) != 0 )
      {
        v174 = 0;
        if ( v193 )
        {
          v175 = 0LL;
          do
          {
            if ( a9 )
              v176 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 1496) + v175) + 408LL);
            else
              LOBYTE(v176) = 0;
            if ( *((_BYTE *)p_Next + 356) )
              v177 = (_QWORD *)((char *)&p_Next[8 * (unsigned __int64)(v174 * *((_DWORD *)p_Next + 139)) + 75]
                              + *((_DWORD *)p_Next + 139) * ((8 * *((_DWORD *)p_Next + 140) + 191) & 0xFFFFFFF8));
            else
              v177 = p_Next + 62;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v195 + 68) + 8LL) + 424LL))(
              *((_QWORD *)v195 + 69),
              (unsigned int)(1 << v176),
              *v177,
              0LL);
            ++v174;
            v175 += 8LL;
          }
          while ( v174 < v193 );
          v95 = v214;
          v98 = v206;
        }
      }
LABEL_260:
      if ( v98 )
        CRefCountedBuffer::RefCountedBufferRelease(v98);
      if ( !v95 )
        goto LABEL_265;
      CRefCountedBuffer::RefCountedBufferRelease(v95);
      CVidSchSubmitData::~CVidSchSubmitData(&v215);
      v48 = v66;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v217);
LABEL_268:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v223);
      return v48;
    default:
      LODWORD(v66) = -1071775733;
      ExpInterlockedPushEntrySList(v67, v71 - 1);
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v181 = WdLogNewEntry5_WdWarning(v179, v178, v180);
      *(_QWORD *)(v181 + 24) = DXGPROCESS::GetCurrent(v183, v182);
      WdLogEvent5_WdWarning(v181);
LABEL_265:
      CVidSchSubmitData::~CVidSchSubmitData(&v215);
      v48 = v66;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v217);
      goto LABEL_268;
  }
}
