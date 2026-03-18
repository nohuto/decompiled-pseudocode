/*
 * XREFs of EngDeletePath @ 0x1C026AB40
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C008F9D4 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     EngLineTo @ 0x1C00FD110 (EngLineTo.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0277EB8 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiEngDeletePath @ 0x1C02965F0 (NtGdiEngDeletePath.c)
 * Callees:
 *     <none>
 */

void __stdcall EngDeletePath(PATHOBJ *ppo)
{
  if ( ppo )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)ppo);
    Win32FreePool(ppo);
  }
}
