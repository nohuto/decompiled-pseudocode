/*
 * XREFs of ??_GCCompositionSwapchainBuffer@@MEAAPEAXI@Z @ 0x1C005D350
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000FC24 (--1CFlipExBuffer@@MEAA@XZ.c)
 */

CFlipExBuffer *__fastcall CCompositionSwapchainBuffer::`scalar deleting destructor'(CFlipExBuffer *P, char a2)
{
  *(_QWORD *)P = &CCompositionSwapchainBuffer::`vftable';
  CFlipExBuffer::~CFlipExBuffer(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
