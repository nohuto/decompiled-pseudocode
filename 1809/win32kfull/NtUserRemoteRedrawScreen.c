/*
 * XREFs of NtUserRemoteRedrawScreen @ 0x1C021B9D0
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C0158694 (RemoteRedrawScreen.c)
 */

__int64 NtUserRemoteRedrawScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  v8 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gnShadowers || gbConnected )
      v9 = RemoteRedrawScreen();
    else
      v9 = -1073741823;
  }
  else
  {
    v9 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v8, v5, v6, v7);
  return v9;
}
