/*
 * XREFs of NtUserCreateInputContext @ 0x1C01570E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CreateInputContext @ 0x1C00FFCE0 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 *InputContext; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v4 = 0LL;
    if ( a1 )
    {
      InputContext = CreateInputContext(a1, gpsi);
      if ( InputContext )
        v4 = *InputContext;
    }
    else
    {
      UserSetLastError(87LL, gpsi, v2, v3);
    }
  }
  else
  {
    UserSetLastError(120LL, gpsi, v2, v3);
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
