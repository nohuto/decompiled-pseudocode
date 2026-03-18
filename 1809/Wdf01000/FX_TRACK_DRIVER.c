/*
 * XREFs of FX_TRACK_DRIVER @ 0x1C0014240
 * Callers:
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0013D60 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0013FC0 (-FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x1C001416C (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C00567CC (-TimerHandler@FxTimer@@QEAAXXZ.c)
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C008CEDC (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C008D6D4 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00ABE58.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00ABE58.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = FxDriverGlobals;
}
