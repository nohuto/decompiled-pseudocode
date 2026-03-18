/*
 * XREFs of NtUserDestroyWindow @ 0x1C0071190
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 */

__int64 __fastcall NtUserDestroyWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  if ( v2 )
    v7 = xxxDestroyWindow(v2);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
