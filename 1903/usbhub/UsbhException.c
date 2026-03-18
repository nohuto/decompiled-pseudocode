/*
 * XREFs of UsbhException @ 0x1C0055A68
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C000207C (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00025EC (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoSetD0 @ 0x1C0003C40 (UsbhPdoSetD0.c)
 *     UsbhSshSuspendHub @ 0x1C0003E60 (UsbhSshSuspendHub.c)
 *     UsbhFdoD0Worker_Action @ 0x1C00047C0 (UsbhFdoD0Worker_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0004B20 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshResumeDownstream @ 0x1C0006D00 (UsbhSshResumeDownstream.c)
 *     UsbhSetHubRemoteWake @ 0x1C0007734 (UsbhSetHubRemoteWake.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C00082C0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C000848C (UsbhCheckHubPowerStatus.c)
 *     UsbhSshResumeUpstream @ 0x1C0008588 (UsbhSshResumeUpstream.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0008C2C (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C000928C (UsbhFdoColdStartPdo.c)
 *     UsbhSuspendPort @ 0x1C000C1B0 (UsbhSuspendPort.c)
 *     UsbhResumeSuspendedPort @ 0x1C000C394 (UsbhResumeSuspendedPort.c)
 *     UsbhBusSuspend_Action @ 0x1C000D08C (UsbhBusSuspend_Action.c)
 *     UsbhCreateDevice @ 0x1C000E4F8 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C00112AC (UsbhInitializeDevice.c)
 *     UsbhResetPort @ 0x1C0011620 (UsbhResetPort.c)
 *     UsbhHubProcessIsr @ 0x1C0011C70 (UsbhHubProcessIsr.c)
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0014470 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x1C00164A0 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C001A780 (UsbhSyncPowerOnPorts.c)
 *     UsbhHubIsr @ 0x1C001B0B0 (UsbhHubIsr.c)
 *     UsbhFinishStart @ 0x1C001D540 (UsbhFinishStart.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001D710 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhGetProductIdString @ 0x1C001D974 (UsbhGetProductIdString.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001E004 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetDescriptor @ 0x1C001E114 (UsbhGetDescriptor.c)
 *     UsbhConfigureUsbHub @ 0x1C001E1BC (UsbhConfigureUsbHub.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001E440 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhQueryHubState @ 0x1C001E864 (UsbhQueryHubState.c)
 *     UsbhGetStatus @ 0x1C001E9F8 (UsbhGetStatus.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C001EA88 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhPortConnect @ 0x1C001FB60 (UsbhPortConnect.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0020454 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0020F3C (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0021190 (UsbhPdoPnp_StartDevice.c)
 *     UsbhGetSerialNumber @ 0x1C0021554 (UsbhGetSerialNumber.c)
 *     UsbhGetMsOsContainerID @ 0x1C00216C8 (UsbhGetMsOsContainerID.c)
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C0021C54 (UsbhGetLanguageIdString.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0021E80 (UsbhGetMSOS_Descriptor.c)
 *     UsbhCheckHubErrata @ 0x1C0021F64 (UsbhCheckHubErrata.c)
 *     UsbhCheckDeviceErrata @ 0x1C0025640 (UsbhCheckDeviceErrata.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0025F5C (UsbhGetHubDeviceInformation.c)
 *     UsbhGetDeviceInformation @ 0x1C00262B8 (UsbhGetDeviceInformation.c)
 *     UsbhBusIfAddDevice @ 0x1C0026C60 (UsbhBusIfAddDevice.c)
 *     UsbhGetBusInterface @ 0x1C0026F40 (UsbhGetBusInterface.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0027180 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C00292F0 (UsbhFdoPnp_StartDevice.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A43C (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhValidateSerialNumberString @ 0x1C002AEA4 (UsbhValidateSerialNumberString.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C002B690 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1C002B8C0 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhFdoDeviceControl @ 0x1C003F940 (UsbhFdoDeviceControl.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C0040BC0 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetPortPower @ 0x1C0040EF0 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x1C00423F4 (UsbhSetPortIndicator.c)
 *     UsbhFdoCyclePdoPort @ 0x1C00431EC (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x1C0043580 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C0043790 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C0043D44 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0046B5C (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1C004834C (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C0048A8C (UsbhDisablePort.c)
 *     UsbhGetBillboardInfo @ 0x1C0048E50 (UsbhGetBillboardInfo.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0049480 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x1C0049850 (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumePort @ 0x1C004A0F4 (UsbhSyncResumePort.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C004BB60 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoSetD0Warm @ 0x1C004BCBC (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C004C888 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C004D9E4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004E194 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C004E4C8 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C004E73C (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004E9FC (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C004ECCC (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004EF5C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004F404 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004F744 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004FA58 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004FD40 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0050028 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0050318 (UsbhIoctlResetStuckHub.c)
 *     UsbhIoctlValidateParameters @ 0x1C00507A4 (UsbhIoctlValidateParameters.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C0051F00 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhHandleOvercurrent @ 0x1C0056FD0 (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x1C0057210 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0057300 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortResumeFailed @ 0x1C00578B0 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1C0057D10 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1C0058060 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C0058270 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C0058830 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C0058924 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0004640 (UsbhQueueWorkItemEx.c)
 *     UsbhReferenceListAdd @ 0x1C000E800 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C000E930 (UsbhReferenceListRemove.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     memmove @ 0x1C002C6C0 (memmove.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhExceptionTrace @ 0x1C0055D60 (UsbhExceptionTrace.c)
 *     UsbhExceptionWorker @ 0x1C00560F0 (UsbhExceptionWorker.c)
 *     UsbhGetExceptionDispatch @ 0x1C00561E4 (UsbhGetExceptionDispatch.c)
 *     UsbhEtwLogHubException @ 0x1C005F3C8 (UsbhEtwLogHubException.c)
 */

void __fastcall UsbhException(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8,
        int a9,
        char a10)
{
  int v11; // esi
  _DWORD *v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r15
  int v19; // eax
  unsigned __int16 v20; // si
  unsigned int v21; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v23; // rbx
  char *v24; // rcx
  unsigned int v25; // ecx
  _OWORD *v26; // rdx
  __int64 v27; // rax
  _OWORD *v28; // rax
  __int64 ExceptionDispatch; // [rsp+48h] [rbp-40h]
  unsigned int v33; // [rsp+D8h] [rbp+50h]

  v11 = a2;
  v14 = FdoExt(a1);
  v15 = -1LL;
  ExceptionDispatch = UsbhGetExceptionDispatch(a1, a3);
  v16 = -1LL;
  v17 = *(_QWORD *)(ExceptionDispatch + 8);
  do
    ++v16;
  while ( *(_BYTE *)(v17 + v16) );
  UsbhEtwLogHubException(a1, v11, a3, a6, a7, v17, v16 + 1);
  v18 = 16LL;
  if ( a10 )
  {
    v19 = v14[640];
    if ( (v19 & 0x10) != 0 )
      return;
    v14[640] = v19 | 0x10;
  }
  v20 = a5;
  if ( a5 > 0xFFFF || (unsigned __int16)a5 > 0x1000u )
    v20 = 4096;
  Log(a1, 128, 1751480369, (__int64)a4, v20);
  if ( (v14[640] & 0x2000) != 0 )
  {
    do
      ++v15;
    while ( a8[v15] );
    v21 = v15 + 1;
    v33 = v21 + v20 + 600;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v33, 0x42554855u);
    v23 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v21 + v20 + 600);
      v23[1] = v33;
      if ( (int)UsbhReferenceListAdd(a1, (__int64)v23, 1381516648) < 0 )
      {
LABEL_23:
        ExFreePoolWithTag(v23, 0);
        return;
      }
      *v23 = 1381516648;
      *((_QWORD *)v23 + 1) = a1;
      *((_WORD *)v23 + 16) = v20;
      if ( v20 )
      {
        *((_QWORD *)v23 + 5) = v23 + 150;
        memmove(v23 + 150, a4, v20);
      }
      v24 = (char *)v23 + v20 + 600;
      *((_QWORD *)v23 + 74) = v24;
      memmove(v24, a8, v21);
      v23[146] = a9;
      v23[6] = a7;
      v23[7] = a6;
      v23[4] = a3;
      *((_WORD *)v23 + 10) = a2;
      *((_QWORD *)v23 + 8) = MEMORY[0xFFFFF78000000014];
      if ( *((_QWORD *)v14 + 111) )
      {
        v25 = v14[220];
        v26 = v23 + 18;
        do
        {
          v27 = v14[221] & v25;
          v25 = v27 + 1;
          v28 = (_OWORD *)(*((_QWORD *)v14 + 111) + 32 * v27);
          *v26 = *v28;
          v26 += 2;
          *(v26 - 1) = v28[1];
          --v18;
        }
        while ( v18 );
      }
      UsbhExceptionTrace(a1, v23, ExceptionDispatch);
      if ( !KeGetCurrentIrql() && !*(_QWORD *)(ExceptionDispatch + 16) )
      {
        UsbhExceptionWorker(a1, a2, v23);
        return;
      }
      if ( (UsbhQueueWorkItemEx(a1, 1u, (int)UsbhExceptionWorker, (__int64)v23, a2, 1230469221, 0LL) & 0xC0000000) == 0xC0000000 )
      {
        UsbhReferenceListRemove(a1, (__int64)v23);
        goto LABEL_23;
      }
    }
  }
}
