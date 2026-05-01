/*
 * XREFs of ?EndDrag@AppResizeAcc@@UEAAX_N@Z @ 0x1803EBE00
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z @ 0x1803EC114 (-ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z.c)
 */

void __fastcall AppResizeAcc::EndDrag(AppResizeAcc *this, unsigned __int8 a2)
{
  UiaRaiseAutomationEvent((IRawElementProviderSimple *)this - 2, (a2 ^ 1) + 20027);
  AppResizeAcc::ProcessPendingNotifications((IRawElementProviderSimple *)this - 2, 1);
  DestroyWindow(*((HWND *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
}
