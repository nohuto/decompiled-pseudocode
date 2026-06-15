/*
 * XREFs of WPP_SF_ @ 0x1800041BC
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180004FD0 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ??0CDuckingManager@@AEAA@XZ @ 0x180008C2C (--0CDuckingManager@@AEAA@XZ.c)
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180009150 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180009460 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000AEB4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000B2C0 (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x18000E718 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x1800107FC (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x1800108FC (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180011E50 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18001BB80 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x18001CE90 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180024680 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x1800265F0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180026CE0 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x1800275E4 (-TS_ServiceStart@@YAXXZ.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x180029D8C (--0CDriverListener@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_(TRACEHANDLE a1, USHORT a2, const GUID *a3)
{
  return TraceMessage(a1, 0x2Bu, a3, a2, 0LL);
}
