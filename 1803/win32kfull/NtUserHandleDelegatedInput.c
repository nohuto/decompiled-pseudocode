/*
 * XREFs of NtUserHandleDelegatedInput @ 0x1C01F08B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0106D00 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserHandleDelegatedInput(_OWORD *a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _OWORD v10[4]; // [rsp+28h] [rbp-40h] BYREF

  v4 = 1;
  EnterCrit(0LL, 1LL);
  if ( a2 - 1 <= 2 )
  {
    v8 = gptiCurrent;
    if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 0x2000) != 0 )
    {
      if ( a2 != 3 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_OWORD *)MmUserProbeAddress;
        v10[0] = *a1;
        v10[1] = a1[1];
        v10[2] = a1[2];
        v4 = _HandleDelegatedInput(gptiCurrent, a2, (struct tagMSG *)v10);
      }
    }
    else
    {
      v4 = 0;
      UserSetLastError(5LL, v5);
    }
  }
  else
  {
    UserSetLastError(87LL, v5);
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
