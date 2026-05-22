/*
 * XREFs of ??_GMagnifierToggleTarget@@UEAAPEAXI@Z @ 0x180104FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BFAC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

MagnifierToggleTarget *__fastcall MagnifierToggleTarget::`scalar deleting destructor'(
        MagnifierToggleTarget *this,
        char a2)
{
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
