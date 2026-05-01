/*
 * XREFs of ??_EVirtualDesktopRegistryHelpers@@UEAAPEAXI@Z @ 0x1803E7860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

VirtualDesktopRegistryHelpers *__fastcall VirtualDesktopRegistryHelpers::`vector deleting destructor'(
        VirtualDesktopRegistryHelpers *this,
        char a2)
{
  HKEY v4; // rcx
  HKEY v5; // rcx

  v4 = (HKEY)*((_QWORD *)this + 3);
  if ( v4 )
    RegCloseKey(v4);
  v5 = (HKEY)*((_QWORD *)this + 2);
  if ( v5 )
    RegCloseKey(v5);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
