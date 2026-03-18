/*
 * XREFs of ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C0122AAC
 * Callers:
 *     DxgkDestroyDevice @ 0x1C0123190 (DxgkDestroyDevice.c)
 *     DxgkDestroyDeviceInternal @ 0x1C012FC14 (DxgkDestroyDeviceInternal.c)
 *     ?VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E3F0 (-VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000C3D8 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C434 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000CC14 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000CCC8 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C0121E94 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C0121EBC (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0122E20 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C01230C4 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C022E324 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall DxgkDestroyDeviceImpl(const struct _D3DKMT_DESTROYDEVICE *a1, char a2)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hDevice; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // esi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  ADAPTER_DISPLAY *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  const GUID *v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // [rsp+30h] [rbp-168h] BYREF
  __int64 v39; // [rsp+38h] [rbp-160h]
  char v40; // [rsp+40h] [rbp-158h]
  D3DKMT_HANDLE v41; // [rsp+48h] [rbp-150h]
  _QWORD v42[2]; // [rsp+50h] [rbp-148h] BYREF
  _BYTE v43[24]; // [rsp+60h] [rbp-138h] BYREF
  _BYTE v44[24]; // [rsp+78h] [rbp-120h] BYREF
  _QWORD v45[10]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v46[160]; // [rsp+E0h] [rbp-B8h] BYREF

  memset(v45, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v45[1]);
  v45[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v45[3]) = 50;
  LOBYTE(v45[6]) = -1;
  v38 = -1;
  v39 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v40 = 1;
    v38 = 2010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v4, &EventProfilerEnter, v5, 2010);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2010LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
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
  v41 = hDevice;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v43,
    (struct _KTHREAD **)Current);
  v16 = (hDevice >> 6) & 0xFFFFFF;
  if ( v16 >= *((_DWORD *)Current + 56) )
    goto LABEL_16;
  v15 = *((_QWORD *)Current + 26);
  v13 = *(unsigned int *)(v15 + 16LL * v16 + 8);
  v14 = (hDevice >> 25) & 0x60;
  if ( ((hDevice >> 25) & 0x60) != (*(_BYTE *)(v15 + 16LL * v16 + 8) & 0x60) || (v13 & 0x2000) != 0 || (v13 & 0x1F) == 0 )
    goto LABEL_16;
  v13 &= 0x1Fu;
  if ( (_BYTE)v13 != 3 )
  {
    v18 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v18 + 24) = 267LL;
    WdLogEvent5_WdError(v18);
LABEL_16:
    v17 = 0LL;
    goto LABEL_17;
  }
  v17 = *(_QWORD *)(v15 + 16LL * v16);
LABEL_17:
  if ( v17 )
  {
    if ( v16 < *((_DWORD *)Current + 56) )
    {
      v19 = *((_QWORD *)Current + 26);
      v20 = *(_DWORD *)(v19 + 16LL * v16 + 8);
      if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * v16 + 8) & 0x60)
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        *(_DWORD *)(v19 + 16LL * ((hDevice >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v42,
      (struct DXGDEVICE *)v17);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v44, (struct _KTHREAD **)(v17 + 112));
    DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v17, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
    DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v17, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, v17, 2, v21, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((__int64)v46);
    DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v17);
    DXGDEVICE::DestroyAllTrackedWorkloads((DXGDEVICE *)v17);
    v25 = *(_QWORD *)(v17 + 1728);
    if ( v25 )
    {
      v26 = *(ADAPTER_DISPLAY **)(v25 + 2552);
      if ( !v26 )
      {
        v36 = WdLogNewEntry5_WdAssertion(0LL, v22);
        *(_QWORD *)(v36 + 24) = 2249LL;
        WdLogEvent5_WdAssertion(v36);
        v26 = *(ADAPTER_DISPLAY **)(v25 + 2552);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v26, (const struct DXGDEVICE *)v17)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v25 + 2552), (const struct DXGDEVICE *)v17) )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v46);
        DxgkReleaseVidPnSourceOwnerAndRestartCdds(
          (struct DXGDEVICE *)v17,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v45,
          1u);
      }
    }
    else if ( *(_DWORD *)(v17 + 1740) )
    {
      v37 = WdLogNewEntry5_WdError(v23, v22, v24);
      *(_QWORD *)(v37 + 24) = v17;
      *(_QWORD *)(v37 + 32) = *(unsigned int *)(v17 + 1740);
      WdLogEvent5_WdError(v37);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
    DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v44);
    if ( v42[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v17 + 16), (struct DXGDEVICE *)v17);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v27);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v28, &EventProfilerExit, v29, v38);
    }
    return 0LL;
  }
  v33 = WdLogNewEntry5_WdError(v14, v13, v15);
  *(_QWORD *)(v33 + 24) = hDevice;
  *(_QWORD *)(v33 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v33);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
LABEL_40:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v32);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v38);
  return 3221225485LL;
}
