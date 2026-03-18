/*
 * XREFs of KseZeroPoolInitialize @ 0x1409AAE2C
 * Callers:
 *     KseInitialize @ 0x1409AF930 (KseInitialize.c)
 * Callees:
 *     KsepDebugPrint @ 0x14029FB44 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14029FDE4 (KsepLogError.c)
 *     KseRegisterShim @ 0x140728420 (KseRegisterShim.c)
 */

void KseZeroPoolInitialize()
{
  int v0; // eax
  __int64 v1; // rcx
  char v2; // al

  v0 = KseRegisterShim((__int64)&KseZeroPoolShim, 0LL, 0LL);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v1 + 1] = v0;
    v2 = KsepDebugFlag;
    KsepHistoryErrors[2 * v1] = 1048692;
    if ( (v2 & 2) != 0 )
      KsepDebugPrint(12LL, "ZeroPool shim: failed to register.\n");
    KsepLogError(12, "ZeroPool shim: failed to register.\n");
  }
}
