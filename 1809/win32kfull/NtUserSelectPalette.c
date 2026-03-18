/*
 * XREFs of NtUserSelectPalette @ 0x1C00FE420
 * Callers:
 *     <none>
 * Callees:
 *     _SelectPalette @ 0x1C00FE484 (_SelectPalette.c)
 */

__int64 __fastcall NtUserSelectPalette(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 1LL);
  v6 = SelectPalette(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
