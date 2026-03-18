/*
 * XREFs of HUBDSM_GettingAlternateConfigurationDescriptorWithReturnedLength @ 0x1C001C130
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C0024A78 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingAlternateConfigurationDescriptorWithReturnedLength(__int64 a1)
{
  HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
