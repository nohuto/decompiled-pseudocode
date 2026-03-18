/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00E76FC
 * Callers:
 *     DxgkCreatePagingQueue @ 0x1C00E76E0 (DxgkCreatePagingQueue.c)
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C013BD10 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 *     ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ED660 (-VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00E7998 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *a1, int a2, const GUID *a3)
{
  struct _D3DKMT_CREATEPAGINGQUEUE *v4; // r14
  _OWORD *p_hDevice; // rax
  struct _D3DKMT_CREATEPAGINGQUEUE *v6; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // r15
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // r12d
  __int64 v13; // rcx
  __int64 PhysicalAdapterIndex; // rdx
  int v15; // r15d
  struct DXGPAGINGQUEUE *v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v26; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-F0h]
  char v28; // [rsp+40h] [rbp-E8h]
  _QWORD v29[2]; // [rsp+48h] [rbp-E0h] BYREF
  struct _D3DKMT_CREATEPAGINGQUEUE *v30; // [rsp+58h] [rbp-D0h]
  struct DXGDEVICE *v31; // [rsp+60h] [rbp-C8h] BYREF
  _OWORD v32[2]; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v33[152]; // [rsp+90h] [rbp-98h] BYREF
  struct DXGDEVICE *v34; // [rsp+140h] [rbp+18h] BYREF
  struct DXGPAGINGQUEUE *v35; // [rsp+148h] [rbp+20h] BYREF

  v4 = a1;
  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 2117;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2117);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2117);
  memset(v32, 0, sizeof(v32));
  v30 = 0LL;
  if ( a2 )
  {
    p_hDevice = &v4->hDevice;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    v32[0] = *p_hDevice;
    v32[1] = p_hDevice[1];
    v6 = (struct _D3DKMT_CREATEPAGINGQUEUE *)v32;
    v30 = (struct _D3DKMT_CREATEPAGINGQUEUE *)v32;
  }
  else
  {
    v6 = v4;
    v30 = v4;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v6->hDevice, Current, &v31);
  v9 = v31;
  if ( !v31 )
  {
    v20 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v20 + 24) = v6->hDevice;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_37:
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v25, v26);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, v31);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v9, 0, v10, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33);
  if ( v12 >= 0 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
    PhysicalAdapterIndex = v6->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < *(_DWORD *)(v13 + 256) )
    {
      v35 = 0LL;
      v15 = DXGDEVICE::CreatePagingQueue(v9, PhysicalAdapterIndex, v6->Priority, &v35);
      if ( v15 < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
        if ( v29[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
        if ( !v34 )
          goto LABEL_20;
      }
      else
      {
        v16 = v35;
        v6->hSyncObject = *(_DWORD *)(*((_QWORD *)v35 + 5) + 40LL);
        v6->FenceValueCPUVirtualAddress = *(void **)(*((_QWORD *)v16 + 5) + 56LL);
        v6->hPagingQueue = *((_DWORD *)v16 + 6);
        if ( a2 )
        {
          if ( (unsigned __int64)v4 >= MmUserProbeAddress )
            v4 = (struct _D3DKMT_CREATEPAGINGQUEUE *)MmUserProbeAddress;
          *(_OWORD *)&v4->hDevice = *(_OWORD *)&v6->hDevice;
          *(_OWORD *)&v4->FenceValueCPUVirtualAddress = *(_OWORD *)&v6->FenceValueCPUVirtualAddress;
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
        if ( v29[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
        if ( !v34 )
          goto LABEL_20;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
LABEL_20:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v17, &EventProfilerExit, v18, v26);
      }
      return (unsigned int)v15;
    }
    v23 = WdLogNewEntry5_WdWarning(v13, PhysicalAdapterIndex, v11);
    *(_QWORD *)(v23 + 24) = v6->PhysicalAdapterIndex;
    WdLogEvent5_WdWarning(v23);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    if ( v29[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    goto LABEL_37;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
  if ( v29[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
  if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v26);
  return (unsigned int)v12;
}
