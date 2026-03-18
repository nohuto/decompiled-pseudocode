/*
 * XREFs of _CmDeleteInstallerClassRegKey @ 0x1409359D4
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x140935A00 (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     _CmDeleteCommonClassRegKey @ 0x140933F60 (_CmDeleteCommonClassRegKey.c)
 */

__int64 __fastcall CmDeleteInstallerClassRegKey(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 || (a3 & 0xFFFFFCDF) != 0 )
    return 3221225485LL;
  else
    return CmDeleteCommonClassRegKey(a1, a2, a3);
}
