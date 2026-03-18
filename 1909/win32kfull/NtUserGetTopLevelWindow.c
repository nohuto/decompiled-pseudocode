/*
 * XREFs of NtUserGetTopLevelWindow @ 0x1C022E990
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserGetTopLevelWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 && GetTopLevelWindow(v2) )
    v4 = *(_QWORD *)GetTopLevelWindow(v5);
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
