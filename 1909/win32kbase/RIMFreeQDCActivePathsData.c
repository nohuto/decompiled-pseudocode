/*
 * XREFs of RIMFreeQDCActivePathsData @ 0x1C0051738
 * Callers:
 *     RIMGetQDCActivePathsData @ 0x1C0046020 (RIMGetQDCActivePathsData.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C0051408 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMOnDisplayStateChange @ 0x1C0054EF8 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0135BA0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0143AE0 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
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
