/*
 * XREFs of NtUserLockWindowUpdate @ 0x1C0219380
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 */

__int64 __fastcall NtUserLockWindowUpdate(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ebx
  struct tagWND *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  v4 = 0;
  if ( a1 )
  {
    v5 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_6;
  }
  else
  {
    v5 = 0LL;
  }
  v4 = zzzLockWindowUpdate2(v5, 0LL, v2, v3);
LABEL_6:
  UserSessionSwitchLeaveCrit(v7, v6, v2, v3);
  return v4;
}
