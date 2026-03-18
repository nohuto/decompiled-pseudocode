/*
 * XREFs of ??1CParticleBehaviors@@EEAA@XZ @ 0x1801E7310
 * Callers:
 *     ??_ECParticleBehaviors@@EEAAPEAXI@Z @ 0x18019DB60 (--_ECParticleBehaviors@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CParticleBehaviors::~CParticleBehaviors(struct CResource **this)
{
  *this = (struct CResource *)&CParticleBehaviors::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  this[12] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  this[13] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  this[14] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
  this[15] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
