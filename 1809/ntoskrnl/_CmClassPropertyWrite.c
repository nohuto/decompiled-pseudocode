/*
 * XREFs of _CmClassPropertyWrite @ 0x140329964
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408F980C (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall CmClassPropertyWrite(int a1)
{
  if ( a1 > 19 )
  {
    if ( a1 <= 23 || a1 != 24 && (a1 <= 25 || a1 > 28) )
      return 0;
  }
  else if ( a1 < 18 && (a1 < 8 || a1 != 8 && a1 != 13) )
  {
    return 0;
  }
  return 1;
}
