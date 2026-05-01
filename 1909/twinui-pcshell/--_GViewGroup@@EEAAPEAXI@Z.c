/*
 * XREFs of ??_GViewGroup@@EEAAPEAXI@Z @ 0x18027E160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewGroup@@EEAA@XZ @ 0x18027DF18 (--1ViewGroup@@EEAA@XZ.c)
 */

ViewGroup *__fastcall ViewGroup::`scalar deleting destructor'(ViewGroup *this, char a2)
{
  ViewGroup::~ViewGroup(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
