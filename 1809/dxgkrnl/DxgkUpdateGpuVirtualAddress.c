/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C01DB6D0
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA180 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0010F58 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0021050 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C0035170 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C01DE7A4 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C01DE810 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C01F7C0C (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, const GUID *a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rsi
  bool v4; // r13
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  struct _KTHREAD **Current; // r14
  __int64 v9; // rax
  unsigned int updated; // esi
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGCONTEXT *v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 NumOperations; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  SIZE_T v44; // rax
  __int64 v45; // rcx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v46; // r9
  __int64 v47; // rax
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v49; // rcx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v50; // rcx
  int v51; // r9d
  __int64 v52; // rdx
  unsigned int v53; // r10d
  unsigned __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // rax
  bool v59; // cf
  SIZE_T v60; // rax
  char *v61; // rax
  __int64 v62; // rcx
  DXGALLOCATIONREFERENCE *v63; // rax
  void *v64; // rcx
  __int64 v65; // rax
  SIZE_T v66; // rax
  char *v67; // rax
  __int64 OperationType; // rcx
  __int64 v69; // rax
  unsigned int v70; // r8d
  int v71; // r9d
  UINT v72; // edx
  char *v73; // r10
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v74; // rax
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  PERESOURCE *Global; // rax
  unsigned int v80; // ecx
  __int64 v81; // r8
  struct _KTHREAD *v82; // r9
  int v83; // ecx
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rcx
  const GUID *v96; // r8
  NTSTATUS v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rcx
  const GUID *v110; // r8
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rcx
  const GUID *v114; // r8
  struct DXGDEVICE *v115; // [rsp+40h] [rbp-1D8h] BYREF
  void *v116; // [rsp+48h] [rbp-1D0h]
  int v117; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v118; // [rsp+58h] [rbp-1C0h]
  char v119; // [rsp+60h] [rbp-1B8h]
  DXGALLOCATIONREFERENCE *v120; // [rsp+68h] [rbp-1B0h]
  char v121[8]; // [rsp+70h] [rbp-1A8h] BYREF
  char v122; // [rsp+78h] [rbp-1A0h]
  __int64 v123; // [rsp+80h] [rbp-198h] BYREF
  char v124; // [rsp+88h] [rbp-190h]
  int v125; // [rsp+90h] [rbp-188h]
  struct _KTHREAD **v126; // [rsp+98h] [rbp-180h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v127; // [rsp+A0h] [rbp-178h]
  _BYTE v128[16]; // [rsp+A8h] [rbp-170h] BYREF
  _BYTE v129[16]; // [rsp+B8h] [rbp-160h] BYREF
  char *v130; // [rsp+C8h] [rbp-150h]
  PVOID Object; // [rsp+D0h] [rbp-148h] BYREF
  struct DXGDEVICE *v132; // [rsp+D8h] [rbp-140h] BYREF
  void **p_Operations; // [rsp+E0h] [rbp-138h]
  signed __int64 v134; // [rsp+E8h] [rbp-130h]
  char *v135; // [rsp+F0h] [rbp-128h]
  _BYTE v136[24]; // [rsp+F8h] [rbp-120h] BYREF
  int v137; // [rsp+110h] [rbp-108h]
  DXGCONTEXT *v138; // [rsp+118h] [rbp-100h] BYREF
  struct _EX_RUNDOWN_REF *v139; // [rsp+120h] [rbp-F8h] BYREF
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v140; // [rsp+128h] [rbp-F0h]
  struct VIDMM_COMPANION_CONTEXT *VidMmCompanionContext; // [rsp+130h] [rbp-E8h]
  _BYTE v142[96]; // [rsp+140h] [rbp-D8h] BYREF
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v143; // [rsp+1A0h] [rbp-78h] BYREF
  bool v144; // [rsp+228h] [rbp+10h]
  UINT v145; // [rsp+228h] [rbp+10h]
  D3DKMT_HANDLE hFenceObject; // [rsp+228h] [rbp+10h]
  __int64 v147; // [rsp+228h] [rbp+10h]
  unsigned int v148; // [rsp+230h] [rbp+18h]
  unsigned int Size; // [rsp+238h] [rbp+20h]
  unsigned int Sizea; // [rsp+238h] [rbp+20h]
  DXGPUSHLOCK *Sizeb; // [rsp+238h] [rbp+20h]

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v117 = -1;
  v118 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v119 = 1;
    v117 = 2106;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2106);
  }
  else
  {
    v119 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v117, 2106);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v144 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v126 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v6);
    updated = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117);
    if ( v119 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v23, &EventProfilerExit, v24, v117);
    }
    return updated;
  }
  v11 = &v143;
  v116 = &v143;
  if ( v4 )
  {
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v143 = *v3;
  }
  else
  {
    v11 = v3;
    v116 = v3;
  }
  if ( !v11->NumOperations )
  {
    v12 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    updated = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    *(_QWORD *)(v12 + 32) = 12661LL;
    WdLogEvent5_WdWarning(v12);
    goto LABEL_24;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v115, v11->hDevice, Current, &v132);
  v14 = v132;
  if ( !v132 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v11->hDevice;
    updated = -1073741811;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_44;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v128, v11->hContext, Current, &v138, 0);
  v19 = v138;
  if ( !v138 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v20[3] = Current;
    v20[4] = v11->hContext;
    updated = -1073741811;
    v20[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
LABEL_43:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v128);
LABEL_44:
    if ( !v115 )
      goto LABEL_24;
    goto LABEL_22;
  }
  if ( *((struct DXGDEVICE **)v138 + 2) != v14 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v21[3] = *((_QWORD *)v19 + 2);
    v21[4] = v14;
    updated = -1073741811;
    v21[5] = -1073741811LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_43;
  }
  v130 = (char *)v14 + 16;
  v22 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
  if ( *(_BYTE *)(v22 + 185) )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v22 + 4152),
                (struct DXGPROCESS *)Current,
                *((_DWORD *)v14 + 84),
                *((_DWORD *)v138 + 7),
                v11);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v128);
    if ( !v115 )
      goto LABEL_24;
LABEL_22:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v115 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v115 + 2), v115);
    goto LABEL_24;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v123, v14);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v136, (struct _KTHREAD **)v19 + 55);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v142, (__int64)v14, 0, v26, 0);
  v27 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v142);
  v31 = v27;
  if ( v27 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v32 + 24) = v31;
    *(_QWORD *)(v32 + 32) = 12712LL;
    WdLogEvent5_WdWarning(v32);
    goto LABEL_142;
  }
  v33 = *(_QWORD *)(*(_QWORD *)v130 + 16LL);
  if ( (*(_DWORD *)(v33 + 1892) & 0x40) == 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v28, v30);
    updated = -1073741811;
    v34[3] = -1073741811LL;
    v34[4] = 12718LL;
LABEL_40:
    WdLogEvent5_WdWarning(v34);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v142);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v136);
    if ( v123 && v124 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v123 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_43;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v19) )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
    v34[3] = v126;
    v34[4] = v11->hContext;
    updated = -1073741811;
    v34[5] = -1073741811LL;
    goto LABEL_40;
  }
  VidMmCompanionContext = DXGCONTEXT::GetVidMmCompanionContext(v19);
  if ( !VidMmCompanionContext )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
    v34[3] = v126;
    v34[4] = v11->hContext;
    updated = -1073741811;
    v34[5] = -1073741811LL;
    v34[6] = 12734LL;
    goto LABEL_40;
  }
  updated = -1073741811;
  LODWORD(v31) = -1073741811;
  v125 = -1073741811;
  v120 = 0LL;
  v148 = 0;
  NumOperations = v11->NumOperations;
  v42 = NumOperations << 6;
  v43 = 0xFFFFFFFFLL;
  if ( NumOperations << 6 <= 0xFFFFFFFF )
    v43 = (unsigned int)v42;
  Size = v43;
  v137 = v43;
  if ( v42 > 0xFFFFFFFF )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, NumOperations, 0xFFFFFFFFLL);
    v34[3] = v11->NumOperations;
    goto LABEL_40;
  }
  v44 = NumOperations << 6;
  if ( !is_mul_ok(NumOperations, 0x40uLL) )
    v44 = -1LL;
  v46 = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)operator new(v44, 0x4B677844u, PagedPool);
  v127 = v46;
  if ( !v46 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v45);
    LODWORD(v31) = -1073741801;
    *(_QWORD *)(v47 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v47);
    goto LABEL_142;
  }
  if ( v144 )
  {
    p_Operations = (void **)&v11->Operations;
    Operations = v11->Operations;
    v49 = (ULONG64)Operations + Size;
    if ( v49 < (unsigned __int64)Operations || v49 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v46, Operations, Size);
  }
  else
  {
    p_Operations = (void **)&v11->Operations;
    memmove(v46, v11->Operations, Size);
  }
  v50 = v127;
  v11->Operations = v127;
  v51 = 0;
  v52 = 0LL;
  v53 = v11->NumOperations;
  if ( v53 )
  {
    do
    {
      v54 = (unsigned __int64)(unsigned int)v52 << 6;
      v55 = *(unsigned int *)((char *)&v50->OperationType + v54);
      if ( !(_DWORD)v55 || (_DWORD)v55 == 3 )
      {
        v57 = *(unsigned int *)((char *)&v50->Map.hAllocation + v54);
        if ( !(_DWORD)v57 )
        {
          v56 = WdLogNewEntry5_WdWarning(v50, v52, v57);
          *(_QWORD *)(v56 + 32) = 12794LL;
LABEL_72:
          *(_QWORD *)(v56 + 24) = -1073741811LL;
          WdLogEvent5_WdWarning(v56);
LABEL_73:
          v64 = 0LL;
          goto LABEL_140;
        }
        if ( v51 != (_DWORD)v57 )
        {
          ++v148;
          v51 = *(D3DKMT_HANDLE *)((char *)&v50->Map.hAllocation + v54);
        }
      }
      else if ( (unsigned int)(v55 - 1) > 1 )
      {
        v56 = WdLogNewEntry5_WdWarning(v50, v52, v55);
        *(_QWORD *)(v56 + 32) = 12807LL;
        goto LABEL_72;
      }
      v52 = (unsigned int)(v52 + 1);
    }
    while ( (unsigned int)v52 < v53 );
  }
  v58 = 8LL * v148;
  if ( !is_mul_ok(v148, 8uLL) )
    v58 = -1LL;
  v59 = __CFADD__(v58, 8LL);
  v60 = v58 + 8;
  if ( v59 )
    v60 = -1LL;
  v61 = (char *)operator new(v60, 0x4B677844u, PagedPool);
  if ( v61 )
  {
    *(_QWORD *)v61 = v148;
    v120 = (DXGALLOCATIONREFERENCE *)(v61 + 8);
    `vector constructor iterator'(
      v61 + 8,
      8LL,
      v148,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v63 = v120;
  }
  else
  {
    v63 = 0LL;
    v120 = 0LL;
  }
  if ( !v63 )
  {
    v65 = WdLogNewEntry5_WdLowResource(v62);
    LODWORD(v31) = -1073741801;
    *(_QWORD *)(v65 + 24) = -1073741801LL;
    *(_QWORD *)(v65 + 32) = 12816LL;
    WdLogEvent5_WdLowResource(v65);
    goto LABEL_73;
  }
  v66 = 8LL * v148;
  if ( !is_mul_ok(v148, 8uLL) )
    v66 = -1LL;
  v67 = (char *)operator new(v66, 0x4B677844u, PagedPool);
  v116 = v67;
  if ( !v67 )
  {
    v69 = WdLogNewEntry5_WdLowResource(OperationType);
    LODWORD(v31) = -1073741801;
    *(_QWORD *)(v69 + 24) = -1073741801LL;
    *(_QWORD *)(v69 + 32) = 12824LL;
    WdLogEvent5_WdLowResource(v69);
    goto LABEL_139;
  }
  v70 = 0;
  v71 = -1;
  v72 = 0;
  v145 = 0;
  if ( v11->NumOperations )
  {
    v73 = v67 - 8;
    v134 = v120 - (DXGALLOCATIONREFERENCE *)v67;
    do
    {
      v74 = &v11->Operations[(unsigned __int64)v72];
      v140 = v74;
      OperationType = (unsigned int)v74->OperationType;
      if ( !(_DWORD)OperationType || (_DWORD)OperationType == 3 )
      {
        OperationType = v74->Map.hAllocation;
        if ( v70 != (_DWORD)OperationType )
        {
          Sizea = v74->Map.hAllocation;
          v125 = v71 + 1;
          v135 = v73 + 8;
          v127 = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(v71 + 1);
          AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v126,
                                                      (DXGALLOCATIONREFERENCE *)&v139,
                                                      OperationType);
          DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)v120 + (_QWORD)v127, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v139);
          v73 = v135;
          v78 = *(_QWORD *)&v135[v134];
          if ( !v78 )
          {
            v106 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v76, 0LL);
            v106[3] = Sizea;
            v106[4] = -1073741811LL;
            v106[5] = 12855LL;
            WdLogEvent5_WdWarning(v106);
LABEL_139:
            v64 = v116;
LABEL_140:
            operator delete[](v64);
            operator delete[](*p_Operations);
            if ( v120 )
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v120);
LABEL_142:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v142);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v136);
            if ( v123 && v124 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v123 + 104));
              KeLeaveCriticalRegion();
            }
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v128);
            if ( v115 && _InterlockedExchangeAdd64((volatile signed __int64 *)v115 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v115 + 2), v115);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117);
            if ( v119 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v113, &EventProfilerExit, v114, v117);
            return (unsigned int)v31;
          }
          OperationType = *(_QWORD *)(*(_QWORD *)v130 + 16LL);
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 8) + 16LL) + 16LL) != OperationType )
          {
            v105 = (_QWORD *)WdLogNewEntry5_WdError(OperationType);
            v105[3] = v14;
            v105[4] = *((_QWORD *)v120 + (_QWORD)v127);
            v105[5] = -1073741811LL;
            WdLogEvent5_WdError(v105);
            goto LABEL_139;
          }
          *(_QWORD *)v135 = *(_QWORD *)(v78 + 24);
          v74 = v140;
          v72 = v145;
          v70 = Sizea;
          v71 = v125;
        }
        v74->Map.hAllocation = v71;
      }
      v145 = ++v72;
    }
    while ( v72 < v11->NumOperations );
  }
  Sizeb = (DXGPUSHLOCK *)(v126 + 26);
  while ( 1 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(OperationType);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v121, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v121);
    hFenceObject = v11->hFenceObject;
    DXGPUSHLOCK::AcquireShared(Sizeb);
    v80 = (hFenceObject >> 6) & 0xFFFFFF;
    if ( v80 >= *((_DWORD *)v126 + 62) )
      goto LABEL_98;
    v81 = v80;
    v82 = v126[29];
    v83 = *((_DWORD *)v82 + 4 * v80 + 2);
    if ( ((hFenceObject >> 25) & 0x60) != (v83 & 0x60) || (v83 & 0x2000) != 0 || (v83 & 0x1F) == 0 )
      goto LABEL_98;
    v84 = 2 * v81;
    v85 = v83 & 0x1F;
    if ( (_BYTE)v85 != 11 )
    {
      v86 = WdLogNewEntry5_WdError(v85);
      *(_QWORD *)(v86 + 24) = 316LL;
      WdLogEvent5_WdError(v86);
LABEL_98:
      v147 = 0LL;
      goto LABEL_99;
    }
    v147 = *((_QWORD *)v82 + v84);
LABEL_99:
    ExReleasePushLockSharedEx(Sizeb, 0LL);
    KeLeaveCriticalRegion();
    if ( !v147 )
    {
      v112 = WdLogNewEntry5_WdWarning(v88, v87, v89);
      *(_QWORD *)(v112 + 24) = v11->hFenceObject;
      *(_QWORD *)(v112 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v112);
      goto LABEL_137;
    }
    if ( *(struct DXGDEVICE **)(v147 + 16) != v14 )
    {
      v111 = (_QWORD *)WdLogNewEntry5_WdError(v88);
      v111[3] = *(_QWORD *)(v147 + 16);
      v111[4] = v14;
      v111[5] = -1073741811LL;
      WdLogEvent5_WdError(v111);
      goto LABEL_137;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v129, *(struct DXGSYNCOBJECT **)(v147 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v129);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(v147 + 32),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(v147 + 16) + 16LL));
    Object = 0LL;
    v91 = (*(__int64 (__fastcall **)(_QWORD, _D3DKMT_UPDATEGPUVIRTUALADDRESS *, struct VIDMM_COMPANION_CONTEXT *, _QWORD, void *, struct _VIDSCH_SYNC_OBJECT *, PVOID *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v130 + 544LL) + 8LL) + 1008LL))(
            *(_QWORD *)(*(_QWORD *)v130 + 552LL),
            v11,
            VidMmCompanionContext,
            v148,
            v116,
            VidSchSyncObject,
            &Object);
    v31 = v91;
    if ( v91 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v142);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v129);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v121);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v95, &EventBlockThread, v96, 68);
    v97 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v31 = v97;
    if ( !v97 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      v108 = WdLogNewEntry5_WdWarning(v99, v98, v100);
      *(_QWORD *)(v108 + 24) = 12952LL;
      WdLogEvent5_WdWarning(v108);
      LODWORD(v31) = -1073741130;
LABEL_118:
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v129);
LABEL_137:
      if ( v122 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v121);
      goto LABEL_139;
    }
    if ( (_DWORD)v31 )
    {
      v107 = WdLogNewEntry5_WdWarning(v99, v98, v100);
      *(_QWORD *)(v107 + 32) = 12959LL;
      goto LABEL_117;
    }
    v101 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v142);
    v31 = v101;
    if ( v101 < 0 )
    {
      v107 = WdLogNewEntry5_WdWarning(v103, v102, v104);
      *(_QWORD *)(v107 + 32) = 12969LL;
LABEL_117:
      *(_QWORD *)(v107 + 24) = v31;
      WdLogEvent5_WdWarning(v107);
      goto LABEL_118;
    }
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v129);
    if ( v122 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v121);
    v14 = v132;
  }
  if ( v91 < 0 )
  {
    v107 = WdLogNewEntry5_WdWarning(v93, v92, v94);
    *(_QWORD *)(v107 + 32) = 12976LL;
    goto LABEL_117;
  }
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v129);
  if ( v122 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v121);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v120);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v142);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v136);
  if ( v123 && v124 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v123 + 104));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v128);
  if ( v115 && _InterlockedExchangeAdd64((volatile signed __int64 *)v115 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v115 + 2), v115);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117);
  if ( v119 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v109, &EventProfilerExit, v110, v117);
  return 0LL;
}
