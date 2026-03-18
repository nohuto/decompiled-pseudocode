/*
 * XREFs of TtmiLogError @ 0x1408C1CAC
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408BAAC0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408BADC0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408BAE80 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1408BAFDC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1408BB198 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpCallAssignedToTerminal @ 0x1408BB430 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1408BB560 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1408BB60C (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1408BB97C (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1408BBF40 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1408BC004 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmiCreateTerminal @ 0x1408BC32C (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x1408BC600 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1408BC9B4 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x1408BD3BC (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x1408BD418 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408BD6A0 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408BD730 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408BD79C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408BD824 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1408BD980 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408BDB9C (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408BDC24 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1408BDCB4 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1408BDD64 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1408BDF10 (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408BDFD0 (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408BE260 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1408BE2FC (TtmiWriteEventToAllQueues.c)
 *     TtmpAcquireSessionById @ 0x1408BE374 (TtmpAcquireSessionById.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1408BE720 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmpFindPowerRequestEntryById @ 0x1408BE794 (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x1408BE974 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x1408BEE70 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408BF074 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408BF260 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408BF32C (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1408BF3E8 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x1408BF490 (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408BF718 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1408BF870 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1408BF90C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1408BFA10 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1408BFAF4 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1408BFB94 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1408BFC58 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1408BFCF0 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1408BFDA0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1408BFE40 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1408BFEE8 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiCreateEventQueue @ 0x1408C0044 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1408C01D4 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408C0344 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400ED314 (_TlgCreateSz.c)
 *     PsGetProcessSessionIdEx @ 0x1400EE790 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall TtmiLogError(LPCSTR psz, int a2, int a3, int a4)
{
  int ProcessSessionId; // eax
  int v9; // r9d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  if ( TtmpBreakOnError
    && (!dword_1409AD27C || dword_1409AD27C == a2)
    && (!dword_1409AD280 || dword_1409AD280 == a3)
    && (!dword_1409AD284 || dword_1409AD284 == a4) )
  {
    __debugbreak();
  }
  if ( stru_1409AD8E0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1409AD8E0, 2uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v17 = 0;
      v10 = ProcessSessionId;
      v11 = a2;
      v15 = &v10;
      v12 = a3;
      v13 = a4;
      v16 = 4;
      TlgCreateSz(&pDesc, psz);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v22 = &v12;
      v25 = &v13;
      v19 = &v11;
      v20 = v9;
      v23 = v9;
      v26 = v9;
      TlgWrite(&stru_1409AD8E0, &unk_1403923CE, 0LL, 0LL, 7u, &pData);
    }
  }
}
