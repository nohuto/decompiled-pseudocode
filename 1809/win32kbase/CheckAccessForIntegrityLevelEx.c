/*
 * XREFs of CheckAccessForIntegrityLevelEx @ 0x1C0069D7C
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0003570 (NtUserDisplayConfigSetDeviceInfo.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002DA88 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     NtUserSetSysColors @ 0x1C0048D20 (NtUserSetSysColors.c)
 *     NtUserChangeDisplaySettings @ 0x1C004B0F0 (NtUserChangeDisplaySettings.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0089FDC (_anonymous_namespace_--ValidateUIPI.c)
 *     NtUserEnableTouchPad @ 0x1C00EE7F0 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1C00F1220 (NtUserSetDisplayConfig.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00F1DB0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C00F20E0 (NtUserSystemParametersInfo.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0130F30 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0140C70 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
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
