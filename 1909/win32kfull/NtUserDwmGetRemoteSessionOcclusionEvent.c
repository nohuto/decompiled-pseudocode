/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0116BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C010CF58 (UserSetLastStatus.c)
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
  __int64 v9; // rcx
  void *v10; // rbx
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
    UserSetLastError(5LL, v5, v6, v7);
  }
  v10 = Handle;
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
