/*
 * XREFs of NtUserGhostWindowFromHungWindow @ 0x1C0094060
 * Callers:
 *     <none>
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C0094354 (_GhostWindowFromHungWindow.c)
 */

__int64 __fastcall NtUserGhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 *v5; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  if ( v2 )
  {
    v5 = (__int64 *)GhostWindowFromHungWindow(v2);
    if ( v5 )
      v4 = *v5;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
