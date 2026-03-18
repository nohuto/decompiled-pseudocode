/*
 * XREFs of NtUserCreateEmptyCursorObject @ 0x1C002ECD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C002ED14 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 */

HICON __fastcall NtUserCreateEmptyCursorObject(int a1)
{
  HICON EmptyCursorObject; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 1LL);
  EmptyCursorObject = _CreateEmptyCursorObject(a1 != 0);
  UserSessionSwitchLeaveCrit(v3);
  return EmptyCursorObject;
}
