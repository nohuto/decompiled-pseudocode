/*
 * XREFs of ?IsOwned@CClassicWindow@@UEBA_NXZ @ 0x18006EDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsOwned(CClassicWindow *this)
{
  return (*((_DWORD *)this + 18) & 4) != 0;
}
