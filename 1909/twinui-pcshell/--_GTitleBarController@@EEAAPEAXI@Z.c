/*
 * XREFs of ??_GTitleBarController@@EEAAPEAXI@Z @ 0x1802675C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TitleBarController@@EEAA@XZ @ 0x180266A64 (--1TitleBarController@@EEAA@XZ.c)
 */

TitleBarController *__fastcall TitleBarController::`scalar deleting destructor'(TitleBarController *this, char a2)
{
  TitleBarController::~TitleBarController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x160);
  return this;
}
