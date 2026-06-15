/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180035900
 * Callers:
 *     IsWinStationIsSessionRemoteablePresent @ 0x180035444 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x18003555C (IsWTSQuerySessionInformationWPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
