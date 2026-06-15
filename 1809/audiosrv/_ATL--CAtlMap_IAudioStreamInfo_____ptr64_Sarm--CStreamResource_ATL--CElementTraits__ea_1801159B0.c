/*
 * XREFs of _ATL::CAtlMap_IAudioStreamInfo_____ptr64_Sarm::CStreamResource_ATL::CElementTraits_IAudioStreamInfo_____ptr64__ATL::CElementTraits_Sarm::CStreamResource___::SetAt_::_1_::catch$0 @ 0x1801159B0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006888B (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180115308 (-RemoveAtPos@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudio.c)
 */

void __fastcall __noreturn ATL::CAtlMap_IAudioStreamInfo_____ptr64_Sarm::CStreamResource_ATL::CElementTraits_IAudioStreamInfo_____ptr64__ATL::CElementTraits_Sarm::CStreamResource___::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAtPos(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  throw;
}
