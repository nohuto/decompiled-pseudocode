/*
 * XREFs of NtUserLockWindowUpdate @ 0x1C01F1E20
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockWindowUpdate2 @ 0x1C0059870 (zzzLockWindowUpdate2.c)
 */

__int64 __fastcall NtUserLockWindowUpdate(__int64 a1)
{
  int v2; // ebx
  struct tagWND *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( a1 )
  {
    v3 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_6;
  }
  else
  {
    v3 = 0LL;
  }
  v2 = zzzLockWindowUpdate2(v3, 0LL);
LABEL_6:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
