/*
 * XREFs of PowerIsDisplayRequired @ 0x1C0108C30
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005A12C (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerIsDisplayIdleExpired @ 0x1C0082CD0 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0082D30 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 */

__int64 PowerIsDisplayRequired()
{
  unsigned __int64 GlobalTickCount; // rax
  unsigned int v1; // ecx

  GlobalTickCount = CInputGlobals::GetGlobalTickCount((__int64)gpInputGlobals, 0);
  v1 = 0;
  if ( qword_1C0215758 <= GlobalTickCount )
    return dword_1C0215778 > 0;
  return v1;
}
