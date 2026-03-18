/*
 * XREFs of PowerIsDisplayIdleExpired @ 0x1C0071FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z @ 0x1C0071550 (-IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0072030 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     PowerIsDisplayBurstActive @ 0x1C00E2750 (PowerIsDisplayBurstActive.c)
 *     PowerIsDisplayRequired @ 0x1C00E27F0 (PowerIsDisplayRequired.c)
 */

_BOOL8 __fastcall PowerIsDisplayIdleExpired(int a1, int *a2)
{
  _BOOL8 result; // rax
  int v5; // ecx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( CInputGlobals::GetGlobalTickCount(gpInputGlobals, 0LL) < (unsigned __int64)qword_1C01CE1C8 )
  {
    if ( (unsigned int)PowerIsDisplayBurstActive(&v6) )
    {
      result = 0LL;
LABEL_5:
      v5 = 0;
      goto LABEL_6;
    }
    v5 = v6;
    result = 1LL;
  }
  else
  {
    result = giPowerOffTimeOutMs > a1
          && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giPowerOffTimeOutMs - a1)
          && !(unsigned int)PowerIsDisplayRequired()
          && !(unsigned int)PowerIsDisplayBurstActive(0LL);
    v5 = 12;
    if ( !result )
      goto LABEL_5;
  }
LABEL_6:
  if ( a2 )
    *a2 = v5;
  return result;
}
