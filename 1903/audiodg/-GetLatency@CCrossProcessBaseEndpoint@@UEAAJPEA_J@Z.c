/*
 * XREFs of ?GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z @ 0x1400527B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053DD8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetLatency(CCrossProcessBaseEndpoint *this, __int64 *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    if ( a2 )
    {
      *a2 = *((_QWORD *)this + 21);
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids, v2);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetLatency", 0x163u, v2);
  return v2;
}
