/*
 * XREFs of ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x18002AF60
 * Callers:
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x1800291A0 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x180029BA0 (-ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SOLIDCOLORLEGAC.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSolidColorLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
  this[8] = 0LL;
}
