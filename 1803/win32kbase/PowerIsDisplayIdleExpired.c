/*
 * XREFs of PowerIsDisplayIdleExpired @ 0x1C0035D70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0035DD0 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z @ 0x1C0035F20 (-IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z.c)
 *     PowerIsDisplayBurstActive @ 0x1C00A4800 (PowerIsDisplayBurstActive.c)
 *     PowerIsDisplayRequired @ 0x1C00A48A0 (PowerIsDisplayRequired.c)
 */

_BOOL8 __fastcall PowerIsDisplayIdleExpired(int a1, int *a2)
{
  _BOOL8 result; // rax
  int v5; // ecx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( CInputGlobals::GetGlobalTickCount(gpInputGlobals, 0LL) < (unsigned __int64)qword_1C01A0328 )
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
