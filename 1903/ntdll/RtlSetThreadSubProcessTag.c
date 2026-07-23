/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x180035BB0
 * Callers:
 *     sub_180006950 @ 0x180006950 (sub_180006950.c)
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     sub_180033474 @ 0x180033474 (sub_180033474.c)
 *     sub_180033520 @ 0x180033520 (sub_180033520.c)
 *     sub_180035510 @ 0x180035510 (sub_180035510.c)
 *     sub_18010FB10 @ 0x18010FB10 (sub_18010FB10.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

PVOID __cdecl RtlSetThreadSubProcessTag(PVOID SubProcessTag)
{
  struct _TEB *v1; // rax
  __int64 v3; // rbx
  PVOID v4; // rdi
  PSILO_USER_SHARED_DATA SharedData; // rcx
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
  if ( SharedData && SharedData->ServiceSessionId )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[8];
  else
    v6 = 2147353488LL;
  if ( *(_BYTE *)v6 && SubProcessTag != v4 )
  {
    v10 = (int)v4;
    v9 = 1349;
    v11 = (int)SubProcessTag;
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[8];
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x402u, 8u, Fields);
  }
  return v4;
}
