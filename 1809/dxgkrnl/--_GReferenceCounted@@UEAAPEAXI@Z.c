/*
 * XREFs of ??_GReferenceCounted@@UEAAPEAXI@Z @ 0x1C0030510
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000B194 (--1ReferenceCounted@@UEAA@XZ.c)
 */

ReferenceCounted *__fastcall ReferenceCounted::`scalar deleting destructor'(ReferenceCounted *P, char a2)
{
  ReferenceCounted::~ReferenceCounted(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
