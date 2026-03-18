/*
 * XREFs of ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x1800ACBC0
 * Callers:
 *     ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800ACC30 (--_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x1800ABD60 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CSolidColorLegacyMilBrush::`vftable';
  CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
  CResource::~CResource((CResource *)this);
}
