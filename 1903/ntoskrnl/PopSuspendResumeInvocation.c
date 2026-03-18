/*
 * XREFs of PopSuspendResumeInvocation @ 0x140728EE8
 * Callers:
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1405B1BA4 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopSuspendResumeInvocation(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_14046BDB0 )
  {
    LOBYTE(a2) = a1[4];
    LOBYTE(a3) = a1[5];
    LOBYTE(a4) = a1[6];
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))qword_14046BDB0)(*(unsigned int *)a1, a2, a3, a4);
  }
  return result;
}
