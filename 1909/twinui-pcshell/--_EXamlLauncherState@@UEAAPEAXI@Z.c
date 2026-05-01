/*
 * XREFs of ??_EXamlLauncherState@@UEAAPEAXI@Z @ 0x180311700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180319C64 (--1XamlLauncherState@@UEAA@XZ.c)
 */

XamlLauncherState *__fastcall XamlLauncherState::`vector deleting destructor'(XamlLauncherState *this, char a2)
{
  XamlLauncherState::~XamlLauncherState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x430);
  return this;
}
