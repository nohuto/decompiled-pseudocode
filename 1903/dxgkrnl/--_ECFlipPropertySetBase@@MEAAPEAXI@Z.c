/*
 * XREFs of ??_ECFlipPropertySetBase@@MEAAPEAXI@Z @ 0x1C005E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipPropertySetBase@@MEAA@XZ @ 0x1C0061CA4 (--1CFlipPropertySetBase@@MEAA@XZ.c)
 */

CFlipPropertySetBase *__fastcall CFlipPropertySetBase::`vector deleting destructor'(CFlipPropertySetBase *P, char a2)
{
  CFlipPropertySetBase::~CFlipPropertySetBase(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
