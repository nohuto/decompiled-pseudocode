/*
 * XREFs of PopDirectedDripsSendSuspendResumeNotification @ 0x1405B1BB8
 * Callers:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408A3E50 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     MmGetSessionId @ 0x14001D880 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x14008CB70 (MmGetNextSession.c)
 *     PopUmpoSendLegacyEvent @ 0x1407271BC (PopUmpoSendLegacyEvent.c)
 *     PopSuspendResumeInvocation @ 0x14072A258 (PopSuspendResumeInvocation.c)
 */

__int64 __fastcall PopDirectedDripsSendSuspendResumeNotification(char a1, char a2)
{
  __int64 result; // rax
  void *i; // rcx
  void *v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+28h] [rbp-8h]
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF

  if ( a1 )
  {
    for ( i = 0LL; ; i = v5 )
    {
      result = MmGetNextSession(i);
      v5 = (void *)result;
      if ( !result )
        break;
      v8 = 0LL;
      LODWORD(v8) = MmGetSessionId(result);
      BYTE4(v8) = a2;
      *(_WORD *)((char *)&v8 + 5) = 1;
      PopSuspendResumeInvocation(&v8);
    }
  }
  else
  {
    v8 = 0LL;
    BYTE4(v8) = a2;
    PopSuspendResumeInvocation(&v8);
    v6 = 0LL;
    v7 = 0LL;
    if ( a2 )
    {
      v6 = 0x400000000LL;
      WORD2(v7) = 256;
    }
    else
    {
      v6 = 0x1200000003LL;
      WORD2(v7) = 1;
    }
    return PopUmpoSendLegacyEvent(&v6);
  }
  return result;
}
