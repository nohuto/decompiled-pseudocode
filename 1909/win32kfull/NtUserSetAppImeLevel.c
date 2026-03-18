/*
 * XREFs of NtUserSetAppImeLevel @ 0x1C0233A00
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetAppImeLevel(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi, v5);
      v6 = *(_QWORD *)(v10 + 16);
      if ( *(_QWORD *)(v6 + 416) == CurrentProcessWin32Process )
      {
        InternalSetProp(v10, (unsigned __int16)atomImeLevel, v2, 5u);
        v9 = 1LL;
      }
    }
    else
    {
      UserSetLastError(120LL, v5, v7, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v9;
}
