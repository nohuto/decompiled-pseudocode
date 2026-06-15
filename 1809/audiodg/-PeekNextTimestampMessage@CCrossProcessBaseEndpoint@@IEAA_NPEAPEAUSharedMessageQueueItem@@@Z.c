/*
 * XREFs of ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x140055810
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140056420 (-GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x1400564E0 (-GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400565E0 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11@Z @ 0x140054DA0 (-GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x1400557A0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
        CCrossProcessBaseEndpoint *this,
        struct SharedMessageQueueItem **a2)
{
  char v3; // bl
  CCrossProcessBaseEndpoint *v4; // rcx
  __int64 v5; // rdi
  unsigned int v7; // [rsp+30h] [rbp-18h] BYREF
  struct SharedMessageQueueItem *v8; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v8 = 0LL;
  CCrossProcessBaseEndpoint::GetCurrentQueue(this, &v8, &v9, &v10, &v7);
  v5 = v9;
  if ( v9 != v10 )
  {
    if ( CCrossProcessBaseEndpoint::IsValidQueueIndex(v4, v9, v7) )
    {
      v3 = 1;
      *a2 = (struct SharedMessageQueueItem *)((char *)v8 + 64 * v5);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Cu,
          (__int64)&WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
          0);
      }
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::PeekNextTimestampMessage", 0x56Cu, -2147467259);
    }
  }
  return v3;
}
