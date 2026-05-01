/*
 * XREFs of ??_ECortanaDesktopExperienceView@@UEAAPEAXI@Z @ 0x1801EE160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1801EDF40 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 */

CortanaDesktopExperienceView *__fastcall CortanaDesktopExperienceView::`vector deleting destructor'(
        CortanaDesktopExperienceView *this,
        char a2)
{
  CortanaDesktopExperienceView::~CortanaDesktopExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x180);
  return this;
}
