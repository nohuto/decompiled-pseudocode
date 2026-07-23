/*
 * XREFs of RtlGetSessionProperties @ 0x1800E4AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x18009EF50 (ZwQueryInformationJobObject.c)
 */

NTSTATUS __cdecl RtlGetSessionProperties(ULONG SessionId, PULONG SharedUserSessionId)
{
  NTSTATUS v4; // ebx
  PSILO_USER_SHARED_DATA SharedData; // rcx
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
    ZwQueryInformationJobObject(0LL, JobObjectReserved17Information, JobObjectInformation, 0x248u, 0LL);
    SharedData = (PSILO_USER_SHARED_DATA)JobObjectInformation;
  }
  *SharedUserSessionId = SharedData->SharedUserSessionId == SessionId;
  return v4;
}
