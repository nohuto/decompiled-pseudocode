/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140011C30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     McTemplateU0p @ 0x140053548 (McTemplateU0p.c)
 *     WPP_SF_s @ 0x1400538B8 (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053CE8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0pqxxx @ 0x1400549A8 (McTemplateU0pqxxx.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx

  v3 = a2;
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx((_DWORD)this, a2, (_DWORD)this - 456, 7, a2, 0, 0);
  LODWORD(v4) = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL);
  if ( v3 )
  {
    LODWORD(v4) = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL) & 1;
    if ( (_BYTE)v4 || (*((_BYTE *)this - 280) & 1) != 0 )
    {
      a2 = *((_QWORD *)this - 48);
      v4 = *(_QWORD *)(a2 + 24);
      if ( v4 < 0 )
      {
        if ( (byte_140086281 & 4) != 0 )
          McTemplateU0p(v4, a2, (char *)this - 456);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) )
        {
          WPP_SF_s(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            34LL,
            &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids,
            "Security failure - memory overwrite detected - Invalid offset.");
        }
        _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 48) + 164LL), 0xFFFFFFFE);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids, 0LL);
        }
        AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6B5u, -2147467259);
      }
      else if ( *((_DWORD *)this + 4) <= 1u )
      {
        v4 += (unsigned int)(v3 * *((_DWORD *)this - 92) - *((_DWORD *)this + 20));
        if ( v4 > *(_QWORD *)(a2 + 16) )
          v4 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 24) = v4;
      }
    }
  }
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx(v4, a2, (_DWORD)this - 456, 8, v3, *((_DWORD *)this + 4), 0);
  *((_DWORD *)this + 4) = 3;
}
