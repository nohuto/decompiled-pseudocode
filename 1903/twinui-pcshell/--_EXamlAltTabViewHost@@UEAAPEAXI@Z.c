/*
 * XREFs of ??_EXamlAltTabViewHost@@UEAAPEAXI@Z @ 0x1802D8730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlAltTabViewHost@@UEAA@XZ @ 0x1802D7AE0 (--1XamlAltTabViewHost@@UEAA@XZ.c)
 */

XamlAltTabViewHost *__fastcall XamlAltTabViewHost::`vector deleting destructor'(XamlAltTabViewHost *this, char a2)
{
  XamlAltTabViewHost::~XamlAltTabViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
