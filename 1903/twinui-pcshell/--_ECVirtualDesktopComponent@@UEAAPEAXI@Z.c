/*
 * XREFs of ??_ECVirtualDesktopComponent@@UEAAPEAXI@Z @ 0x1803E3488
 * Callers:
 *     ??_ECVirtualDesktopComponent@@WCI@EAAPEAXI@Z @ 0x1800C1430 (--_ECVirtualDesktopComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopComponent@@UEAA@XZ @ 0x1803E33B0 (--1CVirtualDesktopComponent@@UEAA@XZ.c)
 */

CVirtualDesktopComponent *__fastcall CVirtualDesktopComponent::`vector deleting destructor'(
        CVirtualDesktopComponent *this,
        char a2)
{
  CVirtualDesktopComponent::~CVirtualDesktopComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
