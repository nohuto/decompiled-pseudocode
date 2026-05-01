/*
 * XREFs of ?GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ @ 0x1801DBF88
 * Callers:
 *     _lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_::operator() @ 0x1801DA6CC (_lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_--operator().c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DB504 (-CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1801DE034 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801DE538 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ @ 0x18004959C (-IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaUndockingHelpers@@YA_NXZ @ 0x1801DC80C (-IsTestAppConfiguredAsReplacement@Testing@CortanaUndockingHelpers@@YA_NXZ.c)
 */

const unsigned __int16 *__fastcall CortanaUndockingHelpers::GetStoreCortanaAumId(
        CortanaUndockingHelpers *this,
        bool *a2)
{
  CortanaUndockingHelpers::Testing *v2; // rcx
  bool IsTestAppConfiguredAsReplacement; // al
  const wchar_t *v4; // rcx

  if ( !CortanaUndockingHelpers::IsSystemCortanaAppReplaced(this, a2) )
    return 0LL;
  IsTestAppConfiguredAsReplacement = CortanaUndockingHelpers::Testing::IsTestAppConfiguredAsReplacement(v2);
  v4 = L"3242f7d9-db60-4380-a379-4205ea768bfc_zs4v8rx04ex0m!App";
  if ( !IsTestAppConfiguredAsReplacement )
    return L"Microsoft.549981C3F5F10_8wekyb3d8bbwe!App";
  return v4;
}
