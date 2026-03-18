/*
 * XREFs of IsPointerDeviceAccessible @ 0x1C01BBDE8
 * Callers:
 *     NtUserGetPointerDevices @ 0x1C0111F60 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDevice @ 0x1C0215EA0 (NtUserGetPointerDevice.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C0215FB0 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C02161B0 (NtUserGetPointerDeviceProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 24) != 7 || (*(_DWORD *)(gptiCurrent + 1208LL) & 0x10000) != 0 )
    return 1;
  return v1;
}
