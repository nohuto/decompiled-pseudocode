/*
 * XREFs of GetControllerMaxTransferSize @ 0x1C0005450
 * Callers:
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C00024A0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     FirmwareDownload @ 0x1C0010068 (FirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C00132F4 (ProtocolCommandToNVMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetControllerMaxTransferSize(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // ecx

  result = (unsigned int)a1[42];
  if ( (unsigned int)result > 0x200000 )
    result = 0x200000LL;
  v2 = a1[7];
  if ( v2 && (unsigned int)result >= v2 )
    result = v2;
  v3 = a1[12];
  if ( v3 )
  {
    if ( v3 < (unsigned int)result )
      return v3;
  }
  return result;
}
