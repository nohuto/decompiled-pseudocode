/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010D030
 * Callers:
 *     DxgkCreateAllocation @ 0x1C0110990 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EC370 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C00E11E0 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E2378 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00F0318 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C01D8D48 (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C01D9A88 (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C023C24C (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(
        struct _D3DKMT_CREATEALLOCATION *a1,
        unsigned __int64 *a2,
        const GUID *a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // r15
  __int64 *ThreadProperty; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  bool v10; // bl
  __int64 v11; // rax
  __int64 v12; // rcx
  const GUID *v13; // r8
  bool v14; // zf
  _D3DKMT_CREATEALLOCATION *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGDEVICE *v18; // r14
  __int64 v19; // rax
  __int64 NumAllocations; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  char Flags; // al
  __int64 v24; // rax
  int StandardAllocationDriverData; // ebx
  __int64 v26; // rcx
  const GUID *v27; // r8
  struct _KEVENT *v29; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned int v31; // eax
  unsigned int v32; // ebx
  struct _KEVENT *v33; // r12
  struct _KEVENT *v34; // r12
  __int64 v35; // rcx
  unsigned __int8 v36; // bl
  const GUID *v37; // r8
  volatile signed __int64 *v38; // rbx
  __int64 v39; // r9
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  const GUID *v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rcx
  const GUID *v49; // r8
  SIZE_T v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  const GUID *v54; // r8
  struct DXGDEVICE *v55; // r12
  __int64 v56; // rax
  __int64 v57; // rbx
  OUTPUTDUPL_MGR *v58; // rcx
  DXGGLOBAL *Global; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  unsigned int v61; // eax
  enum _D3DKMDT_STANDARDALLOCATION_TYPE v62; // edx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  const GUID *v66; // r8
  unsigned int v67; // r14d
  _DWORD *p_hResource; // rdx
  _DWORD *p_hGlobalShare; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rdx
  struct DXGADAPTER *v71; // rbx
  __int64 v72; // rcx
  const GUID *v73; // r8
  unsigned __int8 v74; // [rsp+80h] [rbp-1D8h]
  struct DXGDEVICE *v75; // [rsp+88h] [rbp-1D0h] BYREF
  int v76; // [rsp+90h] [rbp-1C8h] BYREF
  __int64 v77; // [rsp+98h] [rbp-1C0h]
  char v78; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 *v79; // [rsp+A8h] [rbp-1B0h]
  unsigned int v80; // [rsp+B0h] [rbp-1A8h]
  struct DXGDEVICE *v81; // [rsp+B8h] [rbp-1A0h] BYREF
  void *v82; // [rsp+C0h] [rbp-198h]
  unsigned int v83; // [rsp+C8h] [rbp-190h] BYREF
  _D3DKMT_CREATEALLOCATION v84; // [rsp+D0h] [rbp-188h] BYREF
  void *v85; // [rsp+120h] [rbp-138h] BYREF
  struct DXGDEVICE *v86; // [rsp+128h] [rbp-130h] BYREF
  unsigned int v87; // [rsp+130h] [rbp-128h]
  __int64 v88; // [rsp+138h] [rbp-120h]
  __int64 v89; // [rsp+140h] [rbp-118h] BYREF
  struct DXGADAPTER *v90; // [rsp+148h] [rbp-110h]
  char v91; // [rsp+150h] [rbp-108h]
  char v92[8]; // [rsp+160h] [rbp-F8h] BYREF
  struct _KTHREAD **v93[2]; // [rsp+168h] [rbp-F0h] BYREF
  DXGADAPTER *v94; // [rsp+178h] [rbp-E0h]
  char v95; // [rsp+180h] [rbp-D8h]
  struct _KTHREAD **v96[5]; // [rsp+188h] [rbp-D0h] BYREF
  char v97; // [rsp+1B0h] [rbp-A8h]
  __int64 v98[3]; // [rsp+1C0h] [rbp-98h] BYREF
  int Size; // [rsp+1F0h] [rbp-68h] BYREF
  __int64 v100; // [rsp+1F4h] [rbp-64h]
  int v101; // [rsp+1FCh] [rbp-5Ch]
  __int64 v102; // [rsp+200h] [rbp-58h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v103; // [rsp+208h] [rbp-50h] BYREF

  v79 = a2;
  v76 = -1;
  v77 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v78 = 1;
    v76 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2003);
  }
  else
  {
    v78 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v76, 2003);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v6 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v8 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v6 = *v8;
      }
    }
  }
  v88 = v6;
  v10 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v74 = v10;
  if ( !v6 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
    v14 = v78 == 0;
LABEL_109:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v76);
    return 3221225485LL;
  }
  memset(&v103, 0, sizeof(v103));
  if ( v10 )
  {
    v15 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v15 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v84 = *v15;
  }
  else
  {
    v84 = *a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75, v84.hDevice, (struct _KTHREAD **)v6, &v81);
  v18 = v81;
  if ( !v81 )
  {
    v19 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v19 + 24) = v84.hDevice;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    goto LABEL_105;
  }
  NumAllocations = v84.NumAllocations;
  if ( v84.NumAllocations > 0x682AA )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v84.NumAllocations, v17);
    v21[3] = v18;
    v21[4] = v84.NumAllocations;
    v21[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_105;
  }
  v22 = *(unsigned __int8 *)(v6 + 323);
  LOBYTE(v22) = v22 & 8;
  Flags = (char)v84.Flags;
  if ( !(_BYTE)v22
    && ((*(_BYTE *)&v84.Flags & 8) != 0
     || (*(_WORD *)&v84.Flags & 0x100) != 0
     || (*(_WORD *)&v84.Flags & 0x1000) != 0
     || (*(_WORD *)&v84.Flags & 0x200) != 0)
    || (*(_BYTE *)&v84.Flags & 0x20) != 0 && (*(_DWORD *)&v84.Flags & 0x10000) == 0 && !(_BYTE)v22 )
  {
    goto LABEL_25;
  }
  if ( (*(_DWORD *)&v84.Flags & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)&v84.Flags & 0x10000) == 0 )
    {
LABEL_25:
      v24 = WdLogNewEntry5_WdWarning(v22, NumAllocations, v17);
      *(_QWORD *)(v24 + 24) = v18;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
      goto LABEL_105;
    }
  }
  else if ( (*(_DWORD *)&v84.Flags & 0x10000) == 0 )
  {
    goto LABEL_42;
  }
  StandardAllocationDriverData = ValidateStandardAllocationParams(&v84, &v103, v10);
  if ( StandardAllocationDriverData < 0 )
  {
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
    if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v76);
    return (unsigned int)StandardAllocationDriverData;
  }
  Flags = (char)v84.Flags;
  NumAllocations = v84.NumAllocations;
LABEL_42:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 || !v84.hResource && !(_DWORD)NumAllocations )
    goto LABEL_25;
  v86 = v18;
  v29 = (struct _KEVENT *)*((_QWORD *)v18 + 2);
  Blink = v29->Header.WaitListHead.Blink;
  if ( SLODWORD(Blink[135].Flink) >= 0x2000 || BYTE4(Blink[153].Flink) )
  {
    v31 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v29) + 255);
    v87 = v31;
    v29 = (struct _KEVENT *)*((_QWORD *)v18 + 2);
    v32 = v31;
    LODWORD(v82) = v31;
    v80 = v31;
  }
  else
  {
    v87 = 0;
    v31 = 0;
    v32 = 0;
    LODWORD(v82) = 0;
    v80 = 0;
  }
  if ( *((_DWORD *)v18 + 82) == 2 )
  {
    v33 = v29 + 4;
    if ( !KeReadStateEvent(v29 + 4) )
    {
      KeWaitForSingleObject(v33, Executive, 0, 0, 0LL);
      v32 = (unsigned int)v82;
    }
  }
  else
  {
    v34 = v29 + 3;
    v32 = v31;
    if ( !KeReadStateEvent(v29 + 3) )
    {
      KeWaitForSingleObject(v34, Executive, 0, 0, 0LL);
      v32 = v80;
    }
  }
  KeEnterCriticalRegion();
  if ( v32 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v18 + 112, 0LL) )
      goto LABEL_66;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL));
    v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v18 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 13), 0) )
      goto LABEL_66;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL));
    v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v35, &EventBlockThread, v37, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 13), 1u);
  }
  if ( v36 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_66:
  v38 = *(volatile signed __int64 **)(*((_QWORD *)v18 + 2) + 16LL);
  v90 = (struct DXGADAPTER *)v38;
  _InterlockedIncrement64(v38 + 3);
  v89 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v38 + 15, 0LL);
  v91 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v92, (__int64)v81, 2, v39, 0);
  if ( v95 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40);
    v41[3] = 275LL;
    v41[4] = 4LL;
    v41[5] = v93;
    v41[6] = 0LL;
    v41[7] = 0LL;
    WdLogEvent5_WdCriticalError(v41);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v94 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v94 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v42, &EventBlockThread, v43, 72);
      KeWaitForSingleObject((char *)v94 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v94);
  }
  v95 = 1;
  if ( *((_DWORD *)v96[4] + 116) != 1 )
    goto LABEL_79;
  if ( v97 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v96);
    if ( *((_DWORD *)v96[2] + 44) != 1 )
    {
      COREACCESS::Release(v96);
LABEL_79:
      COREACCESS::Release(v93);
      v47 = WdLogNewEntry5_WdWarning(v45, v44, v46);
      *(_QWORD *)(v47 + 24) = v81;
      *(_QWORD *)(v47 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v47);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v92);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v89);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v86);
      if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
      if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v48, &EventProfilerExit, v49, v76);
      return 3221226166LL;
    }
  }
  v50 = 8LL * v84.NumAllocations;
  if ( !is_mul_ok(v84.NumAllocations, 8uLL) )
    v50 = -1LL;
  v82 = operator new(v50, 0x4B677844u, PagedPool);
  if ( v82 )
  {
    v55 = v81;
    v56 = *((_QWORD *)v81 + 216);
    if ( v56 )
    {
      v57 = *(_QWORD *)(v56 + 2520);
      v58 = *(OUTPUTDUPL_MGR **)(v57 + 104);
      if ( !v58 || (int)lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_(v58, (PERESOURCE *)v81) >= 0 )
      {
        v98[0] = *(_QWORD *)(*(_QWORD *)(v57 + 16) + 276LL);
        v98[1] = (__int64)lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_;
        v98[2] = (__int64)v55;
        Global = DXGGLOBAL::GetGlobal(v98[0]);
        DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
          Global,
          lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_,
          v98);
      }
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v51);
    if ( RemoteOutputDuplMgr )
      OUTPUTDUPL_MGR::CleanUpPendingList(RemoteOutputDuplMgr, v55);
    v84.hGlobalShare = 0;
    v84.hDevice = 0;
    v85 = 0LL;
    v61 = 0;
    v83 = 0;
    if ( (*(_DWORD *)&v84.Flags & 0x10000) != 0 )
    {
      if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL)) < 2000 )
      {
        v64 = WdLogNewEntry5_WdError(v63);
        *(_QWORD *)(v64 + 24) = v55;
        *(_QWORD *)(v64 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v64);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v92);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v89);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v86);
LABEL_105:
        if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
        v14 = v78 == 0;
        goto LABEL_109;
      }
      v102 = 0LL;
      Size = v103.ExistingHeapData.Size;
      v100 = 1LL;
      v101 = 7;
      StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(v55, v62, &Size, &v83, &v85);
      if ( StandardAllocationDriverData < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v92);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v89);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v86);
        if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
        if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          McTemplateK0q(v65, &EventProfilerExit, v66, v76);
          return (unsigned int)StandardAllocationDriverData;
        }
        return (unsigned int)StandardAllocationDriverData;
      }
      v61 = v83;
    }
    v67 = DXGDEVICE::CreateAllocation(
            (ADAPTER_RENDER **)v55,
            &v84,
            v74,
            0,
            0LL,
            0LL,
            (struct COREDEVICEACCESS *)v92,
            0,
            0LL,
            0LL,
            0LL,
            (unsigned __int8 *)v79,
            &v103,
            v85,
            v61);
    v80 = v67;
    if ( v74 )
    {
      p_hResource = &a1->hResource;
      if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
        p_hResource = (_DWORD *)MmUserProbeAddress;
      *p_hResource = v84.hResource;
      p_hGlobalShare = &a1->hGlobalShare;
      if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
        p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
      *p_hGlobalShare = v84.hGlobalShare;
      p_Flags = &a1->Flags;
      if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
        p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
      *p_Flags = v84.Flags;
    }
    else
    {
      a1->hResource = v84.hResource;
      a1->hGlobalShare = v84.hGlobalShare;
      a1->Flags = v84.Flags;
    }
    operator delete[](v82);
    operator delete[](v85);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v92);
    v71 = v90;
    ExReleasePushLockSharedEx((char *)v90 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v71 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v90 + 2), v90);
    if ( v87 )
      ExReleasePushLockSharedEx((char *)v81 + 112, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v81 + 13));
    KeLeaveCriticalRegion();
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
    if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v72, &EventProfilerExit, v73, v76);
    return v67;
  }
  else
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdLowResource(v51);
    v52[3] = v81;
    v52[4] = v84.NumAllocations;
    v52[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v52);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v92);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v89);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v86);
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
    if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v53, &EventProfilerExit, v54, v76);
    return 3221225495LL;
  }
}
