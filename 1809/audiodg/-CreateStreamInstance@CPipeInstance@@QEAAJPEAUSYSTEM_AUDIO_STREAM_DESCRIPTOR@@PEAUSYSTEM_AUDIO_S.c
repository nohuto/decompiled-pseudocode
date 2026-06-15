/*
 * XREFs of ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140018580
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140018630 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001866C (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamInstance(
        CPipeInstance *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct SYSTEM_AUDIO_STREAM *a3)
{
  CStreamProcessNode **Head; // rax
  struct CProcessNode *v7; // rbp
  int StreamInstance; // ebx

  Head = (CStreamProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)this + 2);
  v7 = *Head;
  StreamInstance = CStreamProcessNode::CreateStreamInstance(
                     *Head,
                     a2,
                     (unsigned int)(int)((double)*((int *)this + 34)
                                       * 10000000.0
                                       / (double)*(int *)(*((_QWORD *)a2 + 10) + 4LL)
                                       + 0.5),
                     *((_DWORD *)this + 34),
                     a3);
  if ( StreamInstance < 0
    || (StreamInstance = CPipeInstance::EngageSpatialAudioStreamProcessorAPO(this, v7, a2), StreamInstance < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
        (unsigned int)StreamInstance);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamInstance", 0x42Bu, StreamInstance);
  }
  return (unsigned int)StreamInstance;
}
