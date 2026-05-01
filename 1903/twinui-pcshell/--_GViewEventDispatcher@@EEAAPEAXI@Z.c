/*
 * XREFs of ??_GViewEventDispatcher@@EEAAPEAXI@Z @ 0x18026A288
 * Callers:
 *     ??_EViewEventDispatcher@@GHI@EAAPEAXI@Z @ 0x1800B8750 (--_EViewEventDispatcher@@GHI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x180268EE8 (--1ViewEventDispatcher@@EEAA@XZ.c)
 */

ViewEventDispatcher *__fastcall ViewEventDispatcher::`scalar deleting destructor'(ViewEventDispatcher *this, char a2)
{
  ViewEventDispatcher::~ViewEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x250);
  return this;
}
