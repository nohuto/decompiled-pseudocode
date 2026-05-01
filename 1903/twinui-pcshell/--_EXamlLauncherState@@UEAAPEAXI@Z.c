/*
 * XREFs of ??_EXamlLauncherState@@UEAAPEAXI@Z @ 0x1802F2230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x1802FA7D4 (--1XamlLauncherState@@UEAA@XZ.c)
 */

XamlLauncherState *__fastcall XamlLauncherState::`vector deleting destructor'(XamlLauncherState *this, char a2)
{
  XamlLauncherState::~XamlLauncherState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x430);
  return this;
}
