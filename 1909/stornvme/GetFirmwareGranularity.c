/*
 * XREFs of GetFirmwareGranularity @ 0x1C0004074
 * Callers:
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001690 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareDownload @ 0x1C000E214 (FirmwareDownload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFirmwareGranularity(__int64 a1)
{
  unsigned __int8 v1; // cl

  v1 = *(_BYTE *)(*(_QWORD *)(a1 + 1536) + 319LL);
  if ( v1 == 0xFF )
    return 4LL;
  else
    return v1 << 12;
}
