/*
 * XREFs of ??_EViewPresentationMediator@@UEAAPEAXI@Z @ 0x1802C91A8
 * Callers:
 *     ??_EViewPresentationMediator@@WCI@EAAPEAXI@Z @ 0x1800DCA70 (--_EViewPresentationMediator@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewPresentationMediator@@UEAA@XZ @ 0x1802C8FDC (--1ViewPresentationMediator@@UEAA@XZ.c)
 */

ViewPresentationMediator *__fastcall ViewPresentationMediator::`vector deleting destructor'(
        ViewPresentationMediator *this,
        char a2)
{
  ViewPresentationMediator::~ViewPresentationMediator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x138);
  return this;
}
