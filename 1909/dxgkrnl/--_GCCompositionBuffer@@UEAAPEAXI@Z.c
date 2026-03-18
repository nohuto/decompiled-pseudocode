/*
 * XREFs of ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1C005C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C0012ED0 (--1CCompositionBuffer@@UEAA@XZ.c)
 */

CCompositionBuffer *__fastcall CCompositionBuffer::`scalar deleting destructor'(CCompositionBuffer *P, char a2)
{
  CCompositionBuffer::~CCompositionBuffer(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
