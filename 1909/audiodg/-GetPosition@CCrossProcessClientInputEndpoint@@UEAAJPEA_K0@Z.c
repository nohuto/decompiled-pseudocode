/*
 * XREFs of ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x1400546C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     McTemplateU0pqxxxxffff @ 0x1400536F4 (McTemplateU0pqxxxxffff.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053CE8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetPosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 **a3)
{
  int v3; // ebx
  unsigned __int64 *v5; // rcx

  v3 = 0;
  if ( a2 )
  {
    v5 = *(unsigned __int64 **)(*((_QWORD *)this - 42) + 16LL);
    *a2 = (unsigned __int64)v5;
    if ( a3 )
    {
      *a3 = *(unsigned __int64 **)(*((_QWORD *)this - 42) + 56LL);
      v5 = (unsigned __int64 *)*a2;
    }
    *((_QWORD *)this - 28) = v5;
  }
  else
  {
    v3 = -2147467261;
  }
  if ( (byte_140086281 & 4) != 0 )
  {
    if ( a3 )
      a3 = (unsigned __int64 **)*a3;
    if ( a2 )
      a2 = (unsigned __int64 *)*a2;
    McTemplateU0pqxxxxffff(
      *((_QWORD *)this - 42),
      (__int64)a2,
      0LL,
      6,
      (char)a2,
      (char)a3,
      *(_QWORD *)(*((_QWORD *)this - 42) + 16LL),
      *(_QWORD *)(*((_QWORD *)this - 42) + 24LL),
      0,
      0,
      0,
      0);
  }
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_4f0ed37fbc483b3865e07d1aeee510ae_Traceguids, v3);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetPosition", 0x171u, v3);
  }
  return (unsigned int)v3;
}
