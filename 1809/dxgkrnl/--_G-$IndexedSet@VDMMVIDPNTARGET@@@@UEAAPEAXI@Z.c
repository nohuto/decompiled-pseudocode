/*
 * XREFs of ??_G?$IndexedSet@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C004E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNTARGET@@@@UEAA@XZ @ 0x1C0004A68 (--1-$Set@VDMMVIDPNTARGET@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDPNTARGET>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  *P = &IndexedSet<DMMVIDPNTARGET>::`vftable';
  Set<DMMVIDPNTARGET>::~Set<DMMVIDPNTARGET>(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
