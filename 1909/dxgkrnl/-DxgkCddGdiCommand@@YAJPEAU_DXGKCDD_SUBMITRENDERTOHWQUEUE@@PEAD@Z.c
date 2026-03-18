/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C011A6D0
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021AD90 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C011A500 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C011CE60 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123538 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C0222D4C (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247A84 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0267C8C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *a1, char *a2, const GUID *a3)
{
  const struct _D3DKMT_RENDER *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  unsigned int v13; // ebx
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGHWQUEUE **v21; // rax
  struct DXGHWQUEUE *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  D3DKMT_HANDLE hDevice; // ebx
  __int64 v27; // rcx
  const GUID *v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rdi
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  struct _KEVENT *v41; // rbx
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r13
  __int64 v46; // rbx
  unsigned __int64 v47; // rcx
  char v48; // r12
  ULONG BroadcastContextCount; // eax
  __int64 v50; // rbx
  _BYTE *PoolWithTag; // rax
  size_t v52; // rsi
  _BYTE *v53; // rax
  struct DXGHWQUEUE *v54; // r14
  __int64 v55; // rbx
  _BYTE *v56; // rcx
  void *v57; // rsi
  __int64 v58; // r8
  unsigned __int64 i; // rbx
  volatile signed __int64 *v60; // rbx
  __int64 v61; // r8
  unsigned __int64 v62; // rdx
  volatile signed __int64 *v63; // rcx
  volatile signed __int64 *v64; // rcx
  __int64 v65; // rcx
  const GUID *v66; // r8
  char *v67; // rbx
  __int64 v68; // rax
  bool v69; // r15
  struct _D3DKMT_RENDER *v70; // rcx
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  __int64 AllocationCount; // rsi
  struct DXGALLOCATION **v73; // rbx
  _BYTE *v74; // rbx
  int v75; // eax
  __int64 v76; // rdx
  struct DXGALLOCATION *v77; // rcx
  __int64 v78; // r8
  int v79; // r14d
  int v80; // eax
  unsigned int v81; // esi
  struct DXGADAPTER *v82; // rcx
  struct DXGADAPTER *v83; // rcx
  struct DXGADAPTER *v84; // rbx
  _QWORD *v85; // rcx
  unsigned __int64 j; // rbx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rcx
  const GUID *v91; // r8
  const GUID *v93; // r8
  __int64 v94; // rcx
  char v95; // bl
  __int64 *ThreadProperty; // rax
  __int64 *v97; // rdi
  __int64 v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  int v102; // r9d
  signed __int64 v103; // rax
  signed __int64 v104; // rtt
  __int64 v105; // rax
  int v106; // r9d
  __int64 v107; // rax
  _QWORD *v108; // rbx
  __int64 v109; // rdx
  __int64 v110; // rcx
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rbx
  _QWORD *v114; // rax
  unsigned int v115; // eax
  __int64 v116; // rax
  _QWORD *v117; // r15
  int v118; // esi
  int v119; // r9d
  __int64 v120; // r10
  __int64 v121; // rax
  _QWORD *v122; // rax
  signed __int64 v123; // rbx
  _BYTE *v124; // rcx
  char v125; // al
  _BYTE *v126; // rax
  _BYTE *v127; // rax
  __int64 v128; // rcx
  _QWORD *v129; // rax
  __int64 v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // rcx
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 v139; // r9
  __int64 v140; // rbx
  __int64 v141; // rax
  __int64 v142; // rdi
  struct DXGDEVICE *v143; // rbx
  __int64 v144; // rax
  __int64 v145; // r9
  __int64 v146; // rbx
  __int64 v147; // rax
  __int64 v148; // r9
  char v149; // [rsp+48h] [rbp-C0h]
  struct DXGHWQUEUE *v150; // [rsp+50h] [rbp-B8h]
  unsigned int v151[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v152; // [rsp+60h] [rbp-A8h]
  char *v153; // [rsp+68h] [rbp-A0h]
  __int64 v154; // [rsp+70h] [rbp-98h]
  struct _D3DKMT_RENDER *v155; // [rsp+78h] [rbp-90h]
  _BYTE *v156; // [rsp+80h] [rbp-88h]
  _BYTE v157[32]; // [rsp+88h] [rbp-80h] BYREF
  size_t NumOfElements; // [rsp+A8h] [rbp-60h]
  char v159; // [rsp+B0h] [rbp-58h]
  int v160; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v161; // [rsp+C0h] [rbp-48h]
  char v162; // [rsp+C8h] [rbp-40h]
  PVOID v163; // [rsp+D0h] [rbp-38h]
  _BYTE v164[32]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v165; // [rsp+F8h] [rbp-10h]
  void *Src; // [rsp+100h] [rbp-8h]
  _BYTE v167[32]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v168; // [rsp+128h] [rbp+20h]
  __int64 v169; // [rsp+130h] [rbp+28h] BYREF
  struct DXGADAPTER *v170; // [rsp+138h] [rbp+30h]
  char v171; // [rsp+140h] [rbp+38h]
  char v172[8]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v173; // [rsp+150h] [rbp+48h]
  char v174; // [rsp+158h] [rbp+50h]
  char v175[8]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v176; // [rsp+168h] [rbp+60h]
  char v177; // [rsp+170h] [rbp+68h]
  char v178[8]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v179; // [rsp+180h] [rbp+78h]
  char v180; // [rsp+188h] [rbp+80h]
  _QWORD v181[2]; // [rsp+190h] [rbp+88h] BYREF
  _QWORD v182[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v183[3]; // [rsp+1B0h] [rbp+A8h] BYREF
  PVOID P; // [rsp+1C8h] [rbp+C0h]
  _BYTE v185[256]; // [rsp+1D0h] [rbp+C8h] BYREF
  int v186; // [rsp+2D0h] [rbp+1C8h]
  char v187[8]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v188[8]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int64 v189; // [rsp+2E8h] [rbp+1E0h]
  struct DXGADAPTER *v190; // [rsp+2F0h] [rbp+1E8h]
  char v191; // [rsp+2F8h] [rbp+1F0h]
  int v192; // [rsp+2FCh] [rbp+1F4h]
  _BYTE *v193; // [rsp+300h] [rbp+1F8h]
  _BYTE v194[24]; // [rsp+308h] [rbp+200h] BYREF
  char v195[8]; // [rsp+320h] [rbp+218h] BYREF
  __int64 v196; // [rsp+328h] [rbp+220h]
  struct DXGADAPTER *v197; // [rsp+330h] [rbp+228h]
  char v198; // [rsp+338h] [rbp+230h]
  int v199; // [rsp+33Ch] [rbp+234h]
  __int64 v200; // [rsp+340h] [rbp+238h]
  unsigned __int64 v201; // [rsp+360h] [rbp+258h]
  char v202; // [rsp+368h] [rbp+260h]
  char v203[8]; // [rsp+378h] [rbp+270h] BYREF
  char v204[64]; // [rsp+380h] [rbp+278h] BYREF
  char v205[88]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v206[8]; // [rsp+418h] [rbp+310h] BYREF
  char v207[64]; // [rsp+420h] [rbp+318h] BYREF
  char v208[88]; // [rsp+460h] [rbp+358h] BYREF
  char v209[8]; // [rsp+4B8h] [rbp+3B0h] BYREF
  char v210[64]; // [rsp+4C0h] [rbp+3B8h] BYREF
  char v211[88]; // [rsp+500h] [rbp+3F8h] BYREF
  char v212[8]; // [rsp+558h] [rbp+450h] BYREF
  char v213[64]; // [rsp+560h] [rbp+458h] BYREF
  char v214[88]; // [rsp+5A0h] [rbp+498h] BYREF

  v160 = -1;
  v153 = a2;
  v161 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v162 = 1;
    v160 = 3020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3020);
  }
  else
  {
    v162 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v160, 3020LL);
  v4 = (const struct _D3DKMT_RENDER *)((char *)a1 + 8);
  v155 = (struct _D3DKMT_RENDER *)((char *)a1 + 8);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v152 = ProcessDxgProcess;
  v12 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v97 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v97;
      v152 = *v97;
    }
  }
  if ( !v12 )
  {
    v81 = -1073741811;
    v98 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v98 + 24) = -1073741811LL;
    *(_QWORD *)(v98 + 32) = PsGetCurrentProcess(v100, v99);
    WdLogEvent5_WdError(v98);
    goto LABEL_125;
  }
  v13 = *(_DWORD *)a1;
  if ( v12 != -184 && *(struct _KTHREAD **)(v12 + 192) == KeGetCurrentThread() )
  {
    v101 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v101 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v101);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v102 = *(_DWORD *)(v12 + 200);
      if ( v102 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v14, &EventBlockThread, v15, v102);
    }
    ExAcquirePushLockSharedEx(v12 + 184, 0LL);
  }
  v16 = (v13 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *(_DWORD *)(v12 + 224) )
    goto LABEL_18;
  v17 = *(_QWORD *)(v12 + 208);
  v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
  if ( ((v13 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60) || (v18 & 0x2000) != 0 || (v18 & 0x1F) == 0 )
    goto LABEL_18;
  v19 = 2LL * (unsigned int)v16;
  v20 = v18 & 0x1F;
  v21 = (struct DXGHWQUEUE **)(v17 + 16LL * (unsigned int)v16);
  if ( (_BYTE)v20 != 15 )
  {
    v23 = WdLogNewEntry5_WdError(v20, v19, v17);
    *(_QWORD *)(v23 + 24) = 267LL;
    WdLogEvent5_WdError(v23);
    goto LABEL_18;
  }
  v22 = *v21;
  v150 = *v21;
  if ( !*v21 )
    goto LABEL_19;
  _m_prefetchw((char *)v22 + 72);
  v103 = *((_QWORD *)v22 + 9);
  if ( !v103 )
  {
LABEL_18:
    v150 = 0LL;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v104 = v103;
    v103 = _InterlockedCompareExchange64((volatile signed __int64 *)v22 + 9, v103 + 1, v103);
    if ( v104 == v103 )
      break;
    if ( !v103 )
      goto LABEL_18;
  }
LABEL_19:
  ExReleasePushLockSharedEx(v12 + 184, 0LL);
  KeLeaveCriticalRegion();
  hDevice = v4->hDevice;
  if ( v12 != -184 && *(struct _KTHREAD **)(v12 + 192) == KeGetCurrentThread() )
  {
    v105 = WdLogNewEntry5_WdAssertion(v25, v24);
    *(_QWORD *)(v105 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v105);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v106 = *(_DWORD *)(v12 + 200);
      if ( v106 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v27, &EventBlockThread, v28, v106);
    }
    ExAcquirePushLockSharedEx(v12 + 184, 0LL);
  }
  v29 = (hDevice >> 6) & 0xFFFFFF;
  if ( (unsigned int)v29 >= *(_DWORD *)(v12 + 224) )
    goto LABEL_32;
  v30 = *(_QWORD *)(v12 + 208);
  v31 = *(_DWORD *)(v30 + 16 * v29 + 8);
  if ( ((hDevice >> 25) & 0x60) != (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60) || (v31 & 0x2000) != 0 || (v31 & 0x1F) == 0 )
    goto LABEL_32;
  v32 = v31 & 0x1F;
  if ( (_BYTE)v32 != 7 )
  {
    v107 = WdLogNewEntry5_WdError(v32, 2LL * (unsigned int)v29, v30);
    *(_QWORD *)(v107 + 24) = 267LL;
    WdLogEvent5_WdError(v107);
LABEL_32:
    v33 = 0LL;
    goto LABEL_33;
  }
  v33 = *(_QWORD *)(v30 + 16LL * (unsigned int)v29);
  if ( !v33 )
    goto LABEL_33;
  _m_prefetchw((const void *)(v33 + 32));
  v34 = *(_QWORD *)(v33 + 32);
  if ( !v34 )
    goto LABEL_32;
  while ( 1 )
  {
    v35 = v34;
    v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 32), v34 + 1, v34);
    if ( v35 == v34 )
      break;
    if ( !v34 )
      goto LABEL_32;
  }
LABEL_33:
  ExReleasePushLockSharedEx(v12 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( v33 )
  {
    v40 = *(_QWORD *)(v33 + 16);
    v154 = v40;
    if ( *(_BYTE *)(v33 + 449) )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v212, v40, 0, v39, 0);
      v111 = COREDEVICEACCESS::AcquireShared((__int64)v212, 0xFFFFFFFF, 0LL);
      v113 = v111;
      if ( v111 >= 0 )
      {
        LODWORD(v113) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 16LL)
                                                       + 4144LL),
                          (struct DXGPROCESS *)v12,
                          (struct DXGCONTEXT *)v33,
                          v4);
      }
      else
      {
        v114 = (_QWORD *)WdLogNewEntry5_WdEvent(v112);
        v114[3] = v113;
        v114[4] = v33;
        v114[5] = v12;
        WdLogEvent5_WdEvent(v114);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v214);
      COREACCESS::~COREACCESS((COREACCESS *)v213);
      v54 = v150;
      v81 = v113;
LABEL_123:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v137 = *(_QWORD *)(v33 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v181,
          (struct DXGDEVICE *)v137);
        v138 = *(_QWORD *)(v33 + 16);
        v174 = 0;
        v173 = *(_QWORD *)(*(_QWORD *)(v138 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v172);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v203, v137, 2, v139, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((__int64)v203);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v137 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v137, (struct DXGCONTEXT *)v33, (struct COREDEVICEACCESS *)v203);
        COREACCESS::~COREACCESS((COREACCESS *)v205);
        COREACCESS::~COREACCESS((COREACCESS *)v204);
        if ( v174 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v172);
        if ( v181[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v181);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v137 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v137 + 16), (struct DXGDEVICE *)v137);
      }
      goto LABEL_124;
    }
    v41 = (struct _KEVENT *)(*(_QWORD *)(v40 + 16) + 96LL);
    if ( !KeReadStateEvent(v41) )
      KeWaitForSingleObject(v41, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v40 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v40 + 16) + 16LL) + 96LL));
      v94 = *(_QWORD *)(*(_QWORD *)(v40 + 16) + 16LL);
      if ( *(_DWORD *)(v94 + 136) == 1 )
      {
        DXGADAPTER::WakeUpAdapter(v94, 0xFFFFFFFFLL);
        v95 = 1;
      }
      else
      {
        v95 = 0;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v94, &EventBlockThread, v93, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v40 + 104), 1u);
      if ( v95 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v40 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v40 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v45 = *(_QWORD *)(v33 + 16);
    v46 = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL);
    if ( !*(_BYTE *)(v46 + 2470)
      || (*((_BYTE *)DXGPROCESS::GetCurrent(v43, v42) + 299) & 0xC) != 0
      || (*(_DWORD *)&v4->Flags & 0x40) != 0
      || *(int *)(v46 + 2184) < 0x2000
      || (v115 = *(_DWORD *)(v46 + 256), v115 <= 1) )
    {
      v47 = (unsigned __int64)v155;
      v48 = 0;
      BroadcastContextCount = v155->BroadcastContextCount;
    }
    else
    {
      v47 = (unsigned __int64)v155;
      BroadcastContextCount = v115 - 1;
      v48 = 1;
      v155->BroadcastContextCount = BroadcastContextCount;
    }
    v149 = v48;
    v50 = BroadcastContextCount + 1;
    if ( BroadcastContextCount > 0x40 )
    {
      v116 = WdLogNewEntry5_WdWarning(v47, v42, v44);
      v81 = -1073741811;
      *(_QWORD *)(v116 + 24) = v33;
      *(_QWORD *)(v116 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v116);
      v54 = v150;
LABEL_122:
      ExReleaseResourceLite(*(PERESOURCE *)(v154 + 104));
      KeLeaveCriticalRegion();
      goto LABEL_123;
    }
    Src = 0LL;
    v168 = 0;
    if ( (unsigned int)v50 > 4 )
    {
      v42 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v50;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v50 < 8 )
        goto LABEL_235;
      v52 = 8 * v50;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v50, 0x4B677844u);
    }
    else
    {
      PoolWithTag = v167;
      v52 = 8 * v50;
    }
    Src = PoolWithTag;
    v168 = v50;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v52);
      if ( Src )
      {
        v163 = 0LL;
        v165 = 0;
        if ( (unsigned int)v50 > 4 )
        {
          v42 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v50;
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v50 < 8 )
            goto LABEL_231;
          v53 = ExAllocatePoolWithTag(PagedPool, v52, 0x4B677844u);
        }
        else
        {
          v53 = v164;
        }
        v163 = v53;
        v165 = v50;
        if ( v53 )
        {
          memset(v53, 0, v52);
          if ( v163 )
          {
            v54 = v150;
            *(_QWORD *)Src = v33;
            if ( v150 )
              *(_QWORD *)v163 = v150;
            if ( v48 )
            {
              v117 = Src;
              v42 = *(_QWORD *)(v45 + 360);
              v118 = 0;
              v119 = 0;
              while ( v42 != v45 + 360 && v42 )
              {
                v44 = *(unsigned int *)(v42 + 408);
                if ( (unsigned int)v44 >= (unsigned int)v50 )
                {
                  v121 = WdLogNewEntry5_WdError(v47, v42, v44);
                  *(_QWORD *)(v121 + 32) = 2817LL;
                  goto LABEL_191;
                }
                v47 = (unsigned int)v44;
                if ( ((1 << v44) & v118) != 0 )
                {
                  v121 = WdLogNewEntry5_WdError((unsigned int)v44, v42, v44);
                  *(_QWORD *)(v121 + 32) = 2824LL;
LABEL_191:
                  *(_QWORD *)(v121 + 24) = v33;
                  WdLogEvent5_WdError(v121);
                  v81 = -1073741811;
                  goto LABEL_232;
                }
                v118 |= 1 << v44;
                v117[v44] = v42;
                if ( (*(_DWORD *)(v42 + 412) & 0x10) != 0 )
                {
                  v120 = 0LL;
                  if ( *(_QWORD *)(v42 + 416) != v42 + 416 )
                    v120 = *(_QWORD *)(v42 + 416);
                  v47 = (unsigned __int64)v163;
                  if ( (unsigned int)v44 < v165 )
                    v47 = (unsigned __int64)v163 + 8 * v44;
                  *(_QWORD *)v47 = v120;
                }
                v42 = *(_QWORD *)v42;
                ++v119;
              }
              if ( v119 != (_DWORD)v50 )
              {
                v121 = WdLogNewEntry5_WdError(v47, v42, v44);
                *(_QWORD *)(v121 + 32) = 2847LL;
                goto LABEL_191;
              }
              v54 = v150;
            }
            v55 = v168;
            v56 = 0LL;
            v57 = Src;
            v58 = 0LL;
            v156 = 0LL;
            LODWORD(NumOfElements) = 0;
            if ( v168 > 4 )
            {
              v42 = 0xFFFFFFFFFFFFFFFFuLL % v168;
              if ( 0xFFFFFFFFFFFFFFFFuLL / v168 < 8 )
              {
LABEL_56:
                v159 = 1;
                if ( !v56 )
                  goto LABEL_228;
                memmove(v56, v57, 8 * v58);
                qsort(
                  v156,
                  (unsigned int)NumOfElements,
                  8uLL,
                  (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
                v42 = (unsigned int)NumOfElements;
                v58 = 1LL;
                v56 = v156;
                if ( (unsigned int)NumOfElements > 1uLL )
                {
                  while ( *(_QWORD *)&v156[8 * v58] != *(_QWORD *)&v156[8 * v58 - 8] )
                  {
                    if ( ++v58 >= (unsigned __int64)(unsigned int)NumOfElements )
                      goto LABEL_58;
                  }
                }
                else
                {
LABEL_58:
                  for ( i = 0LL; i < (unsigned int)NumOfElements; v56 = v156 )
                    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)&v56[8 * i++] + 456LL));
                  v159 = 0;
                }
                if ( !v56 )
                {
LABEL_228:
                  v134 = WdLogNewEntry5_WdWarning(v56, v42, v58);
                  *(_QWORD *)(v134 + 24) = 2858LL;
                  WdLogEvent5_WdWarning(v134);
                  v81 = -1073741801;
LABEL_112:
                  v85 = v156;
                  if ( v156 )
                  {
                    if ( !v159 )
                    {
                      for ( j = 0LL; j < (unsigned int)NumOfElements; v85 = v156 )
                      {
                        v87 = v85[j] + 456LL;
                        *(_QWORD *)(v87 + 8) = 0LL;
                        ExReleasePushLockExclusiveEx(v87, 0LL);
                        KeLeaveCriticalRegion();
                        ++j;
                      }
                    }
                  }
                  if ( v85 != (_QWORD *)v157 && v85 )
                    ExFreePoolWithTag(v85, 0);
                  v156 = 0LL;
                  LODWORD(NumOfElements) = 0;
LABEL_118:
                  if ( v163 != v164 && v163 )
                    ExFreePoolWithTag(v163, 0);
                  v163 = 0LL;
                  v165 = 0;
                  goto LABEL_120;
                }
                v60 = *(volatile signed __int64 **)(*(_QWORD *)(v45 + 16) + 16LL);
                v170 = (struct DXGADAPTER *)v60;
                _InterlockedIncrement64(v60 + 3);
                v169 = -1LL;
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v60 + 15, 0LL);
                v62 = *(_QWORD *)(v33 + 16);
                v171 = 1;
                v63 = *(volatile signed __int64 **)(*(_QWORD *)(v62 + 16) + 16LL);
                v190 = (struct DXGADAPTER *)v63;
                v191 = 0;
                v192 = -1;
                v193 = 0LL;
                if ( v63 )
                {
                  _InterlockedIncrement64(v63 + 3);
                  v189 = -1LL;
                }
                v64 = *(volatile signed __int64 **)(*(_QWORD *)(v62 + 16) + 16LL);
                v197 = (struct DXGADAPTER *)v64;
                v198 = 0;
                v199 = -1;
                v200 = 0LL;
                if ( v64 )
                {
                  _InterlockedIncrement64(v64 + 3);
                  v196 = -1LL;
                }
                v201 = v62;
                v202 = 0;
                if ( v191 )
                {
                  v122 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v62);
                  v122[5] = v188;
                  v122[3] = 275LL;
                  v122[4] = 4LL;
                  v122[6] = 0LL;
                  v122[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v122);
                }
                if ( KeGetCurrentThread() == *((struct _KTHREAD **)v190 + 20) )
                {
                  v67 = v153;
                }
                else
                {
                  if ( !KeReadStateEvent((PRKEVENT)v190 + 2) )
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q(v65, &EventBlockThread, v66, 72);
                    KeWaitForSingleObject((char *)v190 + 48, Executive, 0, 0, 0LL);
                  }
                  v67 = v153;
                  DXGADAPTER::AcquireCoreResourceShared((__int64)v190, 0xBCCu, (__int64)v153);
                }
                v192 = 3020;
                v193 = 0LL;
                if ( v67 )
                {
                  v62 = 17LL;
                  v123 = v67 - v194;
                  v124 = v194;
                  do
                  {
                    if ( v62 == -2147483629LL )
                      break;
                    v125 = v124[v123];
                    if ( !v125 )
                      break;
                    *v124++ = v125;
                    --v62;
                  }
                  while ( v62 );
                  v126 = v124 - 1;
                  if ( v62 )
                    v126 = v124;
                  *v126 = 0;
                  v127 = v194;
                  if ( !v62 )
                    v127 = v193;
                  v193 = v127;
                }
                v191 = 1;
                if ( *(_DWORD *)(v201 + 464) != 1 )
                  goto LABEL_214;
                if ( v202 )
                {
                  COREACCESS::AcquireShared((__int64)v195, 0xFFFFFFFF, 0LL);
                  if ( *((_DWORD *)v197 + 44) != 1 )
                  {
                    COREACCESS::Release((COREACCESS *)v195);
LABEL_214:
                    COREACCESS::Release((COREACCESS *)v188);
                    v129 = (_QWORD *)WdLogNewEntry5_WdEvent(v128);
                    v129[5] = v152;
                    v129[3] = -1073741130LL;
                    v129[4] = v33;
                    WdLogEvent5_WdEvent(v129);
                    v81 = -1073741130;
LABEL_97:
                    v82 = v197;
                    if ( v197 )
                    {
                      if ( v198 )
                      {
                        COREACCESS::Release((COREACCESS *)v195);
                        v82 = v197;
                      }
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v82 + 2), v82);
                    }
                    v83 = v190;
                    if ( v190 )
                    {
                      if ( v191 )
                      {
                        v191 = 0;
                        v83 = v190;
                        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v190 + 20) )
                        {
                          DXGADAPTER::ReleaseCoreResource((__int64)v190, v192, (__int64)v193);
                          v83 = v190;
                        }
                        v193 = 0LL;
                        v192 = -1;
                      }
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v83 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v83 + 2), v83);
                    }
                    if ( v171 )
                    {
                      v84 = v170;
                      ExReleasePushLockSharedEx((char *)v170 + 120, 0LL);
                      KeLeaveCriticalRegion();
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v84 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v170 + 2), v170);
                    }
                    goto LABEL_112;
                  }
                }
                v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 16LL);
                v69 = *(int *)(v68 + 2184) >= 0x2000 || *(_BYTE *)(v68 + 2484);
                v70 = v155;
                if ( (*(_DWORD *)&v155->Flags & 0x20) != 0 )
                  pNewAllocationList = v155->pNewAllocationList;
                else
                  pNewAllocationList = *(D3DDDI_ALLOCATIONLIST **)(v33 + 88);
                AllocationCount = v155->AllocationCount;
                v73 = 0LL;
                v151[0] = v155->AllocationCount;
                P = 0LL;
                v186 = 0;
                if ( !v69 )
                  goto LABEL_85;
                if ( (unsigned int)AllocationCount > 0x20 )
                {
                  v62 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)AllocationCount;
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)AllocationCount < 8 )
                    goto LABEL_218;
                  v74 = ExAllocatePoolWithTag(PagedPool, 8 * AllocationCount, 0x4B677844u);
                  P = v74;
                }
                else
                {
                  v74 = v185;
                  P = v185;
                }
                v186 = AllocationCount;
                if ( v74 )
                {
                  memset(v74, 0, 8 * AllocationCount);
                  v73 = (struct DXGALLOCATION **)P;
                  if ( P )
                  {
                    v75 = DxgkReferenceAllocationList(v151, pNewAllocationList, (struct DXGALLOCATION **)P, 0LL);
                    AllocationCount = v151[0];
                    v79 = v75;
                    if ( v75 < 0 )
                      goto LABEL_88;
                    v70 = v155;
LABEL_85:
                    if ( v149 )
                      v80 = DXGCONTEXT::RenderKmLda(
                              v70,
                              (struct COREDEVICEACCESS *)v187,
                              (struct DXGCONTEXT **)Src,
                              v73,
                              (struct DXGHWQUEUE **)v163);
                    else
                      v80 = DXGCONTEXT::Render(
                              (DXGCONTEXT *)v33,
                              v70,
                              (struct COREDEVICEACCESS *)v187,
                              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v169,
                              (struct DXGCONTEXT **)Src,
                              v73,
                              (struct DXGHWQUEUE **)v163);
                    v79 = v80;
LABEL_88:
                    if ( v69 && (_DWORD)AllocationCount )
                    {
                      do
                      {
                        v77 = *v73;
                        if ( *v73 )
                          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v77 + 11);
                        ++v73;
                        --AllocationCount;
                      }
                      while ( AllocationCount );
                    }
                    if ( v79 >= 0 )
                      goto LABEL_94;
                    switch ( v79 )
                    {
                      case -1073741811:
                      case -1073741592:
                        v133 = (_QWORD *)WdLogNewEntry5_WdError(v77, v76, v78);
                        v133[3] = v79;
                        v133[5] = v152;
                        v133[4] = v33;
                        WdLogEvent5_WdError(v133);
                        goto LABEL_94;
                      case -1071775482:
                        v131 = (_QWORD *)WdLogNewEntry5_WdEvent(v77);
                        v131[3] = -1071775482LL;
                        break;
                      case -1071774910:
                        goto LABEL_94;
                      default:
                        v131 = (_QWORD *)WdLogNewEntry5_WdEvent(v77);
                        v131[3] = v79;
                        break;
                    }
                    v132 = v152;
                    v131[4] = v33;
                    v131[5] = v132;
                    WdLogEvent5_WdEvent(v131);
LABEL_94:
                    v81 = v79;
                    goto LABEL_95;
                  }
                }
LABEL_218:
                v130 = WdLogNewEntry5_WdWarning(v70, v62, v61);
                *(_QWORD *)(v130 + 24) = 2898LL;
                WdLogEvent5_WdWarning(v130);
                v81 = -1073741801;
LABEL_95:
                if ( P != v185 && P )
                  ExFreePoolWithTag(P, 0);
                v54 = v150;
                P = 0LL;
                v186 = 0;
                goto LABEL_97;
              }
              v56 = ExAllocatePoolWithTag(PagedPool, 8LL * v168, 0x4B677844u);
              v156 = v56;
            }
            else
            {
              v56 = v157;
              v156 = v157;
            }
            LODWORD(NumOfElements) = v55;
            v58 = v55;
            if ( v56 )
            {
              memset(v56, 0, 8 * v55);
              v58 = (unsigned int)NumOfElements;
              v56 = v156;
            }
            goto LABEL_56;
          }
        }
LABEL_231:
        v135 = WdLogNewEntry5_WdWarning(v47, v42, v44);
        *(_QWORD *)(v135 + 24) = 2785LL;
        WdLogEvent5_WdWarning(v135);
        v81 = -1073741801;
LABEL_232:
        v54 = v150;
        goto LABEL_118;
      }
    }
LABEL_235:
    v136 = WdLogNewEntry5_WdWarning(v47, v42, v44);
    *(_QWORD *)(v136 + 24) = 2778LL;
    WdLogEvent5_WdWarning(v136);
    v54 = v150;
    v81 = -1073741801;
LABEL_120:
    if ( Src != v167 && Src )
      ExFreePoolWithTag(Src, 0);
    Src = 0LL;
    v168 = 0;
    goto LABEL_122;
  }
  v81 = -1073741811;
  v108 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36, v38);
  v108[3] = -1073741811LL;
  v108[4] = PsGetCurrentProcess(v110, v109);
  v108[5] = v4->hDevice;
  WdLogEvent5_WdError(v108);
  v54 = v150;
LABEL_124:
  if ( v54 )
  {
    v140 = _InterlockedDecrement64((volatile signed __int64 *)v54 + 9);
    if ( v140 < 0 )
    {
      v141 = WdLogNewEntry5_WdAssertion(v89, v88);
      *(_QWORD *)(v141 + 24) = 101LL;
      WdLogEvent5_WdAssertion(v141);
    }
    if ( !v140 )
    {
      v142 = *((_QWORD *)v54 + 2);
      v143 = *(struct DXGDEVICE **)(v142 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v182, v143);
      v144 = *((_QWORD *)v143 + 2);
      v177 = 0;
      v176 = *(_QWORD *)(v144 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v175);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v206, (__int64)v143, 2, v145, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v206);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v143 + 2) + 16LL) + 176LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v142, v54, (struct COREDEVICEACCESS *)v206);
      COREACCESS::~COREACCESS((COREACCESS *)v208);
      COREACCESS::~COREACCESS((COREACCESS *)v207);
      if ( v177 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v175);
      if ( v182[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v182);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v142 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v146 = *(_QWORD *)(v142 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v183,
          (struct DXGDEVICE *)v146);
        v147 = *(_QWORD *)(v142 + 16);
        v180 = 0;
        v179 = *(_QWORD *)(*(_QWORD *)(v147 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v178);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v209, v146, 2, v148, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((__int64)v209);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v146 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v146, (struct DXGCONTEXT *)v142, (struct COREDEVICEACCESS *)v209);
        COREACCESS::~COREACCESS((COREACCESS *)v211);
        COREACCESS::~COREACCESS((COREACCESS *)v210);
        if ( v180 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v178);
        if ( v183[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v183);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v146 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v146 + 16), (struct DXGDEVICE *)v146);
      }
    }
  }
LABEL_125:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v160, v88);
  if ( v162 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v90, &EventProfilerExit, v91, v160);
  return v81;
}
