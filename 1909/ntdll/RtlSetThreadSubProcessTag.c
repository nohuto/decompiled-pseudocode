/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x180035BB0
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180006950 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180032F0C (TppWorkCallbackPrologRelease.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180033474 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppIopExecuteCallback @ 0x180033520 (TppIopExecuteCallback.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180035510 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpTpIoCallback @ 0x18010FC40 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
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
