/*
 * XREFs of ??_EViewHierarchy@@UEAAPEAXI@Z @ 0x18000D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ViewHierarchy@@UEAA@XZ @ 0x18000D758 (--1ViewHierarchy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewHierarchy *__fastcall ViewHierarchy::`vector deleting destructor'(ViewHierarchy *this, char a2)
{
  ViewHierarchy::~ViewHierarchy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
