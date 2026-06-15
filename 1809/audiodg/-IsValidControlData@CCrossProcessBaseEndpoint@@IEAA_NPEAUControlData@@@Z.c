/*
 * XREFs of ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x1400555A8
 * Callers:
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x1400551D0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14000D45C (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400556C4 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x1400557A0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidControlData(CCrossProcessBaseEndpoint *this, struct ControlData *a2)
{
  char v2; // di
  unsigned int v5; // eax
  CCrossProcessBaseEndpoint *v6; // rcx
  unsigned int v7; // r8d
  CCrossProcessBaseEndpoint *v8; // rcx

  v2 = 0;
  if ( *((_DWORD *)a2 + 48) == 1162888004
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)((char *)a2 + 368)) >= 0
    && *((_DWORD *)a2 + 49) == *((unsigned __int16 *)a2 + 192) + 192LL )
  {
    v5 = *((_DWORD *)a2 + 88);
    if ( *((_DWORD *)a2 + 87) < v5
      && v5 <= *((_DWORD *)a2 + 89)
      && CCrossProcessBaseEndpoint::IsValidFlags(this, *((_DWORD *)a2 + 41)) )
    {
      v7 = *(_DWORD *)(*((_QWORD *)this + 9) + 132LL);
      if ( !v7
        || CCrossProcessBaseEndpoint::IsValidQueueIndex(v6, *(_DWORD *)a2, v7)
        && CCrossProcessBaseEndpoint::IsValidQueueIndex(
             v8,
             *((_DWORD *)a2 + 1),
             *(_DWORD *)(*((_QWORD *)this + 9) + 132LL)) )
      {
        return 1;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x26u,
      (__int64)&WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
      -2147467259);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidControlData", 0x7BEu, -2147467259);
  return v2;
}
