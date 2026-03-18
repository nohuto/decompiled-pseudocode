/*
 * XREFs of RIMFreeQDCActivePathsData @ 0x1C00535D4
 * Callers:
 *     RIMGetQDCActivePathsData @ 0x1C0051848 (RIMGetQDCActivePathsData.c)
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0053880 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     RIMOnDisplayStateChange @ 0x1C0054E10 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C00E15E0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C00E9050 (RIMFindMonitorForDigitizer.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall RIMFreeQDCActivePathsData(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = a1[1];
    if ( v2 )
      Win32FreePool(v2);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return result;
}
