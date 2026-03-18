/*
 * XREFs of _CmClassPropertyRead @ 0x14015B5FC
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1406F13C8 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408F856C (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmClassPropertyRead(int a1)
{
  if ( a1 > 19 )
    return a1 > 23 && (a1 == 24 || a1 > 25 && a1 <= 28);
  return a1 >= 18 || a1 >= 8 && (a1 == 8 || a1 == 13);
}
