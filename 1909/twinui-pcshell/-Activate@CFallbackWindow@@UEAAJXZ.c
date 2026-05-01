/*
 * XREFs of ?Activate@CFallbackWindow@@UEAAJXZ @ 0x180142EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFallbackWindow::Activate(HWND *this)
{
  return !SetForegroundWindow(*(this - 4)) ? 0x80070005 : 0;
}
