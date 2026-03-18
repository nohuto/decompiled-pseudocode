/*
 * XREFs of PopInputDisabled @ 0x1408B605C
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x14074B0E0 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x14001D490 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x14008B870 (MmGetNextSession.c)
 *     PsIsServiceSession @ 0x1406EE49C (PsIsServiceSession.c)
 *     PopSetSessionUserStatus @ 0x140724120 (PopSetSessionUserStatus.c)
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
