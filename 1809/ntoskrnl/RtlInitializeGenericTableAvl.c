/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x140006820
 * Callers:
 *     PiDqQueryCreate @ 0x140591864 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PiDmObjectManagerInit @ 0x14072DC18 (PiDmObjectManagerInit.c)
 *     EtwpInitializeAutoLoggers @ 0x140742A4C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140743BC0 (EtwpEnableKeyProviders.c)
 *     VfAvlInitializeTreeEx @ 0x1409224B4 (VfAvlInitializeTreeEx.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     PiSwInit @ 0x1409C8524 (PiSwInit.c)
 *     PiDcInit @ 0x1409C93CC (PiDcInit.c)
 *     PiInitializeDDBCache @ 0x1409C95C4 (PiInitializeDDBCache.c)
 *     PopPowerRequestInit @ 0x1409DC558 (PopPowerRequestInit.c)
 *     PopStatsInitPowerRequestLibrary @ 0x1409DC758 (PopStatsInitPowerRequestLibrary.c)
 *     PpInitSystem @ 0x1409DEDD4 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
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
