/*
 * XREFs of ??_ECVolumeProvider@@UEAAPEAXI@Z @ 0x1800BBD00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVolumeProvider@@UEAA@XZ @ 0x1800BBC14 (--1CVolumeProvider@@UEAA@XZ.c)
 */

CVolumeProvider *__fastcall CVolumeProvider::`vector deleting destructor'(CVolumeProvider *this, char a2)
{
  CVolumeProvider::~CVolumeProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
