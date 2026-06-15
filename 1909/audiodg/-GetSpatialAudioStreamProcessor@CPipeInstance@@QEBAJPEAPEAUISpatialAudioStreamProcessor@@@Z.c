/*
 * XREFs of ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x14000B280
 * Callers:
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000B7EC (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x1400106B4 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 * Callees:
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14000B120 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetSpatialAudioStreamProcessor(
        CPipeInstance *this,
        struct ISpatialAudioStreamProcessor **a2)
{
  struct IAudioProcessingObject *v3; // rbx
  unsigned int v4; // edi
  struct IAudioProcessingObject *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  *a2 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a, 0LL, 0LL, &v6);
  v3 = v6;
  if ( v6 )
    v4 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct ISpatialAudioStreamProcessor **))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
           a2);
  else
    v4 = -2147023728;
  if ( v3 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v3->lpVtbl->Release)(v3);
  return v4;
}
