/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x1C0025E84
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0025DB8 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhApplyDeviceFix @ 0x1C0059290 (UsbhApplyDeviceFix.c)
 */

_DWORD *__fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_1C006F634 )
    result = (_DWORD *)UsbhApplyDeviceFix(a1, a2, 3LL);
  if ( dword_1C006F638 )
  {
    FdoExt(a1);
    result = PdoExt(a2);
    result[358] |= 0x2000u;
  }
  return result;
}
