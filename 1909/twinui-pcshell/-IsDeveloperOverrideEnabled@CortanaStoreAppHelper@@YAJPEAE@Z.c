/*
 * XREFs of ?IsDeveloperOverrideEnabled@CortanaStoreAppHelper@@YAJPEAE@Z @ 0x1801E5D6C
 * Callers:
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGPEAK@Z @ 0x1801E5B34 (-GetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGPEAK@Z.c)
 */

__int64 __fastcall CortanaStoreAppHelper::IsDeveloperOverrideEnabled(
        CortanaStoreAppHelper *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  int CortanaRegKey; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  *(_BYTE *)this = 0;
  CortanaRegKey = CortanaStoreAppHelper::GetCortanaRegKey(L"DevOverrideOneSettings", (BYTE *)&v8, a3);
  v5 = CortanaRegKey;
  if ( CortanaRegKey != -2147024894 )
  {
    if ( CortanaRegKey < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
        (const char *)(unsigned int)CortanaRegKey);
      return v5;
    }
    if ( v8 == 1 )
      *(_BYTE *)this = 1;
  }
  return 0LL;
}
