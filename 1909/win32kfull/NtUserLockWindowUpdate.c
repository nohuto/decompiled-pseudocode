/*
 * XREFs of NtUserLockWindowUpdate @ 0x1C0230BC0
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 */

__int64 __fastcall NtUserLockWindowUpdate(__int64 a1)
{
  __int64 v2; // r8
  int v3; // ebx
  struct tagWND *v4; // rax
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  v3 = 0;
  if ( a1 )
  {
    v4 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_6;
  }
  else
  {
    v4 = 0LL;
  }
  v3 = zzzLockWindowUpdate2(v4, 0LL, v2);
LABEL_6:
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}
