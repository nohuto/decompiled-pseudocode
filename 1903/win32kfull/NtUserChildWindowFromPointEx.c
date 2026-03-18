/*
 * XREFs of NtUserChildWindowFromPointEx @ 0x1C015AEE0
 * Callers:
 *     <none>
 * Callees:
 *     _ChildWindowFromPointEx @ 0x1C015AF5C (_ChildWindowFromPointEx.c)
 */

__int64 __fastcall NtUserChildWindowFromPointEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 *v9; // rax

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( v6 )
  {
    v9 = (__int64 *)ChildWindowFromPointEx(v6, a2, a3);
    if ( v9 )
      v8 = *v9;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
