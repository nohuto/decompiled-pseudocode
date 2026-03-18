/*
 * XREFs of IsPointerDeviceAccessible @ 0x1C00E0C18
 * Callers:
 *     NtUserGetPointerDeviceProperties @ 0x1C00E0730 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDevices @ 0x1C00E09B0 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C012E690 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C0130930 (NtUserGetPointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 24) != 7 || (*(_DWORD *)(gptiCurrent + 1200LL) & 0x10000) != 0 )
    return 1;
  return v1;
}
