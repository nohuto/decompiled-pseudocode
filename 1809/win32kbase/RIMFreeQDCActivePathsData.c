/*
 * XREFs of RIMFreeQDCActivePathsData @ 0x1C003DCC0
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C003D900 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMGetQDCActivePathsData @ 0x1C004A680 (RIMGetQDCActivePathsData.c)
 *     RIMOnDisplayStateChange @ 0x1C0051A08 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C010D510 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0112CA0 (RIMFindMonitorForDigitizer.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
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
