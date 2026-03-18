/*
 * XREFs of ??_ECContentResourceState@@UEAAPEAXI@Z @ 0x1C0061F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CContentResourceState@@UEAA@XZ @ 0x1C0063E14 (--1CContentResourceState@@UEAA@XZ.c)
 */

CContentResourceState *__fastcall CContentResourceState::`vector deleting destructor'(
        CContentResourceState *P,
        char a2)
{
  CContentResourceState::~CContentResourceState(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
