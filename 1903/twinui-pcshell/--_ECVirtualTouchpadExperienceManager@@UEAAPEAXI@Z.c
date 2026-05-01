/*
 * XREFs of ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x1801A7850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1801A721C (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 */

CVirtualTouchpadExperienceManager *__fastcall CVirtualTouchpadExperienceManager::`vector deleting destructor'(
        CVirtualTouchpadExperienceManager *this,
        char a2)
{
  CVirtualTouchpadExperienceManager::~CVirtualTouchpadExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x318);
  return this;
}
