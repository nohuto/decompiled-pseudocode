/*
 * XREFs of ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1802129E0
 * Callers:
 *     ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x180211EF4 (-ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADI.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1802132AC (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  struct CResource *v2; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  this[12] = 0LL;
  v2 = this[15];
  if ( v2 )
  {
    operator delete(v2);
    this[15] = 0LL;
    *((_DWORD *)this + 29) = 0;
  }
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
}
