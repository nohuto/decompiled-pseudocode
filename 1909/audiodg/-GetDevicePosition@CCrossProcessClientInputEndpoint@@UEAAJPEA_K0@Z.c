/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140054310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x140052E6C (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     McTemplateU0pqxxxx @ 0x140053638 (McTemplateU0pqxxxx.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053CE8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetDevicePosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  struct SharedMessageQueueItem *v8; // rcx
  __int64 v9; // rax
  struct SharedMessageQueueItem *v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    v11 = 0LL;
    if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
            (CCrossProcessClientInputEndpoint *)((char *)this - 416),
            &v11) )
    {
      v8 = v11;
      *a2 = *((_QWORD *)v11 + 2);
      if ( a3 )
        *a3 = *((_QWORD *)v8 + 5);
      if ( (byte_140086281 & 4) != 0 )
      {
        LOBYTE(v9) = 0;
        if ( a3 )
          v9 = *a3;
        McTemplateU0pqxxxx(*a2, v7, 0LL, 7, 0, *a2, 0, v9);
      }
    }
    *((_QWORD *)this - 28) = *a2;
  }
  else
  {
    v3 = -2147467261;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_4f0ed37fbc483b3865e07d1aeee510ae_Traceguids,
        -2147467261);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetDevicePosition", 0x1B9u, -2147467261);
  }
  return v3;
}
