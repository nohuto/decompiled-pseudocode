/*
 * XREFs of ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x1800B6D10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x1800B6BD0 (--1CVolumeControlBase@@MEAA@XZ.c)
 */

CVolumeControlBase *__fastcall CVolumeControlBase::`vector deleting destructor'(CVolumeControlBase *this, char a2)
{
  CVolumeControlBase::~CVolumeControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
