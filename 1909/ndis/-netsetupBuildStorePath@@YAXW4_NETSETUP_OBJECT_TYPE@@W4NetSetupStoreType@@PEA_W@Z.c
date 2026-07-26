/*
 * XREFs of ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C00FC498
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___ @ 0x1C00F9008 (netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___.c)
 *     ??$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@P6AJAEBU_GUID@@@Z@Z @ 0x1C0124D20 (--$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType.c)
 * Callees:
 *     netsetupGetPathForObjectType @ 0x1C0101D2C (netsetupGetPathForObjectType.c)
 */

void __fastcall netsetupBuildStorePath(__int64 a1, int a2, wchar_t *a3)
{
  __int64 PathForObjectType; // rax
  wchar_t *v4; // r10

  if ( a2 )
  {
    if ( a2 == 1 )
      swprintf_s(a3, 0x100uLL, L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters");
  }
  else
  {
    PathForObjectType = netsetupGetPathForObjectType();
    swprintf_s(
      v4,
      0x100uLL,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\%ws",
      PathForObjectType);
  }
}
