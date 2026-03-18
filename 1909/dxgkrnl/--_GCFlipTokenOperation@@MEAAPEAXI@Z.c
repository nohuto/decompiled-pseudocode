/*
 * XREFs of ??_GCFlipTokenOperation@@MEAAPEAXI@Z @ 0x1C0060820
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipTokenOperation@@MEAA@XZ @ 0x1C0061D34 (--1CFlipTokenOperation@@MEAA@XZ.c)
 */

CFlipTokenOperation *__fastcall CFlipTokenOperation::`scalar deleting destructor'(CFlipTokenOperation *P, char a2)
{
  CFlipTokenOperation::~CFlipTokenOperation(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
