/*
 * XREFs of ?GetActivationTime@CClassicWindow@@UEAAJPEAU_FILETIME@@@Z @ 0x180086F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindow::GetActivationTime(CClassicWindow *this, struct _FILETIME *a2)
{
  *a2 = *(struct _FILETIME *)((char *)this + 32);
  return 0LL;
}
