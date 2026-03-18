/*
 * XREFs of WinSqmEventWrite @ 0x1C00BE09C
 * Callers:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0068884 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C00BDA80 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C00BDC70 (WinSqmAddToStreamEx.c)
 *     WinSqmEndSession @ 0x1C00BDFB8 (WinSqmEndSession.c)
 *     WinSqmSetString @ 0x1C00BE284 (WinSqmSetString.c)
 *     WinSqmStartSession @ 0x1C00BE3DC (WinSqmStartSession.c)
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
