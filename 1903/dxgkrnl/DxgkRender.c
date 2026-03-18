/*
 * XREFs of DxgkRender @ 0x1C011C610
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006D60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BC08 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000D348 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000D3B8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A710 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A838 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0023884 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0107000 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0115F00 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0118860 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C013FF9C (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0206D2C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C020B264 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C025928C (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  _OWORD *v12; // rax
  _D3DKMT_RENDER *v13; // rcx
  __int64 v14; // rdx
  __int64 hDevice; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGCONTEXT *v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r15
  __int64 v23; // rcx
  int v24; // r12d
  struct _KEVENT *v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  ULONG BroadcastContextCount; // r15d
  __int64 v30; // r12
  _QWORD *PoolWithTag; // rcx
  unsigned int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGADAPTER *v36; // rbx
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  const GUID *v42; // r8
  struct DXGCONTEXT *v43; // rbx
  unsigned __int64 NewAllocationListSize; // rcx
  __int64 CommandOffset; // r15
  __int64 CommandLength; // r12
  UINT AllocationCount; // r8d
  __int64 PatchLocationCount; // r15
  int v49; // r12d
  char Flags; // r15
  __int64 v51; // rax
  char v52; // al
  struct DXGALLOCATION **v53; // rcx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rbx
  DXGGLOBAL **v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  const GUID *v63; // r8
  bool v64; // zf
  __int64 NewCommandBufferSize; // rdx
  UINT NewPatchLocationListSize; // r15d
  __int64 v68; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v70; // rsi
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  const GUID *v80; // r8
  __int64 v81; // rax
  PVOID v82; // rcx
  const GUID *v83; // r8
  __int64 v84; // rcx
  char v85; // r12
  __int64 v86; // rcx
  char v87; // r12
  __int64 v88; // rax
  PVOID v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  const GUID *v92; // r8
  __int64 v93; // rax
  __int64 v94; // r8
  __int64 v95; // r9
  unsigned int v96; // ecx
  __int64 v97; // rdx
  __int64 *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rax
  PVOID v106; // rcx
  _QWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  const GUID *v113; // r8
  _QWORD *v114; // rax
  __int64 v115; // rcx
  struct DXGALLOCATION **v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rax
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  char v124; // [rsp+40h] [rbp-498h]
  UINT v125; // [rsp+44h] [rbp-494h]
  unsigned int v126; // [rsp+44h] [rbp-494h]
  unsigned int v127; // [rsp+44h] [rbp-494h]
  int v128; // [rsp+48h] [rbp-490h] BYREF
  __int64 v129; // [rsp+50h] [rbp-488h]
  char v130; // [rsp+58h] [rbp-480h]
  unsigned __int64 v131; // [rsp+60h] [rbp-478h]
  DXGCONTEXT *v132; // [rsp+68h] [rbp-470h] BYREF
  char v133; // [rsp+70h] [rbp-468h]
  PVOID P; // [rsp+78h] [rbp-460h]
  _BYTE v135[32]; // [rsp+80h] [rbp-458h] BYREF
  unsigned int v136; // [rsp+A0h] [rbp-438h]
  PVOID Object; // [rsp+A8h] [rbp-430h]
  __int64 v138; // [rsp+B0h] [rbp-428h] BYREF
  int v139; // [rsp+B8h] [rbp-420h]
  unsigned int v140; // [rsp+C0h] [rbp-418h] BYREF
  int v141; // [rsp+C4h] [rbp-414h] BYREF
  int v142; // [rsp+C8h] [rbp-410h] BYREF
  struct DXGCONTEXT *v143; // [rsp+D0h] [rbp-408h] BYREF
  __int64 v144; // [rsp+D8h] [rbp-400h] BYREF
  struct DXGADAPTER *v145; // [rsp+E0h] [rbp-3F8h]
  char v146; // [rsp+E8h] [rbp-3F0h]
  __int64 v147; // [rsp+F0h] [rbp-3E8h]
  __int64 v148; // [rsp+F8h] [rbp-3E0h] BYREF
  __int64 v149; // [rsp+100h] [rbp-3D8h]
  __int64 v150; // [rsp+108h] [rbp-3D0h]
  __int64 v151; // [rsp+110h] [rbp-3C8h]
  _BYTE v152[24]; // [rsp+118h] [rbp-3C0h] BYREF
  _QWORD v153[6]; // [rsp+130h] [rbp-3A8h] BYREF
  char v154; // [rsp+160h] [rbp-378h]
  __int64 v155; // [rsp+168h] [rbp-370h]
  __int64 v156; // [rsp+170h] [rbp-368h]
  PVOID v157; // [rsp+180h] [rbp-358h] BYREF
  _BYTE v158[256]; // [rsp+188h] [rbp-350h] BYREF
  int v159; // [rsp+288h] [rbp-250h]
  _D3DKMT_RENDER v160; // [rsp+290h] [rbp-248h] BYREF
  char v161[8]; // [rsp+400h] [rbp-D8h] BYREF
  _BYTE v162[16]; // [rsp+408h] [rbp-D0h] BYREF
  DXGADAPTER *v163; // [rsp+418h] [rbp-C0h]
  char v164; // [rsp+420h] [rbp-B8h]
  int v165; // [rsp+424h] [rbp-B4h]
  __int64 v166; // [rsp+428h] [rbp-B0h]
  _BYTE v167[16]; // [rsp+448h] [rbp-90h] BYREF
  __int64 v168; // [rsp+458h] [rbp-80h]
  __int64 v169; // [rsp+488h] [rbp-50h]
  char v170; // [rsp+490h] [rbp-48h]

  v128 = -1;
  v129 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v130 = 1;
    v128 = 2013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2013);
  }
  else
  {
    v130 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v128, 2013LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v70 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v11 = *v70;
    }
  }
  v147 = v11;
  if ( !v11 )
  {
    v71 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v71 + 24) = PsGetCurrentProcess(v73, v72);
    v49 = -1073741811;
    *(_QWORD *)(v71 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v71);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v128, v74);
    v64 = v130 == 0;
    goto LABEL_82;
  }
  v12 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  v13 = &v160;
  v14 = 2LL;
  do
  {
    *(_OWORD *)&v13->hDevice = *v12;
    *(_OWORD *)&v13->PatchLocationCount = v12[1];
    *(_OWORD *)&v13->NewCommandBufferSize = v12[2];
    *(_OWORD *)&v13->NewAllocationListSize = v12[3];
    *(_OWORD *)&v13->NewPatchLocationListSize = v12[4];
    *(_OWORD *)&v13->BroadcastContextCount = v12[5];
    *(_OWORD *)&v13->BroadcastContext[3] = v12[6];
    v13 = (_D3DKMT_RENDER *)((char *)v13 + 128);
    *(_OWORD *)&v13[-1].pPrivateDriverData = v12[7];
    v12 += 8;
    --v14;
  }
  while ( v14 );
  *(_OWORD *)&v13->hDevice = *v12;
  *(_OWORD *)&v13->PatchLocationCount = v12[1];
  *(_OWORD *)&v13->NewCommandBufferSize = v12[2];
  *(_OWORD *)&v13->NewAllocationListSize = v12[3];
  *(_OWORD *)&v13->NewPatchLocationListSize = v12[4];
  *(_OWORD *)&v13->BroadcastContextCount = v12[5];
  *(_OWORD *)&v13->BroadcastContext[3] = v12[6];
  hDevice = v160.hDevice;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132, v160.hDevice, (struct _KTHREAD **)v11, &v143, 0);
  v19 = v143;
  if ( !v143 )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    v75[3] = v11;
    v75[4] = hDevice;
    v49 = -1073741811;
    v75[5] = -1073741811LL;
LABEL_105:
    WdLogEvent5_WdError(v75);
LABEL_108:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
LABEL_81:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v128, v61);
    v64 = v130 == 0;
LABEL_82:
    if ( !v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v62, &EventProfilerExit, v63, v128);
    return (unsigned int)v49;
  }
  v20 = (unsigned int)(*(_DWORD *)&v160.Flags | (*(_DWORD *)&v160.Flags >> 1));
  if ( ((*(_BYTE *)&v160.Flags | (unsigned __int8)(*(_DWORD *)&v160.Flags >> 1)) & 0x20) != 0 )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdError(v20, v16, v18);
    v75[3] = hDevice;
    v49 = -1073741811;
    v75[4] = -1073741811LL;
    goto LABEL_105;
  }
  v21 = *((_DWORD *)v143 + 103);
  if ( (v21 & 0x10) != 0 )
  {
    v77 = WdLogNewEntry5_WdError(v20, v16, v18);
    *(_QWORD *)(v77 + 24) = v19;
LABEL_111:
    WdLogEvent5_WdError(v77);
    goto LABEL_114;
  }
  if ( (v21 & 8) != 0 )
  {
    v81 = WdLogNewEntry5_WdWarning(v20, v16, v18);
    *(_QWORD *)(v81 + 24) = 88LL;
    WdLogEvent5_WdWarning(v81);
    goto LABEL_114;
  }
  if ( *((_BYTE *)v143 + 446) )
  {
    v77 = WdLogNewEntry5_WdError(v20, v16, v18);
    *(_QWORD *)(v77 + 24) = hDevice;
    goto LABEL_111;
  }
  v22 = *((_QWORD *)v143 + 2);
  v149 = v22;
  v150 = v22;
  v138 = v22;
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
  if ( *(int *)(v23 + 2184) >= 0x2000 || *(_BYTE *)(v23 + 2484) )
  {
    v24 = *((_DWORD *)DXGGLOBAL::GetGlobal(v23, v16) + 247);
    v139 = v24;
  }
  else
  {
    v24 = 0;
    v139 = 0;
  }
  v25 = *(struct _KEVENT **)(v22 + 16);
  if ( *(_DWORD *)(v22 + 328) == 2 )
  {
    Object = &v25[4];
    if ( KeReadStateEvent(v25 + 4) )
      goto LABEL_20;
    v82 = Object;
  }
  else
  {
    Object = &v25[3];
    if ( KeReadStateEvent(v25 + 3) )
      goto LABEL_20;
    v82 = Object;
  }
  KeWaitForSingleObject(v82, Executive, 0, 0, 0LL);
LABEL_20:
  KeEnterCriticalRegion();
  if ( !v24 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 104), 0) )
      goto LABEL_22;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 96LL));
    v84 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
    if ( *(_DWORD *)(v84 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v84, 0xFFFFFFFFLL);
      v85 = 1;
    }
    else
    {
      v85 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v84, &EventBlockThread, v83, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 104), 1u);
    if ( !v85 )
      goto LABEL_138;
    goto LABEL_137;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v22 + 112, 0LL) )
    goto LABEL_22;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 96LL));
  v86 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
  if ( *(_DWORD *)(v86 + 136) == 1 )
  {
    DXGADAPTER::WakeUpAdapter(v86, 0xFFFFFFFFLL);
    v87 = 1;
  }
  else
  {
    v87 = 0;
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v22 + 112));
  if ( v87 )
LABEL_137:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
LABEL_138:
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_22:
  BroadcastContextCount = v160.BroadcastContextCount;
  if ( v160.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 16LL))
    || BroadcastContextCount > 0x40 )
  {
    v76 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v76 + 24) = v19;
    v49 = -1073741811;
    *(_QWORD *)(v76 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v76);
LABEL_107:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v138);
    goto LABEL_108;
  }
  v30 = BroadcastContextCount + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v136 = 0;
  if ( (unsigned int)v30 > 4 )
  {
    v28 = (unsigned int)v30;
    v26 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v30;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v30 < 8 )
      goto LABEL_28;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v30, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v135;
    P = v135;
  }
  v136 = BroadcastContextCount + 1;
  if ( !PoolWithTag )
  {
LABEL_143:
    v88 = WdLogNewEntry5_WdWarning(PoolWithTag, v26, v28);
    *(_QWORD *)(v88 + 24) = 126LL;
    WdLogEvent5_WdWarning(v88);
    v89 = P;
    if ( P == v135 || !P )
      goto LABEL_146;
    goto LABEL_145;
  }
  memset(PoolWithTag, 0, 8LL * (unsigned int)v30);
  PoolWithTag = P;
LABEL_28:
  if ( !PoolWithTag )
    goto LABEL_143;
  *PoolWithTag = v19;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v152, (struct _KTHREAD **)v11);
  v32 = 0;
  if ( !BroadcastContextCount )
  {
LABEL_30:
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v152);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v153,
      P,
      v136);
    if ( !v154 )
    {
      v145 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 16LL);
      _InterlockedIncrement64((volatile signed __int64 *)v145 + 3);
      v144 = -1LL;
      v36 = v145;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v36 + 120, 0LL);
      v146 = 1;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, *((_QWORD *)v19 + 2), 0, v37, 0);
      if ( v164 )
      {
        v110 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38);
        v110[3] = 275LL;
        v110[4] = 4LL;
        v110[5] = v162;
        v110[6] = 0LL;
        v110[7] = 0LL;
        WdLogEvent5_WdCriticalError(v110);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v163 + 20) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v163 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v41, &EventBlockThread, v42, 72);
          KeWaitForSingleObject((char *)v163 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared((__int64)v163, 0xFFFFFFFF, 0LL);
      }
      v165 = -1;
      v166 = 0LL;
      v164 = 1;
      if ( *(_DWORD *)(v169 + 464) != 1 )
        goto LABEL_186;
      if ( v170 )
      {
        COREACCESS::AcquireShared((__int64)v167, 0xFFFFFFFF, 0LL);
        if ( *(_DWORD *)(v168 + 176) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v167);
LABEL_186:
          COREACCESS::Release((COREACCESS *)v162);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          if ( v146 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v144);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v153);
          if ( P != v135 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v136 = 0;
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v138);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v128, v111);
          if ( v130 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v112, &EventProfilerExit, v113, v128);
          return 3221226166LL;
        }
      }
      v43 = v143;
      NewAllocationListSize = *((_QWORD *)v143 + 6);
      CommandOffset = v160.CommandOffset;
      if ( v160.CommandOffset >= NewAllocationListSize )
      {
        v114 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, v38, v40);
        v114[3] = v43;
        v114[4] = CommandOffset;
        v115 = *((_QWORD *)v43 + 6);
        v49 = -1073741811;
        v114[6] = -1073741811LL;
        goto LABEL_220;
      }
      CommandLength = v160.CommandLength;
      if ( v160.CommandLength + (unsigned __int64)v160.CommandOffset > NewAllocationListSize )
      {
        v114 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, v160.CommandLength, v40);
        v114[3] = v43;
        v114[4] = CommandLength;
        v115 = *((_QWORD *)v43 + 6);
        v49 = -1073741811;
        v114[6] = -1073741811LL;
        goto LABEL_220;
      }
      AllocationCount = v160.AllocationCount;
      v125 = v160.AllocationCount;
      if ( v160.AllocationCount > *((_DWORD *)v143 + 18) )
      {
        v114 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, v160.CommandLength, v160.AllocationCount);
        v114[3] = v43;
        v114[4] = v125;
        v115 = *((unsigned int *)v43 + 18);
        v49 = -1073741811;
        v114[6] = -1073741811LL;
        goto LABEL_220;
      }
      PatchLocationCount = v160.PatchLocationCount;
      if ( v160.PatchLocationCount > *((_DWORD *)v143 + 26) )
      {
        v114 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, v160.CommandLength, v160.AllocationCount);
        v114[3] = v43;
        v114[4] = PatchLocationCount;
        v115 = *((unsigned int *)v43 + 26);
        v49 = -1073741811;
        v114[6] = -1073741811LL;
        goto LABEL_220;
      }
      v49 = 0;
      Flags = (char)v160.Flags;
      if ( !v160.CommandLength )
      {
LABEL_59:
        if ( (Flags & 1) == 0 && (Flags & 2) == 0 && (Flags & 4) == 0 )
          goto LABEL_62;
        if ( (Flags & 1) != 0 )
          NewCommandBufferSize = v160.NewCommandBufferSize;
        else
          NewCommandBufferSize = *((unsigned int *)v43 + 50);
        LODWORD(v131) = NewCommandBufferSize;
        if ( (Flags & 2) != 0 )
          NewAllocationListSize = v160.NewAllocationListSize;
        else
          NewAllocationListSize = *((unsigned int *)v43 + 53);
        v126 = NewAllocationListSize;
        if ( (Flags & 4) != 0 )
          NewPatchLocationListSize = v160.NewPatchLocationListSize;
        else
          NewPatchLocationListSize = *((_DWORD *)v43 + 54);
        v68 = *((unsigned int *)v43 + 50);
        if ( (unsigned int)NewCommandBufferSize < (unsigned int)v68 )
          goto LABEL_215;
        if ( (unsigned int)NewAllocationListSize >= *((_DWORD *)v43 + 53)
          && NewPatchLocationListSize >= *((_DWORD *)v43 + 54) )
        {
          if ( DXGADAPTER::IsCoreResourceSharedOwner(v163) )
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v161);
          DXGCONTEXT::ResizeUserModeBuffers(
            v43,
            *((struct VIDMM_DMA_POOL **)v43 + 29),
            (unsigned int)v131,
            v126,
            NewPatchLocationListSize);
          v49 = COREDEVICEACCESS::AcquireShared((__int64)v161, 0xFFFFFFFF, 0LL);
          goto LABEL_62;
        }
        if ( (unsigned int)NewCommandBufferSize < (unsigned int)v68 )
        {
LABEL_215:
          v121 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, NewCommandBufferSize, v68);
          v121[3] = v43;
          v121[4] = (unsigned int)v131;
          v121[5] = *((unsigned int *)v43 + 50);
          WdLogEvent5_WdWarning(v121);
          NewAllocationListSize = v126;
        }
        if ( (unsigned int)NewAllocationListSize < *((_DWORD *)v43 + 53) )
        {
          v122 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, NewCommandBufferSize, v68);
          v122[3] = v43;
          v122[4] = v126;
          v122[5] = *((unsigned int *)v43 + 53);
          WdLogEvent5_WdWarning(v122);
        }
        if ( NewPatchLocationListSize >= *((_DWORD *)v43 + 54) )
          goto LABEL_62;
        v114 = (_QWORD *)WdLogNewEntry5_WdWarning(NewAllocationListSize, NewCommandBufferSize, v68);
        v114[3] = v43;
        v114[4] = NewPatchLocationListSize;
        v115 = *((unsigned int *)v43 + 54);
LABEL_220:
        v114[5] = v115;
        WdLogEvent5_WdWarning(v114);
LABEL_62:
        v54 = 0;
        v148 = 0LL;
        v55 = 0LL;
        v141 = 0;
        v56 = 0LL;
        v142 = 0;
        v57 = 0LL;
        if ( v49 != -1073741130 )
        {
          if ( v170 )
            COREACCESS::Release((COREACCESS *)v167);
          if ( !v164 )
          {
            v123 = (_QWORD *)WdLogNewEntry5_WdCriticalError(NewAllocationListSize, v55);
            v123[3] = 275LL;
            v123[4] = 4LL;
            v123[5] = v162;
            v123[6] = 0LL;
            v123[7] = 0LL;
            WdLogEvent5_WdCriticalError(v123);
          }
          v164 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v163 + 20) )
            DXGADAPTER::ReleaseCoreResource((__int64)v163, v165, v166);
          v166 = 0LL;
          v165 = -1;
          v43 = v143;
          if ( !*((_BYTE *)v19 + 446) )
            (*(void (__fastcall **)(_QWORD, __int64 *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 480LL))(
              *((_QWORD *)v143 + 29),
              &v148,
              &v141,
              &v142);
          v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 520LL) + 8LL);
          LODWORD(v57) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v58 + 448))(
                           *((_QWORD *)v43 + 34),
                           v58,
                           v56,
                           v57);
          v54 = v148;
          LODWORD(v55) = v141;
          LODWORD(v56) = v142;
        }
        v155 = *((_QWORD *)v43 + 7);
        *(_QWORD *)(a1 + 24) = v155;
        *(_DWORD *)(a1 + 32) = v54;
        v156 = *((_QWORD *)v43 + 11);
        *(_QWORD *)(a1 + 40) = v156;
        *(_DWORD *)(a1 + 48) = v55;
        v151 = *((_QWORD *)v43 + 15);
        *(_QWORD *)(a1 + 56) = v151;
        *(_DWORD *)(a1 + 64) = v56;
        *(_DWORD *)(a1 + 340) = v57;
        v59 = v149;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
        if ( v146 )
        {
          v146 = 0;
          ExReleasePushLockSharedEx((char *)v145 + 120, 0LL);
          KeLeaveCriticalRegion();
          v60 = (DXGGLOBAL **)v145;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v145 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v60[2], (struct DXGADAPTER *)v60);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v153);
        if ( P != v135 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v136 = 0;
        if ( v139 )
          ExReleasePushLockSharedEx(v59 + 112, 0LL);
        else
          ExReleaseResourceLite(*(PERESOURCE *)(v59 + 104));
        KeLeaveCriticalRegion();
        if ( v132 && !v133 )
          DXGCONTEXT::ReleaseReference(v132);
        goto LABEL_81;
      }
      if ( (*(_BYTE *)&v160.Flags & 0x20) != 0 )
        Object = v160.pNewAllocationList;
      else
        Object = (PVOID)*((_QWORD *)v143 + 11);
      v51 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 16LL);
      if ( *(int *)(v51 + 2184) >= 0x2000 || (v52 = *(_BYTE *)(v51 + 2484)) != 0 )
        v52 = 1;
      v124 = v52;
      v140 = v160.AllocationCount;
      v157 = 0LL;
      v159 = 0;
      v53 = 0LL;
      v131 = 0LL;
      if ( !v52 )
      {
LABEL_48:
        if ( v49 >= 0 )
        {
          v49 = DXGCONTEXT::Render(
                  v43,
                  &v160,
                  (struct COREDEVICEACCESS *)v161,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v144,
                  (struct DXGCONTEXT **)P,
                  v53,
                  0LL);
          Flags = (char)v160.Flags;
          v52 = v124;
          AllocationCount = v125;
          v53 = (struct DXGALLOCATION **)v131;
        }
        if ( v52 )
          DxgkUnreferenceAllocationList(AllocationCount, v53);
        if ( v49 >= 0 && (Flags & 0x10) != 0 )
          v49 = DXGCONTEXT::HandleVistaBltStub(
                  v43,
                  v160.PresentHistoryToken,
                  1,
                  (struct COREDEVICEACCESS *)v161,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v144,
                  v160.BroadcastContextCount,
                  v160.BroadcastContext,
                  (struct DXGCONTEXT **)P);
        NewAllocationListSize = (unsigned __int64)v157;
        if ( v157 != v158 && v157 )
          ExFreePoolWithTag(v157, 0);
        if ( v49 < 0 )
          goto LABEL_62;
        goto LABEL_59;
      }
      v116 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                        &v157,
                                        v160.AllocationCount);
      v131 = (unsigned __int64)v116;
      if ( v116 )
      {
        v49 = DxgkReferenceAllocationList(
                &v140,
                (struct _D3DDDI_ALLOCATIONLIST *)Object,
                v116,
                *((struct DXGDEVICE **)v19 + 2));
        AllocationCount = v140;
        v125 = v140;
        v52 = v124;
        v53 = (struct DXGALLOCATION **)v131;
        goto LABEL_48;
      }
      v120 = WdLogNewEntry5_WdWarning(v118, v117, v119);
      *(_QWORD *)(v120 + 24) = 278LL;
      WdLogEvent5_WdWarning(v120);
      if ( v157 != v158 && v157 )
        ExFreePoolWithTag(v157, 0);
      v157 = 0LL;
      v159 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
      if ( v146 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v144);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v153);
      if ( P != v135 && P )
        ExFreePoolWithTag(P, 0);
LABEL_146:
      P = 0LL;
      v136 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v138);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v128, v90);
      if ( v130 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v91, &EventProfilerExit, v92, v128);
      return 3221225495LL;
    }
    if ( v153[0] )
    {
      v109 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v109 + 24) = 195LL;
      WdLogEvent5_WdWarning(v109);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v153);
      v106 = P;
      if ( P != v135 && P )
        goto LABEL_112;
      goto LABEL_113;
    }
    v108 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    *(_QWORD *)(v108 + 24) = 190LL;
    WdLogEvent5_WdWarning(v108);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v153);
    v89 = P;
    if ( P == v135 || !P )
      goto LABEL_146;
LABEL_145:
    ExFreePoolWithTag(v89, 0);
    goto LABEL_146;
  }
  while ( 1 )
  {
    v127 = v160.BroadcastContext[v32];
    v93 = (v127 >> 6) & 0xFFFFFF;
    v94 = v127 >> 30;
    if ( (unsigned int)v93 < *(_DWORD *)(v11 + 224) )
    {
      v95 = *(_QWORD *)(v11 + 208);
      v96 = *(_DWORD *)(v95 + 16 * v93 + 8);
      if ( (_DWORD)v94 == ((v96 >> 5) & 3) && (v96 & 0x2000) == 0 && (v96 & 0x1F) != 0 )
      {
        v97 = 2LL * (unsigned int)v93;
        v98 = (__int64 *)(v95 + 16LL * (unsigned int)v93);
        v99 = v96 & 0x1F;
        if ( (_BYTE)v99 == 7 )
        {
          v101 = *v98;
          goto LABEL_157;
        }
        v100 = WdLogNewEntry5_WdError(v99, v97, v94);
        *(_QWORD *)(v100 + 24) = 267LL;
        WdLogEvent5_WdError(v100);
      }
    }
    v101 = 0LL;
LABEL_157:
    LODWORD(v131) = v32 + 1;
    v102 = v32 + 1;
    *((_QWORD *)P + v102) = v101;
    v103 = *((_QWORD *)P + v102);
    if ( !v103
      || (v94 = *(unsigned int *)(v103 + 412), (v94 & 8) != 0)
      || (v101 = *(_QWORD *)(v103 + 16), v101 != *((_QWORD *)v19 + 2)) )
    {
      v107 = (_QWORD *)WdLogNewEntry5_WdError(v101, v103, v94);
      v107[3] = v19;
      v107[4] = v127;
      v107[5] = v32;
      v49 = -1073741811;
      v107[6] = -1073741811LL;
      WdLogEvent5_WdError(v107);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v152);
      if ( P != v135 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v136 = 0;
      goto LABEL_107;
    }
    if ( (v94 & 0x10) != 0 )
      break;
    if ( *(_BYTE *)(v103 + 446) )
    {
      v104 = WdLogNewEntry5_WdAssertion(v101, v103);
      *(_QWORD *)(v104 + 24) = 178LL;
      WdLogEvent5_WdAssertion(v104);
    }
    v32 = v131;
    if ( (unsigned int)v131 >= BroadcastContextCount )
      goto LABEL_30;
  }
  v105 = WdLogNewEntry5_WdError(v101, v103, v94);
  *(_QWORD *)(v105 + 24) = *((_QWORD *)P + (unsigned int)v131);
  WdLogEvent5_WdError(v105);
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v152);
  v106 = P;
  if ( P == v135 || !P )
    goto LABEL_113;
LABEL_112:
  ExFreePoolWithTag(v106, 0);
LABEL_113:
  P = 0LL;
  v136 = 0;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v138);
LABEL_114:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v128, v78);
  if ( v130 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v79, &EventProfilerExit, v80, v128);
  return -1073741811LL;
}
