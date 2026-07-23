/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1400025C0
 * Callers:
 *     PiDqQueryCreate @ 0x1405B6B30 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     PiDmObjectManagerInit @ 0x1407578A8 (PiDmObjectManagerInit.c)
 *     PopDirectedDripsUmInitialize @ 0x14075F6C4 (PopDirectedDripsUmInitialize.c)
 *     EtwpInitializeAutoLoggers @ 0x140770288 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x1407713F0 (EtwpEnableKeyProviders.c)
 *     VfAvlInitializeTreeEx @ 0x140960554 (VfAvlInitializeTreeEx.c)
 *     PiSwInit @ 0x1409F80AC (PiSwInit.c)
 *     PiInitializeDDBCache @ 0x1409F8418 (PiInitializeDDBCache.c)
 *     PiDcInit @ 0x1409F91A8 (PiDcInit.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     PopPowerRequestInit @ 0x140A1E760 (PopPowerRequestInit.c)
 *     PopStatsInitPowerRequestLibrary @ 0x140A1E968 (PopStatsInitPowerRequestLibrary.c)
 *     PpInitSystem @ 0x140A216DC (PpInitSystem.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
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
