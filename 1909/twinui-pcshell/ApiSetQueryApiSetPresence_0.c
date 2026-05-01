/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18008E030
 * Callers:
 *     IsOleInitializePresent @ 0x18008BFF0 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x18008C0D0 (IsNAVShutdownPresent.c)
 *     IsPolicyManager_GetPolicyPresent @ 0x18008C2D8 (IsPolicyManager_GetPolicyPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x18008D2F8 (IsPicRetrieveFileInfoPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x18008D590 (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x18008D700 (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x18008E444 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x18008E61C (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
