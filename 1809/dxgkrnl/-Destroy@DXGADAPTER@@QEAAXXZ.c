/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01BCD04
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C9EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C01BC694 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp @ 0x1C00208EC (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiReportAdapter @ 0x1C014D500 (DpiReportAdapter.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C01BD144 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01C14DC (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01C6030 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C01E883C (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C021139C (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0212020 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C025AAE8 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C0262BA0 (DpiFreeAdapterInfo.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this)
{
  int v1; // eax
  int v2; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  ADAPTER_DISPLAY *v8; // rcx
  ADAPTER_RENDER *v9; // rcx
  void (__fastcall *v10)(_QWORD); // rax
  void (__fastcall *v11)(_QWORD); // rax
  int updated; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned int v19; // r9d
  __int64 v20; // rcx
  DXGGLOBAL *v21; // rax
  struct _MDL *v22; // [rsp+30h] [rbp-158h]
  int v23; // [rsp+C8h] [rbp-C0h]
  int v24; // [rsp+E0h] [rbp-A8h]
  __int64 v25; // [rsp+108h] [rbp-80h] BYREF
  __int64 v26; // [rsp+110h] [rbp-78h]
  int v27; // [rsp+118h] [rbp-70h]
  int v28; // [rsp+120h] [rbp-68h]

  v1 = *((_DWORD *)this + 77);
  v2 = *((_DWORD *)this + 332);
  *((_BYTE *)this + 184) = 1;
  if ( (v1 & 0x10) != 0 && !*((_QWORD *)this + 315) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v25);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v25);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal(v4) + 78) == this )
    {
      Global = DXGGLOBAL::GetGlobal(v5);
      v7 = *((_QWORD *)Global + 80);
      if ( !v7 || v7 == *((_QWORD *)Global + 78) )
        *((_QWORD *)Global + 80) = 0LL;
      *((_QWORD *)Global + 78) = 0LL;
      DXGADAPTER::ReleaseReference(this);
    }
    if ( (_BYTE)v26 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v25);
  }
  v8 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 315);
  if ( v8 )
    ADAPTER_DISPLAY::Destroy(v8);
  v9 = (ADAPTER_RENDER *)*((_QWORD *)this + 316);
  if ( v9 )
    ADAPTER_RENDER::Destroy(v9);
  v10 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 194);
  if ( v10 )
  {
    v10(*((_QWORD *)this + 192));
    memset((char *)this + 1528, 0, 0xB8uLL);
  }
  v11 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 218);
  if ( v11 )
  {
    v11(*((_QWORD *)this + 216));
    memset((char *)this + 1720, 0, 0x68uLL);
  }
  if ( *((_BYTE *)this + 4260) )
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_ADAPTER_STOP, 0LL, 0LL, 0LL, 0LL, 0, 0);
    v14 = updated;
    if ( updated < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = this;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdError(v15);
    }
    *((_BYTE *)this + 4260) = 0;
  }
  DpiFreeAdapterInfo((char *)this + 1288);
  DXGADAPTER::DestroyPhysicalAdapterData(this);
  memset((char *)this + 248, 0, 0x410uLL);
  memset((char *)this + 1288, 0, 0xF0uLL);
  if ( *((_BYTE *)this + 185) )
  {
    v16 = *((_DWORD *)this + 1054);
    if ( v16 )
    {
      v25 = 0LL;
      v26 = 0LL;
      v27 = 15;
      v28 = v16;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        (DXGADAPTER *)((char *)this + 4152),
        (struct DXGKVMB_COMMAND_BASE *)&v25,
        0x20u,
        0LL,
        0LL,
        v22);
      *((_DWORD *)this + 1054) = 0;
    }
    v25 = 0LL;
    v26 = 0LL;
    v27 = 30;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
      (DXGADAPTER *)((char *)this + 4152),
      (struct DXGKVMB_COMMAND_BASE *)&v25,
      0x18u,
      0LL,
      0LL,
      v22);
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGADAPTER *)((char *)this + 4152));
  }
  v17 = *((_DWORD *)this + 52);
  if ( v17 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), v17);
    *((_DWORD *)this + 52) = -1;
  }
  v18 = *((_QWORD *)this + 24);
  if ( v18 )
  {
    DpiReportAdapter(v18, (__int64)this);
    if ( bTracingEnabled )
    {
      v19 = *((_DWORD *)this + 469);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v20 = v19 >> 14;
        LOBYTE(v20) = v20 & 7;
        McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp(
          v20,
          &EventDestroyAdapter,
          (const GUID *)(v19 >> 31),
          *((_QWORD *)this + 24),
          (char)this,
          v2,
          *((_QWORD *)this + 228),
          *((_DWORD *)this + 458),
          *((_QWORD *)this + 230),
          *((_DWORD *)this + 462),
          *((_DWORD *)this + 463),
          *((_DWORD *)this + 465),
          *((_DWORD *)this + 466),
          *((_DWORD *)this + 467),
          *((_DWORD *)this + 470),
          *((_DWORD *)this + 464),
          *((_DWORD *)this + 468),
          v19,
          (v19 >> 10) & 0xF,
          v20,
          (v19 >> 17) & 7,
          (v19 & 0x80000000) != 0,
          *((_DWORD *)this + 471),
          *((_DWORD *)this + 472),
          v23,
          *((_DWORD *)this + 474),
          *((_DWORD *)this + 475),
          v24,
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
    v21 = DXGGLOBAL::GetGlobal(v18);
    DXGGLOBAL::SetVirtualRenderAdapter(v21, 0LL);
    if ( *((_BYTE *)this + 187) )
      DXGVAILOBJECT::NotifyVailAdapter(0);
  }
}
