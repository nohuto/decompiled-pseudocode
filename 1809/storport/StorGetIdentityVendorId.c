/*
 * XREFs of StorGetIdentityVendorId @ 0x1C001E080
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001D714 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006DF9C (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C006E0E8 (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityVendorId(_QWORD *a1, __int64 a2)
{
  RaCopyPaddedString(a2, 9LL, *a1 + 8LL, 8LL);
  return 0LL;
}
