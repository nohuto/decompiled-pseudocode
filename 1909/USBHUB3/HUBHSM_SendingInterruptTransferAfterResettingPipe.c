/*
 * XREFs of HUBHSM_SendingInterruptTransferAfterResettingPipe @ 0x1C00087F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_SendInterruptTransfer @ 0x1C0003364 (HUBHTX_SendInterruptTransfer.c)
 *     HUBFDO_ReleaseWdfPowerReference @ 0x1C000C39C (HUBFDO_ReleaseWdfPowerReference.c)
 */

__int64 __fastcall HUBHSM_SendingInterruptTransferAfterResettingPipe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBFDO_ReleaseWdfPowerReference(v1);
  HUBHTX_SendInterruptTransfer(v1);
  return 2053LL;
}
