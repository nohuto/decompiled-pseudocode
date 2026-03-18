/*
 * XREFs of PiKsrInitialize @ 0x1409F8330
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiKsrNotifyInitialize @ 0x140A3B694 (PiKsrNotifyInitialize.c)
 */

__int64 PiKsrInitialize()
{
  int FirmwareInformation; // eax
  unsigned int v1; // ecx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  FirmwareInformation = KsrGetFirmwareInformation(&v3);
  v1 = 0;
  if ( FirmwareInformation >= 0 )
  {
    PnpKsrEnabled = 1;
    return (unsigned int)PiKsrNotifyInitialize(0LL);
  }
  else
  {
    PnpKsrEnabled = 0;
  }
  return v1;
}
