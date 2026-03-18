/*
 * XREFs of NtUserGetThreadDesktop @ 0x1C0109C20
 * Callers:
 *     <none>
 * Callees:
 *     _GetThreadDesktop @ 0x1C0109C60 (_GetThreadDesktop.c)
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
