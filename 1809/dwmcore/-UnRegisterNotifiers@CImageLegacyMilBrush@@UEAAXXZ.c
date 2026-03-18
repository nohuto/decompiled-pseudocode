/*
 * XREFs of ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x18009EBB0
 * Callers:
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180073674 (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x180076FF0 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x1800A0118 (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 */

void __fastcall CImageLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
  this[18] = 0LL;
  CResource::UnRegisterNotifier<CImageSource *>(this, this + 31);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[25]);
  this[25] = 0LL;
}
