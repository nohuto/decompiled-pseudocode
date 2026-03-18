/*
 * XREFs of ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C011DE84
 * Callers:
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C013BE10 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220C00 (-VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C634 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0035180 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C00C3208 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C013F73C (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::NotifyProcessThaw(DXGPROCESS *this, __int64 a2, const GUID *a3)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  DXGDEVICE *Current; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _EPROCESS *v12; // rbx
  __int64 v13; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  _QWORD v19[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h]
  char v23; // [rsp+50h] [rbp-10h]

  v21 = -1;
  v22 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v23 = 1;
    v21 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2096);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2096LL);
  *((_BYTE *)this + 412) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 160, 0LL);
  v4 = (_QWORD *)((char *)this + 248);
  *((_QWORD *)this + 21) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 31);
  v19[0] = (char *)this + 248;
  while ( 1 )
  {
    v19[1] = v5;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v19);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessThaw(Current);
    v5 = (_QWORD *)*v5;
  }
  v7 = 0LL;
  v20[0] = (char *)this + 248;
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    v20[1] = v4;
    v15 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v20);
    if ( !v15 )
      break;
    v8 = *(_QWORD *)(v15 + 16);
    v9 = *(_QWORD *)(v8 + 16);
    if ( v9 != v7 )
    {
      if ( !*(_BYTE *)(v9 + 185) && *(_QWORD *)(v9 + 2560) && *(_QWORD *)(v9 + 2600) )
        DXGADAPTER::UpdateLatencyTolerances(*(DXGADAPTER **)(v8 + 16));
      v12 = (struct _EPROCESS *)*((_QWORD *)this + 7);
      v7 = v9;
      v13 = *(_QWORD *)(v9 + 200);
      Global = DXGGLOBAL::GetGlobal(v11, v10);
      DXGGLOBAL::NotifyProcessFreezeCoreDripsBlockerTracking(Global, v13, v12, 0);
    }
  }
  *((_QWORD *)this + 21) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 160, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v16);
  if ( v23 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v21);
  }
}
