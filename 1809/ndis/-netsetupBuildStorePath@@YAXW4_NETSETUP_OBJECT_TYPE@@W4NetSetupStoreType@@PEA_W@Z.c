/*
 * XREFs of ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C00B4324
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___ @ 0x1C00B31A4 (netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___.c)
 *     ??$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@P6AJAEBU_GUID@@@Z@Z @ 0x1C0104988 (--$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType.c)
 * Callees:
 *     netsetupGetPathForObjectType @ 0x1C001CB1C (netsetupGetPathForObjectType.c)
 */

void __fastcall netsetupBuildStorePath(int a1, int a2, wchar_t *a3)
{
  const wchar_t *PathForObjectType; // rax
  wchar_t *v4; // r10

  if ( a2 )
  {
    if ( a2 == 1 )
      swprintf_s(a3, 0x100uLL, L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters");
  }
  else
  {
    PathForObjectType = netsetupGetPathForObjectType(a1);
    swprintf_s(
      v4,
      0x100uLL,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\%ws",
      PathForObjectType);
  }
}
