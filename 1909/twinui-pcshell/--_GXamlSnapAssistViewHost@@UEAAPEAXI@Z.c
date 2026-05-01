/*
 * XREFs of ??_GXamlSnapAssistViewHost@@UEAAPEAXI@Z @ 0x1802FBF20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x1802FB9DC (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 */

XamlSnapAssistViewHost *__fastcall XamlSnapAssistViewHost::`scalar deleting destructor'(
        XamlSnapAssistViewHost *this,
        char a2)
{
  XamlSnapAssistViewHost::~XamlSnapAssistViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
