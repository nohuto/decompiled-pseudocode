/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC924
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161C90 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C01EC150 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EF618 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007260 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp @ 0x1C0023498 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiReportAdapter @ 0x1C0162B00 (DpiReportAdapter.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C01ECD64 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01F10E8 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F5034 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0218620 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0245880 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C024649C (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C02911D8 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C029CA9C (DpiFreeAdapterInfo.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this)
{
  int v1; // eax
  int v2; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  ADAPTER_DISPLAY *v10; // rcx
  ADAPTER_RENDER *v11; // rcx
  void (__fastcall *v12)(_QWORD); // rax
  void (__fastcall *v13)(_QWORD); // rax
  int updated; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r9d
  __int64 v24; // rcx
  DXGGLOBAL *v25; // rax
  struct _MDL *v26; // [rsp+30h] [rbp-158h]
  int v27; // [rsp+C8h] [rbp-C0h]
  int v28; // [rsp+E0h] [rbp-A8h]
  __int64 v29; // [rsp+108h] [rbp-80h] BYREF
  __int64 v30; // [rsp+110h] [rbp-78h]
  int v31; // [rsp+118h] [rbp-70h]
  int v32; // [rsp+120h] [rbp-68h]

  v1 = *((_DWORD *)this + 77);
  v2 = *((_DWORD *)this + 336);
  *((_BYTE *)this + 184) = 1;
  if ( (v1 & 0x10) != 0 && !*((_QWORD *)this + 319) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v29);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v29);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal(v5, v4) + 75) == this )
    {
      Global = DXGGLOBAL::GetGlobal(v7, v6);
      v9 = *((_QWORD *)Global + 77);
      if ( !v9 || v9 == *((_QWORD *)Global + 75) )
        *((_QWORD *)Global + 77) = 0LL;
      *((_QWORD *)Global + 75) = 0LL;
      DXGADAPTER::ReleaseReferenceNoTracking(this);
    }
    if ( (_BYTE)v30 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v29);
  }
  v10 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 319);
  if ( v10 )
    ADAPTER_DISPLAY::Destroy(v10);
  v11 = (ADAPTER_RENDER *)*((_QWORD *)this + 320);
  if ( v11 )
    ADAPTER_RENDER::Destroy(v11);
  v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 196);
  if ( v12 )
  {
    v12(*((_QWORD *)this + 194));
    memset((char *)this + 1544, 0, 0xB8uLL);
  }
  v13 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 220);
  if ( v13 )
  {
    v13(*((_QWORD *)this + 218));
    memset((char *)this + 1736, 0, 0x70uLL);
  }
  if ( *((_BYTE *)this + 4252) )
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_ADAPTER_STOP, 0LL, 0LL, 0LL, 0LL, 0, 0);
    v18 = updated;
    if ( updated < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v16, v15, v17);
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = v18;
      WdLogEvent5_WdError(v19);
    }
    *((_BYTE *)this + 4252) = 0;
  }
  DpiFreeAdapterInfo((char *)this + 1304);
  DXGADAPTER::DestroyPhysicalAdapterData(this);
  memset((char *)this + 248, 0, 0x420uLL);
  memset((char *)this + 1304, 0, 0xF0uLL);
  if ( *((_BYTE *)this + 185) )
  {
    v20 = *((_DWORD *)this + 1052);
    if ( v20 )
    {
      v29 = 0LL;
      v30 = 0LL;
      v31 = 15;
      v32 = v20;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        (DXGADAPTER *)((char *)this + 4144),
        (struct DXGKVMB_COMMAND_BASE *)&v29,
        0x20u,
        0LL,
        0LL,
        v26);
      *((_DWORD *)this + 1052) = 0;
    }
    v29 = 0LL;
    v30 = 0LL;
    v31 = 30;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
      (DXGADAPTER *)((char *)this + 4144),
      (struct DXGKVMB_COMMAND_BASE *)&v29,
      0x18u,
      0LL,
      0LL,
      v26);
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGADAPTER *)((char *)this + 4144));
  }
  v21 = *((unsigned int *)this + 52);
  if ( (_DWORD)v21 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), v21);
    *((_DWORD *)this + 52) = -1;
  }
  v22 = *((_QWORD *)this + 24);
  if ( v22 )
  {
    DpiReportAdapter(v22, (__int64)this);
    if ( bTracingEnabled )
    {
      v23 = *((_DWORD *)this + 475);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v24 = v23 >> 14;
        LOBYTE(v24) = v24 & 7;
        McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp(
          v24,
          &EventDestroyAdapter,
          (const GUID *)(v23 >> 31),
          *((_QWORD *)this + 24),
          (char)this,
          v2,
          *((_QWORD *)this + 231),
          *((_DWORD *)this + 464),
          *((_QWORD *)this + 233),
          *((_DWORD *)this + 468),
          *((_DWORD *)this + 469),
          *((_DWORD *)this + 471),
          *((_DWORD *)this + 472),
          *((_DWORD *)this + 473),
          *((_DWORD *)this + 476),
          *((_DWORD *)this + 470),
          *((_DWORD *)this + 474),
          v23,
          (v23 >> 10) & 0xF,
          v24,
          (v23 >> 17) & 7,
          (v23 & 0x80000000) != 0,
          *((_DWORD *)this + 477),
          *((_DWORD *)this + 478),
          v27,
          *((_DWORD *)this + 480),
          *((_DWORD *)this + 481),
          v28,
          0,
          0,
          0);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 72));
    *((_DWORD *)this + 34) = 0;
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_BYTE *)this + 185) )
  {
    v25 = DXGGLOBAL::GetGlobal(v22, v21);
    DXGGLOBAL::SetVirtualRenderAdapter(v25, 0LL);
    if ( *((_BYTE *)this + 187) )
      DXGVAILOBJECT::NotifyVailAdapter(0);
  }
}
