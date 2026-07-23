/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x180015920
 * Callers:
 *     TppCallbackCheckThreadAfterCallback @ 0x18001725C (TppCallbackCheckThreadAfterCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18002ECB4 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkCallbackPrologRelease @ 0x18002ED5C (TppWorkCallbackPrologRelease.c)
 *     RtlpTpWorkCallback @ 0x18002F9F0 (RtlpTpWorkCallback.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005E1EC (RtlpWnfWalkUserSubscriptionList.c)
 *     TppAlpcpExecuteCallback @ 0x180069EA0 (TppAlpcpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1801113E0 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0EB0 (NtTraceEvent.c)
 */

PVOID __cdecl RtlSetThreadSubProcessTag(PVOID SubProcessTag)
{
  struct _TEB *v1; // rax
  __int64 v3; // rbx
  PVOID v4; // rdi
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+26h] [rbp-32h]
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]

  v1 = NtCurrentTeb();
  v3 = 2147353488LL;
  v4 = v1->SubProcessTag;
  v1->SubProcessTag = SubProcessTag;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 566;
  else
    v6 = 2147353488LL;
  if ( *(_BYTE *)v6 && SubProcessTag != v4 )
  {
    v10 = (int)v4;
    v9 = 1349;
    v11 = (int)SubProcessTag;
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 566;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x402u, 8u, Fields);
  }
  return v4;
}
