/*
 * XREFs of ??_ECFlipResource@@MEAAPEAXI@Z @ 0x1C0063470
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C00633D4 (--1CFlipResource@@MEAA@XZ.c)
 */

CFlipResource *__fastcall CFlipResource::`vector deleting destructor'(CFlipResource *P, char a2)
{
  CFlipResource::~CFlipResource(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
