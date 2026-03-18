/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0131160
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C00C8D04 (UserSetLastStatus.c)
 */

void *NtUserDwmGetRemoteSessionOcclusionEvent()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rbx
  void *Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v8 = ObOpenObjectByPointer(
           gpRemoteSessionOcclusionEvent,
           0,
           0LL,
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v8 < 0 )
    {
      Handle = 0LL;
      UserSetLastStatus(v8, 1);
    }
  }
  else
  {
    Handle = 0LL;
    UserSetLastError(5LL, v5, v6, v7);
  }
  v13 = Handle;
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
