/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800514B0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c0a465a537957875493a7f1285b2ffbd___ @ 0x180051404 (Windows--Internal--ComTaskPool--QueueTask__lambda_c0a465a537957875493a7f1285b2ffbd___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___::CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8_____lambda_7d6fb6ca628c3c64296120b05a8db9c8___ @ 0x180069804 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___--CTaskW.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fb23503d9b3566a26ea1a9c0ca33164d_____lambda_fb23503d9b3566a26ea1a9c0ca33164d___ @ 0x18006996C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fb23503d9b356.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a0f022487c8cee8834c9675ba7b0437b___ @ 0x180069A8C (Windows--Internal--ComTaskPool--QueueTask__lambda_a0f022487c8cee8834c9675ba7b0437b___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
