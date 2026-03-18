/*
 * XREFs of HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer @ 0x1C00076A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C00057CC (HUBHTX_CompleteGetPortStatusWithPortStatusResult.c)
 */

__int64 __fastcall HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer(__int64 a1)
{
  HUBHTX_CompleteGetPortStatusWithPortStatusResult(*(__int64 **)(a1 + 960));
  return 2053LL;
}
