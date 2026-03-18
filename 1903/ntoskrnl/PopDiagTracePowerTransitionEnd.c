/*
 * XREFs of PopDiagTracePowerTransitionEnd @ 0x140725184
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwWriteEndScenario @ 0x140747A50 (EtwWriteEndScenario.c)
 */

__int64 __fastcall PopDiagTracePowerTransitionEnd(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v4; // [rsp+48h] [rbp-18h]
  __int64 v5; // [rsp+50h] [rbp-10h]
  int v6; // [rsp+70h] [rbp+10h] BYREF

  v6 = a1;
  v2 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v2 = MEMORY[0xFFFFF78000000014];
    v3.Ptr = (ULONGLONG)&v6;
    v4 = &v2;
    *(_QWORD *)&v3.Size = 4LL;
    v5 = 8LL;
    return EtwWriteEndScenario(PopDiagHandle, &POP_ETW_EVENT_POWERTRANSITION_END, &PopDiagActivityId, 2u, &v3);
  }
  return result;
}
