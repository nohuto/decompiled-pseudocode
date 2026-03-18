/*
 * XREFs of Endpoint_HaltedCompletionCode @ 0x1C0019058
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C001B8E8 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C002A818 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C002AB34 (Control_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C003558C (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0035890 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_HaltedCompletionCode(__m128i **a1, unsigned int a2)
{
  bool result; // al
  __int64 v3; // rcx

  result = 1;
  if ( (((*a1)[21].m128i_i64[0] & 0x4000000000000000LL) == 0 || a2 != 199)
    && ((_mm_srli_si128((*a1)[21], 8).m128i_u8[0] & 0x20) == 0 || a2 != 198) )
  {
    if ( a2 > 0x24 )
      return 0;
    v3 = 0x150000045CLL;
    if ( !_bittest64(&v3, a2) )
      return 0;
  }
  return result;
}
