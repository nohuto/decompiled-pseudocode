/*
 * XREFs of NtUserGetThreadDesktop @ 0x1C0101F50
 * Callers:
 *     <none>
 * Callees:
 *     _GetThreadDesktop @ 0x1C0101F90 (_GetThreadDesktop.c)
 */

__int64 __fastcall NtUserGetThreadDesktop(unsigned int a1)
{
  __int64 ThreadDesktop; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterSharedCrit(0LL, 1LL);
  ThreadDesktop = GetThreadDesktop(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return ThreadDesktop;
}
