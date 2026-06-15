/*
 * XREFs of ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140052DC4
 * Callers:
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140052CA8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140053080 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x1400533F0 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140053520 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140054510 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x1400548D0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     McTemplateU0p @ 0x140053638 (McTemplateU0p.c)
 *     WPP_SF_s @ 0x1400539A8 (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053DD8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidFlags(CCrossProcessBaseEndpoint *this, __int64 a2)
{
  char v3; // bl

  if ( (a2 & 0xFFFFFFF8) == 0 )
    return 1;
  if ( (byte_140087281 & 4) != 0 )
    McTemplateU0p(this, a2, this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) )
  {
    WPP_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      31LL,
      &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids,
      "Security failure - memory overwrite detected -invalid flags.");
  }
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 9) + 164LL), 0xFFFFFFFE);
  v3 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids, 0);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidFlags", 0x693u, -2147467259);
  return v3;
}
