/*
 * XREFs of ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C
 * Callers:
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14000F364 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140014210 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140014AE8 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140014D70 (-ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14001A0B0 (-GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140054980 (-GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z @ 0x140054A60 (-GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z.c)
 *     ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140054AE0 (-GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFramesPerPacket@CCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x140054ED0 (-GetFramesPerPacket@CCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z @ 0x140054F60 (-GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z.c)
 *     ?GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z @ 0x140055000 (-GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140055088 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x1400551D0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x1400555A8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400556C4 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x1400557A0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x140055810 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140055930 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140055AA0 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140055CB0 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140055E00 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x1400564E0 (-GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140056860 (-GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140056B00 (-GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140056FF0 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140057220 (-GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140057550 (-GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140058030 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140019808 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400329B8 (_TlgCreateSz.c)
 */

void __fastcall AudCPTraceLoggingErrorHelper(const char *a1, unsigned int a2, int a3)
{
  const CHAR *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp+17h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+60h] [rbp+27h]
  int v7; // [rsp+68h] [rbp+2Fh]
  int v8; // [rsp+6Ch] [rbp+33h]
  unsigned __int8 *Data4; // [rsp+70h] [rbp+37h]
  int v10; // [rsp+78h] [rbp+3Fh]
  int v11; // [rsp+7Ch] [rbp+43h]
  GUID pRelatedActivityId; // [rsp+A8h] [rbp+6Fh] BYREF

  *(_DWORD *)pRelatedActivityId.Data4 = a3;
  pRelatedActivityId.Data1 = a2;
  if ( (unsigned int)dword_140088010 > 2 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_140088010, 1uLL) )
    {
      TlgCreateSz(&pDesc, v3);
      v8 = 0;
      v11 = 0;
      Data4 = pRelatedActivityId.Data4;
      v7 = 4;
      v10 = 4;
      p_pRelatedActivityId = &pRelatedActivityId;
      TlgWrite((TraceLoggingHProvider)&dword_140088010, &unk_1400726A1, 0LL, &pRelatedActivityId, 5u, &pData);
    }
  }
}
