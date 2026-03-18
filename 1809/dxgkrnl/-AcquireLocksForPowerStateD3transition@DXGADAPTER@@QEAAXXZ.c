/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01BC7E4
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00BCFF8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?IgnoreCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00E4290 (-IgnoreCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F9164 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01BEE34 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01C7A58 (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx

  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 96, 0LL) )
  {
    *((_QWORD *)this + 13) = KeGetCurrentThread();
    v3 = *((_QWORD *)this + 316);
    if ( !v3
      || (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(v3, 2LL)
      && (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*((_QWORD *)this + 316), 1LL) )
    {
      CurrentProcess = PsGetCurrentProcess(v3, v2);
      Global = DXGGLOBAL::GetGlobal(v5);
      DXGGLOBAL::IgnoreCoreDripsBlockerTracking((__int64)Global, *((_QWORD *)this + 25), CurrentProcess, 0xFFFFFFFF);
      DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2, 0);
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v7 = *((_QWORD *)this + 316);
        if ( !v7 )
          goto LABEL_14;
        if ( !DXGADAPTER::IsDxgmms2(this) )
        {
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v7 + 16)) )
          {
            v9 = WdLogNewEntry5_WdAssertion(v8);
            *(_QWORD *)(v9 + 24) = 4187LL;
            WdLogEvent5_WdAssertion(v9);
          }
          if ( *(_QWORD *)(v7 + 1080) )
            goto LABEL_13;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 316) + 544LL) + 8LL)
                                                       + 1072LL))(*(_QWORD *)(*((_QWORD *)this + 316) + 552LL))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 316) + 520LL) + 8LL)
                                                       + 928LL))(*(_QWORD *)(*((_QWORD *)this + 316) + 528LL)) )
        {
LABEL_13:
          DXGADAPTER::ReleaseCoreResource(this);
        }
        else
        {
LABEL_14:
          v10 = *((_QWORD *)this + 316);
          *((_DWORD *)this + 34) = 1;
          if ( v10 )
          {
            *(_QWORD *)(v10 + 32) = 0LL;
            ExReleasePushLockExclusiveEx(v10 + 24, 0LL);
            KeLeaveCriticalRegion();
            v11 = *((_QWORD *)this + 316);
            *(_QWORD *)(v11 + 48) = 0LL;
            ExReleasePushLockExclusiveEx(v11 + 40, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
    }
    if ( *((_DWORD *)this + 34) != 1 )
      DXGADAPTER::ReleaseLocksForPowerStateD3transition(this);
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  }
  KeLeaveCriticalRegion();
}
