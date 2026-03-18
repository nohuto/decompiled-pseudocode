/*
 * XREFs of ??1CFlipTokenOperation@@MEAA@XZ @ 0x1C0061D34
 * Callers:
 *     ??_GCFlipTokenOperation@@MEAAPEAXI@Z @ 0x1C0060820 (--_GCFlipTokenOperation@@MEAAPEAXI@Z.c)
 *     ??_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z @ 0x1C0060870 (--_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x1C00641CC (--1CFlipPresentUpdate@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipTokenOperation::~CFlipTokenOperation(CFlipTokenOperation *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &CFlipTokenOperation::`vftable';
  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    ObfDereferenceObject(v1);
}
