/*
 * XREFs of ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC
 * Callers:
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C00013C0 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     imp_WdfRequestGetFileObject @ 0x1C0001800 (imp_WdfRequestGetFileObject.c)
 *     imp_WdfRequestSend @ 0x1C0001F50 (imp_WdfRequestSend.c)
 *     imp_WdfRequestGetParameters @ 0x1C00022A0 (imp_WdfRequestGetParameters.c)
 *     imp_WdfSpinLockAcquire @ 0x1C00024C0 (imp_WdfSpinLockAcquire.c)
 *     imp_WdfSpinLockRelease @ 0x1C0002570 (imp_WdfSpinLockRelease.c)
 *     imp_WdfCollectionGetItem @ 0x1C0002620 (imp_WdfCollectionGetItem.c)
 *     imp_WdfTimerGetParentObject @ 0x1C0002CD0 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfIoQueueGetDevice @ 0x1C0003050 (imp_WdfIoQueueGetDevice.c)
 *     imp_WdfCollectionGetCount @ 0x1C0003270 (imp_WdfCollectionGetCount.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0003310 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0003520 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfFileObjectWdmGetFileObject @ 0x1C00039D0 (imp_WdfFileObjectWdmGetFileObject.c)
 *     imp_WdfRequestSetCompletionRoutine @ 0x1C0003A20 (imp_WdfRequestSetCompletionRoutine.c)
 *     imp_WdfInterruptAcquireLock @ 0x1C0003A90 (imp_WdfInterruptAcquireLock.c)
 *     imp_WdfInterruptReleaseLock @ 0x1C0003B10 (imp_WdfInterruptReleaseLock.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C0003BA0 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfIoQueueGetState @ 0x1C0003EC0 (imp_WdfIoQueueGetState.c)
 *     imp_WdfInterruptQueueDpcForIsr @ 0x1C0003F70 (imp_WdfInterruptQueueDpcForIsr.c)
 *     imp_WdfInterruptGetDevice @ 0x1C0003FD0 (imp_WdfInterruptGetDevice.c)
 *     imp_WdfRequestSetInformation @ 0x1C0004140 (imp_WdfRequestSetInformation.c)
 *     imp_WdfRequestGetIoQueue @ 0x1C00042D0 (imp_WdfRequestGetIoQueue.c)
 *     imp_WdfRegistryClose @ 0x1C0004380 (imp_WdfRegistryClose.c)
 *     imp_WdfFileObjectGetDevice @ 0x1C0004560 (imp_WdfFileObjectGetDevice.c)
 *     imp_WdfRequestGetRequestorMode @ 0x1C00047D0 (imp_WdfRequestGetRequestorMode.c)
 *     imp_WdfWaitLockRelease @ 0x1C0004CF0 (imp_WdfWaitLockRelease.c)
 *     imp_WdfRegistryQueryValue @ 0x1C0005260 (imp_WdfRegistryQueryValue.c)
 *     FxIoTargetFormatIoctl @ 0x1C0005630 (FxIoTargetFormatIoctl.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0006480 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestComplete @ 0x1C00083D0 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0009FD0 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfRequestCreate @ 0x1C000A590 (imp_WdfRequestCreate.c)
 *     imp_WdfDeviceEnqueueRequest @ 0x1C000AB10 (imp_WdfDeviceEnqueueRequest.c)
 *     imp_WdfTimerStop @ 0x1C000B410 (imp_WdfTimerStop.c)
 *     imp_WdfWaitLockAcquire @ 0x1C000B610 (imp_WdfWaitLockAcquire.c)
 *     imp_WdfTimerStart @ 0x1C000B720 (imp_WdfTimerStart.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0011ED0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1C00128E0 (imp_WdfRequestUnmarkCancelable.c)
 *     imp_WdfRequestReuse @ 0x1C00158B0 (imp_WdfRequestReuse.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0015BB0 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfRequestWdmFormatUsingStackLocation @ 0x1C0016040 (imp_WdfRequestWdmFormatUsingStackLocation.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C00161C0 (imp_WdfRequestMarkCancelableEx.c)
 *     imp_WdfIoQueuePurge @ 0x1C00163A0 (imp_WdfIoQueuePurge.c)
 *     imp_WdfIoQueueStart @ 0x1C0016950 (imp_WdfIoQueueStart.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0016AE0 (imp_WdfDeviceStopIdleActual.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x1C0017460 (imp_WdfDeviceResumeIdleActual.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C0017B00 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfDeviceGetIoTarget @ 0x1C0017F30 (imp_WdfDeviceGetIoTarget.c)
 *     imp_WdfDeviceGetSystemPowerAction @ 0x1C0018420 (imp_WdfDeviceGetSystemPowerAction.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C0058CA8 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxObjectHandleGetPtrQI(
        FxObject *Object,
        void **PPObject,
        void *Handle,
        unsigned __int16 Type,
        unsigned __int16 Offset)
{
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  FxQueryInterfaceParams params; // [rsp+50h] [rbp-18h] BYREF

  *PPObject = 0LL;
  params.Object = PPObject;
  params.Type = Type;
  params.Offset = Offset;
  if ( Object->QueryInterface(Object, &params) < 0 )
  {
    WPP_IFR_SF_qDqD(Object->m_Globals, v8, v9, v10, v11, Handle, Type, Object, Object->m_Type);
    FxVerifierBugCheckWorker(Object->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)Handle, Type);
  }
}
