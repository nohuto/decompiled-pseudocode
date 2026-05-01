/*
 * XREFs of ??_GVirtualDesktop@@UEAAPEAXI@Z @ 0x18035A440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktop@@UEAA@XZ @ 0x18035A37C (--1VirtualDesktop@@UEAA@XZ.c)
 */

VirtualDesktop *__fastcall VirtualDesktop::`scalar deleting destructor'(VirtualDesktop *this, char a2)
{
  VirtualDesktop::~VirtualDesktop(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x118);
  return this;
}
