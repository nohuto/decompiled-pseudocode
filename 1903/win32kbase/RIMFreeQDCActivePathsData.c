/*
 * XREFs of RIMFreeQDCActivePathsData @ 0x1C0065C28
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00658F8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMGetQDCActivePathsData @ 0x1C0065EDC (RIMGetQDCActivePathsData.c)
 *     RIMOnDisplayStateChange @ 0x1C0068E58 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0138210 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0141E50 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0146150 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
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
