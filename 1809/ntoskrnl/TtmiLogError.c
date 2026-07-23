/*
 * XREFs of TtmiLogError @ 0x1407628CC
 * Callers:
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140762810 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmpAcquireSessionById @ 0x140762864 (TtmpAcquireSessionById.c)
 *     TtmNotifyDeviceArrival @ 0x14087E220 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14087E520 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x14087E5E0 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x14087E73C (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x14087E8E8 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpCallAssignedToTerminal @ 0x14087EB8C (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x14087ECBC (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x14087ED68 (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x14087F0DC (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x14087F67C (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x14087F740 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmiCreateTerminal @ 0x14087FA6C (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x14087FD3C (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x140880098 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x140880A8C (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x140880AE8 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x140880D70 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x140880E00 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x140880E6C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140880EE0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x140881028 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x140881260 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408812E4 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140881374 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x140881424 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1408814B4 (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x140881584 (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x140881814 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1408818B0 (TtmiWriteEventToAllQueues.c)
 *     TtmpFindPowerRequestEntryById @ 0x140881BDC (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x140881DF8 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x140882320 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x14088253C (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x140882730 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408827FC (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1408828B8 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x140882960 (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140882BE8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x140882D40 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140882DDC (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x140882F08 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140882FEC (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x14088308C (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140883150 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1408831E8 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140883298 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x140883338 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1408833E0 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiCreateEventQueue @ 0x14088353C (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140883684 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408837F4 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
    && (!dword_14096E1E4 || dword_14096E1E4 == a2)
    && (!dword_14096E1E8 || dword_14096E1E8 == a3)
    && (!dword_14096E1EC || dword_14096E1EC == a4) )
  {
    __debugbreak();
  }
  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14096E820, 2uLL) )
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
      TlgWrite(&stru_14096E820, &unk_140372CFD, 0LL, 0LL, 7u, &pData);
    }
  }
}
