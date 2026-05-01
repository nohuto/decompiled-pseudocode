/*
 * XREFs of ?Shutdown@JointResizeAcc@@UEAAXXZ @ 0x1803F1690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall JointResizeAcc::Shutdown(HWND *this)
{
  DestroyWindow(this[3]);
  this[3] = 0LL;
}
