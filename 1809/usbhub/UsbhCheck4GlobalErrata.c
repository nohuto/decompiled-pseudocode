/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x1C0024F70
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0024EA4 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhApplyDeviceFix @ 0x1C0056F2C (UsbhApplyDeviceFix.c)
 */

_DWORD *__fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_1C006E634 )
    result = (_DWORD *)UsbhApplyDeviceFix(a1, a2, 3LL);
  if ( dword_1C006E638 )
  {
    FdoExt(a1);
    result = PdoExt(a2);
    result[358] |= 0x2000u;
  }
  return result;
}
