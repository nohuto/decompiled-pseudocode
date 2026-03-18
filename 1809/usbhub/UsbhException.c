/*
 * XREFs of UsbhException @ 0x1C0053928
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C0001FAC (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00024DC (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhSshSuspendHub @ 0x1C0003CD4 (UsbhSshSuspendHub.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0004490 (UsbhFdoD0Worker_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C00047D0 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshResumeDownstream @ 0x1C00067F0 (UsbhSshResumeDownstream.c)
 *     UsbhSetHubRemoteWake @ 0x1C0007214 (UsbhSetHubRemoteWake.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007460 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C0007DA0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C0007F68 (UsbhCheckHubPowerStatus.c)
 *     UsbhSshResumeUpstream @ 0x1C0008064 (UsbhSshResumeUpstream.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0008D5C (UsbhFdoColdStartPdo.c)
 *     UsbhSuspendPort @ 0x1C000BB60 (UsbhSuspendPort.c)
 *     UsbhResumeSuspendedPort @ 0x1C000BD20 (UsbhResumeSuspendedPort.c)
 *     UsbhBusSuspend_Action @ 0x1C000C954 (UsbhBusSuspend_Action.c)
 *     UsbhCreateDevice @ 0x1C000DE24 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C0010C7C (UsbhInitializeDevice.c)
 *     UsbhResetPort @ 0x1C0010FF0 (UsbhResetPort.c)
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0013DA0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0015D90 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0019FF0 (UsbhSyncPowerOnPorts.c)
 *     UsbhHubIsr @ 0x1C001A670 (UsbhHubIsr.c)
 *     UsbhValidateSerialNumberString @ 0x1C001CB48 (UsbhValidateSerialNumberString.c)
 *     UsbhFinishStart @ 0x1C001CBF0 (UsbhFinishStart.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001CD90 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhGetProductIdString @ 0x1C001D030 (UsbhGetProductIdString.c)
 *     UsbhConfigureUsbHub @ 0x1C001D5E4 (UsbhConfigureUsbHub.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001D850 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhQueryHubState @ 0x1C001DC3C (UsbhQueryHubState.c)
 *     UsbhGetStatus @ 0x1C001DDCC (UsbhGetStatus.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C001DE58 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001DF7C (UsbhGetHubClassDescriptor.c)
 *     UsbhGetDescriptor @ 0x1C001E07C (UsbhGetDescriptor.c)
 *     UsbhPortConnect @ 0x1C001EEA0 (UsbhPortConnect.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001F764 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C00201C8 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0020410 (UsbhPdoPnp_StartDevice.c)
 *     UsbhGetSerialNumber @ 0x1C00207C4 (UsbhGetSerialNumber.c)
 *     UsbhGetMsOsContainerID @ 0x1C0020938 (UsbhGetMsOsContainerID.c)
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C0020FCC (UsbhGetLanguageIdString.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C00211E4 (UsbhGetMSOS_Descriptor.c)
 *     UsbhCheckHubErrata @ 0x1C00212C8 (UsbhCheckHubErrata.c)
 *     UsbhCheckDeviceErrata @ 0x1C00249F4 (UsbhCheckDeviceErrata.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0025048 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetDeviceInformation @ 0x1C0025384 (UsbhGetDeviceInformation.c)
 *     UsbhBusIfAddDevice @ 0x1C0025C90 (UsbhBusIfAddDevice.c)
 *     UsbhGetBusInterface @ 0x1C0025F70 (UsbhGetBusInterface.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C00261A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C0028350 (UsbhFdoPnp_StartDevice.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0029650 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C002A3E0 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1C002A760 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhFdoDeviceControl @ 0x1C003E370 (UsbhFdoDeviceControl.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C003F580 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetPortPower @ 0x1C003F8B0 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x1C0040DB4 (UsbhSetPortIndicator.c)
 *     UsbhFdoCyclePdoPort @ 0x1C0041B9C (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x1C0041F30 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C0042140 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C00426D4 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0045370 (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1C0046ACC (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C00471D4 (UsbhDisablePort.c)
 *     UsbhGetBillboardInfo @ 0x1C0047598 (UsbhGetBillboardInfo.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0047BA0 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x1C0047F10 (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumePort @ 0x1C0048790 (UsbhSyncResumePort.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C004A190 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C004AF18 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C004BF70 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004C714 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C004CA38 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C004CC8C (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004CF1C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C004D1BC (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004D42C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004D894 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004DBAC (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004DE94 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004E15C (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004E424 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C004E6E4 (UsbhIoctlResetStuckHub.c)
 *     UsbhIoctlValidateParameters @ 0x1C004EB08 (UsbhIoctlValidateParameters.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C00501A0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhHandleOvercurrent @ 0x1C0054DC0 (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x1C0055000 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C00550E0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortResumeFailed @ 0x1C0055640 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1C0055A40 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1C0055D50 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C0055F50 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C00564B0 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C0056594 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C000E0A0 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x1C000E1D0 (UsbhReferenceListAdd.c)
 *     UsbhQueueWorkItemEx @ 0x1C00111F0 (UsbhQueueWorkItemEx.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     memmove @ 0x1C002B4C0 (memmove.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhExceptionTrace @ 0x1C0053C20 (UsbhExceptionTrace.c)
 *     UsbhExceptionWorker @ 0x1C0053F00 (UsbhExceptionWorker.c)
 *     UsbhGetExceptionDispatch @ 0x1C0053FF4 (UsbhGetExceptionDispatch.c)
 *     UsbhEtwLogHubException @ 0x1C005CD64 (UsbhEtwLogHubException.c)
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
