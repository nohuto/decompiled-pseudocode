/*
 * XREFs of ?Release@VirtualDesktopController@@UEAAKXZ @ 0x1802D90D0
 * Callers:
 *     ?Release@VirtualDesktopController@@W7EAAKXZ @ 0x1800A7F20 (-Release@VirtualDesktopController@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBA@EAAKXZ @ 0x1800A7F30 (-Release@VirtualDesktopController@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBI@EAAKXZ @ 0x1800A7F40 (-Release@VirtualDesktopController@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopController::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(this);
}
