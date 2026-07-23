/*
 * XREFs of _MapCmClassPropertyToRegValue @ 0x14015B6AC
 * Callers:
 *     _CmGetInstallerClassRegPropWorker @ 0x1406F2648 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408F980C (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall MapCmClassPropertyToRegValue(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v2 = a2 - 8;
  if ( !v2 )
    return L"Class";
  v3 = v2 - 5;
  if ( !v3 )
    return L"ClassDesc";
  v4 = v3 - 5;
  if ( !v4 )
    return L"UpperFilters";
  v5 = v4 - 1;
  if ( !v5 )
    return L"LowerFilters";
  v7 = v5 - 5;
  if ( !v7 )
    return L"Security";
  v8 = v7 - 2;
  if ( !v8 )
    return L"DeviceType";
  v9 = v8 - 1;
  if ( !v9 )
    return L"Exclusive";
  if ( v9 == 1 )
    return L"DeviceCharacteristics";
  return 0LL;
}
