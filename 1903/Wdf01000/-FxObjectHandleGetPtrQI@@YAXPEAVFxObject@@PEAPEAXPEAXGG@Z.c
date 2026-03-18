/*
 * XREFs of ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664
 * Callers:
 *     imp_WdfSpinLockAcquire @ 0x1C0001470 (imp_WdfSpinLockAcquire.c)
 *     imp_WdfSpinLockRelease @ 0x1C0001520 (imp_WdfSpinLockRelease.c)
 *     imp_WdfRequestSend @ 0x1C00017C0 (imp_WdfRequestSend.c)
 *     imp_WdfRequestGetParameters @ 0x1C0001BC0 (imp_WdfRequestGetParameters.c)
 *     imp_WdfCollectionGetItem @ 0x1C0001DE0 (imp_WdfCollectionGetItem.c)
 *     imp_WdfTimerGetParentObject @ 0x1C0001ED0 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfIoQueueGetDevice @ 0x1C0002040 (imp_WdfIoQueueGetDevice.c)
 *     imp_WdfCollectionGetCount @ 0x1C00020B0 (imp_WdfCollectionGetCount.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0002150 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfFileObjectWdmGetFileObject @ 0x1C0002360 (imp_WdfFileObjectWdmGetFileObject.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C00023B0 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestSetCompletionRoutine @ 0x1C0002860 (imp_WdfRequestSetCompletionRoutine.c)
 *     imp_WdfInterruptReleaseLock @ 0x1C00028D0 (imp_WdfInterruptReleaseLock.c)
 *     imp_WdfInterruptAcquireLock @ 0x1C0002960 (imp_WdfInterruptAcquireLock.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C00029F0 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfInterruptQueueDpcForIsr @ 0x1C0002DB0 (imp_WdfInterruptQueueDpcForIsr.c)
 *     imp_WdfIoQueueGetState @ 0x1C0002E10 (imp_WdfIoQueueGetState.c)
 *     imp_WdfInterruptGetDevice @ 0x1C0002EC0 (imp_WdfInterruptGetDevice.c)
 *     imp_WdfRequestSetInformation @ 0x1C0003040 (imp_WdfRequestSetInformation.c)
 *     imp_WdfRegistryClose @ 0x1C00031D0 (imp_WdfRegistryClose.c)
 *     imp_WdfRequestGetIoQueue @ 0x1C0003270 (imp_WdfRequestGetIoQueue.c)
 *     imp_WdfFileObjectGetDevice @ 0x1C0003320 (imp_WdfFileObjectGetDevice.c)
 *     imp_WdfWaitLockRelease @ 0x1C00039C0 (imp_WdfWaitLockRelease.c)
 *     imp_WdfRegistryQueryValue @ 0x1C0004330 (imp_WdfRegistryQueryValue.c)
 *     FxIoTargetFormatIoctl @ 0x1C0004BF0 (FxIoTargetFormatIoctl.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0005F50 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestComplete @ 0x1C0007EF0 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00096B0 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfRequestCreate @ 0x1C0009C70 (imp_WdfRequestCreate.c)
 *     imp_WdfDeviceEnqueueRequest @ 0x1C000A200 (imp_WdfDeviceEnqueueRequest.c)
 *     imp_WdfRequestGetFileObject @ 0x1C000A920 (imp_WdfRequestGetFileObject.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C000B350 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfRegistryQueryULong @ 0x1C000B8C0 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfWaitLockAcquire @ 0x1C000BA50 (imp_WdfWaitLockAcquire.c)
 *     imp_WdfTimerStop @ 0x1C000BB60 (imp_WdfTimerStop.c)
 *     imp_WdfTimerStart @ 0x1C000BE40 (imp_WdfTimerStart.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0012E70 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1C0013050 (imp_WdfRequestUnmarkCancelable.c)
 *     imp_WdfRequestReuse @ 0x1C00160F0 (imp_WdfRequestReuse.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0016490 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfRequestWdmFormatUsingStackLocation @ 0x1C0016930 (imp_WdfRequestWdmFormatUsingStackLocation.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C0016A00 (imp_WdfRequestMarkCancelableEx.c)
 *     imp_WdfIoQueuePurge @ 0x1C0016BE0 (imp_WdfIoQueuePurge.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0016ED0 (imp_WdfDeviceStopIdleActual.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x1C0017020 (imp_WdfDeviceResumeIdleActual.c)
 *     imp_WdfIoQueueStart @ 0x1C0017300 (imp_WdfIoQueueStart.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C0017AD0 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfDeviceGetSystemPowerAction @ 0x1C00184E0 (imp_WdfDeviceGetSystemPowerAction.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C005880C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
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

  params.Object = PPObject;
  params.Type = Type;
  params.Offset = Offset;
  *PPObject = 0LL;
  *(_DWORD *)(&params.Offset + 1) = 0;
  if ( Object->QueryInterface(Object, &params) < 0 )
  {
    WPP_IFR_SF_qDqD(Object->m_Globals, v8, v9, v10, v11, Handle, Type, Object, Object->m_Type);
    FxVerifierBugCheckWorker(Object->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)Handle, Type);
  }
}
