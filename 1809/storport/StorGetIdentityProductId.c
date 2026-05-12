/*
 * XREFs of StorGetIdentityProductId @ 0x1C001E0AC
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001D714 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006DF9C (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C006E0E8 (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityProductId(_QWORD *a1, __int64 a2)
{
  RaCopyPaddedString(a2, 17LL, *a1 + 16LL, 16LL);
  return 0LL;
}
