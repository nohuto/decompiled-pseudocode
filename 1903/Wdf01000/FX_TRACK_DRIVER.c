/*
 * XREFs of FX_TRACK_DRIVER @ 0x1C00140E0
 * Callers:
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0013BF0 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0013E60 (-FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x1C001400C (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C0056184 (-TimerHandler@FxTimer@@QEAAXXZ.c)
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C008E57C (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C008EE74 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00AEE88.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00AEE88.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = FxDriverGlobals;
}
