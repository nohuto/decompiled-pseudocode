/*
 * XREFs of sub_1800CE318 @ 0x1800CE318
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_18001C2B0 @ 0x18001C2B0 (sub_18001C2B0.c)
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     sub_1800219E8 @ 0x1800219E8 (sub_1800219E8.c)
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_18002934C @ 0x18002934C (sub_18002934C.c)
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 *     sub_18002AA74 @ 0x18002AA74 (sub_18002AA74.c)
 *     sub_18002C6E4 @ 0x18002C6E4 (sub_18002C6E4.c)
 *     sub_18002C944 @ 0x18002C944 (sub_18002C944.c)
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     sub_18002E8CC @ 0x18002E8CC (sub_18002E8CC.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     sub_1800550B8 @ 0x1800550B8 (sub_1800550B8.c)
 *     sub_18005547C @ 0x18005547C (sub_18005547C.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_180055D84 @ 0x180055D84 (sub_180055D84.c)
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     sub_1800692D0 @ 0x1800692D0 (sub_1800692D0.c)
 *     sub_180069410 @ 0x180069410 (sub_180069410.c)
 *     sub_180069854 @ 0x180069854 (sub_180069854.c)
 *     LdrShutdownProcess @ 0x18006AFD0 (LdrShutdownProcess.c)
 *     sub_18006C828 @ 0x18006C828 (sub_18006C828.c)
 *     sub_18006D700 @ 0x18006D700 (sub_18006D700.c)
 *     sub_18006F284 @ 0x18006F284 (sub_18006F284.c)
 *     sub_18006F388 @ 0x18006F388 (sub_18006F388.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_18007F45C @ 0x18007F45C (sub_18007F45C.c)
 *     sub_1800805E4 @ 0x1800805E4 (sub_1800805E4.c)
 *     sub_180080CF0 @ 0x180080CF0 (sub_180080CF0.c)
 *     sub_180081C0C @ 0x180081C0C (sub_180081C0C.c)
 *     sub_1800820B0 @ 0x1800820B0 (sub_1800820B0.c)
 *     sub_180082190 @ 0x180082190 (sub_180082190.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800832E0 (LdrGetKnownDllSectionHandle.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0C70 (LdrInitShimEngineDynamic.c)
 *     sub_1800D0FDC @ 0x1800D0FDC (sub_1800D0FDC.c)
 *     sub_1800D11F4 @ 0x1800D11F4 (sub_1800D11F4.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D45D0 @ 0x1800D45D0 (sub_1800D45D0.c)
 *     sub_1800D4678 @ 0x1800D4678 (sub_1800D4678.c)
 *     sub_1800D4744 @ 0x1800D4744 (sub_1800D4744.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 * Callees:
 *     sub_180053DE8 @ 0x180053DE8 (sub_180053DE8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CE5DC @ 0x1800CE5DC (sub_1800CE5DC.c)
 */

struct _TEB *sub_1800CE318(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, char *a5, ...)
{
  struct _TEB *result; // rax
  char Buffer[256]; // [rsp+40h] [rbp-118h] BYREF
  va_list va; // [rsp+188h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    sub_1800CE5DC(Buffer);
    return (struct _TEB *)sub_180053DE8(Buffer, 0x55u, 0, a5, va, 1);
  }
  return result;
}
