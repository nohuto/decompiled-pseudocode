/*
 * XREFs of ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00EF694
 * Callers:
 *     DxgkDestroyDevice @ 0x1C00EFD50 (DxgkDestroyDevice.c)
 *     DxgkDestroyDeviceInternal @ 0x1C013BBF0 (DxgkDestroyDeviceInternal.c)
 *     ?VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EEA00 (-VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010884 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010918 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00EE58C (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C00EF9F0 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00EFA28 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00EFC9C (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01FE090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall DxgkDestroyDeviceImpl(const struct _D3DKMT_DESTROYDEVICE *a1, char a2)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hDevice; // edi
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdi
  ADAPTER_DISPLAY *v19; // rcx
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+30h] [rbp-128h] BYREF
  __int64 v31; // [rsp+38h] [rbp-120h]
  char v32; // [rsp+40h] [rbp-118h]
  D3DKMT_HANDLE v33; // [rsp+48h] [rbp-110h]
  _QWORD v34[2]; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v35[24]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v36[24]; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v37[96]; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v38[10]; // [rsp+F0h] [rbp-68h] BYREF

  memset(v38, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v38[1]);
  v38[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v38[3]) = 50;
  LOBYTE(v38[6]) = -1;
  v30 = -1;
  v31 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 2010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v4, &EventProfilerEnter, v5, 2010);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2010);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v23 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    goto LABEL_40;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const struct _D3DKMT_DESTROYDEVICE *)MmUserProbeAddress;
    hDevice = a1->hDevice;
  }
  else
  {
    hDevice = a1->hDevice;
  }
  v33 = hDevice;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v35,
    (struct _KTHREAD **)Current);
  v10 = (hDevice >> 6) & 0xFFFFFF;
  if ( v10 >= *((_DWORD *)Current + 62) )
    goto LABEL_38;
  v11 = *((_QWORD *)Current + 29);
  v12 = *(_DWORD *)(v11 + 16LL * v10 + 8);
  v9 = (hDevice >> 25) & 0x60;
  if ( ((hDevice >> 25) & 0x60) != (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60) || (v12 & 0x2000) != 0 || (v12 & 0x1F) == 0 )
    goto LABEL_38;
  if ( (v12 & 0x1F) != 3 )
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = 316LL;
    WdLogEvent5_WdError(v24);
LABEL_38:
    v13 = 0LL;
    goto LABEL_15;
  }
  v13 = *(_QWORD *)(v11 + 16LL * v10);
LABEL_15:
  if ( v13 )
  {
    if ( v10 < *((_DWORD *)Current + 62) )
    {
      v14 = *((_QWORD *)Current + 29);
      v15 = *(_DWORD *)(v14 + 16LL * v10 + 8);
      if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v14 + 16LL * v10 + 8) & 0x60)
        && (v15 & 0x2000) == 0
        && (v15 & 0x1F) != 0 )
      {
        *(_DWORD *)(v14 + 16LL * ((hDevice >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v34,
      (struct DXGDEVICE *)v13);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v36, (struct _KTHREAD **)(v13 + 112));
    DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v13, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
    DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v13, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, v13, 2, v16, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v37);
    DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v13);
    DXGDEVICE::DestroyAllTrackedWorkloads((DXGDEVICE *)v13);
    v18 = *(_QWORD *)(v13 + 1728);
    if ( v18 )
    {
      v19 = *(ADAPTER_DISPLAY **)(v18 + 2520);
      if ( !v19 )
      {
        v28 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v28 + 24) = 2203LL;
        WdLogEvent5_WdAssertion(v28);
        v19 = *(ADAPTER_DISPLAY **)(v18 + 2520);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v19, (const struct DXGDEVICE *)v13)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v18 + 2520), (const struct DXGDEVICE *)v13) )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v37);
        DxgkReleaseVidPnSourceOwnerAndRestartCdds(
          (struct DXGDEVICE *)v13,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v38,
          1u);
      }
    }
    else if ( *(_DWORD *)(v13 + 1740) )
    {
      v29 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v29 + 24) = v13;
      *(_QWORD *)(v29 + 32) = *(unsigned int *)(v13 + 1740);
      WdLogEvent5_WdError(v29);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
    if ( v34[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v30);
    }
    return 0LL;
  }
  v25 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v25 + 24) = hDevice;
  *(_QWORD *)(v25 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v25);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
LABEL_40:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v30);
  return 3221225485LL;
}
