/*
 * XREFs of ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x1400557A0
 * Callers:
 *     ?GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11@Z @ 0x140054DA0 (-GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11@Z.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140055088 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x1400555A8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x140055810 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@_K@Z @ 0x140057D40 (-AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFF.c)
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140058030 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

bool __fastcall CCrossProcessBaseEndpoint::IsValidQueueIndex(
        CCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3)
{
  bool v3; // bl

  v3 = a2 < a3;
  if ( a2 >= a3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x25u,
        (__int64)&WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
        -2147467259);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidQueueIndex", 0x731u, -2147467259);
  }
  return v3;
}
