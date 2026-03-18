/*
 * XREFs of ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x1800283F0
 * Callers:
 *     ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800283B0 (--_ECImageLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x180029A90 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CImageLegacyMilBrush::~CImageLegacyMilBrush(CImageLegacyMilBrush *this)
{
  *(_QWORD *)this = &CImageLegacyMilBrush::`vftable';
  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
