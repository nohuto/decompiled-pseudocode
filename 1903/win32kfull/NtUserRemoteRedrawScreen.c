/*
 * XREFs of NtUserRemoteRedrawScreen @ 0x1C0233AF0
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C015FF28 (RemoteRedrawScreen.c)
 */

__int64 NtUserRemoteRedrawScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  v5 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gnShadowers || gbConnected )
      v6 = RemoteRedrawScreen(gpepCSRSS);
    else
      v6 = -1073741823;
  }
  else
  {
    v6 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
