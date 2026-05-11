/*
 * XREFs of IsDevicePoweredUp @ 0x1C001FDC4
 * Callers:
 *     PinAddPinToList @ 0x1C0002328 (PinAddPinToList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDevicePoweredUp(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 16) + 528LL) == 1;
}
