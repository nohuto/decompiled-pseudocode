/*
 * XREFs of ??_ECVolumeHardware@@EEAAPEAXI@Z @ 0x1800B6D50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x1800B6C9C (--1CVolumeHardware@@EEAA@XZ.c)
 */

CVolumeHardware *__fastcall CVolumeHardware::`vector deleting destructor'(CVolumeHardware *this, char a2)
{
  CVolumeHardware::~CVolumeHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B0);
  return this;
}
