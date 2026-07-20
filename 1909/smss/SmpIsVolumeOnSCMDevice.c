/*
 * XREFs of SmpIsVolumeOnSCMDevice @ 0x1400074C0
 * Callers:
 *     SmpCreateVolumeDescriptor @ 0x140006DC0 (SmpCreateVolumeDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 */

bool __fastcall SmpIsVolumeOnSCMDevice(void *a1)
{
  char v1; // bl
  struct _IO_STATUS_BLOCK v3; // [rsp+50h] [rbp-48h] BYREF
  int v4; // [rsp+60h] [rbp-38h] BYREF
  __int64 v5; // [rsp+64h] [rbp-34h]
  __int64 v6; // [rsp+70h] [rbp-28h] BYREF
  __int64 v7; // [rsp+78h] [rbp-20h]

  v6 = 0LL;
  v1 = 0;
  v7 = 0LL;
  v5 = 0LL;
  v4 = 55;
  if ( NtDeviceIoControlFile(a1, 0LL, 0LL, 0LL, &v3, 0x2D1400u, &v4, 0xCu, &v6, 0x10u) >= 0 && v3.Information >= 0x10 )
    return (v7 & 1) != 0;
  return v1;
}
