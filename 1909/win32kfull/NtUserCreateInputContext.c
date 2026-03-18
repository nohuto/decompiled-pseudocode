/*
 * XREFs of NtUserCreateInputContext @ 0x1C015E730
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CreateInputContext @ 0x1C00E3D10 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 *InputContext; // rax
  __int64 v6; // rcx

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v4 = 0LL;
    if ( a1 )
    {
      InputContext = CreateInputContext(a1, gpsi, v2);
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
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
