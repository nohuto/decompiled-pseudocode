/*
 * XREFs of ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08
 * Callers:
 *     imp_WdfIoQueueFindRequest @ 0x1C0003BA0 (imp_WdfIoQueueFindRequest.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007060 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007A90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007F40 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008760 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0009B60 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0011ED0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0013650 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C0013B58 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0013BD4 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0013D60 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C001430C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C00144D4 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0014728 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0015950 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016430 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016744 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0018BCC (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?AddRefOverride@FxObject@@UEAAKGPEAXJPEBD@Z @ 0x1C00335D0 (-AddRefOverride@FxObject@@UEAAKGPEAXJPEBD@Z.c)
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0035570 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C003768C (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C00387B8 (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C003C4DC (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x1C003C834 (--0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C004028C (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     ??0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z @ 0x1C0040768 (--0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z.c)
 *     ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C0050930 (-AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0050B84 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0050BE0 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0050C8C (-PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0052924 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AddIoTarget@FxDevice@@UEAAJPEAVFxIoTarget@@@Z @ 0x1C00534B0 (-AddIoTarget@FxDevice@@UEAAJPEAVFxIoTarget@@@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C0054308 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x1C005844C (--0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z.c)
 *     ??0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z @ 0x1C00584AC (--0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0058A20 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C005C154 (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0063288 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 *     ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C0064204 (-RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0066E14 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0067200 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C006A540 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C006F750 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C0072BC4 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x1C0073990 (-Start@FxUsbDevice@@MEAAJXZ.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C0073D00 (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C0074AA4 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 *     GetIoQueueList_ProcessQueueListEntry @ 0x1C0077524 (GetIoQueueList_ProcessQueueListEntry.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C007881C (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00795C4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0079948 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0079CA0 (-_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C007B840 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C0082658 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0083680 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C0084710 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0085C80 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0086CA0 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00871D8 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C008BFB8 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008E950 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?CreateThread@FxSystemThread@@AEAAJXZ @ 0x1C0093018 (-CreateThread@FxSystemThread@@AEAAJXZ.c)
 *     VfAddContextToHandle @ 0x1C00C00A8 (VfAddContextToHandle.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DC14 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxObject::AddRef(FxObject *this, void *Tag, int Line, const char *File)
{
  unsigned int RefCount; // ebx
  FxTagTracker *m_Lock; // rcx

  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
  else
    m_Lock = 0LL;
  if ( m_Lock )
    FxTagTracker::UpdateTagHistory(m_Lock, Tag, Line, File, TagAddRef, RefCount);
  return RefCount;
}
