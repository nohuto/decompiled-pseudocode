/*
 * XREFs of ??_GTitleBarController@@EEAAPEAXI@Z @ 0x1801F6F90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TitleBarController@@EEAA@XZ @ 0x1801F6278 (--1TitleBarController@@EEAA@XZ.c)
 */

TitleBarController *__fastcall TitleBarController::`scalar deleting destructor'(TitleBarController *this, char a2)
{
  TitleBarController::~TitleBarController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x158);
  return this;
}
