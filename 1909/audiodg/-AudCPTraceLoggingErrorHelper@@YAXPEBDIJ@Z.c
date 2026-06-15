/*
 * XREFs of ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053CE8
 * Callers:
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140001BD4 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400028D8 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140002910 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140003110 (-GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140011C30 (-ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140052010 (-GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z @ 0x1400520F0 (-GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z.c)
 *     ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140052170 (-GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFramesPerPacket@CCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x140052590 (-GetFramesPerPacket@CCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z @ 0x140052620 (-GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z.c)
 *     ?GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z @ 0x1400526C0 (-GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140052748 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140052BB8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140052CD4 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140052DB8 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x140052E6C (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140052F90 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x1400530F0 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140053300 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140053430 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140054310 (-GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x1400546C0 (-GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140054A60 (-GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140054F60 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x1400551E0 (-GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140055518 (-GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140056030 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14000EEB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x14002BFF8 (_TlgCreateSz.c)
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
  if ( (unsigned int)dword_140085000 > 2 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_140085000, 1uLL) )
    {
      TlgCreateSz(&pDesc, v3);
      v8 = 0;
      v11 = 0;
      Data4 = pRelatedActivityId.Data4;
      v7 = 4;
      v10 = 4;
      p_pRelatedActivityId = &pRelatedActivityId;
      TlgWrite((TraceLoggingHProvider)&dword_140085000, &unk_14007027A, 0LL, &pRelatedActivityId, 5u, &pData);
    }
  }
}
