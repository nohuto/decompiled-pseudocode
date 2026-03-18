/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C0115420
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAD90 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA118 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C01151A0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0115D80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C01F2A0C (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02138C8 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C023315C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *a1, __int64 a2, const GUID *a3)
{
  const struct _D3DKMT_RENDER *v4; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned int v9; // edi
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rcx
  D3DKMT_HANDLE hDevice; // edi
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rsi
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdi
  struct _KEVENT *v29; // rbx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r12
  __int64 v34; // rbx
  unsigned int BroadcastContextCount; // eax
  __int64 v36; // rbx
  _BYTE *PoolWithTag; // rax
  size_t v38; // rdi
  _BYTE *v39; // rax
  volatile signed __int64 *v40; // r14
  __int64 v41; // rbx
  _BYTE *v42; // rcx
  void *v43; // rdi
  __int64 v44; // r8
  unsigned __int64 i; // rbx
  __int64 v46; // rdi
  __int64 v47; // rcx
  volatile signed __int64 *v48; // rbx
  __int64 v49; // r8
  unsigned __int64 v50; // rdx
  volatile signed __int64 *v51; // rcx
  volatile signed __int64 *v52; // rcx
  __int64 v53; // rcx
  const GUID *v54; // r8
  __int64 v55; // rax
  bool v56; // r15
  struct _D3DKMT_RENDER *v57; // rcx
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  __int64 AllocationCount; // rdi
  struct DXGALLOCATION **v60; // rbx
  _BYTE *v61; // rbx
  int v62; // eax
  __int64 v63; // rdx
  struct DXGALLOCATION *v64; // rcx
  int v65; // r14d
  int v66; // eax
  unsigned int v67; // edi
  struct DXGADAPTER *v68; // rcx
  DXGADAPTER *v69; // rcx
  struct DXGADAPTER *v70; // rbx
  _QWORD *v71; // rcx
  unsigned __int64 j; // rbx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  const GUID *v76; // r8
  __int64 v78; // rcx
  unsigned __int8 v79; // bl
  const GUID *v80; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // rax
  int v85; // r9d
  __int64 v86; // rcx
  __int64 *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rsi
  signed __int64 v90; // rax
  signed __int64 v91; // rtt
  __int64 v92; // rax
  int v93; // r9d
  __int64 v94; // rax
  _QWORD *v95; // rbx
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rbx
  _QWORD *v100; // rax
  unsigned int v101; // eax
  __int64 v102; // rax
  _QWORD *v103; // r15
  int v104; // edi
  int v105; // r9d
  __int64 v106; // r8
  __int64 v107; // r10
  __int64 v108; // rax
  int v109; // r9d
  _QWORD *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  _QWORD *v113; // rax
  __int64 v114; // rax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // r9
  __int64 v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rsi
  struct DXGDEVICE *v126; // rbx
  __int64 v127; // rax
  __int64 v128; // r9
  __int64 v129; // rbx
  __int64 v130; // rax
  __int64 v131; // r9
  void *Base; // [rsp+48h] [rbp-C0h]
  _BYTE v133[24]; // [rsp+50h] [rbp-B8h] BYREF
  size_t NumOfElements; // [rsp+70h] [rbp-98h]
  int v135; // [rsp+78h] [rbp-90h]
  int v136; // [rsp+80h] [rbp-88h] BYREF
  __int64 v137; // [rsp+88h] [rbp-80h]
  char v138; // [rsp+90h] [rbp-78h]
  PVOID v139; // [rsp+98h] [rbp-70h]
  _BYTE v140[32]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v141; // [rsp+C0h] [rbp-48h]
  void *Src; // [rsp+C8h] [rbp-40h]
  _BYTE v143[32]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v144; // [rsp+F0h] [rbp-18h]
  char v145[8]; // [rsp+F8h] [rbp-10h] BYREF
  struct _KTHREAD **v146[2]; // [rsp+100h] [rbp-8h] BYREF
  DXGADAPTER *v147; // [rsp+110h] [rbp+8h]
  char v148; // [rsp+118h] [rbp+10h]
  struct _KTHREAD **v149[2]; // [rsp+120h] [rbp+18h] BYREF
  struct DXGADAPTER *v150; // [rsp+130h] [rbp+28h]
  char v151; // [rsp+138h] [rbp+30h]
  unsigned __int64 v152; // [rsp+140h] [rbp+38h]
  char v153; // [rsp+148h] [rbp+40h]
  __int64 v154; // [rsp+158h] [rbp+50h] BYREF
  struct DXGADAPTER *v155; // [rsp+160h] [rbp+58h]
  char v156; // [rsp+168h] [rbp+60h]
  __int64 v157; // [rsp+170h] [rbp+68h]
  char v158[8]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v159; // [rsp+180h] [rbp+78h]
  char v160; // [rsp+188h] [rbp+80h]
  char v161[8]; // [rsp+190h] [rbp+88h] BYREF
  __int64 v162; // [rsp+198h] [rbp+90h]
  char v163; // [rsp+1A0h] [rbp+98h]
  char v164[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v165; // [rsp+1B0h] [rbp+A8h]
  char v166; // [rsp+1B8h] [rbp+B0h]
  _QWORD v167[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  _QWORD v168[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  _QWORD v169[3]; // [rsp+1E0h] [rbp+D8h] BYREF
  char v170[8]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v171[32]; // [rsp+200h] [rbp+F8h] BYREF
  char v172[56]; // [rsp+220h] [rbp+118h] BYREF
  char v173[8]; // [rsp+258h] [rbp+150h] BYREF
  char v174[32]; // [rsp+260h] [rbp+158h] BYREF
  char v175[56]; // [rsp+280h] [rbp+178h] BYREF
  char v176[8]; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v177[32]; // [rsp+2C0h] [rbp+1B8h] BYREF
  char v178[56]; // [rsp+2E0h] [rbp+1D8h] BYREF
  char v179[8]; // [rsp+318h] [rbp+210h] BYREF
  char v180[32]; // [rsp+320h] [rbp+218h] BYREF
  char v181[56]; // [rsp+340h] [rbp+238h] BYREF
  PVOID P; // [rsp+378h] [rbp+270h]
  _BYTE v183[256]; // [rsp+380h] [rbp+278h] BYREF
  int v184; // [rsp+480h] [rbp+378h]
  char v185; // [rsp+4D8h] [rbp+3D0h]
  unsigned int v186; // [rsp+4E0h] [rbp+3D8h] BYREF
  PVOID v187; // [rsp+4E8h] [rbp+3E0h]
  struct _D3DKMT_RENDER *v188; // [rsp+4F0h] [rbp+3E8h]

  v136 = -1;
  v137 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v138 = 1;
    v136 = 3020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3020);
  }
  else
  {
    v138 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v136, 3020);
  v4 = (const struct _D3DKMT_RENDER *)((char *)a1 + 8);
  v188 = (struct _D3DKMT_RENDER *)((char *)a1 + 8);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v82 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v82;
      }
    }
  }
  if ( !v8 )
  {
    v67 = -1073741811;
    v83 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v83 + 24) = -1073741811LL;
    *(_QWORD *)(v83 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v83);
    goto LABEL_116;
  }
  v9 = *(_DWORD *)a1;
  if ( v8 != -208 && *(struct _KTHREAD **)(v8 + 216) == KeGetCurrentThread() )
  {
    v84 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v84 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v84);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v85 = *(_DWORD *)(v8 + 224);
      if ( v85 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v10, &EventBlockThread, v11, v85);
    }
    ExAcquirePushLockSharedEx(v8 + 208, 0LL);
  }
  v12 = (v9 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 >= *(_DWORD *)(v8 + 248) )
    goto LABEL_12;
  v13 = *(_QWORD *)(v8 + 232);
  v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
  if ( ((v9 >> 25) & 0x60) != (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60) || (v14 & 0x2000) != 0 || (v14 & 0x1F) == 0 )
    goto LABEL_12;
  v86 = v14 & 0x1F;
  v87 = (__int64 *)(v13 + 16LL * (unsigned int)v12);
  if ( (_BYTE)v86 != 15 )
  {
    v88 = WdLogNewEntry5_WdError(v86);
    *(_QWORD *)(v88 + 24) = 316LL;
    WdLogEvent5_WdError(v88);
LABEL_12:
    v187 = 0LL;
    goto LABEL_13;
  }
  v89 = *v87;
  v187 = (PVOID)v89;
  if ( !v89 )
    goto LABEL_13;
  _m_prefetchw((const void *)(v89 + 72));
  v90 = *(_QWORD *)(v89 + 72);
  if ( !v90 )
    goto LABEL_12;
  while ( 1 )
  {
    v91 = v90;
    v90 = _InterlockedCompareExchange64((volatile signed __int64 *)(v89 + 72), v90 + 1, v90);
    if ( v91 == v90 )
      break;
    if ( !v90 )
      goto LABEL_12;
  }
LABEL_13:
  ExReleasePushLockSharedEx(v8 + 208, 0LL);
  KeLeaveCriticalRegion();
  hDevice = v4->hDevice;
  if ( v8 != -208 && *(struct _KTHREAD **)(v8 + 216) == KeGetCurrentThread() )
  {
    v92 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v92 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v92);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v93 = *(_DWORD *)(v8 + 224);
      if ( v93 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v17, &EventBlockThread, v18, v93);
    }
    ExAcquirePushLockSharedEx(v8 + 208, 0LL);
  }
  v19 = (hDevice >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 >= *(_DWORD *)(v8 + 248) )
    goto LABEL_154;
  v20 = *(_QWORD *)(v8 + 232);
  v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
  if ( ((hDevice >> 25) & 0x60) != (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60) || (v21 & 0x2000) != 0 || (v21 & 0x1F) == 0 )
    goto LABEL_154;
  v22 = v21 & 0x1F;
  if ( (_BYTE)v22 != 7 )
  {
    v94 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v94 + 24) = 316LL;
    WdLogEvent5_WdError(v94);
LABEL_154:
    v23 = 0LL;
    goto LABEL_25;
  }
  v23 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
  if ( !v23 )
    goto LABEL_25;
  _m_prefetchw((const void *)(v23 + 32));
  v24 = *(_QWORD *)(v23 + 32);
  if ( !v24 )
    goto LABEL_154;
  while ( 1 )
  {
    v25 = v24;
    v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 32), v24 + 1, v24);
    if ( v25 == v24 )
      break;
    if ( !v24 )
      goto LABEL_154;
  }
LABEL_25:
  ExReleasePushLockSharedEx(v8 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v23 )
  {
    v28 = *(_QWORD *)(v23 + 16);
    v157 = v28;
    if ( *(_BYTE *)(v23 + 433) )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v179, v28, 0, v27, 0);
      v96 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v179);
      v99 = v96;
      if ( v96 >= 0 )
      {
        LODWORD(v99) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 16LL)
                                                      + 4152LL),
                         (struct DXGPROCESS *)v8,
                         (struct DXGCONTEXT *)v23,
                         v4);
      }
      else
      {
        v100 = (_QWORD *)WdLogNewEntry5_WdEvent(v98, v97);
        v100[3] = v99;
        v100[4] = v23;
        v100[5] = v8;
        WdLogEvent5_WdEvent(v100);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v181);
      COREACCESS::~COREACCESS((COREACCESS *)v180);
      v40 = (volatile signed __int64 *)v187;
      v67 = v99;
LABEL_114:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v120 = *(_QWORD *)(v23 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v167,
          (struct DXGDEVICE *)v120);
        v121 = *(_QWORD *)(v23 + 16);
        v160 = 0;
        v159 = *(_QWORD *)(*(_QWORD *)(v121 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v158);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v170, v120, 2, v122, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v170);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v120 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v120, (struct DXGCONTEXT ***)v23, (struct COREDEVICEACCESS *)v170);
        COREACCESS::~COREACCESS((COREACCESS *)v172);
        COREACCESS::~COREACCESS((COREACCESS *)v171);
        if ( v160 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v158);
        if ( v167[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v167);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v120 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v120 + 16), (struct DXGDEVICE *)v120);
      }
      goto LABEL_115;
    }
    v29 = (struct _KEVENT *)(*(_QWORD *)(v28 + 16) + 96LL);
    if ( !KeReadStateEvent(v29) )
      KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 96LL));
      v79 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v78, &EventBlockThread, v80, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 104), 1u);
      if ( v79 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v33 = *(_QWORD *)(v23 + 16);
    v34 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL);
    if ( !*(_BYTE *)(v34 + 2434)
      || (*((_BYTE *)DXGPROCESS::GetCurrent() + 323) & 0xC) != 0
      || (*(_DWORD *)&v4->Flags & 0x40) != 0
      || *(int *)(v34 + 2160) < 0x2000
      || (v101 = *(_DWORD *)(v34 + 256), v101 <= 1) )
    {
      BroadcastContextCount = v4->BroadcastContextCount;
      v185 = 0;
    }
    else
    {
      BroadcastContextCount = v101 - 1;
      v185 = 1;
      v4->BroadcastContextCount = BroadcastContextCount;
    }
    v36 = BroadcastContextCount + 1;
    if ( BroadcastContextCount > 0x40 )
    {
      v102 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      v67 = -1073741811;
      *(_QWORD *)(v102 + 24) = v23;
      *(_QWORD *)(v102 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v102);
      v40 = (volatile signed __int64 *)v187;
LABEL_113:
      ExReleaseResourceLite(*(PERESOURCE *)(v157 + 104));
      KeLeaveCriticalRegion();
      goto LABEL_114;
    }
    Src = 0LL;
    v144 = 0;
    if ( (unsigned int)v36 > 4 )
    {
      v30 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v36;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v36 < 8 )
        goto LABEL_225;
      v38 = 8 * v36;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v36, 0x4B677844u);
    }
    else
    {
      PoolWithTag = v143;
      v38 = 8 * v36;
    }
    Src = PoolWithTag;
    v144 = v36;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v38);
      if ( Src )
      {
        v139 = 0LL;
        v141 = 0;
        if ( (unsigned int)v36 > 4 )
        {
          v30 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v36;
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v36 < 8 )
            goto LABEL_221;
          v39 = ExAllocatePoolWithTag(PagedPool, v38, 0x4B677844u);
        }
        else
        {
          v39 = v140;
        }
        v139 = v39;
        v141 = v36;
        if ( v39 )
        {
          memset(v39, 0, v38);
          if ( v139 )
          {
            v40 = (volatile signed __int64 *)v187;
            *(_QWORD *)Src = v23;
            if ( v40 )
              *(_QWORD *)v139 = v40;
            if ( v185 )
            {
              v103 = Src;
              v30 = *(_QWORD *)(v33 + 360);
              v104 = 0;
              v105 = 0;
              while ( v30 != v33 + 360 && v30 )
              {
                v106 = *(unsigned int *)(v30 + 392);
                if ( (unsigned int)v106 >= (unsigned int)v36 )
                {
                  v108 = WdLogNewEntry5_WdError(v31);
                  *(_QWORD *)(v108 + 32) = 2851LL;
                  goto LABEL_186;
                }
                v31 = (unsigned int)v106;
                if ( ((1 << v106) & v104) != 0 )
                {
                  v108 = WdLogNewEntry5_WdError((unsigned int)v106);
                  *(_QWORD *)(v108 + 32) = 2858LL;
LABEL_186:
                  *(_QWORD *)(v108 + 24) = v23;
                  WdLogEvent5_WdError(v108);
                  v67 = -1073741811;
                  goto LABEL_222;
                }
                v104 |= 1 << v106;
                v103[v106] = v30;
                if ( (*(_DWORD *)(v30 + 396) & 0x10) != 0 )
                {
                  v107 = 0LL;
                  if ( *(_QWORD *)(v30 + 400) != v30 + 400 )
                    v107 = *(_QWORD *)(v30 + 400);
                  v31 = (unsigned __int64)v139;
                  if ( (unsigned int)v106 < v141 )
                    v31 = (unsigned __int64)v139 + 8 * v106;
                  *(_QWORD *)v31 = v107;
                }
                v30 = *(_QWORD *)v30;
                ++v105;
              }
              if ( v105 != (_DWORD)v36 )
              {
                v108 = WdLogNewEntry5_WdError(v31);
                *(_QWORD *)(v108 + 32) = 2881LL;
                goto LABEL_186;
              }
              v40 = (volatile signed __int64 *)v187;
            }
            v41 = v144;
            v42 = 0LL;
            v43 = Src;
            v44 = 0LL;
            Base = 0LL;
            LODWORD(NumOfElements) = 0;
            if ( v144 > 4 )
            {
              v30 = 0xFFFFFFFFFFFFFFFFuLL % v144;
              if ( 0xFFFFFFFFFFFFFFFFuLL / v144 < 8 )
              {
LABEL_48:
                LOBYTE(v135) = 1;
                if ( !v42 )
                  goto LABEL_218;
                memmove(v42, v43, 8 * v44);
                qsort(
                  Base,
                  (unsigned int)NumOfElements,
                  8uLL,
                  (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
                v30 = (unsigned int)NumOfElements;
                v44 = 1LL;
                v42 = Base;
                if ( (unsigned int)NumOfElements > 1uLL )
                {
                  while ( *((_QWORD *)Base + v44) != *((_QWORD *)Base + v44 - 1) )
                  {
                    if ( ++v44 >= (unsigned __int64)(unsigned int)NumOfElements )
                      goto LABEL_50;
                  }
                }
                else
                {
LABEL_50:
                  for ( i = 0LL; i < (unsigned int)NumOfElements; v42 = Base )
                  {
                    v46 = *(_QWORD *)&v42[8 * i];
                    KeEnterCriticalRegion();
                    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v46 + 440, 0LL) )
                    {
                      if ( bTracingEnabled )
                      {
                        v109 = *(_DWORD *)(v46 + 456);
                        if ( v109 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          McTemplateK0q(v47, &EventBlockThread, (const GUID *)v44, v109);
                      }
                      ExAcquirePushLockExclusiveEx(v46 + 440, 0LL);
                    }
                    ++i;
                    *(_QWORD *)(v46 + 448) = KeGetCurrentThread();
                  }
                  LOBYTE(v135) = 0;
                }
                if ( !v42 )
                {
LABEL_218:
                  v117 = WdLogNewEntry5_WdWarning(v42, v30, v44);
                  *(_QWORD *)(v117 + 24) = 2892LL;
                  WdLogEvent5_WdWarning(v117);
                  v67 = -1073741801;
LABEL_103:
                  v71 = Base;
                  if ( Base )
                  {
                    if ( !(_BYTE)v135 )
                    {
                      for ( j = 0LL; j < (unsigned int)NumOfElements; v71 = Base )
                      {
                        v73 = v71[j] + 440LL;
                        *(_QWORD *)(v73 + 8) = 0LL;
                        ExReleasePushLockExclusiveEx(v73, 0LL);
                        KeLeaveCriticalRegion();
                        ++j;
                      }
                    }
                  }
                  if ( v71 != (_QWORD *)v133 && v71 )
                    ExFreePoolWithTag(v71, 0);
                  Base = 0LL;
                  LODWORD(NumOfElements) = 0;
LABEL_109:
                  if ( v139 != v140 && v139 )
                    ExFreePoolWithTag(v139, 0);
                  v139 = 0LL;
                  v141 = 0;
                  goto LABEL_111;
                }
                v48 = *(volatile signed __int64 **)(*(_QWORD *)(v33 + 16) + 16LL);
                v155 = (struct DXGADAPTER *)v48;
                _InterlockedIncrement64(v48 + 3);
                v154 = -1LL;
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v48 + 15, 0LL);
                v50 = *(_QWORD *)(v23 + 16);
                v156 = 1;
                v51 = *(volatile signed __int64 **)(*(_QWORD *)(v50 + 16) + 16LL);
                v147 = (DXGADAPTER *)v51;
                v148 = 0;
                if ( v51 )
                {
                  _InterlockedIncrement64(v51 + 3);
                  v146[1] = (struct _KTHREAD **)-1LL;
                }
                v52 = *(volatile signed __int64 **)(*(_QWORD *)(v50 + 16) + 16LL);
                v150 = (struct DXGADAPTER *)v52;
                v151 = 0;
                if ( v52 )
                {
                  _InterlockedIncrement64(v52 + 3);
                  v149[1] = (struct _KTHREAD **)-1LL;
                }
                v152 = v50;
                v153 = 0;
                if ( v148 )
                {
                  v110 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52);
                  v110[5] = v146;
                  v110[3] = 275LL;
                  v110[4] = 4LL;
                  v110[6] = 0LL;
                  v110[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v110);
                }
                if ( KeGetCurrentThread() != *((struct _KTHREAD **)v147 + 20) )
                {
                  if ( !KeReadStateEvent((PRKEVENT)v147 + 2) )
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q(v53, &EventBlockThread, v54, 72);
                    KeWaitForSingleObject((char *)v147 + 48, Executive, 0, 0, 0LL);
                  }
                  DXGADAPTER::AcquireCoreResourceShared(v147);
                }
                v148 = 1;
                if ( *(_DWORD *)(v152 + 464) != 1 )
                  goto LABEL_204;
                if ( v153 )
                {
                  COREACCESS::AcquireShared((DXGADAPTER **)v149);
                  if ( *((_DWORD *)v150 + 44) != 1 )
                  {
                    COREACCESS::Release(v149);
LABEL_204:
                    COREACCESS::Release(v146);
                    v113 = (_QWORD *)WdLogNewEntry5_WdEvent(v112, v111);
                    v113[3] = -1073741130LL;
                    v113[4] = v23;
                    v113[5] = v8;
                    WdLogEvent5_WdEvent(v113);
                    v67 = -1073741130;
LABEL_89:
                    v68 = v150;
                    if ( v150 )
                    {
                      if ( v151 )
                      {
                        COREACCESS::Release(v149);
                        v68 = v150;
                      }
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v68 + 2), v68);
                    }
                    v69 = v147;
                    if ( v147 )
                    {
                      if ( v148 )
                      {
                        v148 = 0;
                        v69 = v147;
                        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v147 + 20) )
                        {
                          DXGADAPTER::ReleaseCoreResource(v147);
                          v69 = v147;
                        }
                      }
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v69 + 2), v69);
                    }
                    if ( v156 )
                    {
                      v70 = v155;
                      ExReleasePushLockSharedEx((char *)v155 + 120, 0LL);
                      KeLeaveCriticalRegion();
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v155 + 2), v155);
                    }
                    goto LABEL_103;
                  }
                }
                v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 16LL);
                v56 = *(int *)(v55 + 2160) >= 0x2000 || *(_BYTE *)(v55 + 2452);
                v57 = v188;
                if ( (*(_DWORD *)&v188->Flags & 0x20) != 0 )
                  pNewAllocationList = v188->pNewAllocationList;
                else
                  pNewAllocationList = *(D3DDDI_ALLOCATIONLIST **)(v23 + 88);
                AllocationCount = v188->AllocationCount;
                v186 = v188->AllocationCount;
                v60 = 0LL;
                P = 0LL;
                v184 = 0;
                if ( !v56 )
                  goto LABEL_77;
                if ( (unsigned int)AllocationCount > 0x20 )
                {
                  v50 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)AllocationCount;
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)AllocationCount < 8 )
                    goto LABEL_208;
                  v61 = ExAllocatePoolWithTag(PagedPool, 8 * AllocationCount, 0x4B677844u);
                  P = v61;
                }
                else
                {
                  v61 = v183;
                  P = v183;
                }
                v184 = AllocationCount;
                if ( v61 )
                {
                  memset(v61, 0, 8 * AllocationCount);
                  v60 = (struct DXGALLOCATION **)P;
                  if ( P )
                  {
                    v62 = DxgkReferenceAllocationList(&v186, pNewAllocationList, (struct DXGALLOCATION **)P, 0LL);
                    AllocationCount = v186;
                    v65 = v62;
                    if ( v62 < 0 )
                      goto LABEL_80;
                    v57 = v188;
LABEL_77:
                    if ( v185 )
                      v66 = DXGCONTEXT::RenderKmLda(
                              v57,
                              (struct COREDEVICEACCESS *)v145,
                              (struct DXGCONTEXT **)Src,
                              v60,
                              (struct DXGHWQUEUE **)v139);
                    else
                      v66 = DXGCONTEXT::Render(
                              (DXGCONTEXT *)v23,
                              v57,
                              (struct COREDEVICEACCESS *)v145,
                              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v154,
                              (struct DXGCONTEXT **)Src,
                              v60,
                              (struct DXGHWQUEUE **)v139);
                    v65 = v66;
LABEL_80:
                    if ( v56 && (_DWORD)AllocationCount )
                    {
                      do
                      {
                        v64 = *v60;
                        if ( *v60 )
                          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v64 + 11);
                        ++v60;
                        --AllocationCount;
                      }
                      while ( AllocationCount );
                    }
                    if ( v65 >= 0 )
                      goto LABEL_86;
                    switch ( v65 )
                    {
                      case -1073741811:
                      case -1073741592:
                        v116 = (_QWORD *)WdLogNewEntry5_WdError(v64);
                        v116[3] = v65;
                        v116[4] = v23;
                        v116[5] = v8;
                        WdLogEvent5_WdError(v116);
                        goto LABEL_86;
                      case -1071775482:
                        v115 = (_QWORD *)WdLogNewEntry5_WdEvent(v64, v63);
                        v115[3] = -1071775482LL;
                        break;
                      case -1071774910:
                        goto LABEL_86;
                      default:
                        v115 = (_QWORD *)WdLogNewEntry5_WdEvent(v64, v63);
                        v115[3] = v65;
                        break;
                    }
                    v115[4] = v23;
                    v115[5] = v8;
                    WdLogEvent5_WdEvent(v115);
LABEL_86:
                    v67 = v65;
                    goto LABEL_87;
                  }
                }
LABEL_208:
                v114 = WdLogNewEntry5_WdWarning(v57, v50, v49);
                *(_QWORD *)(v114 + 24) = 2932LL;
                WdLogEvent5_WdWarning(v114);
                v67 = -1073741801;
LABEL_87:
                if ( P != v183 && P )
                  ExFreePoolWithTag(P, 0);
                v40 = (volatile signed __int64 *)v187;
                P = 0LL;
                v184 = 0;
                goto LABEL_89;
              }
              v42 = ExAllocatePoolWithTag(PagedPool, 8LL * v144, 0x4B677844u);
              Base = v42;
            }
            else
            {
              v42 = v133;
              Base = v133;
            }
            LODWORD(NumOfElements) = v41;
            v44 = v41;
            if ( v42 )
            {
              memset(v42, 0, 8 * v41);
              v44 = (unsigned int)NumOfElements;
              v42 = Base;
            }
            goto LABEL_48;
          }
        }
LABEL_221:
        v118 = WdLogNewEntry5_WdWarning(v31, v30, v32);
        *(_QWORD *)(v118 + 24) = 2819LL;
        WdLogEvent5_WdWarning(v118);
        v67 = -1073741801;
LABEL_222:
        v40 = (volatile signed __int64 *)v187;
        goto LABEL_109;
      }
    }
LABEL_225:
    v119 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v119 + 24) = 2812LL;
    WdLogEvent5_WdWarning(v119);
    v40 = (volatile signed __int64 *)v187;
    v67 = -1073741801;
LABEL_111:
    if ( Src != v143 && Src )
      ExFreePoolWithTag(Src, 0);
    Src = 0LL;
    v144 = 0;
    goto LABEL_113;
  }
  v67 = -1073741811;
  v95 = (_QWORD *)WdLogNewEntry5_WdError(v26);
  v95[3] = -1073741811LL;
  v95[4] = PsGetCurrentProcess();
  v95[5] = v4->hDevice;
  WdLogEvent5_WdError(v95);
  v40 = (volatile signed __int64 *)v187;
LABEL_115:
  if ( v40 )
  {
    v123 = _InterlockedDecrement64(v40 + 9);
    if ( v123 < 0 )
    {
      v124 = WdLogNewEntry5_WdAssertion(v74);
      *(_QWORD *)(v124 + 24) = 96LL;
      WdLogEvent5_WdAssertion(v124);
    }
    if ( !v123 )
    {
      v125 = *((_QWORD *)v40 + 2);
      v126 = *(struct DXGDEVICE **)(v125 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v168, v126);
      v127 = *((_QWORD *)v126 + 2);
      v163 = 0;
      v162 = *(_QWORD *)(v127 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v161);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v173, (__int64)v126, 2, v128, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v173);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v126 + 2) + 16LL) + 176LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v125, (PVOID)v40, (struct COREDEVICEACCESS *)v173);
      COREACCESS::~COREACCESS((COREACCESS *)v175);
      COREACCESS::~COREACCESS((COREACCESS *)v174);
      if ( v163 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v161);
      if ( v168[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v168);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v125 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v129 = *(_QWORD *)(v125 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v169,
          (struct DXGDEVICE *)v129);
        v130 = *(_QWORD *)(v125 + 16);
        v166 = 0;
        v165 = *(_QWORD *)(*(_QWORD *)(v130 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v164);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v176, v129, 2, v131, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v176);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v129 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v129, (struct DXGCONTEXT ***)v125, (struct COREDEVICEACCESS *)v176);
        COREACCESS::~COREACCESS((COREACCESS *)v178);
        COREACCESS::~COREACCESS((COREACCESS *)v177);
        if ( v166 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v164);
        if ( v169[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v169);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v129 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v129 + 16), (struct DXGDEVICE *)v129);
      }
    }
  }
LABEL_116:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v136);
  if ( v138 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v75, &EventProfilerExit, v76, v136);
  return v67;
}
