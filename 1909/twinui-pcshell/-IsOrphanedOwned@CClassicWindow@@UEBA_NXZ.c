/*
 * XREFs of ?IsOrphanedOwned@CClassicWindow@@UEBA_NXZ @ 0x1801492D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsOrphanedOwned(CClassicWindow *this)
{
  bool result; // al

  result = 0;
  if ( (*((_BYTE *)this + 72) & 4) != 0 )
    return *((_QWORD *)this + 8) == 0LL;
  return result;
}
