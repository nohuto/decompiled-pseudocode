/*
 * XREFs of WPP_SF_ @ 0x14002BE40
 * Callers:
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140001CCC (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003868 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140005B10 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000606C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140011CD0 (-PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140011D20 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     _lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_::operator() @ 0x140029DD8 (_lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_--operator().c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14002AE10 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14002B804 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x14002F1D0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400317A0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140033EB0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140034838 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140034F74 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140037060 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x1400374A0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14003780C (-FinalRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x1400387B0 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140038C20 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14004093C (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140040A60 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x140040B84 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140040D1C (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140040E90 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ @ 0x14004FC60 (-PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ @ 0x140052F40 (-ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14005F59C (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, 0LL);
}
