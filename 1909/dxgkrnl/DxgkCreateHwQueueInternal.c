/*
 * XREFs of DxgkCreateHwQueueInternal @ 0x1C024BD08
 * Callers:
 *     ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D060 (-VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateHwQueue @ 0x1C024BCF0 (DxgkCreateHwQueue.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C0247204 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C024730C (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 PrivateDriverDataSize; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  PVOID v24; // rcx
  size_t v25; // r8
  char *pPrivateDriverData; // rdx
  struct _KTHREAD **Current; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  DXGCONTEXT *v40; // r13
  __int64 v41; // rax
  __int64 hHwContext; // rcx
  struct DXGDEVICE *v43; // rbx
  __int64 v44; // r9
  int v45; // ebx
  __int64 v46; // rdx
  __int64 v47; // rcx
  const GUID *v48; // r8
  struct DXGHWQUEUE *v49; // rdx
  __int64 v50; // rax
  char *v51; // rcx
  int v53; // [rsp+38h] [rbp-180h] BYREF
  __int64 v54; // [rsp+40h] [rbp-178h]
  char v55; // [rsp+48h] [rbp-170h]
  struct DXGCONTEXT *v56; // [rsp+50h] [rbp-168h] BYREF
  _QWORD v57[2]; // [rsp+58h] [rbp-160h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *v58; // [rsp+68h] [rbp-150h]
  PVOID v59; // [rsp+70h] [rbp-148h]
  struct DXGHWQUEUE *v60; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v61[16]; // [rsp+80h] [rbp-138h] BYREF
  PVOID v62; // [rsp+90h] [rbp-128h]
  struct _D3DKMT_CREATEHWQUEUE v63; // [rsp+98h] [rbp-120h] BYREF
  PVOID P; // [rsp+C8h] [rbp-F0h] BYREF
  _BYTE v65[16]; // [rsp+D0h] [rbp-E8h] BYREF
  int v66; // [rsp+E0h] [rbp-D8h]
  _BYTE v67[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v4 = (struct _D3DKMT_CREATEHWQUEUE *)a1;
  v53 = -1;
  v54 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v55 = 1;
    v53 = 2153;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2153);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v53, 2153LL);
  memset(&v63, 0, sizeof(v63));
  v58 = 0LL;
  P = 0LL;
  v66 = 0;
  v8 = 0LL;
  v59 = 0LL;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v9 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
    v63 = *v9;
    v10 = &v63;
    v58 = &v63;
  }
  else
  {
    v10 = v4;
    v58 = v4;
  }
  if ( v10->pPrivateDriverData )
  {
    if ( v10->PrivateDriverDataSize )
      goto LABEL_21;
LABEL_14:
    v11 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v11 + 24) = 540LL;
    WdLogEvent5_WdWarning(v11);
    if ( P != v65 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v66 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v12);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v53);
    return 3221225485LL;
  }
  if ( v10->PrivateDriverDataSize )
    goto LABEL_14;
LABEL_21:
  PrivateDriverDataSize = v10->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    if ( a2 )
    {
      if ( !PagedPoolZeroedArray<unsigned char,16>::AllocateElements(&P, PrivateDriverDataSize) )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
        v20[3] = v10->hHwContext;
        v20[4] = v10->PrivateDriverDataSize;
        v20[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v20);
        if ( P != v65 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v66 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v21);
        if ( v55 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v22, &EventProfilerExit, v23, v53);
        }
        return 3221225495LL;
      }
      v24 = P;
      v62 = P;
      v25 = v10->PrivateDriverDataSize;
      pPrivateDriverData = (char *)v10->pPrivateDriverData;
      if ( &pPrivateDriverData[v25] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v25] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v24, pPrivateDriverData, v25);
      v8 = P;
      v59 = P;
    }
    else
    {
      v8 = v10->pPrivateDriverData;
      v59 = v8;
    }
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, PrivateDriverDataSize);
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdError(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = PsGetCurrentProcess(v33, v32);
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    goto LABEL_38;
  }
  v56 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61, v10->hHwContext, Current, &v56, 0);
  v40 = v56;
  if ( !v56 )
  {
    v41 = WdLogNewEntry5_WdError(v38, v37, v39);
    hHwContext = v10->hHwContext;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
LABEL_47:
    *(_QWORD *)(v41 + 24) = hHwContext;
    WdLogEvent5_WdError(v41);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61);
LABEL_38:
    if ( P != v65 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v66 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v34);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v35, &EventProfilerExit, v36, v53);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v56 + 103) & 0x10) == 0 )
  {
    v41 = WdLogNewEntry5_WdError(v38, v37, v39);
    hHwContext = v10->hHwContext;
    goto LABEL_47;
  }
  v43 = (struct DXGDEVICE *)*((_QWORD *)v56 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57, v43);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v43, 0, v44, 0);
  v45 = COREDEVICEACCESS::AcquireShared((__int64)v67, 0xFFFFFFFF, 0LL);
  if ( v45 >= 0 )
  {
    v60 = 0LL;
    v45 = DXGCONTEXT::CreateHwQueue(v40, v10, v8, &v60);
    if ( v45 >= 0 )
    {
      v49 = v60;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v60 + 2) + 16LL) + 16LL) + 16LL) + 185LL) )
      {
        v10->hHwQueueProgressFence = *(_DWORD *)(*((_QWORD *)v60 + 6) + 40LL);
        v10->HwQueueProgressFenceCPUVirtualAddress = *(void **)(*((_QWORD *)v49 + 6) + 56LL);
        v10->HwQueueProgressFenceGPUVirtualAddress = *(_QWORD *)(*((_QWORD *)v49 + 6) + 48LL);
      }
      v10->hHwQueue = *((_DWORD *)v49 + 6);
      if ( a2 )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
        *(_OWORD *)&v4->hHwContext = *(_OWORD *)&v10->hHwContext;
        *(_OWORD *)&v4->pPrivateDriverData = *(_OWORD *)&v10->pPrivateDriverData;
        *(_OWORD *)&v4->HwQueueProgressFenceCPUVirtualAddress = *(_OWORD *)&v10->HwQueueProgressFenceCPUVirtualAddress;
        v50 = v10->PrivateDriverDataSize;
        if ( (_DWORD)v50 )
        {
          v51 = (char *)v10->pPrivateDriverData;
          if ( (unsigned __int64)&v51[v50] > MmUserProbeAddress || &v51[v50] <= v51 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v51, v8, (unsigned int)v50);
        }
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
  if ( v57[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61);
  if ( P != v65 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v66 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v46);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v47, &EventProfilerExit, v48, v53);
  return (unsigned int)v45;
}
