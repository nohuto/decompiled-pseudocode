/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EC280
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D1B00 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00D35C0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EE9D4 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01F6C78 (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 96, 0LL) )
  {
    *((_QWORD *)this + 13) = KeGetCurrentThread();
    v2 = *((_QWORD *)this + 320);
    if ( !v2
      || (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(v2, 2LL)
      && (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*((_QWORD *)this + 320), 1LL) )
    {
      DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2u, 1, 0x1F51u);
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v3 = *((_QWORD *)this + 320);
        if ( !v3 )
          goto LABEL_14;
        if ( !DXGADAPTER::IsDxgmms2(this) )
        {
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v3 + 16)) )
          {
            v6 = WdLogNewEntry5_WdAssertion(v5, v4);
            *(_QWORD *)(v6 + 24) = 4229LL;
            WdLogEvent5_WdAssertion(v6);
          }
          if ( *(_QWORD *)(v3 + 1080) )
            goto LABEL_13;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 320) + 544LL) + 8LL)
                                                       + 1072LL))(*(_QWORD *)(*((_QWORD *)this + 320) + 552LL))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 320) + 520LL) + 8LL)
                                                       + 928LL))(*(_QWORD *)(*((_QWORD *)this + 320) + 528LL)) )
        {
LABEL_13:
          DXGADAPTER::ReleaseCoreResource((__int64)this, 8017, 0LL);
        }
        else
        {
LABEL_14:
          v7 = *((_QWORD *)this + 320);
          *((_DWORD *)this + 34) = 1;
          if ( v7 )
          {
            *(_QWORD *)(v7 + 32) = 0LL;
            ExReleasePushLockExclusiveEx(v7 + 24, 0LL);
            KeLeaveCriticalRegion();
            v8 = *((_QWORD *)this + 320);
            *(_QWORD *)(v8 + 48) = 0LL;
            ExReleasePushLockExclusiveEx(v8 + 40, 0LL);
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
