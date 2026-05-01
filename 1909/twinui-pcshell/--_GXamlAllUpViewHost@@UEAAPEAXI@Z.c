/*
 * XREFs of ??_GXamlAllUpViewHost@@UEAAPEAXI@Z @ 0x1802E5850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x1802E3998 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 */

XamlAllUpViewHost *__fastcall XamlAllUpViewHost::`scalar deleting destructor'(XamlAllUpViewHost *this, char a2)
{
  XamlAllUpViewHost::~XamlAllUpViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2C8);
  return this;
}
