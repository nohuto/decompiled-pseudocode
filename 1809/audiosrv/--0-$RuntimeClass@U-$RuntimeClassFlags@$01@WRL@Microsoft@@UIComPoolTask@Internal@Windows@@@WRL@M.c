/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180015E6C
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c13819b0d879b62a077923732e057450_____lambda_c13819b0d879b62a077923732e057450___ @ 0x180067658 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c13819b0d879b.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_def7c7ce47039446187daa2faf99ada6___ @ 0x18006777C (Windows--Internal--ComTaskPool--QueueTask__lambda_def7c7ce47039446187daa2faf99ada6___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1767d809cf1afad7e40eca6e6d461b38___::CTaskWrapper__lambda_1767d809cf1afad7e40eca6e6d461b38_____lambda_1767d809cf1afad7e40eca6e6d461b38___ @ 0x180135E64 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1767d809cf1afad7e40eca6e6d461b38___--CTaskW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
