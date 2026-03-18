/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0114BB0
 * Callers:
 *     DxgkCreateAllocation @ 0x1C0116A30 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021C370 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C5E0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E9A20 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C00E9B50 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F1840 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C0125140 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C020780C (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C020857C (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C02715BC (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(
        struct _D3DKMT_CREATEALLOCATION *a1,
        unsigned __int64 *a2,
        const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  unsigned __int8 *v8; // r15
  unsigned __int8 **ThreadProperty; // rax
  unsigned __int8 **v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // bl
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  bool v19; // zf
  _D3DKMT_CREATEALLOCATION *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGDEVICE *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 NumAllocations; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  char Flags; // al
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  int StandardAllocationDriverData; // ebx
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // ebx
  struct _KEVENT *v43; // r12
  struct _KEVENT *v44; // rcx
  const GUID *v45; // r8
  __int64 v46; // rcx
  char v47; // bl
  __int64 v48; // rcx
  volatile signed __int64 *v49; // rbx
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  const GUID *v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  const GUID *v62; // r8
  SIZE_T v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  const GUID *v71; // r8
  struct DXGDEVICE *v72; // r12
  __int64 v73; // rax
  __int64 v74; // rbx
  OUTPUTDUPL_MGR *v75; // rcx
  DXGGLOBAL *Global; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  unsigned int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  const GUID *v85; // r8
  unsigned int v86; // esi
  _DWORD *p_hResource; // rdx
  _DWORD *p_hGlobalShare; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rdx
  struct DXGADAPTER *v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rcx
  const GUID *v93; // r8
  unsigned __int8 v94; // [rsp+80h] [rbp-208h]
  struct DXGDEVICE *v95[2]; // [rsp+88h] [rbp-200h] BYREF
  int v96; // [rsp+98h] [rbp-1F0h] BYREF
  __int64 v97; // [rsp+A0h] [rbp-1E8h]
  char v98; // [rsp+A8h] [rbp-1E0h]
  struct DXGDEVICE *v99; // [rsp+B0h] [rbp-1D8h] BYREF
  unsigned int v100; // [rsp+B8h] [rbp-1D0h] BYREF
  _D3DKMT_CREATEALLOCATION v101; // [rsp+C0h] [rbp-1C8h] BYREF
  unsigned __int64 *v102; // [rsp+110h] [rbp-178h]
  void *v103; // [rsp+118h] [rbp-170h]
  void *v104; // [rsp+120h] [rbp-168h] BYREF
  struct DXGDEVICE *v105; // [rsp+128h] [rbp-160h] BYREF
  int v106; // [rsp+130h] [rbp-158h]
  __int64 v107; // [rsp+138h] [rbp-150h] BYREF
  struct DXGADAPTER *v108; // [rsp+140h] [rbp-148h]
  char v109; // [rsp+148h] [rbp-140h]
  __int64 v110; // [rsp+150h] [rbp-138h] BYREF
  __int64 (__fastcall *v111)(OUTPUTDUPL_MGR *, PERESOURCE *); // [rsp+158h] [rbp-130h]
  struct DXGDEVICE *v112; // [rsp+160h] [rbp-128h]
  int Size; // [rsp+180h] [rbp-108h] BYREF
  __int64 v114; // [rsp+184h] [rbp-104h]
  int v115; // [rsp+18Ch] [rbp-FCh]
  __int64 v116; // [rsp+190h] [rbp-F8h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v117; // [rsp+198h] [rbp-F0h] BYREF
  _BYTE v118[8]; // [rsp+1B0h] [rbp-D8h] BYREF
  _BYTE v119[16]; // [rsp+1B8h] [rbp-D0h] BYREF
  __int64 v120; // [rsp+1C8h] [rbp-C0h]
  char v121; // [rsp+1D0h] [rbp-B8h]
  int v122; // [rsp+1D4h] [rbp-B4h]
  __int64 v123; // [rsp+1D8h] [rbp-B0h]
  _BYTE v124[16]; // [rsp+1F8h] [rbp-90h] BYREF
  __int64 v125; // [rsp+208h] [rbp-80h]
  __int64 v126; // [rsp+238h] [rbp-50h]
  char v127; // [rsp+240h] [rbp-48h]

  v102 = a2;
  v96 = -1;
  v97 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v98 = 1;
    v96 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2003);
  }
  else
  {
    v98 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v96, 2003LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (unsigned __int8 *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (unsigned __int8 **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v10 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v8 = *v10;
    }
  }
  v95[1] = (struct DXGDEVICE *)v8;
  v13 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v94 = v13;
  if ( !v8 )
  {
    v15 = WdLogNewEntry5_WdError(v12, v11, v14);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96, v16);
    v19 = v98 == 0;
LABEL_11:
    if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v96);
    return 3221225485LL;
  }
  memset(&v101, 0, sizeof(v101));
  memset(&v117, 0, sizeof(v117));
  if ( v13 )
  {
    v21 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v21 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v101 = *v21;
  }
  else
  {
    v101 = *a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95, v101.hDevice, (struct _KTHREAD **)v8, &v99);
  v25 = v99;
  if ( !v99 )
  {
    v26 = WdLogNewEntry5_WdError(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = v101.hDevice;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
LABEL_142:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96, v27);
    v19 = v98 == 0;
    goto LABEL_11;
  }
  NumAllocations = v101.NumAllocations;
  if ( v101.NumAllocations > 0x682AA )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v101.NumAllocations, v24);
    v29[3] = v25;
    v29[4] = v101.NumAllocations;
    v29[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
    goto LABEL_142;
  }
  v30 = v8[299];
  LOBYTE(v30) = v30 & 8;
  Flags = (char)v101.Flags;
  if ( !(_BYTE)v30
    && ((*(_BYTE *)&v101.Flags & 8) != 0
     || (*(_WORD *)&v101.Flags & 0x100) != 0
     || (*(_WORD *)&v101.Flags & 0x1000) != 0
     || (*(_WORD *)&v101.Flags & 0x200) != 0) )
  {
    v32 = WdLogNewEntry5_WdWarning(v30, v101.NumAllocations, v24);
    *(_QWORD *)(v32 + 24) = v25;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
    if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
    goto LABEL_142;
  }
  if ( (*(_BYTE *)&v101.Flags & 0x20) != 0 && (*(_DWORD *)&v101.Flags & 0x10000) == 0 && !(_BYTE)v30 )
  {
    v33 = WdLogNewEntry5_WdWarning(v30, v101.NumAllocations, v24);
    *(_QWORD *)(v33 + 24) = v25;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
    if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
    goto LABEL_142;
  }
  if ( (*(_DWORD *)&v101.Flags & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)&v101.Flags & 0x10000) == 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v30, v101.NumAllocations, v24);
      *(_QWORD *)(v34 + 24) = v25;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v34);
      if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
      goto LABEL_142;
    }
  }
  else if ( (*(_DWORD *)&v101.Flags & 0x10000) == 0 )
  {
    goto LABEL_62;
  }
  StandardAllocationDriverData = ValidateStandardAllocationParams(&v101, &v117, v13);
  if ( StandardAllocationDriverData < 0 )
  {
    if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96, v35);
    if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v37, &EventProfilerExit, v38, v96);
    return (unsigned int)StandardAllocationDriverData;
  }
  Flags = (char)v101.Flags;
  NumAllocations = v101.NumAllocations;
LABEL_62:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
  {
    v39 = WdLogNewEntry5_WdWarning(v30, NumAllocations, v24);
    *(_QWORD *)(v39 + 24) = v25;
    *(_QWORD *)(v39 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v39);
    if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
    goto LABEL_142;
  }
  if ( !v101.hResource && !(_DWORD)NumAllocations )
  {
    v40 = WdLogNewEntry5_WdWarning(v30, NumAllocations, v24);
    *(_QWORD *)(v40 + 24) = v25;
    *(_QWORD *)(v40 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v40);
    if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
    goto LABEL_142;
  }
  v105 = v25;
  v41 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL);
  if ( *(int *)(v41 + 2184) >= 0x2000 || *(_BYTE *)(v41 + 2484) )
    v42 = *((_DWORD *)DXGGLOBAL::GetGlobal(v41, NumAllocations) + 247);
  else
    v42 = 0;
  v106 = v42;
  v43 = (struct _KEVENT *)*((_QWORD *)v25 + 2);
  if ( *((_DWORD *)v25 + 82) == 2 )
  {
    if ( KeReadStateEvent(v43 + 4) )
      goto LABEL_84;
    v44 = v43 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v43 + 3) )
      goto LABEL_84;
    v44 = v43 + 3;
  }
  KeWaitForSingleObject(v44, Executive, 0, 0, 0LL);
LABEL_84:
  KeEnterCriticalRegion();
  if ( v42 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v25 + 112, 0LL) )
      goto LABEL_101;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 96LL));
    v48 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL);
    if ( *(_DWORD *)(v48 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v48, 0xFFFFFFFFLL);
      v47 = 1;
    }
    else
    {
      v47 = 0;
    }
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v25 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v25 + 13), 0) )
      goto LABEL_101;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 96LL));
    v46 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL);
    if ( *(_DWORD *)(v46 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v46, 0xFFFFFFFFLL);
      v47 = 1;
    }
    else
    {
      v47 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v46, &EventBlockThread, v45, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v25 + 13), 1u);
  }
  if ( v47 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v25 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_101:
  v49 = *(volatile signed __int64 **)(*((_QWORD *)v25 + 2) + 16LL);
  v108 = (struct DXGADAPTER *)v49;
  _InterlockedIncrement64(v49 + 3);
  v107 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v49 + 15, 0LL);
  v109 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v118, (__int64)v99, 2, v50, 0);
  if ( v121 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51);
    v53[3] = 275LL;
    v53[4] = 4LL;
    v53[5] = v119;
    v53[6] = 0LL;
    v53[7] = 0LL;
    WdLogEvent5_WdCriticalError(v53);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v120 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v120 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v54, &EventBlockThread, v55, 72);
      KeWaitForSingleObject((PVOID)(v120 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v120, 0x7D3u, 0LL);
  }
  v122 = 2003;
  v123 = 0LL;
  v121 = 1;
  if ( *(_DWORD *)(v126 + 464) != 1 )
    goto LABEL_114;
  if ( v127 )
  {
    COREACCESS::AcquireShared((__int64)v124, 0xFFFFFFFF, 0LL);
    if ( *(_DWORD *)(v125 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v124);
LABEL_114:
      COREACCESS::Release((COREACCESS *)v119);
      v59 = WdLogNewEntry5_WdWarning(v57, v56, v58);
      *(_QWORD *)(v59 + 24) = v99;
      *(_QWORD *)(v59 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v59);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v118);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v107);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v105);
      if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96, v60);
      if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v61, &EventProfilerExit, v62, v96);
      return 3221226166LL;
    }
  }
  v63 = 8LL * v101.NumAllocations;
  if ( !is_mul_ok(v101.NumAllocations, 8uLL) )
    v63 = -1LL;
  v103 = operator new[](v63, 0x4B677844u, PagedPool);
  if ( v103 )
  {
    v72 = v99;
    v73 = *((_QWORD *)v99 + 216);
    if ( v73 )
    {
      v74 = *(_QWORD *)(v73 + 2552);
      v75 = *(OUTPUTDUPL_MGR **)(v74 + 104);
      if ( !v75 || (int)lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_(v75, (PERESOURCE *)v99) >= 0 )
      {
        v110 = 0LL;
        v111 = 0LL;
        v112 = 0LL;
        v110 = *(_QWORD *)(*(_QWORD *)(v74 + 16) + 276LL);
        v111 = lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_;
        v112 = v72;
        Global = DXGGLOBAL::GetGlobal(v110, v64);
        DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
          Global,
          lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_,
          &v110);
      }
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v65, v64);
    if ( RemoteOutputDuplMgr )
      OUTPUTDUPL_MGR::CleanUpPendingList(RemoteOutputDuplMgr, v72);
    v101.hGlobalShare = 0;
    v101.hDevice = 0;
    v104 = 0LL;
    v80 = 0;
    v100 = 0;
    if ( (*(_DWORD *)&v101.Flags & 0x10000) != 0 )
    {
      v81 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL);
      if ( *(int *)(v81 + 2452) < 2000 )
      {
        v82 = WdLogNewEntry5_WdError(v81, v78, v79);
        *(_QWORD *)(v82 + 24) = v72;
        *(_QWORD *)(v82 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v82);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v118);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v107);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v105);
        if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
        goto LABEL_142;
      }
      v116 = 0LL;
      Size = v117.ExistingHeapData.Size;
      v114 = 1LL;
      v115 = 7;
      StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(
                                       v72,
                                       (enum _D3DKMDT_STANDARDALLOCATION_TYPE)v78,
                                       &Size,
                                       &v100,
                                       &v104);
      if ( StandardAllocationDriverData < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v118);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v107);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v105);
        if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96, v83);
        if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          McTemplateK0q(v84, &EventProfilerExit, v85, v96);
          return (unsigned int)StandardAllocationDriverData;
        }
        return (unsigned int)StandardAllocationDriverData;
      }
      v80 = v100;
    }
    v86 = DXGDEVICE::CreateAllocation(
            v72,
            &v101,
            v94,
            0,
            0LL,
            0LL,
            (struct COREDEVICEACCESS *)v118,
            0,
            0LL,
            0LL,
            0LL,
            v102,
            &v117,
            v104,
            v80);
    LODWORD(v102) = v86;
    if ( v94 )
    {
      p_hResource = &a1->hResource;
      if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
        p_hResource = (_DWORD *)MmUserProbeAddress;
      *p_hResource = v101.hResource;
      p_hGlobalShare = &a1->hGlobalShare;
      if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
        p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
      *p_hGlobalShare = v101.hGlobalShare;
      p_Flags = &a1->Flags;
      if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
        p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
      *p_Flags = v101.Flags;
    }
    else
    {
      a1->hResource = v101.hResource;
      a1->hGlobalShare = v101.hGlobalShare;
      a1->Flags = v101.Flags;
    }
    operator delete[](v103);
    operator delete[](v104);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v118);
    v90 = v108;
    ExReleasePushLockSharedEx((char *)v108 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v108 + 2), v108);
    if ( v106 )
      ExReleasePushLockSharedEx((char *)v99 + 112, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v99 + 13));
    KeLeaveCriticalRegion();
    if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96, v91);
    if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v92, &EventProfilerExit, v93, v96);
    return v86;
  }
  else
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdLowResource(v65, v64, v66, v67);
    v68[3] = v99;
    v68[4] = v101.NumAllocations;
    v68[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v68);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v118);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v107);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v105);
    if ( v95[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v95[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v95[0] + 2), v95[0]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96, v69);
    if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v70, &EventProfilerExit, v71, v96);
    return 3221225495LL;
  }
}
