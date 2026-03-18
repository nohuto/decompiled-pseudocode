/*
 * XREFs of NtUserHungWindowFromGhostWindow @ 0x1C01094B0
 * Callers:
 *     <none>
 * Callees:
 *     _HungWindowFromGhostWindow @ 0x1C0070DC0 (_HungWindowFromGhostWindow.c)
 */

__int64 __fastcall NtUserHungWindowFromGhostWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 *v8; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  if ( v2 )
  {
    v8 = (__int64 *)HungWindowFromGhostWindow(v2);
    if ( v8 )
      v7 = *v8;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
