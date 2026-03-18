/*
 * XREFs of DxgkCreateHwQueueInternal @ 0x1C02172D8
 * Callers:
 *     ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ED030 (-VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateHwQueue @ 0x1C02172C0 (DxgkCreateHwQueue.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C0212F50 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C0213168 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreateHwQueueInternal(__int64 a1, char a2, const GUID *a3)
{
  struct _D3DKMT_CREATEHWQUEUE *v4; // r12
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  PVOID v8; // r15
  struct _D3DKMT_CREATEHWQUEUE *v9; // rax
  struct _D3DKMT_CREATEHWQUEUE *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  const GUID *v13; // r8
  unsigned int PrivateDriverDataSize; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  PVOID v22; // rcx
  size_t v23; // r8
  char *pPrivateDriverData; // rdx
  struct _KTHREAD **Current; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  DXGCONTEXT *v31; // r13
  __int64 v32; // rax
  __int64 hHwContext; // rcx
  __int64 v34; // rcx
  const GUID *v35; // r8
  struct DXGDEVICE *v36; // rbx
  __int64 v37; // r9
  int v38; // ebx
  __int64 v39; // rcx
  const GUID *v40; // r8
  struct DXGHWQUEUE *v41; // rdx
  __int64 v42; // rax
  char *v43; // rcx
  int v45; // [rsp+38h] [rbp-140h] BYREF
  __int64 v46; // [rsp+40h] [rbp-138h]
  char v47; // [rsp+48h] [rbp-130h]
  struct DXGCONTEXT *v48; // [rsp+50h] [rbp-128h] BYREF
  _QWORD v49[2]; // [rsp+58h] [rbp-120h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *v50; // [rsp+68h] [rbp-110h]
  PVOID v51; // [rsp+70h] [rbp-108h]
  struct DXGHWQUEUE *v52; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v53[16]; // [rsp+80h] [rbp-F8h] BYREF
  PVOID v54; // [rsp+90h] [rbp-E8h]
  struct _D3DKMT_CREATEHWQUEUE v55; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v56[96]; // [rsp+D0h] [rbp-A8h] BYREF
  PVOID P; // [rsp+130h] [rbp-48h] BYREF
  _BYTE v58[16]; // [rsp+138h] [rbp-40h] BYREF
  int v59; // [rsp+148h] [rbp-30h]

  v4 = (struct _D3DKMT_CREATEHWQUEUE *)a1;
  v45 = -1;
  v46 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v47 = 1;
    v45 = 2153;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2153);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 2153);
  memset(&v55, 0, sizeof(v55));
  v50 = 0LL;
  P = 0LL;
  v59 = 0;
  v8 = 0LL;
  v51 = 0LL;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v9 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
    v55 = *v9;
    v10 = &v55;
    v50 = &v55;
  }
  else
  {
    v10 = v4;
    v50 = v4;
  }
  if ( v10->pPrivateDriverData )
  {
    if ( v10->PrivateDriverDataSize )
      goto LABEL_21;
LABEL_14:
    v11 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v11 + 24) = 540LL;
    WdLogEvent5_WdWarning(v11);
    if ( P != v58 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v59 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v45);
    return 3221225485LL;
  }
  if ( v10->PrivateDriverDataSize )
    goto LABEL_14;
LABEL_21:
  PrivateDriverDataSize = v10->PrivateDriverDataSize;
  if ( PrivateDriverDataSize )
  {
    if ( a2 )
    {
      if ( !PagedPoolZeroedArray<unsigned char,16>::AllocateElements(&P, PrivateDriverDataSize) )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
        v19[3] = v10->hHwContext;
        v19[4] = v10->PrivateDriverDataSize;
        v19[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v19);
        if ( P != v58 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v59 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
        if ( v47 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v20, &EventProfilerExit, v21, v45);
        }
        return 3221225495LL;
      }
      v22 = P;
      v54 = P;
      v23 = v10->PrivateDriverDataSize;
      pPrivateDriverData = (char *)v10->pPrivateDriverData;
      if ( &pPrivateDriverData[v23] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v23] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v22, pPrivateDriverData, v23);
      v8 = P;
      v51 = P;
    }
    else
    {
      v8 = v10->pPrivateDriverData;
      v51 = v8;
    }
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = PsGetCurrentProcess(v29, v28);
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    goto LABEL_43;
  }
  v48 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v53, v10->hHwContext, Current, &v48, 0);
  v31 = v48;
  if ( !v48 )
  {
    v32 = WdLogNewEntry5_WdError(v30);
    hHwContext = v10->hHwContext;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
LABEL_42:
    *(_QWORD *)(v32 + 24) = hHwContext;
    WdLogEvent5_WdError(v32);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v53);
LABEL_43:
    if ( P != v58 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v59 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v34, &EventProfilerExit, v35, v45);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v48 + 99) & 0x10) == 0 )
  {
    v32 = WdLogNewEntry5_WdError(v30);
    hHwContext = v10->hHwContext;
    goto LABEL_42;
  }
  v36 = (struct DXGDEVICE *)*((_QWORD *)v48 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49, v36);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v36, 0, v37, 0);
  v38 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v56);
  if ( v38 >= 0 )
  {
    v52 = 0LL;
    v38 = DXGCONTEXT::CreateHwQueue(v31, v10, v8, &v52);
    if ( v38 >= 0 )
    {
      v41 = v52;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v52 + 2) + 16LL) + 16LL) + 16LL) + 185LL) )
      {
        v10->hHwQueueProgressFence = *(_DWORD *)(*((_QWORD *)v52 + 6) + 40LL);
        v10->HwQueueProgressFenceCPUVirtualAddress = *(void **)(*((_QWORD *)v41 + 6) + 56LL);
        v10->HwQueueProgressFenceGPUVirtualAddress = *(_QWORD *)(*((_QWORD *)v41 + 6) + 48LL);
      }
      v10->hHwQueue = *((_DWORD *)v41 + 6);
      if ( a2 )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
        *(_OWORD *)&v4->hHwContext = *(_OWORD *)&v10->hHwContext;
        *(_OWORD *)&v4->pPrivateDriverData = *(_OWORD *)&v10->pPrivateDriverData;
        *(_OWORD *)&v4->HwQueueProgressFenceCPUVirtualAddress = *(_OWORD *)&v10->HwQueueProgressFenceCPUVirtualAddress;
        v42 = v10->PrivateDriverDataSize;
        if ( (_DWORD)v42 )
        {
          v43 = (char *)v10->pPrivateDriverData;
          if ( (unsigned __int64)&v43[v42] > MmUserProbeAddress || &v43[v42] <= v43 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v43, v8, (unsigned int)v42);
        }
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
  if ( v49[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v53);
  if ( P != v58 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v59 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v45);
  return (unsigned int)v38;
}
