/*
 * XREFs of NtUserRemoteStopScreenUpdates @ 0x1C021BA50
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C00EA1E8 (xxxRemoteStopScreenUpdates.c)
 */

__int64 NtUserRemoteStopScreenUpdates()
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
    if ( gfSwitchInProgress )
      v9 = -1073741823;
    else
      v9 = xxxRemoteStopScreenUpdates();
  }
  else
  {
    v9 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v8, v5, v6, v7);
  return v9;
}
