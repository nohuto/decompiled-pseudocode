/*
 * XREFs of ??_E?$Set@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C0054050
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ @ 0x1C0053584 (--1-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DMMVIDPNTARGETMODE>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DMMVIDEOPRESENTSOURCE>::~Set<DMMVIDEOPRESENTSOURCE>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
