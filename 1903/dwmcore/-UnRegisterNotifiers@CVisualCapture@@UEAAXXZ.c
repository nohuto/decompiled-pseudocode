/*
 * XREFs of ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x180212AD0
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x1801FD580 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualCapture::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[49]);
  this[49] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[50]);
  this[50] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[51]);
  this[51] = 0LL;
}
