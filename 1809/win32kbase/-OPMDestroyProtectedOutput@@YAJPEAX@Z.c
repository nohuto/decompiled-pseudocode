/*
 * XREFs of ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C00FA304
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00A14A0 (DrvCreatePhysicalMonitorObjects.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C00FA5C0 (NtGdiDestroyOPMProtectedOutput.c)
 * Callees:
 *     ?DestroyProtectedOutput@COPM@@QEAAJPEAX@Z @ 0x1C00FA09C (-DestroyProtectedOutput@COPM@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall OPMDestroyProtectedOutput(COPM *a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = COPM::DestroyProtectedOutput(a1, (unsigned __int64)a1);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
