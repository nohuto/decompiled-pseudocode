/*
 * XREFs of MiIsPfn @ 0x1400A88E0
 * Callers:
 *     MiTradePage @ 0x14009C0F0 (MiTradePage.c)
 *     MiConvertHiberPhasePte @ 0x14056C080 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x14057C070 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x14057C260 (MiMarkNonPagedHiberPhasePte.c)
 *     PfpPfnPrioRequest @ 0x14062A220 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x14066B910 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140695B24 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544A0 (MiMapViewOfPhysicalSection.c)
 *     MmIsExtentDangling @ 0x140852F50 (MmIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x14085F308 (MmRelocatePfnList.c)
 *     MmAreMdlPagesLocked @ 0x140924CC8 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140924D88 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140924E88 (MmCheckMapIoSpace.c)
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
