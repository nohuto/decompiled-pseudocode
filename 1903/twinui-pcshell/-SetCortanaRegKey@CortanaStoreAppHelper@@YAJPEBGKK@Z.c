/*
 * XREFs of ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z @ 0x1801C82F4
 * Callers:
 *     _lambda_6beee81bb2061f57cf9eaca4a4fea397_::operator() @ 0x1801C5328 (_lambda_6beee81bb2061f57cf9eaca4a4fea397_--operator().c)
 *     _lambda_f8fc68a596a1d4698bf0d7673b0f23f8_::operator() @ 0x1801C5AB8 (_lambda_f8fc68a596a1d4698bf0d7673b0f23f8_--operator().c)
 *     ?ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C61A8 (-ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801C634C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 *     ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C7EAC (-RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRegKey@CortanaStoreAppHelper@@YAJPEBG0KK@Z @ 0x1801C8418 (-SetRegKey@CortanaStoreAppHelper@@YAJPEBG0KK@Z.c)
 */

__int64 __fastcall CortanaStoreAppHelper::SetCortanaRegKey(
        LPCWSTR lpValueName,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CortanaStoreAppHelper::SetRegKey(
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         lpValueName,
         (const unsigned __int16 *)(unsigned int)a2,
         a3,
         v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25A,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
