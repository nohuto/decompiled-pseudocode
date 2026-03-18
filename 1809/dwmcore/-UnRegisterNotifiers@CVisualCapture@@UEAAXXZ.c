/*
 * XREFs of ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x18001D4A0
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x18001D250 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualCapture::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[50]);
  this[50] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[51]);
  this[51] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[52]);
  this[52] = 0LL;
}
