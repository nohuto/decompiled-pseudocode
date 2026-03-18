/*
 * XREFs of ??1CYCbCrSurface@@MEAA@XZ @ 0x1802125B0
 * Callers:
 *     ??_ECYCbCrSurface@@MEAAPEAXI@Z @ 0x18019E570 (--_ECYCbCrSurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CYCbCrSurface::~CYCbCrSurface(struct CResource **this)
{
  *this = (struct CResource *)&CYCbCrSurface::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
  this[7] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
  this[8] = 0LL;
  CResource::~CResource((CResource *)this);
}
