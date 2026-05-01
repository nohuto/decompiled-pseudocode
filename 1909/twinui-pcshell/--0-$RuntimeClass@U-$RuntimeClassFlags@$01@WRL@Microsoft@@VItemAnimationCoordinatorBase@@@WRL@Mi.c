/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Microsoft@@QEAA@XZ @ 0x18039AC6C
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCloseAnimationCoordinator@@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x18039ABC4 (--$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AE.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAddAnimationCoordinator@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x1803A4BE8 (--$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFacto.c)
 *     ??0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ @ 0x1803A541C (--0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x18039ACB8 (--0ItemAnimationCoordinatorBase@@QEAA@XZ.c)
 */

ItemAnimationCoordinatorBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>(
        ItemAnimationCoordinatorBase *a1)
{
  ItemAnimationCoordinatorBase::ItemAnimationCoordinatorBase(a1);
  *((_DWORD *)a1 + 61) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
