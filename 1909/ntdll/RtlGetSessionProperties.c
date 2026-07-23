/*
 * XREFs of RtlGetSessionProperties @ 0x1800E4BC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x18009F700 (NtQueryInformationJobObject.c)
 */

NTSTATUS __cdecl RtlGetSessionProperties(ULONG SessionId, PULONG SharedUserSessionId)
{
  NTSTATUS v4; // ebx
  _BYTE *SharedData; // rcx
  _BYTE JobObjectInformation[592]; // [rsp+30h] [rbp-268h] BYREF

  if ( SessionId == -1 )
    return -1073741811;
  v4 = 0;
  if ( !SharedUserSessionId )
    return -1073741811;
  *SharedUserSessionId = 0;
  if ( RtlGetCurrentServiceSessionId() )
  {
    SharedData = NtCurrentPeb()->SharedData;
  }
  else
  {
    NtQueryInformationJobObject(0LL, JobObjectServerSiloUserSharedData, JobObjectInformation, 0x248u, 0LL);
    SharedData = JobObjectInformation;
  }
  *SharedUserSessionId = *((_DWORD *)SharedData + 6) == SessionId;
  return v4;
}
