/*
 * XREFs of ?SetCallback@XamlSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z @ 0x180283AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::SetCallback(XamlSnapAssistViewHost *this, struct ISnapAssistCallback *a2)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 23, (__int64)a2);
  return 0LL;
}
