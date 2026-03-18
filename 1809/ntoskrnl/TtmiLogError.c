/*
 * XREFs of TtmiLogError @ 0x1407616FC
 * Callers:
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140761640 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmpAcquireSessionById @ 0x140761694 (TtmpAcquireSessionById.c)
 *     TtmNotifyDeviceArrival @ 0x14087CFE0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14087D2E0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x14087D3A0 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x14087D4FC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x14087D6A8 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpCallAssignedToTerminal @ 0x14087D94C (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x14087DA7C (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x14087DB28 (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x14087DE9C (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x14087E43C (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x14087E500 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmiCreateTerminal @ 0x14087E82C (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x14087EAFC (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x14087EE58 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x14087F84C (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x14087F8A8 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x14087FB30 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x14087FBC0 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x14087FC2C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x14087FCA0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x14087FDE8 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x140880020 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408800A4 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140880134 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1408801E4 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x140880274 (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x140880344 (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408805D4 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x140880670 (TtmiWriteEventToAllQueues.c)
 *     TtmpFindPowerRequestEntryById @ 0x14088099C (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x140880BB8 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x1408810E0 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408812FC (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408814F0 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408815BC (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x140881678 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x140881720 (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408819A8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x140881B00 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140881B9C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x140881CC8 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140881DAC (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x140881E4C (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140881F10 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x140881FA8 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140882058 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1408820F8 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1408821A0 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiCreateEventQueue @ 0x1408822FC (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140882444 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408825B4 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
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
      TlgWrite(&stru_14096D820, &unk_140371C16, 0LL, 0LL, 7u, &pData);
    }
  }
}
