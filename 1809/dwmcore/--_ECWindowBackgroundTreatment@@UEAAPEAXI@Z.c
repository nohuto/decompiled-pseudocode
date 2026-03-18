/*
 * XREFs of ??_ECWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800E5770
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800E55FC (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::`vector deleting destructor'(
        CWindowBackgroundTreatment *this,
        char a2)
{
  CWindowBackgroundTreatment::~CWindowBackgroundTreatment(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x198uLL);
  return this;
}
