/*
 * XREFs of TR_FSEReceived @ 0x1C0028F90
 * Callers:
 *     ESM_NotifyingTransferRingsFSEReceived @ 0x1C0046030 (ESM_NotifyingTransferRingsFSEReceived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_FSEReceived(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 144LL))();
}
