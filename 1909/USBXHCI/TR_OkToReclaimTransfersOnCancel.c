/*
 * XREFs of TR_OkToReclaimTransfersOnCancel @ 0x1C00294BC
 * Callers:
 *     ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel @ 0x1C00460C0 (ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel.c)
 *     ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval @ 0x1C00462B0 (ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_OkToReclaimTransfersOnCancel(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 64LL))();
}
