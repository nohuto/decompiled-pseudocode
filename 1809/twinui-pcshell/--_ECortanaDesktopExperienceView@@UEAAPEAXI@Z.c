/*
 * XREFs of ??_ECortanaDesktopExperienceView@@UEAAPEAXI@Z @ 0x1801880C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x180187E38 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 */

CortanaDesktopExperienceView *__fastcall CortanaDesktopExperienceView::`vector deleting destructor'(
        CortanaDesktopExperienceView *this,
        char a2)
{
  CortanaDesktopExperienceView::~CortanaDesktopExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x160);
  return this;
}
