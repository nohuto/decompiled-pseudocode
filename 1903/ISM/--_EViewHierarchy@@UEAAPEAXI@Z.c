/*
 * XREFs of ??_EViewHierarchy@@UEAAPEAXI@Z @ 0x180059380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewHierarchy@@UEAA@XZ @ 0x18005908C (--1ViewHierarchy@@UEAA@XZ.c)
 */

ViewHierarchy *__fastcall ViewHierarchy::`vector deleting destructor'(ViewHierarchy *this, char a2)
{
  ViewHierarchy::~ViewHierarchy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
