/*
 * XREFs of NtUserInitializeClientPfnArrays @ 0x1C010E180
 * Callers:
 *     <none>
 * Callees:
 *     InitializeClientPfnArrays @ 0x1C010E26C (InitializeClientPfnArrays.c)
 */

__int64 __fastcall NtUserInitializeClientPfnArrays(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v13; // [rsp+20h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  if ( a1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 && (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a3 && (a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = InitializeClientPfnArrays(a1, a2, a3, a4);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v13;
}
