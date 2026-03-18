/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010EAF0
 * Callers:
 *     DxgkCreateAllocation @ 0x1C013B820 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021BD00 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006D60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C434 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EEE94 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C00F38F0 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C01227C0 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C020719C (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C0207F0C (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(
        struct _D3DKMT_CREATEALLOCATION *a1,
        struct DXGALLOCATION **a2,
        const GUID *a3)
{
  struct _D3DKMT_CREATEALLOCATION *v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // di
  __int64 v12; // r8
  _D3DKMT_CREATEALLOCATION *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // r14
  __int64 NumAllocations; // rdx
  __int64 v19; // rcx
  char Flags; // al
  __int64 v21; // rcx
  int v22; // edi
  struct _KEVENT *v23; // r12
  struct _KEVENT *v24; // r12
  volatile signed __int64 *v25; // rdi
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  const GUID *v30; // r8
  SIZE_T v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  DXGDEVICE *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r13
  OUTPUTDUPL_MGR *v39; // rcx
  DXGGLOBAL *Global; // rax
  void *v41; // r12
  unsigned int v42; // eax
  unsigned int StandardAllocationDriverData; // r14d
  _DWORD *p_hResource; // rcx
  _DWORD *p_hGlobalShare; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rcx
  struct DXGADAPTER *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  const GUID *v50; // r8
  const GUID *v52; // r8
  __int64 v53; // rcx
  char v54; // di
  __int64 *ThreadProperty; // rax
  __int64 *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  const GUID *v60; // r8
  bool v61; // zf
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // edi
  __int64 v69; // rcx
  const GUID *v70; // r8
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  char v75; // r12
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  const GUID *v83; // r8
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  const GUID *v87; // r8
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned __int8 v91; // [rsp+80h] [rbp-218h]
  struct DXGDEVICE *v92; // [rsp+88h] [rbp-210h] BYREF
  void *v93; // [rsp+90h] [rbp-208h] BYREF
  int v94; // [rsp+98h] [rbp-200h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-1F8h]
  char v96; // [rsp+A8h] [rbp-1F0h]
  void *v97; // [rsp+B0h] [rbp-1E8h]
  struct DXGDEVICE *v98; // [rsp+B8h] [rbp-1E0h] BYREF
  struct DXGALLOCATION **v99; // [rsp+C0h] [rbp-1D8h]
  struct DXGRESOURCE *v100; // [rsp+C8h] [rbp-1D0h]
  unsigned int v101[2]; // [rsp+D0h] [rbp-1C8h]
  unsigned int v102; // [rsp+D8h] [rbp-1C0h] BYREF
  _D3DKMT_CREATEALLOCATION v103; // [rsp+E0h] [rbp-1B8h] BYREF
  struct DXGDEVICE *v104; // [rsp+130h] [rbp-168h] BYREF
  int v105; // [rsp+138h] [rbp-160h]
  __int64 v106; // [rsp+140h] [rbp-158h] BYREF
  struct DXGADAPTER *v107; // [rsp+148h] [rbp-150h]
  char v108; // [rsp+150h] [rbp-148h]
  __int64 v109; // [rsp+158h] [rbp-140h] BYREF
  __int64 (__fastcall *v110)(OUTPUTDUPL_MGR *, PERESOURCE *); // [rsp+160h] [rbp-138h]
  DXGDEVICE *v111; // [rsp+168h] [rbp-130h]
  int Size; // [rsp+188h] [rbp-110h] BYREF
  __int64 v113; // [rsp+18Ch] [rbp-10Ch]
  int v114; // [rsp+194h] [rbp-104h]
  __int64 v115; // [rsp+198h] [rbp-100h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v116; // [rsp+1A0h] [rbp-F8h] BYREF
  char v117[8]; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE v118[16]; // [rsp+1C8h] [rbp-D0h] BYREF
  __int64 v119; // [rsp+1D8h] [rbp-C0h]
  char v120; // [rsp+1E0h] [rbp-B8h]
  int v121; // [rsp+1E4h] [rbp-B4h]
  __int64 v122; // [rsp+1E8h] [rbp-B0h]
  _BYTE v123[16]; // [rsp+208h] [rbp-90h] BYREF
  __int64 v124; // [rsp+218h] [rbp-80h]
  __int64 v125; // [rsp+248h] [rbp-50h]
  char v126; // [rsp+250h] [rbp-48h]

  v99 = a2;
  v3 = a1;
  v100 = (struct DXGRESOURCE *)a1;
  v94 = -1;
  v95 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v96 = 1;
    v94 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2003);
  }
  else
  {
    v96 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v94, 2003LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v56 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v8 = *v56;
    }
  }
  *(_QWORD *)v101 = v8;
  v11 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v91 = v11;
  if ( !v8 )
  {
    v57 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v57 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v57);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v58);
    v61 = v96 == 0;
    goto LABEL_83;
  }
  memset(&v103, 0, sizeof(v103));
  memset(&v116, 0, sizeof(v116));
  if ( v11 )
  {
    v13 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v13 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v103 = *v13;
  }
  else
  {
    v103 = *v3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v92, v103.hDevice, (struct _KTHREAD **)v8, &v98);
  v17 = v98;
  if ( !v98 )
  {
    v62 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v62 + 24) = v103.hDevice;
    *(_QWORD *)(v62 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v62);
    if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
    goto LABEL_82;
  }
  NumAllocations = v103.NumAllocations;
  if ( v103.NumAllocations > 0x682AA )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v103.NumAllocations, v16);
    v63[3] = v17;
    v63[4] = v103.NumAllocations;
    v63[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v63);
    if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
    goto LABEL_82;
  }
  v19 = *(unsigned __int8 *)(v8 + 299);
  LOBYTE(v19) = v19 & 8;
  Flags = (char)v103.Flags;
  if ( !(_BYTE)v19
    && ((*(_BYTE *)&v103.Flags & 8) != 0
     || (*(_WORD *)&v103.Flags & 0x100) != 0
     || (*(_WORD *)&v103.Flags & 0x1000) != 0
     || (*(_WORD *)&v103.Flags & 0x200) != 0) )
  {
    v64 = WdLogNewEntry5_WdWarning(v19, v103.NumAllocations, v16);
    *(_QWORD *)(v64 + 24) = v17;
    *(_QWORD *)(v64 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v64);
    if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
    goto LABEL_82;
  }
  if ( (*(_BYTE *)&v103.Flags & 0x20) != 0 && (*(_DWORD *)&v103.Flags & 0x10000) == 0 && !(_BYTE)v19 )
  {
    v65 = WdLogNewEntry5_WdWarning(v19, v103.NumAllocations, v16);
    *(_QWORD *)(v65 + 24) = v17;
    *(_QWORD *)(v65 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v65);
    if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
LABEL_82:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v72);
    v61 = v96 == 0;
LABEL_83:
    if ( !v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v59, &EventProfilerExit, v60, v94);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)&v103.Flags & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)&v103.Flags & 0x10000) == 0 )
    {
      v66 = WdLogNewEntry5_WdWarning(v19, v103.NumAllocations, v16);
      *(_QWORD *)(v66 + 24) = v17;
      *(_QWORD *)(v66 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v66);
      if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
      goto LABEL_82;
    }
  }
  else if ( (*(_DWORD *)&v103.Flags & 0x10000) == 0 )
  {
    goto LABEL_20;
  }
  v68 = ValidateStandardAllocationParams(&v103, &v116, v11);
  if ( v68 < 0 )
  {
    if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v67);
    if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v69, &EventProfilerExit, v70, v94);
    return (unsigned int)v68;
  }
  Flags = (char)v103.Flags;
  NumAllocations = v103.NumAllocations;
LABEL_20:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
  {
    v71 = WdLogNewEntry5_WdWarning(v19, NumAllocations, v16);
    *(_QWORD *)(v71 + 24) = v17;
    *(_QWORD *)(v71 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v71);
    if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
    goto LABEL_82;
  }
  if ( !v103.hResource && !(_DWORD)NumAllocations )
  {
    v73 = WdLogNewEntry5_WdWarning(v19, NumAllocations, v16);
    *(_QWORD *)(v73 + 24) = v17;
    *(_QWORD *)(v73 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v73);
    if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
    goto LABEL_82;
  }
  v104 = v17;
  v21 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
  if ( *(int *)(v21 + 2184) >= 0x2000 || *(_BYTE *)(v21 + 2484) )
  {
    v22 = *((_DWORD *)DXGGLOBAL::GetGlobal(v21, NumAllocations) + 247);
    v105 = v22;
  }
  else
  {
    v22 = 0;
    v105 = 0;
  }
  v23 = (struct _KEVENT *)*((_QWORD *)v17 + 2);
  if ( *((_DWORD *)v17 + 82) == 2 )
  {
    v24 = v23 + 4;
    if ( KeReadStateEvent(v24) )
      goto LABEL_27;
  }
  else
  {
    v24 = v23 + 3;
    if ( KeReadStateEvent(v24) )
      goto LABEL_27;
  }
  KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
LABEL_27:
  KeEnterCriticalRegion();
  if ( v22 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v17 + 112, 0LL) )
      goto LABEL_31;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL));
    v74 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
    if ( *(_DWORD *)(v74 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v74, 0xFFFFFFFFLL);
      v75 = 1;
    }
    else
    {
      v75 = 0;
    }
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v17 + 112));
    if ( !v75 )
      goto LABEL_75;
LABEL_134:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
LABEL_75:
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_31;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL));
    v53 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
    if ( *(_DWORD *)(v53 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v53, 0xFFFFFFFFLL);
      v54 = 1;
    }
    else
    {
      v54 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v53, &EventBlockThread, v52, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 13), 1u);
    if ( !v54 )
      goto LABEL_75;
    goto LABEL_134;
  }
LABEL_31:
  v25 = *(volatile signed __int64 **)(*((_QWORD *)v17 + 2) + 16LL);
  v107 = (struct DXGADAPTER *)v25;
  _InterlockedIncrement64(v25 + 3);
  v106 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v25 + 15, 0LL);
  v108 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v117, (__int64)v98, 2, v26, 0);
  if ( v120 )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
    v76[3] = 275LL;
    v76[4] = 4LL;
    v76[5] = v118;
    v76[6] = 0LL;
    v76[7] = 0LL;
    WdLogEvent5_WdCriticalError(v76);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v119 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v119 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v29, &EventBlockThread, v30, 72);
      KeWaitForSingleObject((PVOID)(v119 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v119, 0x7D3u, 0LL);
  }
  v121 = 2003;
  v122 = 0LL;
  v120 = 1;
  if ( *(_DWORD *)(v125 + 464) != 1 )
    goto LABEL_141;
  if ( v126 )
  {
    COREACCESS::AcquireShared((__int64)v123, 0xFFFFFFFF, 0LL);
    if ( *(_DWORD *)(v124 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v123);
LABEL_141:
      COREACCESS::Release((COREACCESS *)v118);
      v80 = WdLogNewEntry5_WdWarning(v78, v77, v79);
      *(_QWORD *)(v80 + 24) = v98;
      *(_QWORD *)(v80 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v80);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v106);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v104);
      if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v81);
      if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v82, &EventProfilerExit, v83, v94);
      return 3221226166LL;
    }
  }
  v31 = 8LL * v103.NumAllocations;
  if ( !is_mul_ok(v103.NumAllocations, 8uLL) )
    v31 = -1LL;
  v97 = operator new[](v31, 0x4B677844u, PagedPool);
  if ( v97 )
  {
    v36 = v98;
    v37 = *((_QWORD *)v98 + 216);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 2552);
      v39 = *(OUTPUTDUPL_MGR **)(v38 + 104);
      if ( !v39 || (int)lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_(v39, (PERESOURCE *)v98) >= 0 )
      {
        v109 = 0LL;
        v110 = 0LL;
        v111 = 0LL;
        v109 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 276LL);
        v110 = lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_;
        v111 = v36;
        Global = DXGGLOBAL::GetGlobal(v109, v32);
        DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
          Global,
          lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_,
          &v109);
      }
      v3 = (struct _D3DKMT_CREATEALLOCATION *)v100;
    }
    v103.hGlobalShare = 0;
    v103.hDevice = 0;
    v41 = 0LL;
    v93 = 0LL;
    v42 = 0;
    v102 = 0;
    if ( (*(_DWORD *)&v103.Flags & 0x10000) != 0 )
    {
      v88 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
      if ( *(int *)(v88 + 2452) < 2000 )
      {
        v89 = WdLogNewEntry5_WdError(v88, v32, v34);
        *(_QWORD *)(v89 + 24) = v36;
        *(_QWORD *)(v89 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v89);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v106);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v104);
        if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
        goto LABEL_82;
      }
      v115 = 0LL;
      Size = v116.ExistingHeapData.Size;
      v113 = 1LL;
      v114 = 7;
      StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(
                                       v36,
                                       (enum _D3DKMDT_STANDARDALLOCATION_TYPE)v32,
                                       &Size,
                                       &v102,
                                       &v93);
      if ( (StandardAllocationDriverData & 0x80000000) != 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v106);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v104);
        if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v90);
        if ( !v96 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return StandardAllocationDriverData;
LABEL_169:
        McTemplateK0q(v49, &EventProfilerExit, v50, v94);
        return StandardAllocationDriverData;
      }
      v41 = v93;
      v42 = v102;
    }
    StandardAllocationDriverData = DXGDEVICE::CreateAllocation(
                                     v36,
                                     &v103,
                                     v91,
                                     0,
                                     0LL,
                                     0LL,
                                     (struct COREDEVICEACCESS *)v117,
                                     0,
                                     0LL,
                                     0LL,
                                     0LL,
                                     (unsigned __int64 *)v99,
                                     &v116,
                                     v41,
                                     v42);
    if ( v91 )
    {
      p_hResource = &v3->hResource;
      if ( (unsigned __int64)&v3->hResource >= MmUserProbeAddress )
        p_hResource = (_DWORD *)MmUserProbeAddress;
      *p_hResource = v103.hResource;
      p_hGlobalShare = &v3->hGlobalShare;
      if ( (unsigned __int64)&v3->hGlobalShare >= MmUserProbeAddress )
        p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
      *p_hGlobalShare = v103.hGlobalShare;
      p_Flags = &v3->Flags;
      if ( (unsigned __int64)&v3->Flags >= MmUserProbeAddress )
        p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
      *p_Flags = v103.Flags;
    }
    else
    {
      v3->hResource = v103.hResource;
      v3->hGlobalShare = v103.hGlobalShare;
      v3->Flags = v103.Flags;
    }
    operator delete[](v97);
    operator delete[](v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
    v47 = v107;
    ExReleasePushLockSharedEx((char *)v107 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v107 + 2), v107);
    if ( v105 )
      ExReleasePushLockSharedEx((char *)v98 + 112, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v98 + 13));
    KeLeaveCriticalRegion();
    if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v48);
    if ( !v96 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return StandardAllocationDriverData;
    goto LABEL_169;
  }
  v84 = (_QWORD *)WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
  v84[3] = v98;
  v84[4] = v103.NumAllocations;
  v84[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v84);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v106);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v104);
  if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v85);
  if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v86, &EventProfilerExit, v87, v94);
  return 3221225495LL;
}
