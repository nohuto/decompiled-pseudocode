/*
 * XREFs of IsDeallocateSupported @ 0x1C0004018
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x1C00013BC (FormInquiryBlockLimitsData.c)
 *     ScsiUnmapRequest @ 0x1C0001A10 (ScsiUnmapRequest.c)
 *     FormInquiryBlockProvisioningData @ 0x1C000E5B4 (FormInquiryBlockProvisioningData.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDeallocateSupported(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 52) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 1536) + 520LL) & 4) == 0 )
    return 0;
  return v1;
}
