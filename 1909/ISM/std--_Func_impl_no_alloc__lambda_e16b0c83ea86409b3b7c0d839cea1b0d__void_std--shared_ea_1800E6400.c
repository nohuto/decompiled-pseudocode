/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800E6400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?CheckIfHmdNodeIsNeeded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E155C (-CheckIfHmdNodeIsNeeded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const___::_Do_call(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v4; // rdx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 440LL);
  EnterCriticalSection(v3);
  v5 = v3;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::CheckIfHmdNodeIsNeeded(
    *(struct _RTL_CRITICAL_SECTION **)(a1 + 8),
    v4);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v5);
}
