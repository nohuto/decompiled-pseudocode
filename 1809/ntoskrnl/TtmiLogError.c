/*
 * XREFs of TtmiLogError @ 0x1407616DC
 * Callers:
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140761620 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmpAcquireSessionById @ 0x140761674 (TtmpAcquireSessionById.c)
 *     TtmNotifyDeviceArrival @ 0x14087CFC0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14087D2C0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x14087D380 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x14087D4DC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x14087D688 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpCallAssignedToTerminal @ 0x14087D92C (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x14087DA5C (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x14087DB08 (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x14087DE7C (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x14087E41C (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x14087E4E0 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmiCreateTerminal @ 0x14087E80C (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x14087EADC (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x14087EE38 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x14087F82C (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x14087F888 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x14087FB10 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x14087FBA0 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x14087FC0C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x14087FC80 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x14087FDC8 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x140880000 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140880084 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140880114 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1408801C4 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x140880254 (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x140880324 (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408805B4 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x140880650 (TtmiWriteEventToAllQueues.c)
 *     TtmpFindPowerRequestEntryById @ 0x14088097C (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x140880B98 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x1408810C0 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408812DC (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408814D0 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14088159C (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x140881658 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x140881700 (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140881988 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x140881AE0 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140881B7C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x140881CA8 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140881D8C (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x140881E2C (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140881EF0 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x140881F88 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140882038 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1408820D8 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x140882180 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiCreateEventQueue @ 0x1408822DC (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140882424 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140882594 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
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
    && (!dword_14096D1E4 || dword_14096D1E4 == a2)
    && (!dword_14096D1E8 || dword_14096D1E8 == a3)
    && (!dword_14096D1EC || dword_14096D1EC == a4) )
  {
    __debugbreak();
  }
  if ( stru_14096D820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14096D820, 2uLL) )
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
      TlgWrite(&stru_14096D820, &unk_140371C39, 0LL, 0LL, 7u, &pData);
    }
  }
}
