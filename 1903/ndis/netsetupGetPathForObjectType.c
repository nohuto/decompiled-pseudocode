/*
 * XREFs of netsetupGetPathForObjectType @ 0x1C0101D2C
 * Callers:
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C00FC498 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C0101BE4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall netsetupGetPathForObjectType(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return L"Interfaces";
  v3 = v1 - 1;
  if ( !v3 )
    return L"Filters";
  v4 = v3 - 1;
  if ( !v4 )
    return L"Protocols";
  v5 = v4 - 1;
  if ( !v5 )
    return L"Services";
  v6 = v5 - 1;
  if ( !v6 )
    return L"Clients";
  v7 = v6 - 2;
  if ( !v7 )
    return L"Muxes";
  v8 = v7 - 3;
  if ( !v8 )
    return L"BindRules";
  if ( v8 == 1 )
    return L"InterfaceDrivers";
  return 0LL;
}
