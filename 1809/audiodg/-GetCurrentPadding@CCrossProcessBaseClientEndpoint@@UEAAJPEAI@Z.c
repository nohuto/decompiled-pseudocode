/*
 * XREFs of ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140054AE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140054BF0 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetCurrentPadding(
        CCrossProcessBaseClientEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this - 86, 1, 1) )
    {
      CCrossProcessBaseEndpoint::GetCurrentPadding((CCrossProcessBaseClientEndpoint *)((char *)this - 392), &v6, 0LL);
      *a2 = (int)((double)(int)(*(_DWORD *)(*((_QWORD *)this - 41) + 180LL)
                              / (unsigned int)*(unsigned __int16 *)(*((_QWORD *)this - 41) + 184LL))
                * (double)(int)v6
                / 10000000.0
                + 0.5);
      return v2;
    }
    v2 = -2005139437;
  }
  else
  {
    v2 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, (__int64)&WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids, v2);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetCurrentPadding", 0x4E1u, v2);
  return v2;
}
