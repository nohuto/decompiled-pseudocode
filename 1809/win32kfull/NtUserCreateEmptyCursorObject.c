/*
 * XREFs of NtUserCreateEmptyCursorObject @ 0x1C006BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C006BE74 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 */

HICON __fastcall NtUserCreateEmptyCursorObject(int a1)
{
  HICON EmptyCursorObject; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 1LL);
  EmptyCursorObject = _CreateEmptyCursorObject(a1 != 0);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return EmptyCursorObject;
}
