/*
 * XREFs of GetFirmwareGranularity @ 0x1C0005484
 * Callers:
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C00024A0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareDownload @ 0x1C0010068 (FirmwareDownload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFirmwareGranularity(__int64 a1)
{
  unsigned __int8 v1; // cl

  v1 = *(_BYTE *)(*(_QWORD *)(a1 + 1528) + 319LL);
  if ( v1 == 0xFF )
    return 4LL;
  else
    return v1 << 12;
}
