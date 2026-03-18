/*
 * XREFs of ??_E?$IndexedSet@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C004E880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C0004A94 (--1-$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDPNSOURCE>::`vector deleting destructor'(_QWORD *P, char a2)
{
  *P = &IndexedSet<DMMVIDPNSOURCE>::`vftable';
  Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
