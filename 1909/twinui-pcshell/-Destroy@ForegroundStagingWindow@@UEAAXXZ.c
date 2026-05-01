/*
 * XREFs of ?Destroy@ForegroundStagingWindow@@UEAAXXZ @ 0x18035F5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ForegroundStagingWindow::Destroy(HWND *this)
{
  DestroyWindow(this[3]);
}
