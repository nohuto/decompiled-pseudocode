/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0135640
 * Callers:
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C0135520 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z.c)
 *     DxgkMakeResident @ 0x1C0135620 (DxgkMakeResident.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220680 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D680 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DC08 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0023CC4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0023F84 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0ppqq @ 0x1C00434B4 (McTemplateK0ppqq.c)
 *     McTemplateK0qxx @ 0x1C004354C (McTemplateK0qxx.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C02256A8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C02561A8 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C02561E4 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(ULONG64 a1, int a2, const GUID *a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct DXGPROCESS *v13; // rcx
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  const GUID *v19; // r8
  bool v20; // zf
  __int128 *v22; // rax
  unsigned int *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGPAGINGQUEUE *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  bool v36; // cf
  SIZE_T v37; // rax
  char *v38; // rax
  struct DXGALLOCATIONREFERENCE *v39; // rsi
  struct DXGALLOCATIONREFERENCE *v40; // rax
  _BYTE *PoolWithTag; // r9
  __int64 v42; // rsi
  __int64 v43; // rcx
  int v44; // ebx
  struct _KEVENT *v45; // rdi
  struct _KEVENT *v46; // rcx
  __int64 v47; // r9
  const GUID *v48; // r8
  __int64 v49; // rcx
  char v50; // bl
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // ebx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  const GUID *v57; // r8
  _BYTE *v58; // rcx
  __int64 v59; // r13
  char v60; // al
  _BYTE *v61; // rax
  _BYTE *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  const GUID *v65; // r8
  __int64 v66; // rcx
  char v67; // r12
  __int64 v68; // rax
  __int64 v69; // rax
  struct _KTHREAD **v70; // r15
  struct _KTHREAD ***v71; // rax
  struct _KTHREAD ***v72; // rbx
  unsigned int *v73; // rbx
  struct _EX_RUNDOWN_REF **v74; // rdi
  unsigned int *v75; // rax
  unsigned int v76; // r8d
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  struct _EX_RUNDOWN_REF *v80; // rax
  struct _EX_RUNDOWN_REF *v81; // rax
  __int64 v82; // rdx
  ULONG_PTR Count; // rbx
  __int64 v84; // rax
  ULONG_PTR *v85; // rcx
  struct _EX_RUNDOWN_REF *v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v90; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v96; // rax
  struct _KTHREAD *v97; // rdi
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  int v101; // ebx
  __int64 v102; // rbx
  __int64 *v103; // rax
  __int64 v104; // rbx
  _QWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  const GUID *v108; // r8
  struct DXGPAGINGQUEUE *v109; // rbx
  __int64 v110; // rdi
  __int64 v111; // rax
  int Resident; // ebx
  __int128 *v113; // r15
  int v114; // esi
  unsigned __int64 *v115; // r12
  __int64 v116; // rdx
  __int64 v117; // rcx
  const GUID *v118; // r8
  __int64 v119; // rdi
  unsigned int v120; // esi
  unsigned __int64 *v121; // rbx
  unsigned int HostProcess; // eax
  ULONG64 v123; // r8
  _QWORD *v124; // rdx
  _QWORD *v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rcx
  const GUID *v128; // r8
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  const GUID *v132; // r8
  int v133; // [rsp+50h] [rbp-468h] BYREF
  __int64 v134; // [rsp+58h] [rbp-460h]
  char v135; // [rsp+60h] [rbp-458h]
  struct _EX_RUNDOWN_REF *v136; // [rsp+68h] [rbp-450h] BYREF
  unsigned int *v137; // [rsp+70h] [rbp-448h]
  struct DXGALLOCATIONREFERENCE *v138; // [rsp+78h] [rbp-440h]
  DXGPAGINGQUEUE *v139; // [rsp+80h] [rbp-438h] BYREF
  struct DXGALLOCATIONREFERENCE *v140; // [rsp+88h] [rbp-430h]
  __int128 *v141; // [rsp+90h] [rbp-428h]
  PVOID v142; // [rsp+98h] [rbp-420h]
  struct DXGPAGINGQUEUE *v143; // [rsp+A0h] [rbp-418h] BYREF
  struct DXGPROCESS *v144; // [rsp+A8h] [rbp-410h]
  ULONG64 v145; // [rsp+B0h] [rbp-408h]
  __int64 v146; // [rsp+B8h] [rbp-400h] BYREF
  int v147; // [rsp+C0h] [rbp-3F8h]
  unsigned int v148; // [rsp+C8h] [rbp-3F0h]
  ULONG_PTR *v149; // [rsp+D0h] [rbp-3E8h]
  __int64 v150; // [rsp+D8h] [rbp-3E0h]
  unsigned int v151; // [rsp+E0h] [rbp-3D8h]
  unsigned int *v152; // [rsp+E8h] [rbp-3D0h]
  ULONG64 v153; // [rsp+F0h] [rbp-3C8h]
  _BYTE v154[24]; // [rsp+F8h] [rbp-3C0h] BYREF
  __int128 v155; // [rsp+110h] [rbp-3A8h] BYREF
  __int128 v156; // [rsp+120h] [rbp-398h]
  __int128 v157; // [rsp+130h] [rbp-388h]
  PVOID P; // [rsp+140h] [rbp-378h]
  _BYTE v159[320]; // [rsp+148h] [rbp-370h] BYREF
  int v160; // [rsp+288h] [rbp-230h]
  char v161[8]; // [rsp+290h] [rbp-228h] BYREF
  _BYTE v162[16]; // [rsp+298h] [rbp-220h] BYREF
  __int64 v163; // [rsp+2A8h] [rbp-210h]
  char v164; // [rsp+2B0h] [rbp-208h]
  unsigned int v165; // [rsp+2B4h] [rbp-204h]
  _BYTE *v166; // [rsp+2B8h] [rbp-200h]
  _BYTE v167[24]; // [rsp+2C0h] [rbp-1F8h] BYREF
  _BYTE v168[16]; // [rsp+2D8h] [rbp-1E0h] BYREF
  __int64 v169; // [rsp+2E8h] [rbp-1D0h]
  __int64 v170; // [rsp+318h] [rbp-1A0h]
  char v171; // [rsp+320h] [rbp-198h]
  struct DXGALLOCATIONREFERENCE *v172; // [rsp+330h] [rbp-188h] BYREF
  char v173; // [rsp+338h] [rbp-180h] BYREF
  int v174; // [rsp+478h] [rbp-40h]

  v148 = (unsigned int)a3;
  v145 = a1;
  v153 = a1;
  v133 = -1;
  v134 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v135 = 1;
    v133 = 2115;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2115);
  }
  else
  {
    v135 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v133, 2115LL);
  CurrentProcess = PsGetCurrentProcess(v8, v7);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  v144 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*((_BYTE *)ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v15 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v13 = *v15;
      v144 = *v15;
    }
    else
    {
      v13 = v144;
    }
  }
  if ( !v13 )
  {
    v16 = WdLogNewEntry5_WdError(0LL, v11, v12);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133, v17);
    v20 = v135 == 0;
LABEL_12:
    if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, v133);
    return 3221225485LL;
  }
  v155 = 0uLL;
  v156 = 0uLL;
  v157 = 0uLL;
  v141 = 0LL;
  if ( a2 )
  {
    v22 = (__int128 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v22 = (__int128 *)MmUserProbeAddress;
    v155 = *v22;
    v156 = v22[1];
    v157 = v22[2];
    v23 = (unsigned int *)&v155;
    v141 = &v155;
    v13 = v144;
  }
  else
  {
    v23 = (unsigned int *)a1;
    v141 = (__int128 *)a1;
  }
  if ( !v23[1] )
  {
    v24 = WdLogNewEntry5_WdWarning(v13, v11, v12);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
LABEL_23:
    WdLogEvent5_WdWarning(v24);
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133, v25);
    v20 = v135 == 0;
    goto LABEL_12;
  }
  if ( !*((_QWORD *)v23 + 1) )
  {
    v24 = WdLogNewEntry5_WdWarning(v13, v11, v12);
    *(_QWORD *)(v24 + 24) = 497LL;
    goto LABEL_23;
  }
  if ( v23[6] >= 4 )
  {
    v24 = WdLogNewEntry5_WdWarning(v13, v11, v12);
    *(_QWORD *)(v24 + 24) = 504LL;
    goto LABEL_23;
  }
  v143 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v139, *v23, (struct _KTHREAD **)v13, &v143, 1);
  v29 = v143;
  if ( !v143 )
  {
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v30 + 24) = *v23;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
LABEL_31:
    if ( v139 )
    {
      DXGPAGINGQUEUE::ReleaseReference(v139, v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133, v31);
      v20 = v135 == 0;
      goto LABEL_12;
    }
    goto LABEL_24;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v172);
  P = 0LL;
  v160 = 0;
  v33 = v23[1];
  if ( (unsigned int)v33 <= 0x28 )
  {
    v40 = (struct DXGALLOCATIONREFERENCE *)&v173;
    goto LABEL_44;
  }
  v34 = -1LL;
  v32 = 0xFFFFFFFFFFFFFFFFuLL % v33;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v33 < 8 )
  {
    v140 = 0LL;
    goto LABEL_46;
  }
  v35 = 8LL * (unsigned int)v33;
  if ( !is_mul_ok((unsigned int)v33, 8uLL) )
    v35 = -1LL;
  v36 = __CFADD__(v35, 8LL);
  v37 = v35 + 8;
  if ( v36 )
    v37 = -1LL;
  v38 = (char *)operator new[](v37, 0x4B677844u, PagedPool);
  if ( !v38 )
  {
    v40 = 0LL;
LABEL_44:
    v172 = v40;
    v140 = v40;
    goto LABEL_45;
  }
  *(_QWORD *)v38 = (unsigned int)v33;
  v140 = (struct DXGALLOCATIONREFERENCE *)(v38 + 8);
  v39 = (struct DXGALLOCATIONREFERENCE *)(v38 + 8);
  `vector constructor iterator'(
    v38 + 8,
    8LL,
    (unsigned int)v33,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  v172 = v39;
LABEL_45:
  v174 = v33;
  LODWORD(v33) = v23[1];
  v34 = -1LL;
LABEL_46:
  if ( (unsigned int)v33 <= 0x28 )
  {
    PoolWithTag = v159;
  }
  else
  {
    v32 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v33;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v33 < 8 )
    {
      PoolWithTag = 0LL;
      v142 = 0LL;
      goto LABEL_53;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v33, 0x4B677844u);
  }
  P = PoolWithTag;
  v142 = PoolWithTag;
  v160 = v33;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * (unsigned int)v33);
    PoolWithTag = P;
    v142 = P;
  }
LABEL_53:
  if ( v140 && PoolWithTag )
  {
    v137 = (unsigned int *)*((_QWORD *)v23 + 1);
    v152 = &v137[v23[1]];
    v138 = v140;
    v149 = (ULONG_PTR *)PoolWithTag;
    v42 = *((_QWORD *)v29 + 2);
    v150 = v42;
    v146 = v42;
    v43 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
    if ( *(int *)(v43 + 2184) >= 0x2000 || *(_BYTE *)(v43 + 2484) )
      v44 = *((_DWORD *)DXGGLOBAL::GetGlobal(v43, v32) + 247);
    else
      v44 = 0;
    v147 = v44;
    v45 = *(struct _KEVENT **)(v42 + 16);
    if ( *(_DWORD *)(v42 + 328) == 2 )
    {
      if ( KeReadStateEvent(v45 + 4) )
        goto LABEL_65;
      v46 = v45 + 4;
    }
    else
    {
      if ( KeReadStateEvent(v45 + 3) )
        goto LABEL_65;
      v46 = v45 + 3;
    }
    KeWaitForSingleObject(v46, Executive, 0, 0, 0LL);
LABEL_65:
    KeEnterCriticalRegion();
    if ( v44 )
    {
      if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v42 + 112, 0LL) )
        goto LABEL_82;
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL) + 96LL));
      v51 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
      if ( *(_DWORD *)(v51 + 136) == 1 )
      {
        DXGADAPTER::WakeUpAdapter(v51, 0xFFFFFFFFLL);
        v50 = 1;
      }
      else
      {
        v50 = 0;
      }
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v42 + 112));
    }
    else
    {
      if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v42 + 104), 0) )
        goto LABEL_82;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL) + 96LL));
      v49 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
      if ( *(_DWORD *)(v49 + 136) == 1 )
      {
        DXGADAPTER::WakeUpAdapter(v49, 0xFFFFFFFFLL);
        v50 = 1;
      }
      else
      {
        v50 = 0;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v49, &EventBlockThread, v48, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v42 + 104), 1u);
    }
    if ( v50 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v42 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
LABEL_82:
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, v42, 0, v47, 0);
    v54 = v148;
    if ( v148 == -1 )
      v54 = 2115;
    if ( v164 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53, v52);
      v55[3] = 275LL;
      v55[4] = 4LL;
      v55[5] = v162;
      v55[6] = 0LL;
      v55[7] = 0LL;
      WdLogEvent5_WdCriticalError(v55);
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v163 + 160) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v163 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v56, &EventBlockThread, v57, 72);
        KeWaitForSingleObject((PVOID)(v163 + 48), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v163, v54, a4);
    }
    v165 = v54;
    v166 = 0LL;
    if ( a4 )
    {
      v52 = 17LL;
      v58 = v167;
      v59 = a4 - (_QWORD)v167;
      do
      {
        if ( v52 == -2147483629 )
          break;
        v60 = v58[v59];
        if ( !v60 )
          break;
        *v58++ = v60;
        --v52;
      }
      while ( v52 );
      v61 = v58 - 1;
      if ( v52 )
        v61 = v58;
      *v61 = 0;
      v62 = v167;
      if ( !v52 )
        v62 = v166;
      v166 = v62;
    }
    v164 = 1;
    if ( *(_DWORD *)(v170 + 464) != 1 )
      goto LABEL_107;
    if ( v171 )
    {
      COREACCESS::AcquireShared((__int64)v168, 0xFFFFFFFF, 0LL);
      if ( *(_DWORD *)(v169 + 176) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v168);
LABEL_107:
        COREACCESS::Release((COREACCESS *)v162);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v146);
        if ( P != v159 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v160 = 0;
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v172);
        if ( v139 )
          DXGPAGINGQUEUE::ReleaseReference(v139, v63);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133, v63);
        if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v64, &EventProfilerExit, v65, v133);
        return 3221226166LL;
      }
    }
    v66 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
    v67 = *(_BYTE *)(v66 + 185);
    v68 = PsGetCurrentProcess(v66, v52);
    v69 = PsGetProcessDxgProcess(v68);
    v70 = (struct _KTHREAD **)v69;
    if ( !v69 || (*(_BYTE *)(v69 + 299) & 4) != 0 )
    {
      v71 = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v72 = v71;
      if ( v71 )
      {
        ObfDereferenceObject(v71);
        v70 = *v72;
      }
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v154, v70);
LABEL_122:
    v73 = v137;
LABEL_123:
    v74 = (struct _EX_RUNDOWN_REF **)v138;
    while ( v73 != v152 )
    {
      if ( a2 )
      {
        v75 = v73;
        if ( (unsigned __int64)v73 >= MmUserProbeAddress )
          v75 = (unsigned int *)MmUserProbeAddress;
        v76 = *v75;
        v151 = *v75;
      }
      else
      {
        v76 = *v73;
      }
      DXGPROCESS::GetAllocationUnsafe((__int64)v70, (DXGALLOCATIONREFERENCE *)&v136, v76);
      v80 = v136;
      if ( !v136 )
      {
        v81 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v78, v77, v79);
        v81[3].Count = (ULONG_PTR)v136;
        goto LABEL_132;
      }
      if ( v136[1].Count != v42 )
      {
        v81 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v78, v77, v79);
        v81[3].Count = v42;
        v81[4].Count = v136[1].Count;
LABEL_132:
        WdLogEvent5_WdError(v81);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v136, v82);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v154);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v146);
        if ( P != v159 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v160 = 0;
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v172);
        goto LABEL_31;
      }
      if ( !v67 )
      {
        Count = v136[3].Count;
        if ( !Count )
        {
          v84 = WdLogNewEntry5_WdWarning(v78, v77, v79);
          *(_QWORD *)(v84 + 24) = v136;
          WdLogEvent5_WdWarning(v84);
          v80 = v136;
        }
        v85 = v149;
        *v149 = Count;
        v149 = v85 + 1;
        v73 = v137;
      }
      v86 = *v74;
      if ( *v74 )
      {
        ExReleaseRundownProtection(v86 + 11);
        v80 = v136;
      }
      *v74 = v80;
      v136 = 0LL;
      v138 = (struct DXGALLOCATIONREFERENCE *)++v74;
      v137 = ++v73;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v86, v77) + 247) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v90 = WdLogNewEntry5_WdAssertion(v88, v87);
          *(_QWORD *)(v90 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v90);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v88, v87);
        if ( !CurrentProcessSessionId )
          goto LABEL_122;
        v20 = (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId;
        v73 = v137;
        if ( !v20 )
          goto LABEL_123;
        v92 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v92 = *ThreadWin32Thread;
        }
        if ( v92 )
          v96 = *(_QWORD *)(v92 + 80);
        else
          v96 = 0LL;
        v73 = v137;
        v74 = (struct _EX_RUNDOWN_REF **)v138;
        if ( v96 )
        {
          v97 = KeGetCurrentThread();
          if ( !v97 )
          {
            v98 = WdLogNewEntry5_WdAssertion(v94, v93);
            *(_QWORD *)(v98 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v98);
          }
          v101 = PsGetCurrentProcessSessionId(v94, v93);
          if ( !v101 || (unsigned int)PsGetThreadSessionId(v97) != v101 )
            goto LABEL_165;
          v102 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v103 = (__int64 *)PsGetThreadWin32Thread(v97);
            if ( v103 )
              v102 = *v103;
          }
          if ( v102 )
            v104 = *(_QWORD *)(v102 + 80);
          else
LABEL_165:
            v104 = 0LL;
          v74 = (struct _EX_RUNDOWN_REF **)v138;
          if ( *(_DWORD *)(v104 + 136) )
          {
            v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v100, v99);
            v105[3] = 275LL;
            v105[4] = 38LL;
            v105[5] = *(int *)(v104 + 136);
            v105[6] = 0LL;
            v105[7] = 0LL;
            WdLogEvent5_WdCriticalError(v105);
          }
          v73 = v137;
        }
      }
    }
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v154);
    if ( v67 )
    {
      v119 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
      v120 = *((_DWORD *)v143 + 7);
      v113 = v141;
      v115 = (unsigned __int64 *)(v141 + 2);
      v121 = (unsigned __int64 *)v141 + 5;
      HostProcess = DXGPROCESS::GetHostProcess(v144);
      Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v119 + 4144),
                   HostProcess,
                   0,
                   v120,
                   *(struct D3DDDI_MAKERESIDENT_FLAGS *)((char *)v113 + 24),
                   *((_DWORD *)v113 + 1),
                   v140,
                   v115,
                   v121);
    }
    else
    {
      v109 = v143;
      v110 = *((_QWORD *)v143 + 2);
      if ( !*(_BYTE *)(v110 + 1751) )
      {
        if ( *(_DWORD *)(v110 + 328) != 2
          || (v107 = *(_QWORD *)(*(_QWORD *)(v110 + 16) + 16LL), *(int *)(v107 + 2452) < 2000) )
        {
          v111 = WdLogNewEntry5_WdError(v107, v106, v108);
          *(_QWORD *)(v111 + 24) = v109;
          WdLogEvent5_WdError(v111);
          Resident = -1073741637;
          v113 = v141;
          goto LABEL_186;
        }
      }
      v113 = v141;
      v114 = *((_DWORD *)v141 + 6) & 1 | 2;
      if ( (*((_DWORD *)v141 + 6) & 2) == 0 )
        v114 = *((_DWORD *)v141 + 6) & 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0ppqq(
          *(_QWORD *)(*((_QWORD *)v143 + 5) + 32LL),
          &EventMakeResidentBegin,
          v108,
          v143,
          *(_QWORD *)(*((_QWORD *)v143 + 5) + 32LL),
          *((_DWORD *)v141 + 1),
          *((_DWORD *)v141 + 6));
      v115 = (unsigned __int64 *)(v113 + 2);
      Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PVOID, _QWORD, int, __int128 *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v110 + 16) + 544LL) + 8LL) + 768LL))(
                   *(_QWORD *)(*(_QWORD *)(v110 + 16) + 552LL),
                   *((_QWORD *)v109 + 4),
                   v142,
                   *((unsigned int *)v113 + 1),
                   v114,
                   v113 + 2,
                   (__int64)v113 + 40);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0qxx(v117, v116, v118, Resident, *((_QWORD *)v113 + 5), *v115);
    }
    if ( Resident >= 0 && a2 )
    {
      v123 = v145;
      v124 = (_QWORD *)(v145 + 32);
      if ( v145 + 32 >= MmUserProbeAddress )
        v124 = (_QWORD *)MmUserProbeAddress;
      *v124 = *v115;
      goto LABEL_187;
    }
LABEL_186:
    v123 = v145;
LABEL_187:
    if ( a2 )
    {
      v125 = (_QWORD *)(v123 + 40);
      if ( v123 + 40 >= MmUserProbeAddress )
        v125 = (_QWORD *)MmUserProbeAddress;
      *v125 = *((_QWORD *)v113 + 5);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
    if ( v147 )
      ExReleasePushLockSharedEx(v146 + 112, 0LL);
    else
      ExReleaseResourceLite(*(PERESOURCE *)(v146 + 104));
    KeLeaveCriticalRegion();
    if ( P != v159 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v160 = 0;
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v172);
    if ( v139 )
      DXGPAGINGQUEUE::ReleaseReference(v139, v126);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133, v126);
    if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v127, &EventProfilerExit, v128, v133);
    return (unsigned int)Resident;
  }
  v129 = WdLogNewEntry5_WdLowResource(v34, v32, v140, PoolWithTag);
  *(_QWORD *)(v129 + 24) = 539LL;
  WdLogEvent5_WdLowResource(v129);
  if ( P != v159 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v160 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v172);
  if ( v139 )
    DXGPAGINGQUEUE::ReleaseReference(v139, v130);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133, v130);
  if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v131, &EventProfilerExit, v132, v133);
  return 3221225495LL;
}
