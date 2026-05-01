/*
 * XREFs of ??_GCIAMSpecialWindowBase@@UEAAPEAXI@Z @ 0x1801239F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x18012388C (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 */

CIAMSpecialWindowBase *__fastcall CIAMSpecialWindowBase::`scalar deleting destructor'(
        CIAMSpecialWindowBase *this,
        char a2)
{
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
