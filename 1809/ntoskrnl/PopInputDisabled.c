/*
 * XREFs of PopInputDisabled @ 0x140878E98
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140745E10 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     MmGetSessionId @ 0x1400897B0 (MmGetSessionId.c)
 *     PsIsServiceSession @ 0x1406CEEA0 (PsIsServiceSession.c)
 *     PopSetSessionUserStatus @ 0x1406DC9D8 (PopSetSessionUserStatus.c)
 */

void __fastcall PopInputDisabled(unsigned int a1, char a2, char a3)
{
  void *i; // rcx
  unsigned int SessionId; // edi
  __int64 NextSession; // rax
  void *v8; // rbx

  if ( a3 )
  {
    for ( i = 0LL; ; i = v8 )
    {
      NextSession = MmGetNextSession(i);
      v8 = (void *)NextSession;
      if ( !NextSession )
        break;
      SessionId = MmGetSessionId(NextSession);
      if ( !PsIsServiceSession(SessionId) && a1 != SessionId )
        PopSetSessionUserStatus(SessionId, 0);
    }
  }
  if ( a2 )
    PopSetSessionUserStatus(a1, 0);
}
