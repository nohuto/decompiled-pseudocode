/*
 * XREFs of NtUserCreateEmptyCursorObject @ 0x1C00146A0
 * Callers:
 *     <none>
 * Callees:
 *     _CreateEmptyCursorObject @ 0x1C00146DC (_CreateEmptyCursorObject.c)
 */

__int64 __fastcall NtUserCreateEmptyCursorObject(int a1)
{
  __int64 EmptyCursorObject; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 1LL);
  EmptyCursorObject = CreateEmptyCursorObject(a1 != 0);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return EmptyCursorObject;
}
