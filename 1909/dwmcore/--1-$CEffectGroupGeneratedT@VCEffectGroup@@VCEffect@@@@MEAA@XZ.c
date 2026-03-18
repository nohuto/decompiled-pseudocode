/*
 * XREFs of ??1?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAA@XZ @ 0x1800CAD00
 * Callers:
 *     ??_GCEffectGroup@@UEAAPEAXI@Z @ 0x1800CACC0 (--_GCEffectGroup@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::~CEffectGroupGeneratedT<CEffectGroup,CEffect>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
