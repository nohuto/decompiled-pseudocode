/*
 * XREFs of HeapFree @ 0x1C00141E4
 * Callers:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     ParseLoad @ 0x1C0006D20 (ParseLoad.c)
 *     FindNSObjMainNoLock @ 0x1C0008600 (FindNSObjMainNoLock.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     ParseRelease @ 0x1C0013B40 (ParseRelease.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     ParseFieldList @ 0x1C00177D8 (ParseFieldList.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     PreserveWriteObj @ 0x1C001EE00 (PreserveWriteObj.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0022A70 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C0023040 (GetPciAddressWorker.c)
 *     AMLIIterateSiblingsNext @ 0x1C0023A90 (AMLIIterateSiblingsNext.c)
 *     EnableDisableCMOSRegions @ 0x1C0023E80 (EnableDisableCMOSRegions.c)
 *     WriteCookAccess @ 0x1C0028940 (WriteCookAccess.c)
 *     Simulator_Free_Arguments @ 0x1C00636B8 (Simulator_Free_Arguments.c)
 *     FreeObjOwner @ 0x1C0064CAC (FreeObjOwner.c)
 *     LoadFieldUnitDDB @ 0x1C006688C (LoadFieldUnitDDB.c)
 *     ProcessSleep @ 0x1C0066F10 (ProcessSleep.c)
 *     RawFieldAccess @ 0x1C0067824 (RawFieldAccess.c)
 *     ProcessDivide @ 0x1C0069B50 (ProcessDivide.c)
 *     ProcessLoadTable @ 0x1C0069CA0 (ProcessLoadTable.c)
 *     ProcessWait @ 0x1C006A150 (ProcessWait.c)
 *     ParseFieldConnection @ 0x1C006B4D8 (ParseFieldConnection.c)
 *     ParseNestedContext @ 0x1C006B790 (ParseNestedContext.c)
 *     ParseUnload @ 0x1C006B8B0 (ParseUnload.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1C0014540 (HeapInsertFreeList.c)
 */

void __fastcall HeapFree(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 16;
  *(_DWORD *)(a1 - 16) = 0;
  byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  HeapInsertFreeList(*(_QWORD *)(v1 + 8), v1);
  KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
}
