/*
 * XREFs of PoFxEnableDStateReporting @ 0x14086A290
 * Callers:
 *     <none>
 * Callees:
 *     PoFxStartDevicePowerManagement @ 0x14018BE10 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxRegisterDevice @ 0x140726430 (PopFxRegisterDevice.c)
 */

__int64 __fastcall PoFxEnableDStateReporting(PDEVICE_OBJECT DeviceObject, ULONG_PTR *a2)
{
  int v4; // ebx
  _BYTE v6[80]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v7[7]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v8[3]; // [rsp+C8h] [rbp-30h] BYREF

  if ( DeviceObject && a2 )
  {
    memset(v6, 0, 0x48uLL);
    memset(v7, 0, sizeof(v7));
    memset(v8, 0, sizeof(v8));
    v7[4] = v8;
    HIDWORD(v7[3]) = 1;
    v4 = PopFxRegisterDevice(DeviceObject, (__int64)v6, (__int64)v7, 1u, 0LL, 0LL, a2);
    if ( v4 >= 0 )
    {
      *(_DWORD *)(*a2 + 808) |= 1u;
      PoFxStartDevicePowerManagement(*a2);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
