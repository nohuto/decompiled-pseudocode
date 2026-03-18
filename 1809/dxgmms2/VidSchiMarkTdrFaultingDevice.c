/*
 * XREFs of VidSchiMarkTdrFaultingDevice @ 0x1C00CB424
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0039C84 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 */

void __fastcall VidSchiMarkTdrFaultingDevice(__int64 a1)
{
  if ( a1 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 224LL) )
  {
    *(_BYTE *)(a1 + 204) = 1;
    VidSchMarkDeviceAsError(a1, 7LL, 0);
  }
}
