/*
 * XREFs of ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x1800ADD70
 * Callers:
 *     ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800ADD30 (--_ECImageLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x1800AA8E0 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CImageLegacyMilBrush::~CImageLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CImageLegacyMilBrush::`vftable';
  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  CResource::~CResource((CResource *)this);
}
