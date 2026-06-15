/*
 * XREFs of ?GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z @ 0x1400520F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053CE8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetCharacteristics(
        CCrossProcessBaseClientEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *a2 = 1;
  }
  else
  {
    v2 = -2147467261;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids,
        -2147467261);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetCharacteristics", 0x508u, -2147467261);
  }
  return v2;
}
