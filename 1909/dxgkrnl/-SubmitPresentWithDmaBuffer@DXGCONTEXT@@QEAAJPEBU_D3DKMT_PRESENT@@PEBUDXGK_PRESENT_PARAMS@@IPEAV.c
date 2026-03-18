/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B5A0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010CFE0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C00409D4 (TraceDxgkPatchLocationList.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F61DC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01522BC (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0152D64 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C01FB800 (-DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C01FF298 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
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
  struct _DXGKARG_PRESENT *v10; // r13
  unsigned __int8 v11; // si
  struct _VIDMM_DMA_BUFFER *v12; // rbx
  char v14; // r12
  struct DXGALLOCATION *v15; // rdx
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  struct COREDEVICEACCESS *v17; // r10
  __int64 v18; // rax
  __int64 v19; // r15
  struct _VIDMM_DMA_BUFFER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  bool v28; // zf
  D3DGPU_VIRTUAL_ADDRESS *v29; // r9
  __int64 v30; // r11
  char *v31; // r10
  D3DGPU_VIRTUAL_ADDRESS *v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  void *v37; // rdx
  UINT v38; // ecx
  const struct DXGK_PRESENT_PARAMS *v39; // rsi
  UINT v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // ebx
  void *v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rbx
  __int64 v49; // rax
  const GUID *v50; // r8
  struct DXGALLOCATION *v51; // r11
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  UINT v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  const GUID *v61; // r8
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r15
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v73; // rsi
  __int64 v74; // r13
  __int64 v75; // rax
  __int64 v76; // rcx
  const GUID *v77; // r8
  int v78; // r9d
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v82; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v84; // rax
  int CurrentProcessSessionId; // ebx
  __int64 ThreadWin32Thread; // rax
  int v87; // esi
  __int64 v88; // rdx
  __int64 v89; // rcx
  _QWORD *v90; // rax
  unsigned __int8 v91; // cl
  _QWORD *v92; // rax
  __int64 v93; // rsi
  _QWORD *v94; // rax
  __int64 v95; // r8
  struct _DXGKARG_PRESENT *v96; // rdx
  __int64 v97; // rcx
  __int64 DmaSize; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  char v104; // r12
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  bool v108; // bl
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  UINT64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  void *v113; // rdx
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  unsigned int v121; // eax
  __int64 v122; // rdx
  void *pDmaBuffer; // rsi
  __int64 v124; // rcx
  int v125; // eax
  char *v126; // rcx
  __int64 v127; // rax
  unsigned int v128; // esi
  int v129; // r12d
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rax
  const GUID *v133; // r8
  __int64 v134; // rbx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rbx
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rax
  int v148; // eax
  __int64 v149; // rcx
  char *v150; // rcx
  __int64 v151; // rsi
  __int64 v152; // rdx
  unsigned int *v153; // rsi
  char *v154; // r12
  struct DXGALLOCATION *v155; // rbx
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rax
  char *v161; // r9
  __int64 v162; // rcx
  __int64 v163; // rcx
  char *v164; // r8
  __int64 v165; // rax
  __int64 v166; // rax
  const struct DXGK_PRESENT_PARAMS *v167; // r8
  int v168; // eax
  int v169; // ebx
  __int64 v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // rax
  _QWORD *v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rdx
  char *v177; // rsi
  __int64 v178; // r8
  __int64 v179; // rax
  __int64 v181; // [rsp+20h] [rbp-E0h]
  bool v182; // [rsp+60h] [rbp-A0h]
  char v183; // [rsp+62h] [rbp-9Eh]
  struct _VIDMM_DMA_BUFFER *v184; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v185; // [rsp+70h] [rbp-90h]
  char *v186; // [rsp+78h] [rbp-88h] BYREF
  int v187; // [rsp+80h] [rbp-80h]
  int v188; // [rsp+84h] [rbp-7Ch] BYREF
  struct DXGALLOCATION *v189; // [rsp+88h] [rbp-78h]
  D3DGPU_VIRTUAL_ADDRESS v190; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION *v191; // [rsp+98h] [rbp-68h]
  const struct DXGK_PRESENT_PARAMS *v192; // [rsp+A0h] [rbp-60h]
  UINT v193; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v194; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v195; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_PRESENT *v196; // [rsp+B8h] [rbp-48h]
  LARGE_INTEGER v197; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v198; // [rsp+C8h] [rbp-38h]
  struct COREDEVICEACCESS *v199; // [rsp+D0h] [rbp-30h]
  int v200; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v201; // [rsp+E0h] [rbp-20h]
  char v202; // [rsp+E8h] [rbp-18h]
  _DXGKARG_SIGNALMONITOREDFENCE v203; // [rsp+F0h] [rbp-10h] BYREF
  struct _DXGKARG_SIGNALMONITOREDFENCE v204; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v205[16]; // [rsp+190h] [rbp+90h] BYREF
  char v206[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v207[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1B0h] [rbp+B0h] BYREF
  int v209; // [rsp+1E0h] [rbp+E0h] BYREF
  int v210; // [rsp+1E4h] [rbp+E4h]
  int v211; // [rsp+1E8h] [rbp+E8h]
  int v212; // [rsp+1ECh] [rbp+ECh]
  int v213; // [rsp+1F0h] [rbp+F0h]
  __int64 v214; // [rsp+1F4h] [rbp+F4h] BYREF
  int v215; // [rsp+1FCh] [rbp+FCh]
  struct DXGALLOCATION *v216; // [rsp+200h] [rbp+100h]
  struct DXGALLOCATION *v217; // [rsp+208h] [rbp+108h]
  _QWORD v218[12]; // [rsp+210h] [rbp+110h] BYREF

  v10 = a7;
  v11 = 1;
  v12 = a8;
  v14 = 1;
  v15 = a6;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a7->Flags.Value;
  v17 = a10;
  v185 = a4;
  v192 = a3;
  v196 = a7;
  v191 = a5;
  v189 = a6;
  v184 = a8;
  v199 = a10;
  v186 = 0LL;
  v183 = 0;
  v182 = 1;
  a7->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) == 0 || a5 )
  {
    if ( (*((_DWORD *)this + 103) & 0x10) != 0 && !*((_QWORD *)a3 + 188) )
    {
      v18 = WdLogNewEntry5_WdError(a5, a6, a3);
      *(_QWORD *)(v18 + 24) = 8332LL;
      goto LABEL_4;
    }
    v20 = a8;
    while ( 1 )
    {
      if ( !v20 )
      {
        LODWORD(v19) = DXGCONTEXT::AcquireDmaBuffer(this, &v184, v17, 0);
        if ( (int)v19 < 0 )
        {
          v170 = WdLogNewEntry5_WdError(v22, v21, v23);
          *(_QWORD *)(v170 + 24) = this;
          WdLogEvent5_WdError(v170);
          goto LABEL_212;
        }
        v12 = v184;
        if ( !v184 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v22, v21);
          *(_QWORD *)(v24 + 24) = 8352LL;
          WdLogEvent5_WdAssertion(v24);
          v12 = v184;
        }
        v15 = v189;
      }
      v210 &= 2u;
      v209 = 0;
      if ( v191 )
        v25 = *((_DWORD *)v191 + 4);
      else
        v25 = 0;
      v212 &= 2u;
      v211 = v25;
      if ( v15 )
        v26 = *((_DWORD *)v15 + 4);
      else
        v26 = 0;
      v213 = v26;
      v215 = 0;
      v216 = v191;
      v214 = v214 & 2 | 1;
      v27 = *((_QWORD *)this + 2);
      v217 = v15;
      v197.QuadPart = 0LL;
      v190 = 0LL;
      v28 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL)) == 0;
      v31 = (char *)&v214 + 4;
      if ( v28 )
        v31 = (char *)v29;
      v32 = &v190;
      if ( !*((_BYTE *)this + 446) )
        v32 = v29;
      LODWORD(v181) = 1;
      v33 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, int *, __int64, _QWORD, __int64, UINT *, LARGE_INTEGER *, D3DGPU_VIRTUAL_ADDRESS *, char *, char *, char *))(v30 + 568))(
              v12,
              &v209,
              3LL,
              v11,
              v181,
              &v193,
              &v197,
              v32,
              v206,
              (char *)a9 + 200,
              v31);
      v19 = v33;
      if ( v33 < 0 )
      {
        v175 = WdLogNewEntry5_WdWarning(v35, v34, v36);
        *(_QWORD *)(v175 + 24) = this;
        *(_QWORD *)(v175 + 32) = v19;
        WdLogEvent5_WdWarning(v175);
        goto LABEL_212;
      }
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 544LL)
                                                                              + 8LL)
                                                                  + 504LL))(
        v184,
        &v186);
      v10->pDmaBuffer = v186;
      v10->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                       + 8LL)
                                                                           + 528LL))(v184);
      v37 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                  + 544LL)
                                                                                      + 8LL)
                                                                          + 560LL))(v184);
      v38 = v193;
      v39 = v192;
      v10->pDmaBufferPrivateData = v37;
      v40 = *((_DWORD *)this + 52);
      v10->DmaBufferSegmentId = v38;
      v10->DmaBufferPhysicalAddress = v197;
      v10->DmaBufferPrivateDataSize = v40;
      if ( v183 )
      {
        v41 = *((_QWORD *)this + 30);
        v203.DmaBufferPrivateDataSize = v40;
        v42 = 0;
        v203.DmaSize = v10->DmaSize;
        v203.MultipassOffset = v10->MultipassOffset;
        v203.pDmaBuffer = v10->pDmaBuffer;
        v203.DmaBufferGpuVirtualAddress = v190;
        *(_OWORD *)&v203.MonitoredFenceCpuVa = 0LL;
        *(_QWORD *)&v203.KernelSubmissionType = 0LL;
        v203.MonitoredFenceGpuVa = 0LL;
        v203.MonitoredFenceValue = 0LL;
        v203.pDmaBufferPrivateData = v37;
        v43 = (void *)*((_QWORD *)this + 23);
        *(&v203.DmaSize + 1) = 0;
        v203.MonitoredFenceGpuVa = *(_QWORD *)(v41 + 48);
        v203.MonitoredFenceCpuVa = *(void **)(v41 + 64);
        v203.MonitoredFenceValue = *((_QWORD *)this + 31);
        v44 = *((_QWORD *)v39 + 188);
        v203.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
        v203.hHwQueue = *(HANDLE *)(*(_QWORD *)(v44 + 8LL * v185) + 32LL);
        v45 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v43, &v203);
        v19 = v45;
        v10->DmaBufferPrivateDataSize = v203.DmaBufferPrivateDataSize;
        v10->DmaSize = v203.DmaSize;
        v10->MultipassOffset = v203.MultipassOffset;
        v10->pDmaBuffer = v203.pDmaBuffer;
        v10->pDmaBufferPrivateData = v203.pDmaBufferPrivateData;
        if ( v45 == -1071775743 )
        {
          v171 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v37);
          v171[3] = 275LL;
          v171[4] = 40LL;
          v171[5] = this;
          v171[6] = 0LL;
          v171[7] = 0LL;
          WdLogEvent5_WdCriticalError(v171);
LABEL_202:
          v172 = WdLogNewEntry5_WdWarning(v46, v37, v47);
          *(_QWORD *)(v172 + 24) = this;
          *(_QWORD *)(v172 + 32) = v19;
          WdLogEvent5_WdWarning(v172);
          v104 = 1;
          goto LABEL_214;
        }
        if ( v45 < 0 )
          goto LABEL_202;
        v183 = 0;
      }
      *(_DWORD *)a9 ^= (*(_DWORD *)a9 ^ (*((unsigned __int8 *)this + 446) << 27)) & 0x8000000;
      if ( v14 )
        break;
LABEL_125:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 520LL)
                                                                  + 8LL)
                                                      + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 528LL))
        && v10->pDmaBuffer <= v186 )
      {
        v120 = WdLogNewEntry5_WdAssertion(v119, v118);
        *(_QWORD *)(v120 + 24) = 8759LL;
        WdLogEvent5_WdAssertion(v120);
      }
      v121 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 544LL)
                                                                               + 8LL)
                                                                   + 528LL))(v184);
      pDmaBuffer = v10->pDmaBuffer;
      v124 = v121;
      v125 = (int)v186;
      v126 = &v186[v124];
      if ( v10->pDmaBuffer > v126 )
      {
        v127 = WdLogNewEntry5_WdAssertion(v126, v122);
        *(_QWORD *)(v127 + 24) = 8760LL;
        WdLogEvent5_WdAssertion(v127);
        v125 = (int)v186;
        LODWORD(pDmaBuffer) = v10->pDmaBuffer;
      }
      v128 = (_DWORD)pDmaBuffer - v125;
      v129 = LODWORD(v10->pDmaBufferPrivateData)
           - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 544LL)
                                                                               + 8LL)
                                                                   + 560LL))(v184);
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 528LL))(v184) < v128 )
      {
        v132 = WdLogNewEntry5_WdAssertion(v131, v130);
        *(_QWORD *)(v132 + 24) = 8767LL;
        WdLogEvent5_WdAssertion(v132);
      }
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 544LL)
                                                                     + 8LL)
                                                         + 512LL))(v184);
      v28 = *((_BYTE *)this + 446) == 0;
      v186 = 0LL;
      if ( v28 )
      {
        if ( v10->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 544LL))(v184) )
        {
          v137 = WdLogNewEntry5_WdAssertion(v136, v135);
          *(_QWORD *)(v137 + 24) = 8782LL;
          WdLogEvent5_WdAssertion(v137);
        }
        v138 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 544LL))(v184);
        v139 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                  + 544LL)
                                                                                      + 8LL)
                                                                          + 536LL))(v184);
        if ( v10->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v138 + 24 * v139) )
        {
          v140 = WdLogNewEntry5_WdAssertion(v139, 3 * v139);
          *(_QWORD *)(v140 + 24) = 8783LL;
          WdLogEvent5_WdAssertion(v140);
        }
        v134 = ((__int64)v10->pPatchLocationListOut
              - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 544LL))(v184))
             / 24;
        if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 536LL))(v184) < (unsigned int)v134 )
        {
          v143 = WdLogNewEntry5_WdAssertion(v142, v141);
          *(_QWORD *)(v143 + 24) = 8793LL;
          WdLogEvent5_WdAssertion(v143);
        }
        if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 0x10) != 0 )
        {
          v144 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 544LL)
                                                                                   + 8LL)
                                                                       + 544LL))(v184);
          TraceDxgkPatchLocationList((__int64)this, (__int64)v184, v134, v144);
        }
      }
      else
      {
        LODWORD(v134) = 0;
      }
      if ( !v128
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 520LL)
                                                                  + 8LL)
                                                      + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 528LL)) )
      {
        v147 = WdLogNewEntry5_WdAssertion(v146, v145);
        *(_QWORD *)(v147 + 24) = 8808LL;
        WdLogEvent5_WdAssertion(v147);
      }
      v148 = *(_DWORD *)a9;
      if ( (*(_DWORD *)a9 & 0x20) != 0 )
      {
        if ( v182 || v183 )
          v149 = 64LL;
        else
          v149 = 0LL;
        v28 = bTracingEnabled == 0;
        *(_DWORD *)a9 = v149 | v148 & 0xFFFFFFBF;
        if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v149, &EventPerformanceWarning, v133, 1);
      }
      else
      {
        *(_DWORD *)a9 = v148 & 0xFFFFFFBF;
      }
      *((_QWORD *)a9 + 1) = v184;
      *((_DWORD *)a9 + 14) = 0;
      *((_DWORD *)a9 + 16) = 0;
      *((_DWORD *)a9 + 18) = 0;
      *((_DWORD *)a9 + 20) = 0;
      *((_DWORD *)a9 + 15) = v128;
      *((_DWORD *)a9 + 17) = 3;
      *((_DWORD *)a9 + 19) = v134;
      *((_DWORD *)a9 + 21) = v129;
      if ( *((_BYTE *)this + 446) )
      {
        *((_DWORD *)a9 + 22) = v129;
        *((_DWORD *)a9 + 21) = v10->DmaBufferPrivateDataSize;
      }
      v150 = (char *)*((unsigned __int8 *)a9 + 356);
      v151 = 552LL;
      v152 = 488LL;
      if ( !(_BYTE)v150 )
        v151 = 488LL;
      v153 = (unsigned int *)((char *)a9 + v151);
      if ( (_BYTE)v150 )
        v154 = (char *)a9 + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8) + 600;
      else
        v154 = (char *)a9 + 496;
      if ( *((_DWORD *)a9 + 32) == 4 )
      {
        v155 = v191;
        if ( !v191 )
        {
          v156 = WdLogNewEntry5_WdAssertion(v150, 488LL);
          *(_QWORD *)(v156 + 24) = 8843LL;
          WdLogEvent5_WdAssertion(v156);
        }
        if ( (*(_DWORD *)a9 & 0x40) != 0 )
        {
          v157 = WdLogNewEntry5_WdAssertion(v150, v152);
          *(_QWORD *)(v157 + 24) = 8844LL;
          WdLogEvent5_WdAssertion(v157);
        }
        *v153 = *v153 & 0xFFFFFC00 | 1;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 544LL)
                                                                       + 8LL)
                                                           + 408LL))(
               *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
               *((_QWORD *)v155 + 3),
               v154) < 0 )
        {
          v160 = WdLogNewEntry5_WdAssertion(v159, v158);
          *(_QWORD *)(v160 + 24) = 8863LL;
          WdLogEvent5_WdAssertion(v160);
        }
        if ( *((_BYTE *)a9 + 356) )
          v161 = (char *)a9 + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8) + 592;
        else
          v161 = (char *)a9 + 512;
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 216LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
          *(_QWORD *)(*((_QWORD *)v155 + 6) + 8LL),
          &v188,
          v161,
          0LL);
        v152 = (__int64)a9 + 552;
        if ( *((_BYTE *)a9 + 356) )
          *(_WORD *)(*((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8) + v152 + 32) = v188;
        else
          *((_DWORD *)a9 + 137) ^= (*((_DWORD *)a9 + 137) ^ (v188 << 17)) & 0x3E0000;
        v162 = *((_QWORD *)v155 + 5);
        if ( v162 && (*(_DWORD *)(v162 + 4) & 8) != 0 )
          v163 = *(_QWORD *)(*(_QWORD *)(v162 + 56) + 176LL);
        else
          v163 = 0LL;
        if ( *((_BYTE *)a9 + 356) )
          *(_QWORD *)(*((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8) + v152 + 56) = v163;
        else
          *((_QWORD *)a9 + 71) = v163;
        if ( *((_BYTE *)a9 + 356) )
          v164 = (char *)a9 + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8) + 576;
        else
          v164 = (char *)a9 + 504;
        *(_QWORD *)v164 = *(_QWORD *)(*((_QWORD *)v155 + 6) + 16LL);
        if ( *((_BYTE *)a9 + 356) )
          v150 = (char *)a9 + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8) + 568;
        else
          v150 = (char *)a9 + 560;
        *(_QWORD *)v150 = *((_QWORD *)this + 23);
        if ( *((_BYTE *)a9 + 356) )
          *((_DWORD *)a9 + 148) = -1;
      }
      else if ( (*v153 & 0x3FF) != 0 )
      {
        v165 = WdLogNewEntry5_WdAssertion(v150, 488LL);
        *(_QWORD *)(v165 + 24) = 8902LL;
        WdLogEvent5_WdAssertion(v165);
      }
      if ( *((struct _KTHREAD **)this + 58) != KeGetCurrentThread() )
      {
        v166 = WdLogNewEntry5_WdAssertion(v150, v152);
        *(_QWORD *)(v166 + 24) = 8905LL;
        WdLogEvent5_WdAssertion(v166);
      }
      if ( (*((_DWORD *)this + 103) & 0x10) != 0 )
      {
        v167 = v192;
        *((_QWORD *)a9 + 61) = *((_QWORD *)this + 31);
        *((_DWORD *)a9 + 124) = 0;
        *((_QWORD *)a9 + 64) = *(_QWORD *)(*((_QWORD *)this + 30) + 64LL);
        *((_QWORD *)a9 + 63) = *(_QWORD *)(*((_QWORD *)this + 30) + 48LL);
        v168 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                               + 8LL)
                                                                                   + 432LL))(
                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v167 + 188) + 8LL * v185) + 40LL),
                 a9);
      }
      else
      {
        v168 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                               + 8LL)
                                                                                   + 424LL))(
                 *((_QWORD *)this + 34),
                 a9);
      }
      v169 = v168;
      if ( v168 < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 520LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)this + 34),
          0LL);
        if ( (*v153 & 0x3FF) != 0 && *(_QWORD *)v154 )
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 424LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
            *((unsigned int *)a9 + 36),
            *(_QWORD *)v154,
            0LL);
        v104 = 1;
        LODWORD(v19) = v169;
        goto LABEL_213;
      }
      v14 = v182;
      v15 = v189;
      v20 = 0LL;
      v17 = v199;
      v11 = 0;
      v12 = 0LL;
      v184 = 0LL;
      if ( !v183 && !v182 )
        return (unsigned int)v19;
    }
    v48 = *((_QWORD *)this + 2) + 16LL;
    if ( *((_BYTE *)this + 446) )
    {
      memset(v218, 0, sizeof(v218));
      v49 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48 + 544LL) + 8LL)
                                                                  + 552LL))(v184);
      v51 = v191;
      v52 = v49;
      v53 = *(_QWORD *)(v49 + 24);
      v218[4] = v53;
      if ( v191 )
      {
        v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 248LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                *((_QWORD *)v191 + 3),
                *((unsigned __int8 *)this + 447),
                *((unsigned int *)this + 102));
        v51 = v191;
        v218[5] = v54;
      }
      if ( (v10->Flags.Value & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                        + 8LL)
                                                                            + 216LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
          *(_QWORD *)(*((_QWORD *)v51 + 6) + 8LL),
          &v194,
          &v218[6],
          0LL);
        LOWORD(v218[7]) = v194;
      }
      else if ( v189 )
      {
        v55 = *((unsigned __int8 *)this + 447);
        v56 = *((unsigned int *)this + 102);
        v218[8] = *(_QWORD *)(v52 + 48);
        v218[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                    *((_QWORD *)v189 + 3),
                    v55,
                    v56);
        if ( !v218[9] )
        {
          v173 = (_QWORD *)WdLogNewEntry5_WdError(v53, v57, v50);
          LODWORD(v19) = -1073741811;
          v173[4] = -1073741811LL;
          v173[5] = 8550LL;
          goto LABEL_204;
        }
      }
      v10->DmaBufferGpuVirtualAddress = v190;
      v10->pAllocationList = (DXGK_ALLOCATIONLIST *)v218;
      v58 = 0;
      v10->pPatchLocationListOut = 0LL;
    }
    else
    {
      v10->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48 + 544LL) + 8LL) + 552LL))(
                                                      v184,
                                                      v37);
      v10->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 544LL))(v184);
      v58 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 544LL)
                                                                              + 8LL)
                                                                  + 536LL))(v184);
    }
    v10->PatchLocationListOutSize = v58;
    if ( (*((_DWORD *)this + 103) & 0x10) != 0 )
    {
      v53 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 16) + 192LL) + 64LL) + 40LL) + 28LL) >= 0xA002u )
      {
        LODWORD(v19) = ADAPTER_RENDER::DdiPresentToHwQueue(
                         (ADAPTER_RENDER *)v53,
                         *(void **)(*(_QWORD *)(*((_QWORD *)v39 + 188) + 8LL * v185) + 32LL),
                         v10);
        if ( (_DWORD)v19 == -1073741822 )
          LODWORD(v19) = ADAPTER_RENDER::DdiPresent(
                           *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                           *((void **)this + 23),
                           v10);
        goto LABEL_101;
      }
    }
    v62 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)v10->Flags.Value;
    v63 = *((_QWORD *)this + 2);
    v195 = 0LL;
    if ( (*(_BYTE *)&v62 & 1) != 0 || (v53 = *(_QWORD *)(*(_QWORD *)(v63 + 16) + 16LL), !*(_BYTE *)(v53 + 2506)) )
      v195 = *((_QWORD *)this + 23);
    v64 = *(_QWORD *)(v63 + 16);
    v198 = v64;
    v200 = -1;
    v201 = 0LL;
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      v202 = 1;
      v200 = 5031;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v53, &EventProfilerEnter, v50, 5031);
    }
    else
    {
      v202 = 0;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v200, 5031LL);
    CurrentProcess = PsGetCurrentProcess(v66, v65);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v71 = ProcessDxgProcess;
    if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v73 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v71 = *v73;
      }
    }
    v187 = 0;
    v74 = v71 + 112;
    if ( !v71 )
      v74 = 0LL;
    if ( v74 && *(struct _KTHREAD **)(v74 + 8) == KeGetCurrentThread() )
    {
      v75 = WdLogNewEntry5_WdAssertion(v70, v69);
      *(_QWORD *)(v75 + 24) = 1449LL;
      WdLogEvent5_WdAssertion(v75);
    }
    if ( v71 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v74, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v78 = *(_DWORD *)(v74 + 16);
          if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v76, &EventBlockThread, v77, v78);
        }
        ExAcquirePushLockExclusiveEx(v74, 0LL);
      }
      *(_QWORD *)(v74 + 8) = KeGetCurrentThread();
      v187 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v64 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v64 + 16) + 4248LL));
    CurrentIrql = KeGetCurrentIrql();
    v82 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v84 = WdLogNewEntry5_WdAssertion(v80, v79);
        *(_QWORD *)(v84 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v84);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v80, v79);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached()
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v82 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v82 )
        {
          v87 = *(_DWORD *)(v82 + 136);
LABEL_79:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v207,
            *(struct DXGADAPTER **)(v64 + 16));
          v19 = (*(int (__fastcall **)(__int64, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v64 + 16) + 608LL))(v195, v196);
          if ( v207[0] )
            KeUnstackDetachProcess(&ApcState);
          if ( CurrentIrql != KeGetCurrentIrql() )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v89, v88);
            v90[5] = v198;
            v90[6] = CurrentIrql;
            v90[3] = 275LL;
            v90[4] = 16LL;
            v91 = KeGetCurrentIrql();
            v90[7] = v91;
            WdLogEvent5_WdCriticalError(v90);
          }
          if ( v82 && *(_DWORD *)(v82 + 136) != v87 )
          {
            v92 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v89, v88);
            v92[3] = 275LL;
            v92[4] = 38LL;
            v92[5] = *(int *)(v82 + 136);
            v92[6] = v87;
            v92[7] = 0LL;
            WdLogEvent5_WdCriticalError(v92);
          }
          v93 = v198;
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v198 + 16) + 4248LL));
          v94 = (_QWORD *)WdLogNewEntry5_WdTrace(v89, v88);
          v96 = v196;
          v97 = v195;
          v94[3] = v19;
          v94[4] = v97;
          v94[5] = v96->SubRectCnt;
          v94[6] = v96->pDmaBuffer;
          DmaSize = v96->DmaSize;
          v94[7] = DmaSize;
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
                  v99 = WdLogNewEntry5_WdError(DmaSize, v96, v95);
                  *(_QWORD *)(v99 + 24) = v19;
                  WdLogEvent5_WdError(v99);
                }
              }
            }
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v93 + 16));
          if ( v187 == 2 )
          {
            *(_QWORD *)(v74 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v74, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v200, v100);
          if ( v202 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v60, &EventProfilerExit, v61, v200);
          v10 = v196;
          v39 = v192;
LABEL_101:
          if ( *((_BYTE *)this + 446) && (v10->pPatchLocationListOut || v10->PatchLocationListOutSize) )
          {
            v101 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v59);
            v101[3] = 275LL;
            v101[4] = 9LL;
            v101[5] = v10;
            v101[6] = 0LL;
            v101[7] = 0LL;
            WdLogEvent5_WdCriticalError(v101);
          }
          if ( (_DWORD)v19 == -1071775743 )
          {
            if ( (v10->Flags.Value & 4) != 0 )
            {
              v102 = WdLogNewEntry5_WdError(v60, v59, v61);
              *(_QWORD *)(v102 + 24) = this;
              WdLogEvent5_WdError(v102);
              LODWORD(v19) = -1073741823;
LABEL_108:
              if ( (_DWORD)v19 == -1071775736 )
              {
                v103 = WdLogNewEntry5_WdEvent(v60);
                *(_QWORD *)(v103 + 24) = this;
                *(_QWORD *)(v103 + 32) = -1071775736LL;
                WdLogEvent5_WdEvent(v103);
                v104 = 1;
                goto LABEL_213;
              }
              v173 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
              v173[4] = (int)v19;
LABEL_204:
              v173[3] = this;
              WdLogEvent5_WdError(v173);
              v104 = 1;
              goto LABEL_213;
            }
          }
          else if ( (int)v19 < 0 )
          {
            goto LABEL_108;
          }
          if ( *((_BYTE *)this + 446) )
          {
            if ( v10->pAllocationList != (DXGK_ALLOCATIONLIST *)v218 )
            {
              v105 = WdLogNewEntry5_WdAssertion(v60, v59);
              *(_QWORD *)(v105 + 24) = 8673LL;
LABEL_116:
              WdLogEvent5_WdAssertion(v105);
            }
          }
          else if ( v10->pAllocationList != (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 552LL))(v184) )
          {
            v105 = WdLogNewEntry5_WdAssertion(v107, v106);
            *(_QWORD *)(v105 + 24) = 8677LL;
            goto LABEL_116;
          }
          v182 = (_DWORD)v19 == -1071775743;
          v108 = v182;
          if ( (*((_DWORD *)this + 103) & 0x10) != 0 )
          {
            if ( !*((_QWORD *)this + 31) )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v205,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v205);
              VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                   *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                                   *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
              (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                               + 8LL)
                                                                                   + 272LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 188) + 8LL * v185) + 40LL),
                VidSchSyncObject,
                0LL);
              if ( v205[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v205);
            }
            v110 = *((_QWORD *)this + 31) + 1LL;
            v182 = (_DWORD)v19 == -1071775743;
            v28 = *((_BYTE *)this + 312) == 0;
            *((_QWORD *)this + 31) = v110;
            if ( v28 )
            {
              v111 = *((_QWORD *)this + 30);
              *(_QWORD *)&v204.KernelSubmissionType = 0LL;
              memset(&v204.MonitoredFenceGpuVa, 0, 32);
              *(&v204.DmaSize + 1) = 0;
              v204.DmaBufferPrivateDataSize = v10->DmaBufferPrivateDataSize;
              v204.DmaSize = v10->DmaSize;
              v204.MultipassOffset = v10->MultipassOffset;
              v204.pDmaBuffer = v10->pDmaBuffer;
              v204.pDmaBufferPrivateData = v10->pDmaBufferPrivateData;
              v204.DmaBufferGpuVirtualAddress = v190;
              v204.MonitoredFenceGpuVa = *(_QWORD *)(v111 + 48);
              v204.MonitoredFenceCpuVa = *(void **)(v111 + 64);
              v112 = *((_QWORD *)v39 + 188);
              v204.MonitoredFenceValue = v110;
              v113 = (void *)*((_QWORD *)this + 23);
              v204.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
              v204.hHwQueue = *(HANDLE *)(*(_QWORD *)(v112 + 8LL * v185) + 32LL);
              v114 = ADAPTER_RENDER::DdiSignalMonitoredFence(
                       *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                       v113,
                       &v204);
              v19 = v114;
              v10->DmaBufferPrivateDataSize = v204.DmaBufferPrivateDataSize;
              v10->DmaSize = v204.DmaSize;
              v10->MultipassOffset = v204.MultipassOffset;
              v10->pDmaBuffer = v204.pDmaBuffer;
              v10->pDmaBufferPrivateData = v204.pDmaBufferPrivateData;
              v182 = v108;
              if ( v114 == -1071775743 )
              {
                v183 = 1;
              }
              else if ( v114 < 0 )
              {
                v174 = WdLogNewEntry5_WdWarning(v116, v115, v117);
                *(_QWORD *)(v174 + 24) = this;
                *(_QWORD *)(v174 + 32) = v19;
                WdLogEvent5_WdWarning(v174);
                v104 = 1;
                goto LABEL_213;
              }
            }
          }
          goto LABEL_125;
        }
      }
      else
      {
        v82 = 0LL;
      }
    }
    v87 = 0;
    goto LABEL_79;
  }
  v18 = WdLogNewEntry5_WdError(0LL, a6, a3);
  *(_QWORD *)(v18 + 24) = 8322LL;
LABEL_4:
  WdLogEvent5_WdError(v18);
  LODWORD(v19) = -1073741823;
LABEL_212:
  v104 = 0;
LABEL_213:
  v42 = 0;
LABEL_214:
  if ( v184 )
  {
    if ( v186 )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 512LL))();
      if ( (*((_DWORD *)this + 103) & 0x10) == 0 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 520LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)this + 34),
          0LL);
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
      && *((_DWORD *)a9 + 50) )
    {
      do
      {
        v177 = (char *)a9 + 8 * v42;
        v178 = *((_QWORD *)v177 + 26);
        if ( v178 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 544LL)
                                                                              + 8LL)
                                                                  + 424LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
            0LL,
            v178,
            0LL);
          *((_QWORD *)v177 + 26) = 0LL;
        }
        ++v42;
      }
      while ( v42 < *((_DWORD *)a9 + 50) );
      v176 = *((_QWORD *)this + 2);
    }
    if ( v104 )
    {
      v179 = *(_QWORD *)(v176 + 16);
      LOBYTE(v176) = 1;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64))(*(_QWORD *)(*(_QWORD *)(v179 + 544) + 8LL) + 576LL))(
        v184,
        v176);
      v176 = *((_QWORD *)this + 2);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v176 + 16) + 544LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v184,
      0LL);
  }
  return (unsigned int)v19;
}
