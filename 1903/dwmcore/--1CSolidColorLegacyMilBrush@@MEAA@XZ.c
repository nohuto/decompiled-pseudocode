/*
 * XREFs of ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x1800291A0
 * Callers:
 *     ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x180029160 (--_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x18002AF60 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(CSolidColorLegacyMilBrush *this)
{
  *(_QWORD *)this = &CSolidColorLegacyMilBrush::`vftable';
  CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
