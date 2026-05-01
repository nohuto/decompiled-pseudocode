/*
 * XREFs of ?GetOneSettingsCortanaAppKey@CortanaStoreAppHelper@@YAPEBGXZ @ 0x1801E5BF0
 * Callers:
 *     _lambda_921a5a526b2b3e27a0030faf56813293_::operator() @ 0x1801E47D8 (_lambda_921a5a526b2b3e27a0030faf56813293_--operator().c)
 *     ?PackageMeetsMinVersion@CortanaStoreAppHelper@@YAJPEAUIPackage@ApplicationModel@Windows@@PEA_N@Z @ 0x1801E6A3C (-PackageMeetsMinVersion@CortanaStoreAppHelper@@YAJPEAUIPackage@ApplicationModel@Windows@@PEA_N@Z.c)
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaUndockingHelpers@@YA_NXZ @ 0x1801DC80C (-IsTestAppConfiguredAsReplacement@Testing@CortanaUndockingHelpers@@YA_NXZ.c)
 */

const unsigned __int16 *__fastcall CortanaStoreAppHelper::GetOneSettingsCortanaAppKey(CortanaStoreAppHelper *this)
{
  bool IsTestAppConfiguredAsReplacement; // al
  const wchar_t *v2; // rcx

  IsTestAppConfiguredAsReplacement = CortanaUndockingHelpers::Testing::IsTestAppConfiguredAsReplacement(this);
  v2 = L"CortanaUWPTest";
  if ( !IsTestAppConfiguredAsReplacement )
    return L"CORTANAUWP";
  return v2;
}
