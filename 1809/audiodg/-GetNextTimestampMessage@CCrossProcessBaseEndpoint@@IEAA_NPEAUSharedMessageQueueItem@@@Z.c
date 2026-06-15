/*
 * XREFs of ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140055088
 * Callers:
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x140056960 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11@Z @ 0x140054DA0 (-GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x1400557A0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

bool __fastcall CCrossProcessBaseEndpoint::GetNextTimestampMessage(
        volatile __int32 **this,
        struct SharedMessageQueueItem *a2)
{
  __int32 v3; // ebx
  CCrossProcessBaseEndpoint *v5; // rcx
  __int64 v6; // rsi
  struct SharedMessageQueueItem *v7; // rax
  int v8; // edx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  volatile __int32 *v12; // rax
  bool v13; // zf
  volatile __int32 *v14; // rcx
  volatile __int32 *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-28h] BYREF
  struct SharedMessageQueueItem *v18; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v18 = 0LL;
  CCrossProcessBaseEndpoint::GetCurrentQueue((CCrossProcessBaseEndpoint *)this, &v18, &v19, &v20, &v17);
  v6 = v19;
  if ( v19 != v20 )
  {
    if ( CCrossProcessBaseEndpoint::IsValidQueueIndex(v5, v19, v17) )
    {
      v7 = v18;
      v8 = v6 + 1;
      v9 = *((_OWORD *)v18 + 4 * v6 + 1);
      *(_OWORD *)a2 = *((_OWORD *)v18 + 4 * v6);
      v10 = *((_OWORD *)v7 + 4 * v6 + 2);
      *((_OWORD *)a2 + 1) = v9;
      v11 = *((_OWORD *)v7 + 4 * v6 + 3);
      v12 = this[8];
      *((_OWORD *)a2 + 2) = v10;
      *((_OWORD *)a2 + 3) = v11;
      v13 = *((_DWORD *)v12 + 45) == -1;
      v14 = this[8];
      v15 = this[9];
      if ( v13 )
      {
        if ( v8 != *((_DWORD *)v15 + 33) )
          v3 = v6 + 1;
      }
      else if ( v8 == *((_DWORD *)v15 + 35) )
      {
        _InterlockedExchange(v14 + 45, -1);
        _InterlockedExchange(this[8] + 46, 0);
        v14 = this[8] + 47;
      }
      else
      {
        v14 += 46;
        v3 = v6 + 1;
      }
      _InterlockedExchange(v14, v3);
      LOBYTE(v3) = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Du,
          (__int64)&WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
          0);
      }
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetNextTimestampMessage", 0x5B8u, -2147467259);
    }
  }
  return v3;
}
