/*
 * XREFs of ??_GCIAMSpecialWindow@@UEAAPEAXI@Z @ 0x1800FDA30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x1800FD9CC (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 */

CIAMSpecialWindow *__fastcall CIAMSpecialWindow::`scalar deleting destructor'(CIAMSpecialWindow *this, char a2)
{
  *((_DWORD *)this + 13) = -1073741823;
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
