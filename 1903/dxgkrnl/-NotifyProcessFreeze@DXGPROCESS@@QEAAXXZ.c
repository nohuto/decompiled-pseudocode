/*
 * XREFs of ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C011E034
 * Callers:
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C013C170 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220BB0 (-VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C634 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0035180 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C00C3208 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C012015C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0145258 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

void __fastcall DXGPROCESS::NotifyProcessFreeze(DXGPROCESS *this, __int64 a2, const GUID *a3)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  DXGDEVICE *Current; // rax
  __int64 v7; // r12
  __int64 v8; // rdi
  ADAPTER_RENDER *v9; // rcx
  __int64 v10; // rdx
  struct _EPROCESS *v11; // rbx
  __int64 v12; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  _QWORD v18[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h]
  char v22; // [rsp+50h] [rbp-10h]

  v20 = -1;
  v21 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v22 = 1;
    v20 = 2087;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2087);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2087LL);
  *((_BYTE *)this + 412) = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 160, 0LL);
  v4 = (_QWORD *)((char *)this + 248);
  *((_QWORD *)this + 21) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 31);
  v18[0] = (char *)this + 248;
  while ( 1 )
  {
    v18[1] = v5;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v18);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessFreeze(Current);
    v5 = (_QWORD *)*v5;
  }
  v7 = 0LL;
  v19[0] = (char *)this + 248;
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    v19[1] = v4;
    v14 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v19);
    if ( !v14 )
      break;
    v8 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
    if ( v8 != v7 )
    {
      if ( !*(_BYTE *)(v8 + 185) )
      {
        v9 = *(ADAPTER_RENDER **)(v8 + 2560);
        if ( v9 )
        {
          ADAPTER_RENDER::NotifyProcessFreeze(v9, this);
          if ( *(_QWORD *)(v8 + 2600) )
            DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)v8);
        }
      }
      v11 = (struct _EPROCESS *)*((_QWORD *)this + 7);
      v7 = v8;
      v12 = *(_QWORD *)(v8 + 200);
      Global = DXGGLOBAL::GetGlobal((__int64)v9, v10);
      DXGGLOBAL::NotifyProcessFreezeCoreDripsBlockerTracking(Global, v12, v11, 1);
    }
  }
  *((_QWORD *)this + 21) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 160, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20, v15);
  if ( v22 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v20);
  }
}
