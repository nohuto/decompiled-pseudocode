/*
 * XREFs of NtUserGetTopLevelWindow @ 0x1C01EFE90
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserGetTopLevelWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( v2 && GetTopLevelWindow(v2) )
    v7 = *(_QWORD *)GetTopLevelWindow(v8);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
