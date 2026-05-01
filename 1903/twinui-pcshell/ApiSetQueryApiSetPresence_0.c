/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18008B450
 * Callers:
 *     IsOleInitializePresent @ 0x180089470 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x180089550 (IsNAVShutdownPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x18008A724 (IsPicRetrieveFileInfoPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x18008A9BC (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x18008AB2C (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x18008B864 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x18008BA3C (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
