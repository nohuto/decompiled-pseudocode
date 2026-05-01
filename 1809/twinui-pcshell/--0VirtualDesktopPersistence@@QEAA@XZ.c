/*
 * XREFs of ??0VirtualDesktopPersistence@@QEAA@XZ @ 0x180382414
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x180382384 (--$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Deta.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

VirtualDesktopPersistence *__fastcall VirtualDesktopPersistence::VirtualDesktopPersistence(
        VirtualDesktopPersistence *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopPersistence>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopPersistence::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
