/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C011FE74
 * Callers:
 *     DxgkCreatePagingQueue @ 0x1C0120140 (DxgkCreatePagingQueue.c)
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C014C670 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 *     ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021CF60 (-VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C011F9F4 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *a1, int a2, const GUID *a3)
{
  struct _D3DKMT_CREATEPAGINGQUEUE *v4; // r14
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  _OWORD *p_hDevice; // rax
  struct _D3DKMT_CREATEPAGINGQUEUE *v8; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // r15
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // r12d
  __int64 v17; // rcx
  __int64 PhysicalAdapterIndex; // rdx
  int v19; // r15d
  struct DXGPAGINGQUEUE *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const GUID *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rax
  struct DXGDEVICE *v33; // [rsp+30h] [rbp-148h] BYREF
  int v34; // [rsp+38h] [rbp-140h] BYREF
  __int64 v35; // [rsp+40h] [rbp-138h]
  char v36; // [rsp+48h] [rbp-130h]
  struct _D3DKMT_CREATEPAGINGQUEUE *v37; // [rsp+50h] [rbp-128h]
  _QWORD v38[2]; // [rsp+58h] [rbp-120h] BYREF
  struct _D3DKMT_CREATEPAGINGQUEUE *v39; // [rsp+68h] [rbp-110h]
  struct DXGPAGINGQUEUE *v40; // [rsp+70h] [rbp-108h] BYREF
  struct DXGDEVICE *v41; // [rsp+78h] [rbp-100h] BYREF
  _OWORD v42[2]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v43[160]; // [rsp+A0h] [rbp-D8h] BYREF

  v4 = a1;
  v37 = a1;
  v34 = -1;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 2117;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2117);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2117LL);
  memset(v42, 0, sizeof(v42));
  v39 = 0LL;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    p_hDevice = &v4->hDevice;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    v42[0] = *p_hDevice;
    v42[1] = p_hDevice[1];
    v8 = (struct _D3DKMT_CREATEPAGINGQUEUE *)v42;
    v39 = (struct _D3DKMT_CREATEPAGINGQUEUE *)v42;
  }
  else
  {
    v8 = v4;
    v39 = v4;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, v8->hDevice, Current, &v41);
  v13 = v41;
  if ( !v41 )
  {
    v25 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v25 + 24) = v8->hDevice;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
LABEL_26:
    if ( v33 && _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v26);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v34);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38, v41);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v13, 0, v14, 0);
  v16 = COREDEVICEACCESS::AcquireShared((__int64)v43, 0xFFFFFFFF, 0LL);
  if ( v16 >= 0 )
  {
    v17 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    PhysicalAdapterIndex = v8->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < *(_DWORD *)(v17 + 256) )
    {
      v40 = 0LL;
      v19 = DXGDEVICE::CreatePagingQueue(v13, PhysicalAdapterIndex, v8->Priority, &v40);
      if ( v19 < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
        if ( v38[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
        if ( !v33 )
          goto LABEL_20;
      }
      else
      {
        v20 = v40;
        v8->hSyncObject = *(_DWORD *)(*((_QWORD *)v40 + 5) + 40LL);
        v8->FenceValueCPUVirtualAddress = *(void **)(*((_QWORD *)v20 + 5) + 56LL);
        v8->hPagingQueue = *((_DWORD *)v20 + 6);
        if ( a2 )
        {
          if ( (unsigned __int64)v4 >= MmUserProbeAddress )
            v4 = (struct _D3DKMT_CREATEPAGINGQUEUE *)MmUserProbeAddress;
          *(_OWORD *)&v4->hDevice = *(_OWORD *)&v8->hDevice;
          *(_OWORD *)&v4->FenceValueCPUVirtualAddress = *(_OWORD *)&v8->FenceValueCPUVirtualAddress;
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
        if ( v38[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
        if ( !v33 )
          goto LABEL_20;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
LABEL_20:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v21);
      if ( v36 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v22, &EventProfilerExit, v23, v34);
      }
      return (unsigned int)v19;
    }
    v32 = WdLogNewEntry5_WdWarning(v17, PhysicalAdapterIndex, v15);
    *(_QWORD *)(v32 + 24) = v8->PhysicalAdapterIndex;
    WdLogEvent5_WdWarning(v32);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    if ( v38[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
    goto LABEL_26;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
  if ( v38[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
  if ( v33 && _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v29);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v34);
  return (unsigned int)v16;
}
