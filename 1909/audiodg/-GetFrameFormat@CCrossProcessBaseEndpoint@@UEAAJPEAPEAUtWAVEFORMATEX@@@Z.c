/*
 * XREFs of ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140003110
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140003FAC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053CE8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetFrameFormat(
        CCrossProcessBaseEndpoint *this,
        struct tWAVEFORMATEX **a2)
{
  unsigned int v2; // ebx

  if ( *((_DWORD *)this + 14) )
  {
    if ( a2 )
    {
      v2 = CloneWaveFormat((const struct tWAVEFORMATEX *)(*((_QWORD *)this + 10) + 172LL), a2);
      if ( (v2 & 0x80000000) == 0 )
        return v2;
    }
    else
    {
      v2 = -2147467261;
    }
  }
  else
  {
    v2 = -2005139437;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids, v2);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetFrameFormat", 0x1E6u, v2);
  return v2;
}
