/*
 * XREFs of ??_GViewGroup@@EEAAPEAXI@Z @ 0x1802062C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewGroup@@EEAA@XZ @ 0x180206094 (--1ViewGroup@@EEAA@XZ.c)
 */

ViewGroup *__fastcall ViewGroup::`scalar deleting destructor'(ViewGroup *this, char a2)
{
  ViewGroup::~ViewGroup(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
