/*
 * XREFs of NtUserSetImeHotKey @ 0x1C00FB0E0
 * Callers:
 *     <none>
 * Callees:
 *     SetImeHotKey @ 0x1C00FB158 (SetImeHotKey.c)
 */

__int64 __fastcall NtUserSetImeHotKey(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rbx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  v6 = (int)SetImeHotKey(a1, a5);
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
