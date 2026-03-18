/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0136900
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C0135440 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z.c)
 *     DxgkEvict @ 0x1C01368E0 (DxgkEvict.c)
 *     ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021F200 (-VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0023CC4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C0136E74 (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C0137424 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C0137470 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0224994 (-VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkEvictInternal(ULONG64 a1, int a2, const GUID *a3, __int64 a4)
{
  unsigned int v5; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  __int64 v12; // r8
  DXGPROCESS *Current; // r13
  _OWORD *v14; // rax
  unsigned int *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGDEVICE *v19; // r13
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  unsigned int *v24; // r12
  unsigned int *v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  struct _EX_RUNDOWN_REF **v28; // rbx
  __int64 v29; // rax
  unsigned int *v30; // rdi
  unsigned int *v31; // rax
  unsigned int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rbx
  _QWORD *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  const GUID *v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  const GUID *v51; // r8
  struct _EX_RUNDOWN_REF *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rbx
  unsigned int v55; // edi
  unsigned int HostProcess; // eax
  DXG_GUEST_VIRTUALGPU_VMBUS *v57; // rcx
  char v58; // [rsp+40h] [rbp-238h]
  struct DXGDEVICE *v59; // [rsp+48h] [rbp-230h] BYREF
  int v60; // [rsp+50h] [rbp-228h] BYREF
  __int64 v61; // [rsp+58h] [rbp-220h]
  char v62; // [rsp+60h] [rbp-218h]
  ULONG64 v63; // [rsp+68h] [rbp-210h]
  struct _EX_RUNDOWN_REF *v64; // [rsp+70h] [rbp-208h] BYREF
  int v65; // [rsp+78h] [rbp-200h]
  unsigned __int64 v66; // [rsp+80h] [rbp-1F8h] BYREF
  unsigned int v67; // [rsp+88h] [rbp-1F0h]
  int v68; // [rsp+8Ch] [rbp-1ECh]
  DXGDEVICE *v69; // [rsp+90h] [rbp-1E8h] BYREF
  unsigned int v70[2]; // [rsp+98h] [rbp-1E0h]
  unsigned int *v71; // [rsp+A0h] [rbp-1D8h]
  __int64 v72; // [rsp+A8h] [rbp-1D0h]
  _BYTE v73[16]; // [rsp+B0h] [rbp-1C8h] BYREF
  struct _KTHREAD **v74; // [rsp+C0h] [rbp-1B8h]
  DXGPROCESS *v75; // [rsp+C8h] [rbp-1B0h]
  unsigned int *v76; // [rsp+D0h] [rbp-1A8h]
  _BYTE v77[24]; // [rsp+D8h] [rbp-1A0h] BYREF
  _OWORD v78[2]; // [rsp+F0h] [rbp-188h] BYREF
  _BYTE *v79; // [rsp+110h] [rbp-168h] BYREF
  _BYTE v80[128]; // [rsp+118h] [rbp-160h] BYREF
  int v81; // [rsp+198h] [rbp-E0h]
  _BYTE v82[160]; // [rsp+1A0h] [rbp-D8h] BYREF

  v5 = (unsigned int)a3;
  v65 = a2;
  v63 = a1;
  v60 = -1;
  v61 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v62 = 1;
    v60 = 2116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2116);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v60, 2116LL);
  Current = DXGPROCESS::GetCurrent(v9, v8);
  v75 = Current;
  if ( !Current )
    goto LABEL_44;
  memset(v78, 0, sizeof(v78));
  if ( a2 )
  {
    v11 = MmUserProbeAddress;
    v14 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (_OWORD *)MmUserProbeAddress;
    v78[0] = *v14;
    v78[1] = v14[1];
    v15 = (unsigned int *)v78;
    v71 = (unsigned int *)v78;
  }
  else
  {
    v15 = (unsigned int *)a1;
    v71 = (unsigned int *)a1;
  }
  if ( !v15[1] )
  {
LABEL_44:
    v43 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
LABEL_46:
    WdLogEvent5_WdError(v43);
LABEL_48:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v44);
    if ( v62 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v45, &EventProfilerExit, v46, v60);
    }
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v15 + 1) )
  {
    v43 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v43 + 24) = 777LL;
    goto LABEL_46;
  }
  if ( v15[4] >= 4 )
  {
    v43 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v43 + 24) = 784LL;
    goto LABEL_46;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v79);
  v79 = v80;
  v81 = 16;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59, *v15, (struct _KTHREAD **)Current, &v69);
  v19 = v69;
  if ( !v69 )
  {
    v47 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v47 + 24) = *v15;
    WdLogEvent5_WdWarning(v47);
LABEL_56:
    if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v79);
    goto LABEL_48;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73,
    v69);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, (__int64)v19, 0, v20, 0);
  v22 = COREDEVICEACCESS::AcquireShared((__int64)v82, v5, a4);
  if ( v22 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73);
    if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v79);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v49);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v50, &EventProfilerExit, v51, v60);
    return (unsigned int)v22;
  }
  v23 = v15[1];
  v72 = v23;
  v24 = (unsigned int *)*((_QWORD *)v15 + 1);
  v25 = &v24[v23];
  v76 = v25;
  if ( v25 < v24 )
  {
    v48 = WdLogNewEntry5_WdWarning(v21, v23, v25);
    *(_QWORD *)(v48 + 24) = v15[1];
    WdLogEvent5_WdWarning(v48);
LABEL_55:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73);
    goto LABEL_56;
  }
  v26 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
  v58 = *(_BYTE *)(v26 + 185);
  v27 = 0LL;
  v66 = 0LL;
  v28 = (struct _EX_RUNDOWN_REF **)v80;
  while ( v24 != v25 )
  {
    v29 = 16LL;
    if ( (unsigned int)v23 < 0x10 )
      v29 = (unsigned int)v23;
    v68 = v29;
    v30 = &v24[v29];
    *(_QWORD *)v70 = v30;
    v74 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v26, v23);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v77, v74);
    while ( v24 != v30 )
    {
      if ( v65 )
      {
        v31 = v24;
        if ( (unsigned __int64)v24 >= MmUserProbeAddress )
          v31 = (unsigned int *)MmUserProbeAddress;
        v32 = *v31;
        v67 = *v31;
        v15 = v71;
        v19 = v69;
      }
      else
      {
        v32 = *v24;
        v67 = *v24;
      }
      DXGPROCESS::GetAllocationUnsafe((__int64)v74, (DXGALLOCATIONREFERENCE *)&v64, v32);
      if ( !v64 )
      {
        v52 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v34, v33, v35);
        v52[3].Count = v32;
LABEL_68:
        WdLogEvent5_WdWarning(v52);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v64, v53);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v77);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 520LL) + 8LL) + 208LL))(
          *((_QWORD *)v19 + 82),
          11LL);
        goto LABEL_55;
      }
      if ( (DXGDEVICE *)v64[1].Count != v19 )
      {
        v52 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v34, v33, v35);
        v52[3].Count = (ULONG_PTR)v19;
        v52[4].Count = v64[1].Count;
        goto LABEL_68;
      }
      DXGALLOCATIONREFERENCE::MoveAssign(v28++, &v64);
      ++v24;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v64, v36);
      v30 = *(unsigned int **)v70;
    }
    v37 = ((char *)v28 - v80) >> 3;
    *(_QWORD *)v70 = v37;
    if ( v58 )
    {
      v54 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
      v55 = *((_DWORD *)v19 + 84);
      HostProcess = DXGPROCESS::GetHostProcess(v75);
      v57 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v54 + 4144);
      v28 = (struct _EX_RUNDOWN_REF **)v80;
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
        v57,
        HostProcess,
        v55,
        (struct D3DDDI_EVICT_FLAGS)v15[4],
        v70[0],
        (const struct DXGALLOCATIONREFERENCE *)v80,
        &v66);
    }
    else
    {
      DXGDEVICE::Evict(v19, (struct DXGALLOCATIONREFERENCE *)v80, v37, (struct D3DDDI_EVICT_FLAGS)v15[4], &v66);
      v28 = (struct _EX_RUNDOWN_REF **)v80;
    }
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v77);
    v23 = (unsigned int)(v72 - v68);
    v72 = v23;
    v27 = v66;
    v25 = v76;
  }
  if ( v65 )
  {
    v38 = (_QWORD *)(v63 + 24);
    if ( v63 + 24 >= MmUserProbeAddress )
      v38 = (_QWORD *)MmUserProbeAddress;
    *v38 = v66;
  }
  else
  {
    *((_QWORD *)v15 + 3) = v27;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73);
  if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v79);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v39);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v60);
  return 0LL;
}
