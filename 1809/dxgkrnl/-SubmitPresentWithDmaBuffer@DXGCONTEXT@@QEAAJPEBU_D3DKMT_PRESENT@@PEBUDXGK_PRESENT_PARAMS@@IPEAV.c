/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0119AF0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B490 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C003A4A4 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C003D57C (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D9E8 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C013E22C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C01CCC3C (-DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C01D0A30 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentWithDmaBuffer(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        const struct DXGK_PRESENT_PARAMS *a3,
        unsigned int a4,
        struct DXGALLOCATION *a5,
        struct DXGALLOCATION *a6,
        struct _DXGKARG_PRESENT *a7,
        struct _VIDMM_DMA_BUFFER *a8,
        struct VIDSCH_SUBMIT_DATA_BASE *a9,
        struct COREDEVICEACCESS *a10)
{
  struct _VIDMM_DMA_BUFFER *v10; // rsi
  struct VIDSCH_SUBMIT_DATA_BASE *v12; // r12
  char v13; // r15
  struct DXGALLOCATION *v14; // r13
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  struct DXGALLOCATION *v16; // rcx
  struct COREDEVICEACCESS *v17; // r10
  __int64 v18; // rax
  __int64 v19; // r14
  struct _VIDMM_DMA_BUFFER *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  unsigned __int8 IsDxgmms2; // al
  __int64 v27; // rdx
  __int64 v28; // r13
  char *v29; // r14
  D3DGPU_VIRTUAL_ADDRESS *v30; // r15
  struct DXGPROCESS *Current; // rax
  char *v32; // rbx
  __int64 v33; // rcx
  const GUID *v34; // r8
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  char *v39; // rcx
  struct _DXGKARG_PRESENT *v40; // r13
  void *v41; // rbx
  UINT v42; // ecx
  UINT v43; // esi
  __int64 v44; // rcx
  void *v45; // rdx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rbx
  __int64 v51; // rax
  struct DXGALLOCATION *v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  UINT v57; // eax
  const struct DXGK_PRESENT_PARAMS *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v61; // eax
  __int64 v62; // rdx
  __int64 v63; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v69; // rsi
  __int64 v70; // r15
  int v71; // r13d
  __int64 v72; // rax
  __int64 v73; // rcx
  const GUID *v74; // r8
  int v75; // r9d
  __int64 v76; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v78; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v80; // rax
  int CurrentProcessSessionId; // ebx
  __int64 ThreadWin32Thread; // rax
  int v83; // esi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  _QWORD *v88; // rax
  unsigned __int8 v89; // cl
  _QWORD *v90; // rax
  __int64 v91; // rsi
  _QWORD *v92; // rax
  struct _DXGKARG_PRESENT *v93; // rdx
  __int64 v94; // rcx
  __int64 DmaSize; // rcx
  __int64 v96; // rax
  const GUID *v97; // r8
  _QWORD *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rcx
  bool v103; // si
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  UINT64 v105; // rbx
  bool v106; // zf
  __int64 v107; // rcx
  void *v108; // rdx
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rcx
  __int64 v114; // rax
  unsigned int v115; // eax
  void *pDmaBuffer; // rsi
  __int64 v117; // rcx
  int v118; // eax
  char *v119; // rcx
  __int64 v120; // rax
  unsigned int v121; // esi
  int v122; // r15d
  __int64 v123; // rcx
  __int64 v124; // rax
  const GUID *v125; // r8
  __int64 v126; // rbx
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rbx
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rax
  int v137; // eax
  __int64 v138; // rcx
  __int64 v139; // rcx
  __int64 v140; // rsi
  unsigned int *v141; // rsi
  _QWORD *v142; // r15
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // r9
  _QWORD *v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rcx
  _QWORD *v151; // r8
  __int64 v152; // rax
  __int64 v153; // rax
  const struct DXGK_PRESENT_PARAMS *v154; // rax
  int v155; // eax
  int v156; // ebx
  __int64 v157; // rax
  _QWORD *v158; // rax
  __int64 v159; // rax
  _QWORD *v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // r8
  unsigned int v166; // ebx
  char *v167; // rsi
  __int64 v168; // r8
  bool v170; // [rsp+70h] [rbp-90h]
  unsigned __int8 v171; // [rsp+71h] [rbp-8Fh]
  char v172; // [rsp+72h] [rbp-8Eh]
  struct _VIDMM_DMA_BUFFER *v173; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v174; // [rsp+80h] [rbp-80h]
  char *v175; // [rsp+88h] [rbp-78h] BYREF
  int v176; // [rsp+90h] [rbp-70h] BYREF
  const struct DXGK_PRESENT_PARAMS *v177; // [rsp+98h] [rbp-68h]
  struct DXGALLOCATION *v178; // [rsp+A0h] [rbp-60h]
  struct _DXGKARG_PRESENT *v179; // [rsp+A8h] [rbp-58h]
  D3DGPU_VIRTUAL_ADDRESS v180; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGALLOCATION *v181; // [rsp+B8h] [rbp-48h]
  UINT v182; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v183; // [rsp+C4h] [rbp-3Ch] BYREF
  struct DXGPROCESS *v184; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v185; // [rsp+D0h] [rbp-30h]
  __int64 v186; // [rsp+D8h] [rbp-28h]
  struct COREDEVICEACCESS *v187; // [rsp+E0h] [rbp-20h]
  int v188; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v189; // [rsp+F0h] [rbp-10h]
  char v190; // [rsp+F8h] [rbp-8h]
  LARGE_INTEGER v191; // [rsp+100h] [rbp+0h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v192; // [rsp+108h] [rbp+8h]
  _BYTE v193[16]; // [rsp+110h] [rbp+10h] BYREF
  _DXGKARG_SIGNALMONITOREDFENCE v194; // [rsp+120h] [rbp+20h] BYREF
  struct _DXGKARG_SIGNALMONITOREDFENCE v195; // [rsp+170h] [rbp+70h] BYREF
  char v196[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v197[8]; // [rsp+1C8h] [rbp+C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1D0h] [rbp+D0h] BYREF
  int v199; // [rsp+200h] [rbp+100h] BYREF
  int v200; // [rsp+204h] [rbp+104h]
  int v201; // [rsp+208h] [rbp+108h]
  int v202; // [rsp+20Ch] [rbp+10Ch]
  int v203; // [rsp+210h] [rbp+110h]
  __int64 v204; // [rsp+214h] [rbp+114h] BYREF
  int v205; // [rsp+21Ch] [rbp+11Ch]
  struct DXGALLOCATION *v206; // [rsp+220h] [rbp+120h]
  struct DXGALLOCATION *v207; // [rsp+228h] [rbp+128h]
  _QWORD v208[12]; // [rsp+230h] [rbp+130h] BYREF

  v10 = a8;
  v12 = a9;
  v13 = 0;
  v14 = a5;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a7->Flags.Value;
  v16 = a6;
  v17 = a10;
  v174 = a4;
  v177 = a3;
  v192 = a9;
  v179 = a7;
  v181 = a5;
  v178 = a6;
  v173 = a8;
  v187 = a10;
  v171 = 1;
  v175 = 0LL;
  v172 = 0;
  v170 = 1;
  a7->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a5 )
  {
    v18 = WdLogNewEntry5_WdError(a6);
    *(_QWORD *)(v18 + 24) = 8157LL;
LABEL_4:
    WdLogEvent5_WdError(v18);
    LODWORD(v19) = -1073741823;
    goto LABEL_224;
  }
  if ( (*((_DWORD *)this + 99) & 0x10) != 0 && !*((_QWORD *)a3 + 188) )
  {
    v18 = WdLogNewEntry5_WdError(a6);
    *(_QWORD *)(v18 + 24) = 8167LL;
    goto LABEL_4;
  }
  v20 = a8;
  while ( 1 )
  {
    if ( !v20 )
    {
      LODWORD(v19) = DXGCONTEXT::AcquireDmaBuffer(this, &v173, v17, 0);
      if ( (int)v19 < 0 )
      {
        v157 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v157 + 24) = this;
        WdLogEvent5_WdError(v157);
LABEL_223:
        v13 = 0;
        goto LABEL_224;
      }
      v10 = v173;
      if ( !v173 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v22 + 24) = 8187LL;
        WdLogEvent5_WdAssertion(v22);
        v10 = v173;
      }
      v16 = v178;
    }
    v200 &= 2u;
    v199 = 0;
    if ( v14 )
      v23 = *((_DWORD *)v14 + 4);
    else
      v23 = 0;
    v202 &= 2u;
    v201 = v23;
    if ( v16 )
      v24 = *((_DWORD *)v16 + 4);
    else
      v24 = 0;
    v203 = v24;
    v205 = 0;
    v206 = v14;
    v204 = v204 & 2 | 1;
    v25 = *((_QWORD *)this + 2);
    v207 = v16;
    v180 = 0LL;
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
    v28 = *(_QWORD *)(v27 + 544);
    v29 = (char *)&v204 + 4;
    v30 = &v180;
    if ( !IsDxgmms2 )
      v29 = 0LL;
    if ( !*((_BYTE *)this + 430) )
      v30 = 0LL;
    Current = DXGPROCESS::GetCurrent();
    v184 = Current;
    if ( Current )
    {
      v32 = (char *)Current + 144;
      if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
      {
        v184 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v32, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v35 = *((_DWORD *)v32 + 4);
            if ( v35 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v33, &EventBlockThread, v34, v35);
          }
          ExAcquirePushLockExclusiveEx(v32, 0LL);
        }
        *((_QWORD *)v32 + 1) = KeGetCurrentThread();
      }
    }
    v19 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, int *, __int64, _QWORD, int, UINT *, LARGE_INTEGER *, D3DGPU_VIRTUAL_ADDRESS *, struct DXGPROCESS **, char *, __int64, char *))(*(_QWORD *)(v28 + 8) + 568LL))(
            v10,
            &v199,
            3LL,
            v171,
            1,
            &v182,
            &v191,
            v30,
            &v184,
            v196,
            (__int64)v12 + 200,
            v29);
    if ( v184 )
    {
      v39 = (char *)v184 + 144;
      *((_QWORD *)v184 + 19) = 0LL;
      ExReleasePushLockExclusiveEx(v39, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (int)v19 < 0 )
    {
      v163 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v163 + 24) = this;
      *(_QWORD *)(v163 + 32) = v19;
      WdLogEvent5_WdWarning(v163);
      goto LABEL_223;
    }
    v13 = 1;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 544LL)
                                                                            + 8LL)
                                                                + 504LL))(
      v173,
      &v175);
    v40 = v179;
    v179->pDmaBuffer = v175;
    v40->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 544LL)
                                                                                     + 8LL)
                                                                         + 528LL))(v173);
    v41 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 560LL))(v173);
    v42 = v182;
    v40->pDmaBufferPrivateData = v41;
    v43 = *((_DWORD *)this + 52);
    v40->DmaBufferSegmentId = v42;
    v40->DmaBufferPhysicalAddress = v191;
    v40->DmaBufferPrivateDataSize = v43;
    if ( v172 )
    {
      memset(&v194, 0, sizeof(v194));
      v44 = *((_QWORD *)this + 30);
      v45 = (void *)*((_QWORD *)this + 23);
      v194.DmaSize = v40->DmaSize;
      v194.MultipassOffset = v40->MultipassOffset;
      v194.pDmaBuffer = v40->pDmaBuffer;
      v194.DmaBufferGpuVirtualAddress = v180;
      v194.DmaBufferPrivateDataSize = v43;
      v194.pDmaBufferPrivateData = v41;
      v194.MonitoredFenceGpuVa = *(_QWORD *)(v44 + 48);
      v194.MonitoredFenceCpuVa = *(void **)(v44 + 64);
      v194.MonitoredFenceValue = *((_QWORD *)this + 31);
      v194.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
      v194.hHwQueue = *(HANDLE *)(*(_QWORD *)(*((_QWORD *)v177 + 188) + 8LL * v174) + 32LL);
      v46 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v45, &v194);
      v19 = v46;
      v40->DmaBufferPrivateDataSize = v194.DmaBufferPrivateDataSize;
      v40->DmaSize = v194.DmaSize;
      v40->MultipassOffset = v194.MultipassOffset;
      v40->pDmaBuffer = v194.pDmaBuffer;
      v40->pDmaBufferPrivateData = v194.pDmaBufferPrivateData;
      if ( v46 == -1071775743 )
      {
        v158 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48);
        v158[3] = 275LL;
        v158[4] = 40LL;
        v158[5] = this;
        v158[6] = 0LL;
        v158[7] = 0LL;
        WdLogEvent5_WdCriticalError(v158);
LABEL_214:
        v159 = WdLogNewEntry5_WdWarning(v48, v47, v49);
        *(_QWORD *)(v159 + 24) = this;
        *(_QWORD *)(v159 + 32) = v19;
        WdLogEvent5_WdWarning(v159);
        goto LABEL_224;
      }
      if ( v46 < 0 )
        goto LABEL_214;
      v172 = 0;
    }
    *(_DWORD *)v12 ^= (*(_DWORD *)v12 ^ (*((unsigned __int8 *)this + 430) << 27)) & 0x8000000;
    if ( v170 )
      break;
LABEL_137:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 520LL)
                                                                + 8LL)
                                                    + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 528LL))
      && v40->pDmaBuffer <= v175 )
    {
      v114 = WdLogNewEntry5_WdAssertion(v113);
      *(_QWORD *)(v114 + 24) = 8594LL;
      WdLogEvent5_WdAssertion(v114);
    }
    v115 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 528LL))(v173);
    pDmaBuffer = v40->pDmaBuffer;
    v117 = v115;
    v118 = (int)v175;
    v119 = &v175[v117];
    if ( v40->pDmaBuffer > v119 )
    {
      v120 = WdLogNewEntry5_WdAssertion(v119);
      *(_QWORD *)(v120 + 24) = 8595LL;
      WdLogEvent5_WdAssertion(v120);
      v118 = (int)v175;
      LODWORD(pDmaBuffer) = v40->pDmaBuffer;
    }
    v121 = (_DWORD)pDmaBuffer - v118;
    v122 = LODWORD(v40->pDmaBufferPrivateData)
         - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 560LL))(v173);
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 528LL))(v173) < v121 )
    {
      v124 = WdLogNewEntry5_WdAssertion(v123);
      *(_QWORD *)(v124 + 24) = 8602LL;
      WdLogEvent5_WdAssertion(v124);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 544LL)
                                                                   + 8LL)
                                                       + 512LL))(v173);
    v175 = 0LL;
    if ( *((_BYTE *)this + 430) )
    {
      LODWORD(v126) = 0;
    }
    else
    {
      if ( v40->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 544LL))(v173) )
      {
        v128 = WdLogNewEntry5_WdAssertion(v127);
        *(_QWORD *)(v128 + 24) = 8617LL;
        WdLogEvent5_WdAssertion(v128);
      }
      v129 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 544LL)
                                                                               + 8LL)
                                                                   + 544LL))(v173);
      v130 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 536LL))(v173);
      if ( v40->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v129 + 24 * v130) )
      {
        v131 = WdLogNewEntry5_WdAssertion(v130);
        *(_QWORD *)(v131 + 24) = 8618LL;
        WdLogEvent5_WdAssertion(v131);
      }
      v126 = ((__int64)v40->pPatchLocationListOut
            - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 544LL))(v173))
           / 24;
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 536LL))(v173) < (unsigned int)v126 )
      {
        v133 = WdLogNewEntry5_WdAssertion(v132);
        *(_QWORD *)(v133 + 24) = 8628LL;
        WdLogEvent5_WdAssertion(v133);
      }
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 0x10) != 0 )
      {
        v134 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 544LL))(v173);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v173, v126, v134);
      }
    }
    if ( !v121
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 520LL)
                                                                + 8LL)
                                                    + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 528LL)) )
    {
      v136 = WdLogNewEntry5_WdAssertion(v135);
      *(_QWORD *)(v136 + 24) = 8643LL;
      WdLogEvent5_WdAssertion(v136);
    }
    v137 = *(_DWORD *)v12;
    if ( (*(_DWORD *)v12 & 0x20) != 0 )
    {
      if ( v170 || v172 )
        v138 = 64LL;
      else
        v138 = 0LL;
      v106 = bTracingEnabled == 0;
      *(_DWORD *)v12 = v138 | v137 & 0xFFFFFFBF;
      if ( !v106 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v138, &EventPerformanceWarning, v125, 1);
    }
    else
    {
      *(_DWORD *)v12 = v137 & 0xFFFFFFBF;
    }
    *((_QWORD *)v12 + 1) = v173;
    *((_DWORD *)v12 + 14) = 0;
    *((_DWORD *)v12 + 16) = 0;
    *((_DWORD *)v12 + 18) = 0;
    *((_DWORD *)v12 + 20) = 0;
    *((_DWORD *)v12 + 15) = v121;
    *((_DWORD *)v12 + 17) = 3;
    *((_DWORD *)v12 + 19) = v126;
    *((_DWORD *)v12 + 21) = v122;
    if ( *((_BYTE *)this + 430) )
    {
      *((_DWORD *)v12 + 22) = v122;
      *((_DWORD *)v12 + 21) = v40->DmaBufferPrivateDataSize;
    }
    v139 = *((unsigned __int8 *)v12 + 356);
    v140 = 560LL;
    if ( !(_BYTE)v139 )
      v140 = 488LL;
    v141 = (unsigned int *)((char *)v12 + v140);
    if ( (_BYTE)v139 )
      v142 = (_QWORD *)((char *)v12 + *((_DWORD *)v12 + 141) * ((8 * *((_DWORD *)v12 + 142) + 191) & 0xFFFFFFF8) + 608);
    else
      v142 = (_QWORD *)((char *)v12 + 496);
    if ( *((_DWORD *)v12 + 32) == 4 )
    {
      v14 = v181;
      if ( !v181 )
      {
        v143 = WdLogNewEntry5_WdAssertion(v139);
        *(_QWORD *)(v143 + 24) = 8678LL;
        WdLogEvent5_WdAssertion(v143);
      }
      if ( (*(_DWORD *)v12 & 0x40) != 0 )
      {
        v144 = WdLogNewEntry5_WdAssertion(v139);
        *(_QWORD *)(v144 + 24) = 8679LL;
        WdLogEvent5_WdAssertion(v144);
      }
      *v141 = *v141 & 0xFFFFFC00 | 1;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 544LL)
                                                                       + 8LL)
                                                           + 408LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
             *((_QWORD *)v14 + 3),
             v142) < 0 )
      {
        v146 = WdLogNewEntry5_WdAssertion(v145);
        *(_QWORD *)(v146 + 24) = 8698LL;
        WdLogEvent5_WdAssertion(v146);
      }
      if ( *((_BYTE *)v12 + 356) )
        v147 = (__int64)v12 + *((_DWORD *)v12 + 141) * ((8 * *((_DWORD *)v12 + 142) + 191) & 0xFFFFFFF8) + 600;
      else
        v147 = (__int64)v12 + 512;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 544LL)
                                                                         + 8LL)
                                                             + 216LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
        *(_QWORD *)(*((_QWORD *)v14 + 6) + 8LL),
        &v176,
        v147);
      v148 = (_QWORD *)((char *)v12 + 560);
      if ( *((_BYTE *)v12 + 356) )
        *(_WORD *)((char *)v148 + *((_DWORD *)v12 + 141) * ((8 * *((_DWORD *)v12 + 142) + 191) & 0xFFFFFFF8) + 32) = v176;
      else
        *((_DWORD *)v12 + 137) ^= (*((_DWORD *)v12 + 137) ^ (v176 << 17)) & 0x3E0000;
      v149 = *((_QWORD *)v14 + 5);
      if ( v149 && (*(_DWORD *)(v149 + 4) & 8) != 0 )
        v150 = *(_QWORD *)(*(_QWORD *)(v149 + 56) + 176LL);
      else
        v150 = 0LL;
      if ( *((_BYTE *)v12 + 356) )
        *(_QWORD *)((char *)v148 + *((_DWORD *)v12 + 141) * ((8 * *((_DWORD *)v12 + 142) + 191) & 0xFFFFFFF8) + 56) = v150;
      else
        *((_QWORD *)v12 + 71) = v150;
      if ( *((_BYTE *)v12 + 356) )
        v151 = (_QWORD *)((char *)v12 + *((_DWORD *)v12 + 141) * ((8 * *((_DWORD *)v12 + 142) + 191) & 0xFFFFFFF8) + 584);
      else
        v151 = (_QWORD *)((char *)v12 + 504);
      *v151 = *(_QWORD *)(*((_QWORD *)v14 + 6) + 16LL);
      v139 = *((_QWORD *)this + 23);
      if ( *((_BYTE *)v12 + 356) )
        v148 = (_QWORD *)((char *)v12 + *((_DWORD *)v12 + 141) * ((8 * *((_DWORD *)v12 + 142) + 191) & 0xFFFFFFF8) + 576);
      *v148 = v139;
      if ( *((_BYTE *)v12 + 356) )
        *((_DWORD *)v12 + 150) = -1;
    }
    else
    {
      if ( (*v141 & 0x3FF) != 0 )
      {
        v152 = WdLogNewEntry5_WdAssertion(v139);
        *(_QWORD *)(v152 + 24) = 8737LL;
        WdLogEvent5_WdAssertion(v152);
      }
      v14 = v181;
    }
    if ( *((struct _KTHREAD **)this + 56) != KeGetCurrentThread() )
    {
      v153 = WdLogNewEntry5_WdAssertion(v139);
      *(_QWORD *)(v153 + 24) = 8740LL;
      WdLogEvent5_WdAssertion(v153);
    }
    if ( (*((_DWORD *)this + 99) & 0x10) != 0 )
    {
      *((_QWORD *)v12 + 61) = *((_QWORD *)this + 31);
      *((_DWORD *)v12 + 124) = 0;
      *((_QWORD *)v12 + 64) = *(_QWORD *)(*((_QWORD *)this + 30) + 64LL);
      v154 = v177;
      *((_QWORD *)v12 + 63) = *(_QWORD *)(*((_QWORD *)this + 30) + 48LL);
      v155 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                             + 8LL)
                                                                                 + 432LL))(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v154 + 188) + 8LL * v174) + 40LL),
               v12);
    }
    else
    {
      v155 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                             + 8LL)
                                                                                 + 424LL))(
               *((_QWORD *)this + 32),
               v12);
    }
    v156 = v155;
    if ( v155 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                         + 8LL)
                                             + 440LL))(
        *((_QWORD *)this + 32),
        0LL);
      if ( (*v141 & 0x3FF) != 0 && *v142 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 424LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
          *((unsigned int *)v12 + 36),
          *v142,
          0LL);
      v13 = 1;
      LODWORD(v19) = v156;
      goto LABEL_224;
    }
    v16 = v178;
    v17 = v187;
    v20 = 0LL;
    v10 = 0LL;
    v173 = 0LL;
    v171 = 0;
    if ( !v172 && !v170 )
      return (unsigned int)v19;
  }
  v50 = *((_QWORD *)this + 2);
  if ( *((_BYTE *)this + 430) )
  {
    memset(v208, 0, sizeof(v208));
    v51 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 16) + 544LL)
                                                                            + 8LL)
                                                                + 552LL))(v173);
    v52 = v181;
    v53 = v51;
    v54 = *(_QWORD *)(v51 + 24);
    v208[4] = v54;
    if ( v181 )
      v208[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                  + 544LL)
                                                                                      + 8LL)
                                                                          + 248LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                  *((_QWORD *)v181 + 3),
                  *((unsigned __int8 *)this + 431),
                  *((unsigned int *)this + 98));
    if ( (v40->Flags.Value & 4) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 544LL)
                                                                              + 8LL)
                                                                  + 216LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
        *(_QWORD *)(*((_QWORD *)v52 + 6) + 8LL),
        &v183,
        &v208[6]);
      LOWORD(v208[7]) = v183;
    }
    else if ( v178 )
    {
      v55 = *((unsigned __int8 *)this + 431);
      v56 = *((unsigned int *)this + 98);
      v208[8] = *(_QWORD *)(v53 + 48);
      v208[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                  *((_QWORD *)v178 + 3),
                  v55,
                  v56);
      if ( !v208[9] )
      {
        v160 = (_QWORD *)WdLogNewEntry5_WdError(v54);
        LODWORD(v19) = -1073741811;
        v160[3] = this;
        v160[4] = -1073741811LL;
        v160[5] = 8385LL;
        WdLogEvent5_WdError(v160);
        goto LABEL_224;
      }
    }
    v40->DmaBufferGpuVirtualAddress = v180;
    v40->pAllocationList = (DXGK_ALLOCATIONLIST *)v208;
    v57 = 0;
    v40->pPatchLocationListOut = 0LL;
  }
  else
  {
    v40->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 16) + 544LL) + 8LL) + 552LL))(v173);
    v40->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 544LL))(v173);
    v57 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 544LL)
                                                                            + 8LL)
                                                                + 536LL))(v173);
  }
  v40->PatchLocationListOutSize = v57;
  if ( (*((_DWORD *)this + 99) & 0x10) != 0 )
  {
    v54 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 16) + 192LL) + 64LL) + 40LL) + 28LL) >= 0xA002u )
    {
      v58 = v177;
      LODWORD(v19) = ADAPTER_RENDER::DdiPresentToHwQueue(
                       (ADAPTER_RENDER *)v54,
                       *(void **)(*(_QWORD *)(*((_QWORD *)v177 + 188) + 8LL * v174) + 32LL),
                       v40);
      if ( (_DWORD)v19 == -1073741822 )
        LODWORD(v19) = ADAPTER_RENDER::DdiPresent(
                         *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                         *((void **)this + 23),
                         v40);
      goto LABEL_113;
    }
  }
  v61 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)v40->Flags.Value;
  v62 = *((_QWORD *)this + 2);
  v185 = 0LL;
  if ( (*(_BYTE *)&v61 & 1) != 0 || (v54 = *(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL), !*(_BYTE *)(v54 + 2474)) )
    v185 = *((_QWORD *)this + 23);
  v63 = *(_QWORD *)(v62 + 16);
  v186 = v63;
  v188 = -1;
  v189 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v190 = 1;
    v188 = 5031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v54, &EventProfilerEnter, 0LL, 5031);
  }
  else
  {
    v190 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v188, 5031);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v67 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v69 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v67 = *v69;
      }
    }
  }
  v70 = v67 + 120;
  if ( !v67 )
    v70 = 0LL;
  v71 = 0;
  if ( v70 && *(struct _KTHREAD **)(v70 + 8) == KeGetCurrentThread() )
  {
    v72 = WdLogNewEntry5_WdAssertion(v66);
    *(_QWORD *)(v72 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v72);
  }
  if ( v67 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v70, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v75 = *(_DWORD *)(v70 + 16);
        if ( v75 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v73, &EventBlockThread, v74, v75);
      }
      ExAcquirePushLockExclusiveEx(v70, 0LL);
    }
    v71 = 2;
    *(_QWORD *)(v70 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v63 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v63 + 16) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v78 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_90;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v80 = WdLogNewEntry5_WdAssertion(v76);
    *(_QWORD *)(v80 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v80);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v76);
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || IsThreadCrossSessionAttached()
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
    || !*(_QWORD *)ThreadWin32Thread )
  {
    v78 = 0LL;
    goto LABEL_90;
  }
  v78 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v78 )
  {
LABEL_90:
    v83 = 0;
    goto LABEL_91;
  }
  v83 = *(_DWORD *)(v78 + 136);
LABEL_91:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v197,
    *(struct DXGADAPTER **)(v63 + 16));
  v19 = (*(int (__fastcall **)(__int64, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v63 + 16) + 616LL))(v185, v179);
  if ( v197[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v85);
    v88[5] = v186;
    v88[6] = CurrentIrql;
    v88[3] = 275LL;
    v88[4] = 16LL;
    v89 = KeGetCurrentIrql();
    v88[7] = v89;
    WdLogEvent5_WdCriticalError(v88);
  }
  if ( v78 && *(_DWORD *)(v78 + 136) != v83 )
  {
    v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v85);
    v90[3] = 275LL;
    v90[4] = 38LL;
    v90[5] = *(int *)(v78 + 136);
    v90[6] = v83;
    v90[7] = 0LL;
    WdLogEvent5_WdCriticalError(v90);
  }
  v91 = v186;
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v186 + 16) + 4256LL));
  v92 = (_QWORD *)WdLogNewEntry5_WdTrace(v85, v84, v86, v87);
  v93 = v179;
  v94 = v185;
  v92[3] = v19;
  v92[4] = v94;
  v92[5] = v93->SubRectCnt;
  v92[6] = v93->pDmaBuffer;
  DmaSize = v93->DmaSize;
  v92[7] = DmaSize;
  if ( (_DWORD)v19 )
  {
    if ( (_DWORD)v19 != -1073741670 )
    {
      if ( (unsigned int)(v19 + 1073741816) > 0x15
        || (DmaSize = 2129921LL, !_bittest((const int *)&DmaSize, v19 + 1073741816)) )
      {
        if ( (_DWORD)v19 != -1073741674
          && (_DWORD)v19 != -1071775743
          && (_DWORD)v19 != -1071775736
          && (_DWORD)v19 != -1071775232 )
        {
          v96 = WdLogNewEntry5_WdError(DmaSize);
          *(_QWORD *)(v96 + 24) = v19;
          WdLogEvent5_WdError(v96);
        }
      }
    }
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v91 + 16));
  if ( v71 == 2 )
  {
    *(_QWORD *)(v70 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v70, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188);
  if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v60, &EventProfilerExit, v97, v188);
  v12 = v192;
  v40 = v179;
  v13 = 1;
  v58 = v177;
LABEL_113:
  if ( *((_BYTE *)this + 430) && (v40->pPatchLocationListOut || v40->PatchLocationListOutSize) )
  {
    v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60);
    v98[3] = 275LL;
    v98[4] = 9LL;
    v98[5] = v40;
    v98[6] = 0LL;
    v98[7] = 0LL;
    WdLogEvent5_WdCriticalError(v98);
  }
  if ( (_DWORD)v19 != -1071775743 )
  {
    if ( (int)v19 < 0 )
      goto LABEL_120;
LABEL_123:
    if ( *((_BYTE *)this + 430) )
    {
      if ( v40->pAllocationList != (DXGK_ALLOCATIONLIST *)v208 )
      {
        v101 = WdLogNewEntry5_WdAssertion(v60);
        *(_QWORD *)(v101 + 24) = 8508LL;
LABEL_128:
        WdLogEvent5_WdAssertion(v101);
      }
    }
    else if ( v40->pAllocationList != (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 552LL))(v173) )
    {
      v101 = WdLogNewEntry5_WdAssertion(v102);
      *(_QWORD *)(v101 + 24) = 8512LL;
      goto LABEL_128;
    }
    v170 = (_DWORD)v19 == -1071775743;
    v103 = v170;
    if ( (*((_DWORD *)this + 99) & 0x10) != 0 )
    {
      if ( !*((_QWORD *)this + 31) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v193,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v193);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                         + 8LL)
                                                                             + 272LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v58 + 188) + 8LL * v174) + 40LL),
          VidSchSyncObject,
          0LL);
        if ( v193[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v193);
      }
      v105 = *((_QWORD *)this + 31) + 1LL;
      v170 = (_DWORD)v19 == -1071775743;
      v106 = *((_BYTE *)this + 296) == 0;
      *((_QWORD *)this + 31) = v105;
      if ( v106 )
      {
        memset(&v195, 0, sizeof(v195));
        v107 = *((_QWORD *)this + 30);
        v108 = (void *)*((_QWORD *)this + 23);
        v195.DmaBufferPrivateDataSize = v40->DmaBufferPrivateDataSize;
        v195.DmaSize = v40->DmaSize;
        v195.MultipassOffset = v40->MultipassOffset;
        v195.pDmaBuffer = v40->pDmaBuffer;
        v195.pDmaBufferPrivateData = v40->pDmaBufferPrivateData;
        v195.DmaBufferGpuVirtualAddress = v180;
        v195.MonitoredFenceGpuVa = *(_QWORD *)(v107 + 48);
        v195.MonitoredFenceCpuVa = *(void **)(v107 + 64);
        v195.MonitoredFenceValue = v105;
        v195.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
        v195.hHwQueue = *(HANDLE *)(*(_QWORD *)(*((_QWORD *)v177 + 188) + 8LL * v174) + 32LL);
        v109 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v108, &v195);
        v19 = v109;
        v40->DmaBufferPrivateDataSize = v195.DmaBufferPrivateDataSize;
        v40->DmaSize = v195.DmaSize;
        v40->MultipassOffset = v195.MultipassOffset;
        v40->pDmaBuffer = v195.pDmaBuffer;
        v40->pDmaBufferPrivateData = v195.pDmaBufferPrivateData;
        v170 = v103;
        if ( v109 == -1071775743 )
        {
          v172 = 1;
        }
        else if ( v109 < 0 )
        {
          v161 = WdLogNewEntry5_WdWarning(v111, v110, v112);
          *(_QWORD *)(v161 + 24) = this;
          *(_QWORD *)(v161 + 32) = v19;
          WdLogEvent5_WdWarning(v161);
          v13 = 1;
          goto LABEL_224;
        }
      }
    }
    goto LABEL_137;
  }
  if ( (v40->Flags.Value & 4) == 0 )
    goto LABEL_123;
  v99 = WdLogNewEntry5_WdError(v60);
  *(_QWORD *)(v99 + 24) = this;
  WdLogEvent5_WdError(v99);
  LODWORD(v19) = -1073741823;
LABEL_120:
  if ( (_DWORD)v19 == -1071775736 )
  {
    v100 = WdLogNewEntry5_WdEvent(v60, v59);
    *(_QWORD *)(v100 + 24) = this;
    *(_QWORD *)(v100 + 32) = -1071775736LL;
    WdLogEvent5_WdEvent(v100);
  }
  else
  {
    v162 = WdLogNewEntry5_WdError(v60);
    *(_QWORD *)(v162 + 24) = this;
    *(_QWORD *)(v162 + 32) = (int)v19;
    WdLogEvent5_WdError(v162);
  }
LABEL_224:
  if ( v173 )
  {
    if ( v175 )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 512LL))();
      if ( (*((_DWORD *)this + 99) & 0x10) == 0 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 520LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)this + 32),
          0LL);
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v166 = 0;
      if ( *((_DWORD *)v12 + 50) )
      {
        do
        {
          v167 = (char *)v12 + 8 * v166;
          v168 = *((_QWORD *)v167 + 26);
          if ( v168 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 424LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
              0LL,
              v168,
              0LL);
            *((_QWORD *)v167 + 26) = 0LL;
          }
          ++v166;
        }
        while ( v166 < *((_DWORD *)v12 + 50) );
        v165 = *((_QWORD *)this + 2);
        v164 = v165;
      }
    }
    if ( v13 )
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v165 + 16) + 544LL), v173);
      v164 = *((_QWORD *)this + 2);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v164 + 16) + 544LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v173,
      0LL);
  }
  return (unsigned int)v19;
}
