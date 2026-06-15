/*
 * XREFs of ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140052170
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140052280 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053CE8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
      *a2 = (int)((double)(int)(*(_DWORD *)(*((_QWORD *)this - 40) + 180LL)
                              / (unsigned int)*(unsigned __int16 *)(*((_QWORD *)this - 40) + 184LL))
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
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, (__int64)&WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids, v2);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetCurrentPadding", 0x4B1u, v2);
  return v2;
}
