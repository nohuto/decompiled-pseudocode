/*
 * XREFs of TR_IsUrbUsingChainedMdl @ 0x1C0029478
 * Callers:
 *     Control_MapTransfer @ 0x1C002A448 (Control_MapTransfer.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C0036A00 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C003797C (Bulk_TransferData_DetermineTransferMechanism.c)
 * Callees:
 *     <none>
 */

bool __fastcall TR_IsUrbUsingChainedMdl(__int64 a1)
{
  unsigned __int16 v1; // ax
  _QWORD *v2; // rax
  bool result; // al

  v1 = *(_WORD *)(a1 + 2);
  result = 0;
  if ( v1 <= 0x38u || v1 > 0x3Au )
  {
    v2 = *(_QWORD **)(a1 + 48);
    if ( v2 )
    {
      if ( *v2 )
        return 1;
    }
  }
  return result;
}
