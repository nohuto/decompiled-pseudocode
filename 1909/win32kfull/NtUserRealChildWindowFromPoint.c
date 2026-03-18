/*
 * XREFs of NtUserRealChildWindowFromPoint @ 0x1C0232E70
 * Callers:
 *     <none>
 * Callees:
 *     _RealChildWindowFromPoint @ 0x1C0244854 (_RealChildWindowFromPoint.c)
 */

__int64 __fastcall NtUserRealChildWindowFromPoint(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rax

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  if ( v4 )
  {
    v7 = (__int64 *)RealChildWindowFromPoint(v4, a2);
    if ( v7 )
      v6 = *v7;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
