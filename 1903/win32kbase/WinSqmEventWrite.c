/*
 * XREFs of WinSqmEventWrite @ 0x1C00A4150
 * Callers:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0061F34 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmStartSession @ 0x1C00A3FD8 (WinSqmStartSession.c)
 *     WinSqmEndSession @ 0x1C00B7D78 (WinSqmEndSession.c)
 *     WinSqmAddToStream @ 0x1C0120B20 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C0120D10 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C012107C (WinSqmSetString.c)
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
