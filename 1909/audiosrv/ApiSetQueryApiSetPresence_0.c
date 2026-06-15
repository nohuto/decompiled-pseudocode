/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180067950
 * Callers:
 *     IsWinStationIsSessionRemoteablePresent @ 0x180066EF8 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x180067074 (IsWTSQuerySessionInformationWPresent.c)
 *     IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x180067168 (IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800675C8 (IsGetDefaultSpatialRenderingModePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
