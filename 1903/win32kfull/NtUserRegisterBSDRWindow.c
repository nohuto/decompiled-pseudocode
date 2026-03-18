/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x1C013EDD0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     IsPrivileged @ 0x1C0086440 (IsPrivileged.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = 0LL;
  }
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogonUI || !gpidLogonUI && (unsigned int)IsPrivileged(psTcb) )
  {
    if ( v6 )
    {
      v11[1] = v6;
      v11[0] = &gspwndBSDR;
      HMAssignmentLock(v11);
    }
    if ( (_DWORD)v2 )
    {
      v5 = gptiShutdownWaiter;
      if ( gptiShutdownWaiter )
        PostEventMessageEx(
          gptiShutdownWaiter,
          *(_QWORD *)(gptiShutdownWaiter + 424LL),
          0x13u,
          0LL,
          0x329u,
          v2,
          0xFFFFFFFFLL,
          0LL);
    }
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(5LL, v7, v8, v9);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
