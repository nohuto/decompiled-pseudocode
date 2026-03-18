/*
 * XREFs of MiIsPfn @ 0x140005F30
 * Callers:
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiConvertHiberPhasePte @ 0x14059BC00 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1405AC040 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1405AC230 (MiMarkNonPagedHiberPhasePte.c)
 *     PfpPfnPrioRequest @ 0x1405CF250 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140713B18 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14077D4A4 (MiMapViewOfPhysicalSection.c)
 *     MiIsExtentDangling @ 0x14088C26C (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x14089250C (MmRelocatePfnList.c)
 *     MiFreePartitionPageRun @ 0x14089BFA4 (MiFreePartitionPageRun.c)
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
