/*
 * XREFs of ??_ECPoolBufferResource@@UEAAPEAXI@Z @ 0x1C005C300
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPoolBufferResource@@UEAA@XZ @ 0x1C005C268 (--1CPoolBufferResource@@UEAA@XZ.c)
 */

PVOID *__fastcall CPoolBufferResource::`vector deleting destructor'(PVOID *P, char a2)
{
  CPoolBufferResource::~CPoolBufferResource(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
