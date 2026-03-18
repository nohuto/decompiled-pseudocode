/*
 * XREFs of ??_GCPoolBufferResourceState@@UEAAPEAXI@Z @ 0x1C0061F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1C0061E18 (--1CFlipResourceState@@MEAA@XZ.c)
 */

CFlipResourceState *__fastcall CPoolBufferResourceState::`scalar deleting destructor'(CFlipResourceState *P, char a2)
{
  *(_QWORD *)P = &CPoolBufferResourceState::`vftable';
  CFlipResourceState::~CFlipResourceState(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
