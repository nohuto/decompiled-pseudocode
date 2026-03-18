/*
 * XREFs of ??_ECContentResourceState@@UEAAPEAXI@Z @ 0x1C005AE00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CContentResourceState@@UEAA@XZ @ 0x1C005CBA4 (--1CContentResourceState@@UEAA@XZ.c)
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
