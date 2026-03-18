/*
 * XREFs of CheckAccessEx @ 0x1C002BDE4
 * Callers:
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002BBC4 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C0046390 (NtUserChangeDisplaySettings.c)
 *     NtUserSetSysColors @ 0x1C005FD70 (NtUserSetSysColors.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00A06C0 (_anonymous_namespace_--ValidateUIPI.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01145D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C0114A70 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1C0119360 (NtUserSetDisplayConfig.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0119EA0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C015B834 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CheckAccessEx(int *a1, int *a2, char a3)
{
  int v4; // eax
  int v5; // r9d
  bool result; // al
  int v7; // r8d
  int v8; // r10d

  result = !UIPrivelegeIsolation::fEnforce
        || (v4 = *a1, v5 = *a2, *a1 > (unsigned int)*a2)
        || v4 == v5 && ((v7 = a1[1], v8 = a2[1], v7 == v8) || v8 == -1 || v7 == -1)
        || a3
        && v4 == v5
        && (unsigned __int8)SeIsParentOfChildAppContainer(gSessionId, (unsigned int)a1[1], (unsigned int)a2[1]);
  return result;
}
