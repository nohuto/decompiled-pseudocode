/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C0209BB0
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A3D0 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006810 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C1C0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000C3D8 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000D348 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000D3B8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DBB8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0023B4C (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C003BA5C (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01025B4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C020D848 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C020D8B4 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C0227D6C (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, const GUID *a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rdi
  bool v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **Current; // r14
  __int64 v11; // rax
  unsigned int updated; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  ULONG64 v15; // rcx
  __int64 v16; // r8
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  DXGCONTEXT *v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  signed __int64 v31; // rdx
  bool v32; // zf
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  const GUID *v42; // r8
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 NumOperations; // rcx
  SIZE_T v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  char *v57; // r9
  __int64 v58; // rax
  size_t v59; // r8
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v61; // rcx
  char *v62; // r8
  int v63; // r9d
  __int64 v64; // rcx
  unsigned int v65; // r10d
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  bool v71; // cf
  SIZE_T v72; // rax
  char *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned int v78; // edx
  DXGALLOCATIONREFERENCE *v79; // rax
  void *v80; // rcx
  __int64 v81; // rax
  SIZE_T v82; // rax
  char *v83; // rax
  __int64 v84; // rdx
  __int64 OperationType; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  unsigned int v89; // r8d
  int v90; // r9d
  __int64 v91; // rdx
  char *v92; // r10
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v93; // rax
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rdx
  PERESOURCE *Global; // rax
  unsigned int v101; // ecx
  __int64 v102; // r8
  struct _KTHREAD *v103; // r9
  int v104; // ecx
  __int64 v105; // r8
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rcx
  const GUID *v117; // r8
  NTSTATUS v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  const GUID *v132; // r8
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rcx
  const GUID *v136; // r8
  struct DXGDEVICE *v137; // [rsp+40h] [rbp-228h] BYREF
  void *v138; // [rsp+48h] [rbp-220h]
  int v139; // [rsp+50h] [rbp-218h] BYREF
  __int64 v140; // [rsp+58h] [rbp-210h]
  char v141; // [rsp+60h] [rbp-208h]
  bool v142; // [rsp+68h] [rbp-200h]
  _DWORD v143[3]; // [rsp+6Ch] [rbp-1FCh]
  char *v144; // [rsp+78h] [rbp-1F0h]
  unsigned int hAllocation; // [rsp+80h] [rbp-1E8h]
  DXGALLOCATIONREFERENCE *v146; // [rsp+88h] [rbp-1E0h]
  char v147[8]; // [rsp+90h] [rbp-1D8h] BYREF
  char v148; // [rsp+98h] [rbp-1D0h]
  __int64 v149; // [rsp+A0h] [rbp-1C8h] BYREF
  char v150; // [rsp+A8h] [rbp-1C0h]
  DXGPUSHLOCK *v151; // [rsp+B0h] [rbp-1B8h]
  size_t Size; // [rsp+B8h] [rbp-1B0h] BYREF
  struct _KTHREAD **v153; // [rsp+C0h] [rbp-1A8h]
  _BYTE v154[16]; // [rsp+C8h] [rbp-1A0h] BYREF
  int v155; // [rsp+D8h] [rbp-190h]
  _BYTE v156[16]; // [rsp+E0h] [rbp-188h] BYREF
  char *v157; // [rsp+F0h] [rbp-178h]
  struct DXGDEVICE *v158; // [rsp+F8h] [rbp-170h] BYREF
  void **p_Operations; // [rsp+100h] [rbp-168h]
  _BYTE v160[24]; // [rsp+108h] [rbp-160h] BYREF
  int v161; // [rsp+120h] [rbp-148h]
  DXGCONTEXT *v162; // [rsp+128h] [rbp-140h] BYREF
  struct _EX_RUNDOWN_REF *v163; // [rsp+130h] [rbp-138h] BYREF
  char *v164; // [rsp+138h] [rbp-130h]
  signed __int64 v165; // [rsp+140h] [rbp-128h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v166; // [rsp+148h] [rbp-120h]
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v167; // [rsp+150h] [rbp-118h] BYREF
  _BYTE v168[160]; // [rsp+190h] [rbp-D8h] BYREF

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v139 = -1;
  v140 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v141 = 1;
    v139 = 2106;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2106);
  }
  else
  {
    v141 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v139, 2106LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v142 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v153 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    updated = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_147:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v139, v13);
    if ( v141 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v135, &EventProfilerExit, v136, v139);
    }
    return updated;
  }
  memset(&v167, 0, sizeof(v167));
  v17 = &v167;
  v138 = &v167;
  if ( v4 )
  {
    v15 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v167 = *v3;
  }
  else
  {
    v17 = v3;
    v138 = v3;
  }
  if ( !v17->NumOperations )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    updated = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    *(_QWORD *)(v18 + 32) = 12612LL;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_147;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v137, v17->hDevice, Current, &v158);
  v22 = v158;
  if ( !v158 )
  {
    v23 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = v17->hDevice;
    updated = -1073741811;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
LABEL_143:
    if ( !v137 )
      goto LABEL_147;
    v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)v137 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_145;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154, v17->hContext, Current, &v162, 0);
  v27 = v162;
  if ( !v162 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
    v28[3] = Current;
    v28[4] = v17->hContext;
    updated = -1073741811;
    v28[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
LABEL_142:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
    goto LABEL_143;
  }
  if ( *((struct DXGDEVICE **)v162 + 2) != v22 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26);
    v29[3] = *((_QWORD *)v27 + 2);
    v29[4] = v22;
    updated = -1073741811;
    v29[5] = -1073741811LL;
    WdLogEvent5_WdError(v29);
    goto LABEL_142;
  }
  v157 = (char *)v22 + 16;
  v30 = *(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL);
  if ( *(_BYTE *)(v30 + 185) )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v30 + 4144),
                (struct DXGPROCESS *)Current,
                *((_DWORD *)v22 + 84),
                *((_DWORD *)v162 + 7),
                v17);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
    if ( !v137 )
      goto LABEL_147;
    v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)v137 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v32 = v31 == 1;
    v13 = v31 - 1;
LABEL_145:
    if ( v32 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v137 + 2), v137);
    goto LABEL_147;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v149, v22);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v160, (struct _KTHREAD **)v27 + 57);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v168, (__int64)v22, 0, v33, 0);
  v34 = COREDEVICEACCESS::AcquireShared((__int64)v168, 0xFFFFFFFF, 0LL);
  v38 = v34;
  if ( v34 < 0 )
  {
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v39 + 24) = v38;
    *(_QWORD *)(v39 + 32) = 12663LL;
    WdLogEvent5_WdWarning(v39);
    goto LABEL_25;
  }
  v44 = *(_QWORD *)(*(_QWORD *)v157 + 16LL);
  if ( (*(_DWORD *)(v44 + 1916) & 0x40) == 0 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v35, v37);
    updated = -1073741811;
    v45[3] = -1073741811LL;
    v45[4] = 12669LL;
LABEL_139:
    WdLogEvent5_WdWarning(v45);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v168);
    DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v160);
    if ( v149 && v150 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v149 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_142;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v27) )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48);
    v45[3] = v153;
    v45[4] = v17->hContext;
    updated = -1073741811;
    v45[5] = -1073741811LL;
    goto LABEL_139;
  }
  *(_QWORD *)&v143[1] = DXGCONTEXT::GetVidMmCompanionContext(v27);
  if ( !*(_QWORD *)&v143[1] )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51);
    v45[3] = v153;
    v45[4] = v17->hContext;
    updated = -1073741811;
    v45[5] = -1073741811LL;
    v45[6] = 12685LL;
    goto LABEL_139;
  }
  updated = -1073741811;
  LODWORD(v38) = -1073741811;
  hAllocation = -1073741811;
  v146 = 0LL;
  v143[0] = 0;
  NumOperations = v17->NumOperations;
  Size = NumOperations << 6;
  if ( NumOperations << 6 > 0xFFFFFFFF )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdWarning(NumOperations, 0xFFFFFFFFLL, v51);
    v45[3] = v17->NumOperations;
    goto LABEL_139;
  }
  v161 = (_DWORD)NumOperations << 6;
  v53 = NumOperations << 6;
  if ( !is_mul_ok(NumOperations, 0x40uLL) )
    v53 = -1LL;
  v57 = (char *)operator new[](v53, 0x4B677844u, PagedPool);
  v144 = v57;
  if ( !v57 )
  {
    v58 = WdLogNewEntry5_WdLowResource(v55, v54, v56, 0LL);
    LODWORD(v38) = -1073741801;
    *(_QWORD *)(v58 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v58);
    goto LABEL_25;
  }
  if ( v142 )
  {
    v59 = (unsigned int)Size;
    p_Operations = (void **)&v17->Operations;
    Operations = v17->Operations;
    v61 = (ULONG64)Operations + (unsigned int)Size;
    if ( v61 < (unsigned __int64)Operations || v61 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v57, Operations, v59);
  }
  else
  {
    p_Operations = (void **)&v17->Operations;
    memmove(v57, v17->Operations, (unsigned int)Size);
  }
  v62 = v144;
  v17->Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v144;
  v63 = 0;
  v64 = 0LL;
  v65 = v17->NumOperations;
  if ( v65 )
  {
    do
    {
      v66 = (unsigned __int64)(unsigned int)v64 << 6;
      v67 = *(unsigned int *)&v62[v66];
      if ( !(_DWORD)v67 || (_DWORD)v67 == 3 )
      {
        v69 = *(unsigned int *)&v62[v66 + 24];
        if ( !(_DWORD)v69 )
        {
          v68 = WdLogNewEntry5_WdWarning(v64, v69, v62);
          *(_QWORD *)(v68 + 32) = 12745LL;
LABEL_68:
          *(_QWORD *)(v68 + 24) = -1073741811LL;
          WdLogEvent5_WdWarning(v68);
LABEL_69:
          v80 = 0LL;
          goto LABEL_136;
        }
        if ( v63 != (_DWORD)v69 )
        {
          ++v143[0];
          v63 = v69;
        }
      }
      else if ( (unsigned int)(v67 - 1) > 1 )
      {
        v68 = WdLogNewEntry5_WdWarning(v64, v67, v62);
        *(_QWORD *)(v68 + 32) = 12758LL;
        goto LABEL_68;
      }
      v64 = (unsigned int)(v64 + 1);
    }
    while ( (unsigned int)v64 < v65 );
  }
  v70 = 8LL * v143[0];
  if ( !is_mul_ok(v143[0], 8uLL) )
    v70 = -1LL;
  v71 = __CFADD__(v70, 8LL);
  v72 = v70 + 8;
  if ( v71 )
    v72 = -1LL;
  v73 = (char *)operator new[](v72, 0x4B677844u, PagedPool);
  if ( v73 )
  {
    v78 = v143[0];
    *(_QWORD *)v73 = v143[0];
    v146 = (DXGALLOCATIONREFERENCE *)(v73 + 8);
    `vector constructor iterator'(
      v73 + 8,
      8LL,
      v78,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v79 = v146;
  }
  else
  {
    v79 = 0LL;
    v146 = 0LL;
  }
  if ( !v79 )
  {
    v81 = WdLogNewEntry5_WdLowResource(v75, v74, v76, v77);
    LODWORD(v38) = -1073741801;
    *(_QWORD *)(v81 + 24) = -1073741801LL;
    *(_QWORD *)(v81 + 32) = 12767LL;
    WdLogEvent5_WdLowResource(v81);
    goto LABEL_69;
  }
  v82 = 8LL * v143[0];
  if ( !is_mul_ok(v143[0], 8uLL) )
    v82 = -1LL;
  v83 = (char *)operator new[](v82, 0x4B677844u, PagedPool);
  v138 = v83;
  if ( !v83 )
  {
    v88 = WdLogNewEntry5_WdLowResource(OperationType, v84, v86, v87);
    LODWORD(v38) = -1073741801;
    *(_QWORD *)(v88 + 24) = -1073741801LL;
    *(_QWORD *)(v88 + 32) = 12775LL;
    WdLogEvent5_WdLowResource(v88);
    goto LABEL_135;
  }
  v89 = 0;
  v90 = -1;
  v91 = 0LL;
  v155 = 0;
  if ( v17->NumOperations )
  {
    v92 = v83 - 8;
    v165 = v146 - (DXGALLOCATIONREFERENCE *)v83;
    do
    {
      v93 = &v17->Operations[(unsigned __int64)(unsigned int)v91];
      v166 = v93;
      OperationType = (unsigned int)v93->OperationType;
      if ( !(_DWORD)OperationType || (_DWORD)OperationType == 3 )
      {
        OperationType = v93->Map.hAllocation;
        if ( v89 != (_DWORD)OperationType )
        {
          hAllocation = v93->Map.hAllocation;
          LODWORD(v144) = v90 + 1;
          v164 = v92 + 8;
          v151 = (DXGPUSHLOCK *)(v90 + 1);
          AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)v153,
                                                        (DXGALLOCATIONREFERENCE *)&v163,
                                                        OperationType);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v146 + (_QWORD)v151, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v163, v95);
          v92 = v164;
          v98 = *(_QWORD *)&v164[v165];
          if ( !v98 )
          {
            v127 = (_QWORD *)WdLogNewEntry5_WdWarning(v97, v96, 0LL);
            v127[3] = hAllocation;
            v127[4] = -1073741811LL;
            v127[5] = 12806LL;
            WdLogEvent5_WdWarning(v127);
LABEL_135:
            v80 = v138;
LABEL_136:
            operator delete[](v80);
            operator delete[](*p_Operations);
            if ( v146 )
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v146);
LABEL_25:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v168);
            DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v160);
            if ( v149 && v150 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v149 + 104));
              KeLeaveCriticalRegion();
            }
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
            if ( v137 && _InterlockedExchangeAdd64((volatile signed __int64 *)v137 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v137 + 2), v137);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v139, v40);
            if ( v141 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v41, &EventProfilerExit, v42, v139);
            return (unsigned int)v38;
          }
          v99 = *(_QWORD *)(*(_QWORD *)(v98 + 8) + 16LL);
          OperationType = *(_QWORD *)(*(_QWORD *)v157 + 16LL);
          if ( *(_QWORD *)(v99 + 16) != OperationType )
          {
            v126 = (_QWORD *)WdLogNewEntry5_WdError(OperationType, v99, v98);
            v126[3] = v22;
            v126[4] = *((_QWORD *)v146 + (_QWORD)v151);
            v126[5] = -1073741811LL;
            WdLogEvent5_WdError(v126);
            goto LABEL_135;
          }
          *(_QWORD *)v164 = *(_QWORD *)(v98 + 24);
          v93 = v166;
          LODWORD(v91) = v155;
          v89 = hAllocation;
          v90 = (int)v144;
        }
        v93->Map.hAllocation = v90;
      }
      v91 = (unsigned int)(v91 + 1);
      v155 = v91;
    }
    while ( (unsigned int)v91 < v17->NumOperations );
  }
  v151 = (DXGPUSHLOCK *)(v153 + 23);
  while ( 1 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(OperationType, v91);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v147, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v147);
    LODWORD(v144) = v17->hFenceObject;
    DXGPUSHLOCK::AcquireShared(v151);
    v101 = ((unsigned int)v144 >> 6) & 0xFFFFFF;
    if ( v101 >= *((_DWORD *)v153 + 56) )
      goto LABEL_94;
    v102 = v101;
    v103 = v153[26];
    v104 = *((_DWORD *)v103 + 4 * v101 + 2);
    if ( (((unsigned int)v144 >> 25) & 0x60) != (v104 & 0x60) || (v104 & 0x2000) != 0 || (v104 & 0x1F) == 0 )
      goto LABEL_94;
    v105 = 2 * v102;
    v106 = v104 & 0x1F;
    if ( (_BYTE)v106 != 11 )
    {
      v107 = WdLogNewEntry5_WdError(v106, ((unsigned int)v144 >> 25) & 0x60, v105);
      *(_QWORD *)(v107 + 24) = 267LL;
      WdLogEvent5_WdError(v107);
LABEL_94:
      v144 = 0LL;
      goto LABEL_95;
    }
    v144 = (char *)*((_QWORD *)v103 + v105);
LABEL_95:
    ExReleasePushLockSharedEx(v151, 0LL);
    KeLeaveCriticalRegion();
    if ( !v144 )
    {
      v134 = WdLogNewEntry5_WdWarning(v109, v108, v110);
      *(_QWORD *)(v134 + 24) = v17->hFenceObject;
      *(_QWORD *)(v134 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v134);
      goto LABEL_133;
    }
    if ( *((struct DXGDEVICE **)v144 + 2) != v22 )
    {
      v133 = (_QWORD *)WdLogNewEntry5_WdError(v109, v108, v110);
      v133[3] = *((_QWORD *)v144 + 2);
      v133[4] = v22;
      v133[5] = -1073741811LL;
      WdLogEvent5_WdError(v133);
      goto LABEL_133;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v156, *((struct DXGSYNCOBJECT **)v144 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v156);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)v144 + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v144 + 2) + 16LL));
    Size = 0LL;
    v112 = (*(__int64 (__fastcall **)(_QWORD, _D3DKMT_UPDATEGPUVIRTUALADDRESS *, _QWORD, _QWORD, void *, struct _VIDSCH_SYNC_OBJECT *, size_t *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v157 + 544LL) + 8LL) + 1008LL))(
             *(_QWORD *)(*(_QWORD *)v157 + 552LL),
             v17,
             *(_QWORD *)&v143[1],
             v143[0],
             v138,
             VidSchSyncObject,
             &Size);
    v38 = v112;
    if ( v112 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v168);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v156);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v147);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v116, &EventBlockThread, v117, 68);
    v118 = KeWaitForSingleObject((PVOID)Size, UserRequest, 0, 1u, 0LL);
    v38 = v118;
    if ( !v118 )
      KeReleaseSemaphore((PRKSEMAPHORE)Size, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      v129 = WdLogNewEntry5_WdWarning(v120, v119, v121);
      *(_QWORD *)(v129 + 24) = 12903LL;
      WdLogEvent5_WdWarning(v129);
      LODWORD(v38) = -1073741130;
LABEL_114:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v156);
LABEL_133:
      if ( v148 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v147);
      goto LABEL_135;
    }
    if ( (_DWORD)v38 )
    {
      v128 = WdLogNewEntry5_WdWarning(v120, v119, v121);
      *(_QWORD *)(v128 + 32) = 12910LL;
      goto LABEL_113;
    }
    v122 = COREDEVICEACCESS::AcquireShared((__int64)v168, 0xFFFFFFFF, 0LL);
    v38 = v122;
    if ( v122 < 0 )
    {
      v128 = WdLogNewEntry5_WdWarning(v124, v123, v125);
      *(_QWORD *)(v128 + 32) = 12920LL;
LABEL_113:
      *(_QWORD *)(v128 + 24) = v38;
      WdLogEvent5_WdWarning(v128);
      goto LABEL_114;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v156);
    if ( v148 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v147);
    v22 = v158;
  }
  if ( v112 < 0 )
  {
    v128 = WdLogNewEntry5_WdWarning(v114, v113, v115);
    *(_QWORD *)(v128 + 32) = 12927LL;
    goto LABEL_113;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v156);
  if ( v148 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v147);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v146);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v168);
  DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v160);
  if ( v149 && v150 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v149 + 104));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
  if ( v137 && _InterlockedExchangeAdd64((volatile signed __int64 *)v137 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v137 + 2), v137);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v139, v130);
  if ( v141 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v131, &EventProfilerExit, v132, v139);
  return 0LL;
}
