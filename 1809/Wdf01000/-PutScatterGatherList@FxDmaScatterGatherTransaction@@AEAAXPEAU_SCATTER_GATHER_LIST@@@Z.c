/*
 * XREFs of ?PutScatterGatherList@FxDmaScatterGatherTransaction@@AEAAXPEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C0037234
 * Callers:
 *     ?ReleaseResources@FxDmaScatterGatherTransaction@@UEAAXE@Z @ 0x1C00372A0 (-ReleaseResources@FxDmaScatterGatherTransaction@@UEAAXE@Z.c)
 *     ?TransferCompleted@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0037560 (-TransferCompleted@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDmaScatterGatherTransaction::PutScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _SCATTER_GATHER_LIST *ScatterGather)
{
  KIRQL v4; // di
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // r8
  void (__fastcall *PutScatterGatherList)(_DMA_ADAPTER *, _SCATTER_GATHER_LIST *, unsigned __int8); // rax

  v4 = KfRaiseIrql(2u);
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  PutScatterGatherList = DmaOperations->PutScatterGatherList;
  LOBYTE(DmaOperations) = this->m_DmaDirection;
  PutScatterGatherList(AdapterObject, ScatterGather, (unsigned __int8)DmaOperations);
  KeLowerIrql(v4);
}
