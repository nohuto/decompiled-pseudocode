/*
 * XREFs of ??_G?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C0055680
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C00555F8 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDPNSOURCEMODE>::`scalar deleting destructor'(_QWORD *P, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  *P = &IndexedSet<DMMVIDPNSOURCEMODE>::`vftable';
  Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(P, a2);
  if ( (v2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
