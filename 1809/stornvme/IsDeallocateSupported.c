/*
 * XREFs of IsDeallocateSupported @ 0x1C000520C
 * Callers:
 *     ScsiUnmapRequest @ 0x1C0003E84 (ScsiUnmapRequest.c)
 *     FormInquiryBlockLimitsData @ 0x1C00055E4 (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0005B40 (FormInquiryBlockProvisioningData.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDeallocateSupported(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 52) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 1528) + 520LL) & 4) == 0 )
    return 0;
  return v1;
}
