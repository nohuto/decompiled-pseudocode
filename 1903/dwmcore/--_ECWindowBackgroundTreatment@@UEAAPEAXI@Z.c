/*
 * XREFs of ??_ECWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800307B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x18003084C (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
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
