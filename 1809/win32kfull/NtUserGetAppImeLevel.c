/*
 * XREFs of NtUserGetAppImeLevel @ 0x1C0214220
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAppImeLevel(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int Prop; // ebx
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  Prop = 0;
  v8 = v2;
  if ( v2 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
      v4 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD *)(v4 + 424) == *(_QWORD *)(ThreadWin32Thread + 424) )
        Prop = GetProp(v8, (unsigned __int16)atomImeLevel, 1LL);
    }
    else
    {
      UserSetLastError(120LL, v3, v5, v6);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return Prop;
}
