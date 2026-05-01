/*
 * XREFs of CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy @ 0x180188288
 * Callers:
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180188184 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x18018C128 (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy()
{
  int v0; // eax
  bool v1; // cl
  int PolicyInt; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = SHWindowsPolicy(&POLID_AllowCortanaAboveLock);
  v1 = v0 != 0;
  if ( v0 == -1 )
  {
    PolicyInt = PolicyManager_GetPolicyInt(L"AboveLock", L"AllowCortanaAboveLock", &v5);
    if ( PolicyInt >= 0 )
    {
      return v5 != 0;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        26LL,
        (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
        (const char *)(unsigned int)PolicyInt);
      return 0;
    }
  }
  return v1;
}
