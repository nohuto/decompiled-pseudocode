/*
 * XREFs of _TlgWrite @ 0x1800010A0
 * Callers:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800042F4 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800045A8 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x1800050F0 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x180006FE0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x1800075E0 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000AEB4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000B4D8 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18001175C (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x180023B80 (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 *     ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x180023C64 (-ResetUserSettings@@YAXPEAVTSSession@@@Z.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x1800241D0 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180024510 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z @ 0x18002624C (-TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x1800265F0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     _lambda_d471d741133b083a671d83372ad1cc78_::operator() @ 0x180026924 (_lambda_d471d741133b083a671d83372ad1cc78_--operator().c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *(unsigned __int8 *)pEventMetadata << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  pData->Size = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EventWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, 0LL, 0LL, cData, pData);
}
