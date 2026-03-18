/*
 * XREFs of CheckAccessForIntegrityLevelEx @ 0x1C001E8B0
 * Callers:
 *     UserIsWindowGdiScaled @ 0x1C0022280 (UserIsWindowGdiScaled.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0034F30 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C004DE90 (NtUserChangeDisplaySettings.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C006AB90 (_anonymous_namespace_--ValidateUIPI.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00B5830 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C00B5B60 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1C00B8EC0 (NtUserSetDisplayConfig.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00B9B20 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSetSysColors @ 0x1C00B9CD0 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x1C00BA130 (NtUserSystemParametersInfo.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C010990C (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0118E74 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C012FB40 (ProcessKeyboardInjectedInputViaRim.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CheckAccessForIntegrityLevelEx(__int64 a1, __int64 a2, int a3)
{
  return !gbEnforceUIPI
      || (unsigned int)a1 > (unsigned int)a2
      || (_DWORD)a1 == (_DWORD)a2 && (HIDWORD(a1) == HIDWORD(a2) || HIDWORD(a2) == -1 || HIDWORD(a1) == -1)
      || a3
      && (_DWORD)a1 == (_DWORD)a2
      && (unsigned __int8)SeIsParentOfChildAppContainer(gSessionId, HIDWORD(a1), HIDWORD(a2));
}
