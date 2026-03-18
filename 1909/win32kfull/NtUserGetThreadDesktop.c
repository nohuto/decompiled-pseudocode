/*
 * XREFs of NtUserGetThreadDesktop @ 0x1C00E41C0
 * Callers:
 *     <none>
 * Callees:
 *     _GetThreadDesktop @ 0x1C00E4200 (_GetThreadDesktop.c)
 */

__int64 __fastcall NtUserGetThreadDesktop(unsigned int a1)
{
  __int64 ThreadDesktop; // rbx
  __int64 v3; // rcx

  EnterSharedCrit(0LL, 1LL);
  ThreadDesktop = GetThreadDesktop(a1);
  UserSessionSwitchLeaveCrit(v3);
  return ThreadDesktop;
}
