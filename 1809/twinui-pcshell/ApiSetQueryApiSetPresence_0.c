/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800885E0
 * Callers:
 *     IsOleInitializePresent @ 0x1800866D4 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x180086840 (IsNAVShutdownPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x180087BB8 (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x180087D28 (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x1800888EC (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x180088AC4 (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
