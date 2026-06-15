/*
 * XREFs of ?GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140052100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053DD8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetBufferSize(
        CCrossProcessBaseClientEndpoint *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 384);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 384));
  if ( a2 )
  {
    if ( *((_DWORD *)this - 86) )
      *a2 = *((_DWORD *)this - 62) / *((_DWORD *)this - 78);
    else
      v5 = -2005139437;
  }
  else
  {
    v5 = -2147467261;
  }
  LeaveCriticalSection(v2);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids,
        v5);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetBufferSize", 0x47Du, v5);
  }
  return (unsigned int)v5;
}
