/*
 * XREFs of MiProcessKernelCfgAddressTakenImports @ 0x14085BD60
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1400F5544 (MiProcessKernelCfgImage.c)
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     MiMarkKernelCfgAddressTakenImports @ 0x14085BCB4 (MiMarkKernelCfgAddressTakenImports.c)
 */

__int64 __fastcall MiProcessKernelCfgAddressTakenImports(PVOID *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    if ( ((_DWORD)a1[13] & 0x2100) == 0x2000 )
    {
      result = MiMarkKernelCfgAddressTakenImports((__int64)a1);
      if ( (int)result < 0 )
        break;
    }
    a1 = (PVOID *)*a1;
    if ( a1 == &PsLoadedModuleList )
      return 0LL;
  }
  return result;
}
