/*
 * XREFs of StorGetIdentityVendorId @ 0x1C001BC60
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001B43C (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006EAE0 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C006EC2C (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityVendorId(_QWORD *a1, __int64 a2)
{
  RaCopyPaddedString(a2, 9LL, *a1 + 8LL, 8LL);
  return 0LL;
}
