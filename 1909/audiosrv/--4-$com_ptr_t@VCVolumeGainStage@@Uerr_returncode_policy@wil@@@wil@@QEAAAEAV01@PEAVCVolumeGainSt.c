/*
 * XREFs of ??4?$com_ptr_t@VCVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVolumeGainStage@@@Z @ 0x1800CCA38
 * Callers:
 *     ?AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCVolumeGainStage@@@Z @ 0x1800CCC60 (-AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCVolumeGainStage@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioMetadataDictionary@@UISpatialAudioMetadataDictionaryData@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800CEE24 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D0CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 */

__int64 *__fastcall wil::com_ptr_t<CVolumeGainStage,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // r10

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioMetadataDictionary,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase>::InternalAddRef(a2);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v2);
  return a1;
}
