/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00F7380 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00FA060 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C0111EA0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0115D80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     DxgkPresent @ 0x1C01251E0 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0218090 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresentRedirected @ 0x1C0227800 (DxgkPresentRedirected.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011958 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0ppqqx @ 0x1C0037678 (McTemplateK0ppqqx.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C003D23C (--1KOBJECTREF@@QEAA@XZ.c)
 *     McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq @ 0x1C003D60C (McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FBC8C (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C011CD94 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C012F2FC (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@@Z @ 0x1C01F75D4 (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C01FE894 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0226FA0 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 */

__int64 __fastcall SubmitPresentHistoryToken(
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a3,
        struct CWin32kLocks *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        struct DXGK_PRESENT_PARAMS *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT *a9,
        struct _PRESENT_REDIRECTED_PARAMS *a10)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v11; // r12
  struct _PRESENT_REDIRECTED_PARAMS *v14; // rcx
  __int64 v15; // rax
  DXGADAPTER *v17; // rdi
  struct ADAPTER_RENDER *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v25; // r9d
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v28; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v29; // rax
  __int64 v30; // rcx
  char *v31; // rdi
  _QWORD *v32; // rax
  struct _KTHREAD **v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  NTSTATUS v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v41; // rax
  unsigned int v42; // esi
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  const GUID *v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r14
  union _SLIST_HEADER *v58; // rsi
  PSLIST_ENTRY v59; // rax
  __int64 v60; // rcx
  PSLIST_ENTRY v61; // r15
  PSLIST_ENTRY v62; // rbx
  bool v63; // zf
  __int64 v64; // rax
  int v65; // ecx
  int v66; // edx
  bool v67; // cl
  unsigned int v68; // eax
  __int64 v69; // rax
  int v70; // edx
  bool v71; // dl
  int v72; // r8d
  int v73; // edx
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v77; // rdx
  unsigned __int64 v78; // r8
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ebx
  __int64 v80; // rax
  unsigned int v81; // ebx
  __int64 v82; // rax
  int v83; // ebx
  UINT NumRects; // ebx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // ebx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v89; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v91; // rdi
  CRefCountedBuffer *v92; // rbx
  unsigned int v93; // eax
  DXGADAPTER *v94; // rsi
  CRefCountedBuffer *v95; // rdi
  __int64 v96; // rcx
  bool v97; // cc
  struct DXGCONTEXT *v98; // r13
  unsigned int v99; // edx
  void *v100; // r8
  struct DXGK_PRESENT_PARAMS *v101; // rax
  int v102; // eax
  __int64 v103; // rax
  struct CRefCountedBuffer *v104; // rax
  int v105; // eax
  int Next; // esi
  struct _SLIST_ENTRY *v107; // rax
  int Next_high; // r9d
  char v109; // r13
  __int64 v110; // rcx
  struct _SLIST_ENTRY *v111; // r10
  __int64 v112; // r8
  __int64 v113; // rdx
  struct _SLIST_ENTRY v114; // xmm0
  struct _SLIST_ENTRY v115; // xmm0
  unsigned int v116; // r11d
  __int64 v117; // r9
  int v118; // ecx
  unsigned int v119; // r8d
  int v120; // edx
  __int64 v121; // rcx
  __int64 v122; // rax
  _QWORD *v123; // r9
  __int64 v124; // r14
  _BYTE *PoolWithTag; // r9
  unsigned int v126; // edx
  __int64 v127; // r8
  __int64 v128; // r10
  __int64 v129; // rcx
  int v130; // eax
  __int64 v131; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rax
  int DriverVersion; // esi
  struct DXGPROCESS *Current; // r13
  unsigned int v139; // r15d
  __int64 v140; // r9
  __int64 v141; // rax
  __int64 v142; // r8
  unsigned int v143; // r15d
  int v144; // edx
  __int64 v145; // rax
  __int64 v146; // rsi
  __int64 v147; // rax
  __int64 v148; // r9
  __int64 v149; // rax
  __int64 v150; // r8
  int v151; // edx
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v156; // r9
  __int64 v157; // r10
  struct DXGPROCESS *v158; // rax
  CRefCountedBuffer *v159; // rcx
  unsigned int v160; // esi
  __int64 v161; // r15
  int v162; // r8d
  _QWORD *v163; // r10
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // rbx
  __int64 v168; // rcx
  __int64 v169; // rax
  __int64 v170; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  unsigned int v173; // [rsp+F0h] [rbp-80h]
  unsigned int v174; // [rsp+F4h] [rbp-7Ch]
  DXGADAPTER *v175; // [rsp+100h] [rbp-70h]
  struct ADAPTER_RENDER *v176; // [rsp+110h] [rbp-60h]
  char v177; // [rsp+118h] [rbp-58h]
  __int64 v178; // [rsp+120h] [rbp-50h]
  int v179; // [rsp+120h] [rbp-50h]
  PRKSEMAPHORE Semaphore; // [rsp+128h] [rbp-48h]
  char Srca; // [rsp+130h] [rbp-40h]
  struct DXGGLOBAL *v183; // [rsp+138h] [rbp-38h] BYREF
  char v184; // [rsp+140h] [rbp-30h]
  struct _SLIST_ENTRY *v185; // [rsp+148h] [rbp-28h]
  DXGPRESENTHISTORYTOKENQUEUE *v186; // [rsp+150h] [rbp-20h]
  CRefCountedBuffer *v187; // [rsp+158h] [rbp-18h]
  struct _SLIST_ENTRY v188; // [rsp+160h] [rbp-10h]
  __int128 v189; // [rsp+170h] [rbp+0h]
  __int128 v190; // [rsp+180h] [rbp+10h]
  CRefCountedBuffer *v191; // [rsp+190h] [rbp+20h]
  struct CRefCountedBuffer *v192; // [rsp+198h] [rbp+28h] BYREF
  signed __int64 v193; // [rsp+1A0h] [rbp+30h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+1A8h] [rbp+38h]
  PSLIST_ENTRY v195; // [rsp+1B0h] [rbp+40h]
  struct _PRESENT_REDIRECTED_PARAMS *v196; // [rsp+1B8h] [rbp+48h]
  struct _SLIST_ENTRY *v197[2]; // [rsp+1C0h] [rbp+50h] BYREF
  PRKSEMAPHORE v198; // [rsp+1D0h] [rbp+60h] BYREF
  _BYTE v199[16]; // [rsp+1D8h] [rbp+68h] BYREF
  PVOID Object[3]; // [rsp+1E8h] [rbp+78h] BYREF
  PVOID P; // [rsp+200h] [rbp+90h]
  _BYTE v202[64]; // [rsp+208h] [rbp+98h] BYREF
  int v203; // [rsp+248h] [rbp+D8h]
  char v204[8]; // [rsp+250h] [rbp+E0h] BYREF
  _QWORD *v205; // [rsp+258h] [rbp+E8h]
  int v206; // [rsp+260h] [rbp+F0h]
  _BYTE v208[64]; // [rsp+270h] [rbp+100h] BYREF
  _BYTE v209[64]; // [rsp+2B0h] [rbp+140h] BYREF
  char v210[64]; // [rsp+2F0h] [rbp+180h] BYREF
  _DWORD v211[16]; // [rsp+330h] [rbp+1C0h] BYREF

  v11 = a8;
  v14 = a10;
  v196 = a10;
  if ( a9 )
  {
    if ( a10 )
    {
LABEL_3:
      v15 = WdLogNewEntry5_WdError(a10);
      *(_QWORD *)(v15 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v15);
      return 3221225485LL;
    }
  }
  else if ( !a10 || !*((_DWORD *)a10 + 2) || !*(_QWORD *)a10 )
  {
    goto LABEL_3;
  }
  v173 = 0;
  v178 = 0LL;
  if ( a9 )
  {
    v14 = *(struct _PRESENT_REDIRECTED_PARAMS **)(*((_QWORD *)a9 + 2) + 16LL);
  }
  else
  {
    v178 = *(_QWORD *)a10;
    v173 = *((_DWORD *)a10 + 2);
  }
  v17 = (DXGADAPTER *)*((_QWORD *)v14 + 2);
  v175 = v17;
  v18 = (struct ADAPTER_RENDER *)*((_QWORD *)v17 + 316);
  v176 = v18;
  v19 = *((_QWORD *)v18 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 144)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v20 + 24) = 2475LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v63 = (struct ADAPTER_RENDER *)((char *)v18 + 736) == 0LL;
  v21 = (_QWORD *)((char *)v18 + 736);
  v205 = v21;
  if ( !v63 && (struct _KTHREAD *)v21[1] == KeGetCurrentThread() )
  {
    v22 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v22 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v22);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v25 = *((_DWORD *)v21 + 4);
      if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v23, &EventBlockThread, v24, v25);
    }
    ExAcquirePushLockSharedEx(v21, 0LL);
  }
  v206 = 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *((_DWORD *)v176 + 190)
    || (v28 = 8LL * ProcessSessionId, !*(_QWORD *)(v28 + *((_QWORD *)v176 + 96)))
    || (_mm_lfence(), v29 = *(DXGPRESENTHISTORYTOKENQUEUE **)(v28 + *((_QWORD *)v176 + 96)), (v186 = v29) == 0LL) )
  {
    v170 = WdLogNewEntry5_WdEvent(v28, v176);
    *(_QWORD *)(v170 + 24) = v17;
    WdLogEvent5_WdEvent(v170);
    v42 = -1073741811;
    goto LABEL_268;
  }
  Semaphore = (PRKSEMAPHORE)*((_QWORD *)v29 + 8);
  v198 = Semaphore;
  ObfReferenceObject(Semaphore);
  v206 = 0;
  ExReleasePushLockSharedEx(v21, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)a2 + 80) )
    COREACCESS::Release((struct _KTHREAD ***)a2 + 5);
  v31 = (char *)a2 + 8;
  if ( !*((_BYTE *)a2 + 32) )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = v31;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  v33 = (struct _KTHREAD **)*((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != v33[20] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v33);
  if ( *((_BYTE *)a3 + 16) )
  {
    v34 = *((_QWORD *)a3 + 1) + 120LL;
    *((_BYTE *)a3 + 16) = 0;
    ExReleasePushLockSharedEx(v34, 0LL);
    KeLeaveCriticalRegion();
    v35 = *((_QWORD *)a3 + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v35 + 16), (struct DXGADAPTER *)v35);
  }
  if ( a4 )
  {
    if ( *((_QWORD *)a4 + 2) )
    {
      (*(void (**)(void))(*((_QWORD *)a4 + 3) + 24LL))();
      *((_QWORD *)a4 + 2) = 0LL;
    }
    if ( *(_QWORD *)a4 )
    {
      v36 = *((_QWORD *)a4 + 5);
      if ( v36 )
      {
        if ( *((_DWORD *)a4 + 13) )
          (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)a4 + 4) + 288LL))(v36, *((_DWORD *)a4 + 12) == 0);
        (*(void (**)(void))(*((_QWORD *)a4 + 4) + 272LL))();
        *((_QWORD *)a4 + 5) = 0LL;
        *((_QWORD *)a4 + 6) = 0LL;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 296LL))(*(_QWORD *)a4, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 64LL))(*(_QWORD *)a4, *((_QWORD *)a4 + 1));
      *(_QWORD *)a4 = 0LL;
    }
  }
  Object[0] = (char *)v175 + 2496;
  Object[1] = Semaphore;
  v37 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, a6, 0LL);
  if ( v37 )
  {
    if ( v37 == 258 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v39, &EventPerformanceWarning, v40, 19);
      v43 = WdLogNewEntry5_WdEvent(v39, v38);
      *(_QWORD *)(v43 + 24) = 258LL;
      WdLogEvent5_WdEvent(v43);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
      v44 = COREDEVICEACCESS::AcquireShared(a2);
      v47 = v44;
      if ( v44 >= 0 )
      {
        v42 = 258;
      }
      else
      {
        v48 = WdLogNewEntry5_WdEvent(v46, v45);
        *(_QWORD *)(v48 + 24) = v47;
        WdLogEvent5_WdEvent(v48);
        COREDEVICEACCESS::AcquireSharedUncheck(a2);
        v42 = -1073741130;
      }
      KOBJECTREF::~KOBJECTREF((PVOID *)&v198);
      goto LABEL_268;
    }
    if ( !*((_BYTE *)a3 + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a3 + 1) + 24LL));
      v49 = *((_QWORD *)a3 + 1);
      *(_QWORD *)a3 = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v49 + 120, 0LL);
      *((_BYTE *)a3 + 16) = 1;
    }
    if ( *((_BYTE *)a2 + 32) )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39);
      v50[3] = 275LL;
      v50[4] = 4LL;
      v50[5] = v31;
      v50[6] = 0LL;
      v50[7] = 0LL;
      WdLogEvent5_WdCriticalError(v50);
    }
    v51 = *((_QWORD *)a2 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v51 + 160) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v51 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v52, &EventBlockThread, v53, 72);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3));
    }
    *((_BYTE *)a2 + 32) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 9) + 464LL) != 1 )
      goto LABEL_68;
    if ( *((_BYTE *)a2 + 80) )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)a2 + 5);
      if ( *(_DWORD *)(*((_QWORD *)a2 + 7) + 176LL) != 1 )
      {
        COREACCESS::Release((struct _KTHREAD ***)a2 + 5);
LABEL_68:
        COREACCESS::Release((struct _KTHREAD ***)a2 + 1);
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v56 = WdLogNewEntry5_WdEvent(v55, v54);
        v42 = -1073741130;
        *(_QWORD *)(v56 + 24) = -1073741130LL;
        WdLogEvent5_WdEvent(v56);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v198);
        goto LABEL_268;
      }
    }
    LODWORD(v57) = 0;
    v58 = (union _SLIST_HEADER *)((char *)v186 + 48);
    v59 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v186 + 3);
    if ( !v59
      && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(v186) || (v59 = ExpInterlockedPopEntrySList(v58)) == 0LL)
      || (v61 = v59 + 1, v195 = v59 + 1, v59 == (PSLIST_ENTRY)-16LL) )
    {
      v42 = -1073741801;
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v169 = WdLogNewEntry5_WdLowResource(v168);
      *(_QWORD *)(v169 + 24) = v186;
      *(_QWORD *)(v169 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v169);
      KOBJECTREF::~KOBJECTREF((PVOID *)&v198);
      goto LABEL_268;
    }
    v62 = 0LL;
    v197[0] = 0LL;
    v197[1] = (struct _SLIST_ENTRY *)v176;
    v63 = a8 == 0LL;
    if ( !a8 )
    {
      ++*((_DWORD *)v176 + 285);
      v62 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v176 + 70);
      if ( !v62 )
      {
        ++*((_DWORD *)v176 + 286);
        v62 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))v176 + 146))(
                              *((unsigned int *)v176 + 289),
                              *((unsigned int *)v176 + 291),
                              *((unsigned int *)v176 + 290),
                              (__int64)v176 + 1120);
      }
      v197[0] = v62;
      if ( v62 )
      {
        v64 = *((_QWORD *)v176 + 2);
        v65 = *(_DWORD *)(v64 + 2160);
        v66 = v65 < 0x2000 ? 1 : *(_DWORD *)(v64 + 256);
        v67 = v65 >= 0x2000 || *(_BYTE *)(v64 + 2452);
        v68 = v67 ? *(_DWORD *)(v64 + 2368) * ((v66 << 6) + ((8 * v66 + 191) & 0xFFFFFFF8)) + 8 * (v66 + 72) : 1296;
        memset(v62, 0, v68);
        v69 = *((_QWORD *)v176 + 2);
        v70 = *(_DWORD *)(v69 + 2160);
        v60 = v70 < 0x2000 ? 1LL : *(unsigned int *)(v69 + 256);
        v71 = v70 >= 0x2000 || *(_BYTE *)(v69 + 2452);
        v72 = *(_DWORD *)(v69 + 2368);
        BYTE4(v62[22].Next) = v71;
        if ( v71 )
        {
          v73 = 8 * v60;
          *((_DWORD *)&v62[35].Next + 2) = v60;
          v60 = (unsigned int)((_DWORD)v60 << 6);
          HIDWORD(v62[35].Next) = v72;
          *((_DWORD *)&v62[35].Next + 3) = v72 * (v60 + ((v73 + 191) & 0xFFFFFFF8)) + 16;
          v74 = v72 * (v60 + ((v73 + 191) & 0xFFFFFFF8)) + 576;
          *((_DWORD *)&v62[33].Next + 2) = v74;
          *((_DWORD *)&v62[33].Next + 3) = v73 + v74;
        }
      }
      if ( !v62 )
      {
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v76 = WdLogNewEntry5_WdLowResource(v75);
        *(_QWORD *)(v76 + 24) = 2562LL;
        WdLogEvent5_WdLowResource(v76);
        v42 = -1073741801;
        CVidSchSubmitData::~CVidSchSubmitData(v197);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v198);
        goto LABEL_268;
      }
      v63 = 1;
    }
    v77 = a1;
    v78 = 0x1C0000000uLL;
    if ( v63 )
      v11 = (struct VIDSCH_SUBMIT_DATA_BASE *)v62;
    v174 = 1;
    switch ( a1->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a1->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v80 + 24) = 53LL;
          goto LABEL_104;
        }
        v83 = 16 * FlipInterval + 67;
        goto LABEL_116;
      case D3DKMT_PM_REDIRECTED_FLIP:
        NumRects = a1->Token.Flip.DirtyRegions.NumRects;
        if ( NumRects > 0x10 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v80 + 24) = 63LL;
          goto LABEL_104;
        }
        v83 = 16 * NumRects + 831;
        goto LABEL_116;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a1->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v80 + 24) = 73LL;
LABEL_104:
          WdLogEvent5_WdAssertion(v80);
          v81 = 0;
LABEL_105:
          v82 = WdLogNewEntry5_WdWarning(v60, v77, v78);
          *(_QWORD *)(v82 + 24) = v81;
          WdLogEvent5_WdWarning(v82);
          v42 = -1073741811;
          CVidSchSubmitData::~CVidSchSubmitData(v197);
          KOBJECTREF::~KOBJECTREF((PVOID *)&v198);
          goto LABEL_268;
        }
        v83 = 16 * VidPnSourceId + 51;
LABEL_116:
        v81 = v83 & 0xFFFFFFF8;
        if ( v81 - 1 > 0x437 )
          goto LABEL_105;
        memmove(v61, v77, v81);
        v87 = PsGetCurrentProcess();
        ProcessDxgProcess = PsGetProcessDxgProcess(v87);
        v89 = ProcessDxgProcess;
        if ( ProcessDxgProcess )
        {
          if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
          {
            ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
            v91 = ThreadProperty;
            if ( ThreadProperty )
            {
              ObfDereferenceObject(ThreadProperty);
              v89 = *v91;
            }
          }
        }
        if ( !(*(unsigned int (__fastcall **)(PSLIST_ENTRY))(*(_QWORD *)(v89 + 104) + 256LL))(v61) )
        {
          LODWORD(v57) = -1071775733;
          ExpInterlockedPushEntrySList(v58, v61 - 1);
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          v167 = WdLogNewEntry5_WdWarning(v165, v164, v166);
          *(_QWORD *)(v167 + 24) = DXGPROCESS::GetCurrent();
          WdLogEvent5_WdWarning(v167);
          goto LABEL_265;
        }
        v92 = 0LL;
        v93 = *(_DWORD *)v11 & 0xFFFFFFDF;
        v94 = v175;
        *((_QWORD *)v11 + 14) = v61;
        v95 = 0LL;
        v96 = v93 | (32 * (a5 & 1 | 0x2000));
        *((_DWORD *)v11 + 31) = -1;
        *((_QWORD *)v11 + 13) = v186;
        *(_DWORD *)v11 = v96;
        v97 = *((_DWORD *)v175 + 540) < 0x2000;
        v192 = 0LL;
        v191 = 0LL;
        v187 = 0LL;
        if ( v97 && !*((_BYTE *)v175 + 2452) )
        {
          v98 = a9;
        }
        else
        {
          v98 = a9;
          if ( a9 )
          {
            v101 = a7;
            if ( !a7 )
              goto LABEL_134;
            v99 = *((_DWORD *)a7 + 368);
            v100 = (void *)*((_QWORD *)a7 + 185);
          }
          else
          {
            v99 = *(_DWORD *)(v178 + 1104);
            v100 = *(void **)(v178 + 1112);
          }
          v102 = ReadPresentPrivateDriverData(v175, v99, v100, &v192);
          v57 = v102;
          if ( v102 < 0 )
          {
            v103 = WdLogNewEntry5_WdError(v96);
            *(_QWORD *)(v103 + 24) = v57;
            WdLogEvent5_WdError(v103);
            goto LABEL_248;
          }
          v104 = v192;
          if ( v192 )
          {
            *((_DWORD *)v11 + 1) |= 4u;
            v92 = v104;
            v191 = v104;
            *((_QWORD *)v11 + 3) = v104;
          }
        }
        v101 = a7;
LABEL_134:
        if ( !*((_BYTE *)v175 + 185) )
        {
          LODWORD(v57) = 0;
          if ( !v98 && !*((_BYTE *)v175 + 2474) )
            goto LABEL_139;
          v105 = PrepareIndependentFlipToken((struct _D3DKMT_PRESENTHISTORYTOKEN *)v61, v101, v11, v98, v196);
          v95 = (CRefCountedBuffer *)*((_QWORD *)v11 + 5);
          LODWORD(v57) = v105;
          v187 = v95;
        }
        if ( (int)v57 < 0 )
        {
LABEL_249:
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          if ( (*(_DWORD *)v11 & 0x1000000) != 0 )
          {
            v160 = 0;
            if ( v174 )
            {
              v161 = 0LL;
              do
              {
                if ( a9 )
                  v162 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a7 + 187) + v161) + 392LL);
                else
                  LOBYTE(v162) = 0;
                if ( *((_BYTE *)v11 + 356) )
                  v163 = (_QWORD *)((char *)v11
                                  + 64 * (unsigned __int64)(v160 * *((_DWORD *)v11 + 141))
                                  + *((_DWORD *)v11 + 141) * ((8 * *((_DWORD *)v11 + 142) + 191) & 0xFFFFFFF8)
                                  + 608);
                else
                  v163 = (_QWORD *)((char *)v11 + 496);
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v176 + 68) + 8LL)
                                                                       + 424LL))(
                  *((_QWORD *)v176 + 69),
                  (unsigned int)(1 << v162),
                  *v163,
                  0LL);
                ++v160;
                v161 += 8LL;
              }
              while ( v160 < v174 );
              v92 = v191;
              v95 = v187;
            }
          }
LABEL_260:
          if ( v95 )
            CRefCountedBuffer::RefCountedBufferRelease(v95);
          if ( v92 )
          {
            CRefCountedBuffer::RefCountedBufferRelease(v92);
            CVidSchSubmitData::~CVidSchSubmitData(v197);
            v42 = v57;
            KOBJECTREF::~KOBJECTREF((PVOID *)&v198);
            goto LABEL_268;
          }
LABEL_265:
          CVidSchSubmitData::~CVidSchSubmitData(v197);
          v42 = v57;
          KOBJECTREF::~KOBJECTREF((PVOID *)&v198);
          goto LABEL_268;
        }
LABEL_139:
        if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_167;
        Next = (int)v61->Next;
        LOBYTE(v107) = 0;
        Next_high = HIDWORD(v61->Next);
        v109 = 0;
        v189 = 0uLL;
        v188 = (struct _SLIST_ENTRY)0LL;
        v185 = 0LL;
        v190 = 0uLL;
        LOBYTE(v179) = 0;
        v177 = 0;
        Srca = Next_high;
        v110 = Next - 1;
        switch ( Next )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            v111 = v61[1].Next;
            break;
          case 2:
            v111 = (struct _SLIST_ENTRY *)*((_QWORD *)&v61[1].Next + 1);
            break;
          default:
            v111 = 0LL;
            break;
        }
        switch ( Next )
        {
          case 1:
            v112 = (__int64)(&v61[3].Next + 1);
            break;
          case 2:
            v112 = (__int64)&v61[51].Next + 4;
            break;
          case 3:
            v112 = (__int64)(&v61[2].Next + 1);
            break;
          default:
            v112 = 0LL;
            break;
        }
        v113 = (unsigned int)(Next - 1);
        if ( Next == 1 )
        {
          v115 = v61[2];
          v107 = v61[3].Next;
          v185 = v107;
          v188 = v115;
        }
        else if ( Next == 2 )
        {
          v114 = *(struct _SLIST_ENTRY *)((char *)&v61[6] + 4);
          v107 = *(struct _SLIST_ENTRY **)((char *)&v61[7].Next + 4);
          v185 = v107;
          v188 = v114;
          v179 = HIDWORD(v61[47].Next);
          v110 = *((unsigned int *)&v61[47].Next + 2);
          v190 = *(__int128 *)((char *)&v61[46] + 4);
          v109 = v190;
          v177 = v110;
          v189 = *(__int128 *)((char *)&v61[47] + 12);
        }
        if ( !v112 )
        {
          LODWORD(Timeout) = Next_high;
          *(_DWORD *)Alertable = Next;
          McTemplateK0ppqqx(v110, &EventSubmitPresentHistory, 0LL, v176, v61, *(_QWORD *)Alertable, Timeout, v111);
          goto LABEL_166;
        }
        v116 = *(_DWORD *)v112;
        if ( *(_DWORD *)v112 >= 0x10u )
        {
          v116 = 16;
        }
        else if ( !v116 )
        {
LABEL_164:
          McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq(
            HIDWORD(v185),
            v113,
            v112,
            (__int64)v176,
            (char)v61,
            Next,
            Next_high,
            (char)v111,
            (char)v188.Next,
            *((char *)&v188.Next + 8),
            SBYTE4(v188.Next),
            *((char *)&v188.Next + 12),
            (char)v107,
            SBYTE4(v185),
            v116,
            (__int64)v211,
            (__int64)v210,
            (__int64)v209,
            (__int64)v208,
            v109,
            SBYTE8(v190),
            SBYTE4(v190),
            SBYTE12(v190),
            v179,
            v177,
            v189,
            SBYTE8(v189),
            SBYTE4(v189),
            SBYTE12(v189));
LABEL_166:
          v94 = v175;
          v98 = a9;
LABEL_167:
          if ( !v98 )
            goto LABEL_202;
          v96 = (__int64)a7;
          if ( !a7 )
            goto LABEL_202;
          *((_BYTE *)a7 + 1512) = (*((_BYTE *)v11 + 3) & 1) == 0;
          if ( !*((_BYTE *)v94 + 185) && (*((_DWORD *)v98 + 99) & 0x10) != 0 )
          {
            v119 = *((_DWORD *)a7 + 23);
            v174 = v119 + 1;
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v98, *((struct DXGCONTEXT ***)a7 + 187), v119, 0LL);
            goto LABEL_202;
          }
          if ( !*((_DWORD *)a7 + 23) || !DXGADAPTER::IsDxgmms2(v94) )
            goto LABEL_202;
          v174 = v120 + 1;
          v193 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v98 + 2) + 1776LL));
          BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)v98 + 2));
          if ( !BroadcastPresentSyncObject )
          {
            v122 = WdLogNewEntry5_WdError(v121);
            *(_QWORD *)(v122 + 24) = -1073741801LL;
            *(_QWORD *)(v122 + 32) = 2691LL;
            WdLogEvent5_WdError(v122);
            LODWORD(v57) = -1073741801;
            goto LABEL_249;
          }
          v123 = 0LL;
          P = 0LL;
          v203 = 0;
          v124 = *((unsigned int *)a7 + 23);
          if ( (unsigned int)v124 <= 8 )
          {
            PoolWithTag = v202;
            P = v202;
          }
          else
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v124 < 8 )
            {
LABEL_182:
              if ( !v123 )
                goto LABEL_183;
              v126 = 1;
              if ( v174 > 1 )
              {
                v127 = 8LL;
                while ( 1 )
                {
                  v128 = *(_QWORD *)(v127 + *((_QWORD *)a7 + 187));
                  if ( (*(_DWORD *)(v128 + 396) & 0x10) != 0 )
                    break;
                  v129 = v126++ - 1;
                  v123[v129] = *(_QWORD *)(v128 + 256);
                  v127 += 8LL;
                  if ( v126 >= v174 )
                    goto LABEL_188;
                }
                LODWORD(v57) = -1073741811;
                if ( P != v202 && P )
                  ExFreePoolWithTag(P, 0);
                goto LABEL_249;
              }
LABEL_188:
              LODWORD(v57) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v176 + 65) + 8LL)
                                                                               + 640LL))(
                               0LL,
                               0LL,
                               *((unsigned int *)a7 + 23));
              if ( (int)v57 < 0 )
              {
                v96 = (__int64)P;
                if ( P == v202 || !P )
                  goto LABEL_248;
                goto LABEL_191;
              }
              v130 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*((_QWORD *)v176 + 65) + 8LL) + 624LL))(
                       *((_QWORD *)v98 + 32),
                       BroadcastPresentSyncObject,
                       v193);
              v96 = (__int64)P;
              LODWORD(v57) = v130;
              if ( v130 < 0 )
              {
                if ( P == v202 || !P )
                  goto LABEL_248;
LABEL_191:
                ExFreePoolWithTag((PVOID)v96, 0);
                goto LABEL_248;
              }
              if ( P != v202 && P )
                ExFreePoolWithTag(P, 0);
LABEL_202:
              v131 = 0LL;
              Global = DXGGLOBAL::GetGlobal(v96);
              v183 = Global;
              v184 = 0;
              if ( !Global )
              {
                v134 = WdLogNewEntry5_WdAssertion(v133);
                *(_QWORD *)(v134 + 24) = 2306LL;
                WdLogEvent5_WdAssertion(v134);
                Global = v183;
              }
              if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
              {
                v136 = WdLogNewEntry5_WdAssertion(v135);
                *(_QWORD *)(v136 + 24) = 2311LL;
                WdLogEvent5_WdAssertion(v136);
              }
              if ( !v173 )
                goto LABEL_232;
              DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v183);
              DriverVersion = DXGADAPTER::GetDriverVersion(v175);
              Current = DXGPROCESS::GetCurrent();
              v139 = (v173 >> 6) & 0xFFFFFF;
              DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
              if ( DriverVersion >= 2000 )
              {
                if ( v139 >= *((_DWORD *)Current + 62) )
                {
                  v143 = v173;
                }
                else
                {
                  v140 = *((_QWORD *)Current + 29);
                  v141 = 2LL * v139;
                  v142 = v139;
                  v143 = v173;
                  v144 = *(_DWORD *)(v140 + 8 * v141 + 8);
                  if ( ((v173 >> 25) & 0x60) == (*(_BYTE *)(v140 + 8 * v141 + 8) & 0x60)
                    && (v144 & 0x2000) == 0
                    && (v144 & 0x1F) != 0 )
                  {
                    if ( (v144 & 0x1F) == 0xB )
                    {
                      v146 = *(_QWORD *)(v140 + 16 * v142);
LABEL_217:
                      ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
                      KeLeaveCriticalRegion();
                      if ( !v146 )
                        goto LABEL_218;
                      v131 = *(_QWORD *)(v146 + 32);
LABEL_231:
                      v98 = a9;
                      v61 = v195;
LABEL_232:
                      if ( *((_BYTE *)v175 + 185) )
                      {
                        v57 = *((_QWORD *)v11 + 3);
                        if ( v57 )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(v57 + 4));
                          v57 = *((_QWORD *)v11 + 3);
                        }
                        v158 = DXGPROCESS::GetCurrent();
                        LODWORD(v57) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                                         (char *)v175 + 4152,
                                         v158,
                                         v98,
                                         *(_QWORD *)v11,
                                         v186,
                                         v61,
                                         v57,
                                         v131);
                        if ( (int)v57 < 0 )
                        {
                          v159 = (CRefCountedBuffer *)*((_QWORD *)v11 + 3);
                          if ( v159 )
                            CRefCountedBuffer::RefCountedBufferRelease(v159);
                        }
                      }
                      else if ( v98 )
                      {
                        if ( *((struct _KTHREAD **)v98 + 56) != KeGetCurrentThread() )
                        {
                          v153 = WdLogNewEntry5_WdAssertion(v135);
                          *(_QWORD *)(v153 + 24) = 2788LL;
                          WdLogEvent5_WdAssertion(v153);
                        }
                        v154 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v98 + 2) + 16LL) + 520LL) + 8LL);
                        if ( (*((_DWORD *)v98 + 99) & 0x10) != 0 )
                          (*(void (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v154 + 432))(
                            *((_QWORD *)v98 + 36),
                            v11);
                        else
                          (*(void (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v154 + 424))(
                            *((_QWORD *)v98 + 32),
                            v11);
                      }
                      else
                      {
                        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v199, (struct DXGFASTMUTEX *const)(v131 + 32), 0);
                        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v199);
                        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v131, v176);
                        LODWORD(v57) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, __int64, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v156 + 8) + 1008LL))(
                                         v11,
                                         v157,
                                         VidSchSyncObject);
                        if ( v199[8] )
                          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v199);
                      }
                      if ( v184 )
                        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v183);
LABEL_248:
                      if ( (int)v57 >= 0 )
                        goto LABEL_260;
                      goto LABEL_249;
                    }
                    v145 = WdLogNewEntry5_WdError((v173 >> 25) & 0x60);
                    *(_QWORD *)(v145 + 24) = 316LL;
                    WdLogEvent5_WdError(v145);
                  }
                }
                v146 = 0LL;
                goto LABEL_217;
              }
              if ( v139 >= *((_DWORD *)Current + 62) )
              {
                v143 = v173;
              }
              else
              {
                v148 = *((_QWORD *)Current + 29);
                v149 = 2LL * v139;
                v150 = v139;
                v143 = v173;
                v151 = *(_DWORD *)(v148 + 8 * v149 + 8);
                if ( ((v173 >> 25) & 0x60) == (*(_BYTE *)(v148 + 8 * v149 + 8) & 0x60)
                  && (v151 & 0x2000) == 0
                  && (v151 & 0x1F) != 0 )
                {
                  if ( (v151 & 0x1F) == 8 )
                  {
                    v131 = *(_QWORD *)(v148 + 16 * v150);
                    goto LABEL_230;
                  }
                  v152 = WdLogNewEntry5_WdError((v173 >> 25) & 0x60);
                  *(_QWORD *)(v152 + 24) = 316LL;
                  WdLogEvent5_WdError(v152);
                }
              }
              v131 = 0LL;
LABEL_230:
              ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
              KeLeaveCriticalRegion();
              if ( !v131 )
              {
LABEL_218:
                v147 = WdLogNewEntry5_WdError(v135);
                LODWORD(v57) = -1073741811;
                *(_QWORD *)(v147 + 24) = v143;
                *(_QWORD *)(v147 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v147);
                if ( v184 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v183);
                goto LABEL_249;
              }
              goto LABEL_231;
            }
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v124, 0x4B677844u);
            P = PoolWithTag;
          }
          v203 = v124;
          if ( !PoolWithTag )
          {
LABEL_183:
            LODWORD(v57) = -1073741801;
            goto LABEL_249;
          }
          memset(PoolWithTag, 0, 8 * v124);
          v123 = P;
          goto LABEL_182;
        }
        v113 = v112 + 12;
        v117 = v116;
        v112 = 0LL;
        do
        {
          v118 = *(_DWORD *)(v113 - 8);
          v113 += 16LL;
          *(_DWORD *)((char *)v211 + v112) = v118;
          v112 += 4LL;
          *(_DWORD *)&v209[v112 + 60] = *(_DWORD *)(v113 - 16);
          *(_DWORD *)&v208[v112 + 60] = *(_DWORD *)(v113 - 20);
          *(_DWORD *)&v208[v112 - 4] = *(_DWORD *)(v113 - 12);
          --v117;
        }
        while ( v117 );
        LOBYTE(Next_high) = Srca;
        goto LABEL_164;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
      case D3DKMT_PM_SURFACECOMPLETE:
        v83 = 31;
        goto LABEL_116;
      case D3DKMT_PM_FLIPMANAGER:
        v83 = 47;
        goto LABEL_116;
      default:
        v86 = WdLogNewEntry5_WdAssertion(v60);
        *(_QWORD *)(v86 + 24) = 96LL;
        WdLogEvent5_WdAssertion(v86);
        v77 = a1;
        v83 = 7;
        goto LABEL_116;
    }
  }
  v41 = WdLogNewEntry5_WdEvent(v39, v38);
  *(_QWORD *)(v41 + 24) = v175;
  WdLogEvent5_WdEvent(v41);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
  COREDEVICEACCESS::AcquireSharedUncheck(a2);
  v42 = -1073741130;
  KOBJECTREF::~KOBJECTREF((PVOID *)&v198);
LABEL_268:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v204);
  return v42;
}
