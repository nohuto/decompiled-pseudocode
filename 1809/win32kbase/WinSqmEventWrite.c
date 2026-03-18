/*
 * XREFs of WinSqmEventWrite @ 0x1C0090300
 * Callers:
 *     WinSqmStartSession @ 0x1C009018C (WinSqmStartSession.c)
 *     WinSqmEndSession @ 0x1C0098260 (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0098594 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C00F4C10 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C00F4E10 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C00F517C (WinSqmSetString.c)
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
  if ( qword_1C01CD5A8 )
    return EtwWrite(qword_1C01CD5A8, EventDescriptor, &Win32kSQMSession, UserDataCount, UserData);
  return result;
}
