/*
 * XREFs of IoIsDeviceEjectable @ 0x1400E2DE8
 * Callers:
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (((*(_BYTE *)(a1 + 52) & 4) == 0) & !_bittest(&InitWinPEModeType, 0x1Fu)) == 0;
}
