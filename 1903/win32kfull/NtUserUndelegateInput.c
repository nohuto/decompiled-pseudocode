/*
 * XREFs of NtUserUndelegateInput @ 0x1C013AAD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01E319C (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserUndelegateInput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v13; // rbx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 260) && a2 - 1 <= 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 416LL) == PsGetCurrentProcessWin32Process(v6, v5) )
      {
        v13 = *(_QWORD *)(v10 + 264);
        _HandleDelegatedInput(v13, a2, 0LL);
        CleanupInputDelegation(v13, v10);
        v9 = 1LL;
        goto LABEL_5;
      }
      v11 = 5LL;
    }
    else
    {
      v11 = 87LL;
    }
    UserSetLastError(v11, v5, v7, v8);
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v6);
  return v9;
}
