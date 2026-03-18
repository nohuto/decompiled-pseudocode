/*
 * XREFs of WinSqmEventWrite @ 0x1C00A3090
 * Callers:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00645E4 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmStartSession @ 0x1C00A2F18 (WinSqmStartSession.c)
 *     WinSqmEndSession @ 0x1C00B5298 (WinSqmEndSession.c)
 *     WinSqmAddToStream @ 0x1C011E1B0 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C011E3A0 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C011E70C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WinSqmEventWrite(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = 1359;
  if ( RegHandle )
    return EtwWrite(RegHandle, EventDescriptor, &Win32kSQMSession, UserDataCount, UserData);
  return result;
}
