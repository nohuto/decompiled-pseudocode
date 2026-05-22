/*
 * XREFs of ?EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E2070
 * Callers:
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800E60D4 (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180066C18 (--4-$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV01.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode(
        struct _RTL_CRITICAL_SECTION *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  char *v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  HANDLE OwningThread; // r14
  __int64 *p_SpinCount; // rbx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+8h] BYREF
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v3 = this + 4;
  v4 = (char *)this[4].DebugInfo - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v4 )
    v4 = (char *)(*(_QWORD *)&this[4].LockCount - *(_QWORD *)GUID_NULL.Data4);
  if ( v4 && this[3].SpinCount )
  {
    v5 = this + 9;
    EnterCriticalSection(this + 9);
    v12 = v5;
    OwningThread = this[3].OwningThread;
    if ( OwningThread )
    {
      p_SpinCount = (__int64 *)&this[10].SpinCount;
      if ( !this[10].SpinCount )
      {
        v13 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v13);
        v8 = (*(__int64 (__fastcall **)(HANDLE, ULONG_PTR, struct _RTL_CRITICAL_SECTION *, const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection **))(*(_QWORD *)OwningThread + 24LL))(
               OwningThread,
               this[3].SpinCount,
               v3,
               &v13);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x31F,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
            (const char *)(unsigned int)v8);
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v13);
          Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v12);
          return v9;
        }
        Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodeReference>::operator=(
          p_SpinCount,
          (__int64 *)&v13);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v13);
      }
    }
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v12);
  }
  return 0LL;
}
