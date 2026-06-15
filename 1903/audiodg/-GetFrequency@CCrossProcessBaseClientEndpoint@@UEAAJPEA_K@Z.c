/*
 * XREFs of ?GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z @ 0x140052710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053DD8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetFrequency(
        CCrossProcessBaseClientEndpoint *this,
        unsigned __int64 *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this - 88, 1, 1) )
    {
      *a2 = *(unsigned int *)(*((_QWORD *)this - 41) + 180LL);
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
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids, v2);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetFrequency", 0x4E2u, v2);
  return v2;
}
