/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x180067BF0
 * Callers:
 *     ?SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z @ 0x180067A60 (-SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z.c)
 *     _CDesktopPositioner::_IsViewManaged_::_1_::dtor$3 @ 0x1800C4D42 (_CDesktopPositioner--_IsViewManaged_--_1_--dtor$3.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$9 @ 0x18013A209 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$9.c)
 *     _FullScreenPositioner::ApplyPresentationChanges_::_1_::dtor$2 @ 0x18016C1F0 (_FullScreenPositioner--ApplyPresentationChanges_--_1_--dtor$2.c)
 *     _FullScreenPositioner::IsLightweightFullScreen_::_1_::dtor$2 @ 0x18016D862 (_FullScreenPositioner--IsLightweightFullScreen_--_1_--dtor$2.c)
 *     ?SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x180171CE0 (-SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPropertyStoreHelper::~CPropertyStoreHelper(CPropertyStoreHelper *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
