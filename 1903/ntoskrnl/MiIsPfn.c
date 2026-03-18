/*
 * XREFs of MiIsPfn @ 0x140005EA0
 * Callers:
 *     MiTradePage @ 0x1400D93C0 (MiTradePage.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiConvertHiberPhasePte @ 0x14059C380 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1405AC060 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1405AC250 (MiMarkNonPagedHiberPhasePte.c)
 *     PfpPfnPrioRequest @ 0x1405CED50 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140711D38 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14077A454 (MiMapViewOfPhysicalSection.c)
 *     MiIsExtentDangling @ 0x14088CA4C (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x140892CEC (MmRelocatePfnList.c)
 *     MiFreePartitionPageRun @ 0x14089C784 (MiFreePartitionPageRun.c)
 *     MmAreMdlPagesLocked @ 0x140963E58 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140963F18 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140964018 (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFLL )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) >> 53) & 1LL;
}
