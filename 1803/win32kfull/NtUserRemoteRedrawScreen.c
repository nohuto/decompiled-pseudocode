/*
 * XREFs of NtUserRemoteRedrawScreen @ 0x1C01F4230
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C0137D94 (RemoteRedrawScreen.c)
 */

__int64 NtUserRemoteRedrawScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v6 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gnShadowers || gbConnected )
      v7 = RemoteRedrawScreen();
    else
      v7 = -1073741823;
  }
  else
  {
    v7 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v6, v3, v4, v5);
  return v7;
}
