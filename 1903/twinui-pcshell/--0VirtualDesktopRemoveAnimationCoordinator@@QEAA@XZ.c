/*
 * XREFs of ??0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ @ 0x180385AA8
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRemoveAnimationCoordinator@@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x180385A0C (--$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AE.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Microsoft@@QEAA@XZ @ 0x18037B340 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Mi.c)
 */

VirtualDesktopRemoveAnimationCoordinator *__fastcall VirtualDesktopRemoveAnimationCoordinator::VirtualDesktopRemoveAnimationCoordinator(
        VirtualDesktopRemoveAnimationCoordinator *this)
{
  VirtualDesktopRemoveAnimationCoordinator *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>(this);
  *(_QWORD *)this = &VirtualDesktopRemoveAnimationCoordinator::`vftable';
  memset_0((char *)this + 248, 0, 0xB8uLL);
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  memset_0((char *)this + 440, 0, 0xB0uLL);
  memset_0((char *)this + 624, 0, 0x78uLL);
  *((_DWORD *)this + 154) = 0;
  result = this;
  *((_DWORD *)this + 155) = 0;
  *((_DWORD *)this + 186) = 0;
  return result;
}
