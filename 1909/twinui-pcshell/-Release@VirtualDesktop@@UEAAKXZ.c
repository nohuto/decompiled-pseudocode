/*
 * XREFs of ?Release@VirtualDesktop@@UEAAKXZ @ 0x18007B410
 * Callers:
 *     ?Release@VirtualDesktop@@W7EAAKXZ @ 0x1800E1750 (-Release@VirtualDesktop@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WBA@EAAKXZ @ 0x1800E1760 (-Release@VirtualDesktop@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WBI@EAAKXZ @ 0x1800E1770 (-Release@VirtualDesktop@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WCA@EAAKXZ @ 0x1800E1780 (-Release@VirtualDesktop@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktop::Release(VirtualDesktop *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::Release(this);
}
