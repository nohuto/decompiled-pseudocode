/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1400025C0
 * Callers:
 *     PiDqQueryCreate @ 0x1405B6750 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     PiDmObjectManagerInit @ 0x140756E18 (PiDmObjectManagerInit.c)
 *     PopDirectedDripsUmInitialize @ 0x14075AE34 (PopDirectedDripsUmInitialize.c)
 *     EtwpInitializeAutoLoggers @ 0x14076D434 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14076E59C (EtwpEnableKeyProviders.c)
 *     VfAvlInitializeTreeEx @ 0x140960554 (VfAvlInitializeTreeEx.c)
 *     PiSwInit @ 0x1409F819C (PiSwInit.c)
 *     PiInitializeDDBCache @ 0x1409F8508 (PiInitializeDDBCache.c)
 *     PiDcInit @ 0x1409F9298 (PiDcInit.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     PopPowerRequestInit @ 0x140A1E584 (PopPowerRequestInit.c)
 *     PopStatsInitPowerRequestLibrary @ 0x140A1E78C (PopStatsInitPowerRequestLibrary.c)
 *     PpInitSystem @ 0x140A215F8 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset(Table, 0, sizeof(_RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
