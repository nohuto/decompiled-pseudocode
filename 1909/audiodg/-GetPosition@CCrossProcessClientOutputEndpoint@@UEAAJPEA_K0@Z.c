/*
 * XREFs of ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140054F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     McTemplateU0pqxxxxffff @ 0x1400536F4 (McTemplateU0pqxxxxffff.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053CE8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x1400551E0 (-GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140055518 (-GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  int v6; // edi
  bool v7; // zf
  char *v8; // rbp
  CCrossProcessClientOutputEndpoint *v9; // rcx
  int Position_NonOffload; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  double LowPart; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm1_8
  double v16; // xmm0_8
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a3 )
      *a3 = 0LL;
    v7 = (*((_BYTE *)this - 232) & 1) == 0;
    v8 = (char *)this - 408;
    v9 = (CCrossProcessClientOutputEndpoint *)((char *)this - 408);
    if ( v7 )
      Position_NonOffload = CCrossProcessClientOutputEndpoint::GetPosition_NonOffload(v9, a2, a3);
    else
      Position_NonOffload = CCrossProcessClientOutputEndpoint::GetPosition_Offload(v9, a2, a3);
    v6 = Position_NonOffload;
    if ( Position_NonOffload >= 0 )
    {
      v11 = *((_QWORD *)this - 28);
      if ( *a2 < v11 )
      {
        if ( (byte_140086281 & 4) != 0 )
        {
          McTemplateU0pqxxxxffff(
            *((unsigned int *)this - 80),
            (v11 - *a2) % *((unsigned int *)this - 80),
            (__int64)v8,
            8,
            *a2,
            v11,
            (v11 - *a2) / *((unsigned int *)this - 80),
            0,
            0,
            0,
            0,
            0);
          v11 = *((_QWORD *)this - 28);
        }
        *a2 = v11;
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( a3 && !*a3 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    LowPart = (double)(int)PerformanceCount.LowPart;
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = LowPart + 1.844674407370955e19;
    v14 = LowPart * 10000000.0;
    v15 = (double)(int)g_u64QPCFrequency;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v15 = v15 + 1.844674407370955e19;
    v16 = v14 / v15;
    v17 = (unsigned int)(int)v16;
    *a3 = v17;
    if ( (byte_140086281 & 4) != 0 )
    {
      if ( a2 )
        v18 = *a2;
      else
        LOBYTE(v18) = 0;
      McTemplateU0pqxxxxffff(v17, v12, (__int64)this - 408, 6, v18, (int)v16, 0, 0, 0, 0, 0, 0);
    }
  }
  if ( a2 )
  {
    v19 = *((_QWORD *)this - 28);
    v20 = *a2;
    if ( *a2 < v19 && (byte_140086281 & 4) != 0 )
    {
      McTemplateU0pqxxxxffff(*a2, v19, (__int64)this - 408, 8, *a2, v19, *((_DWORD *)this - 80), 0, 0, 0, 0, 0);
      v20 = *a2;
    }
    *((_QWORD *)this - 28) = v20;
  }
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_cf63f31659183c1d56c0a39f6c8110d7_Traceguids, v6);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition", 0x8Du, v6);
  }
  return (unsigned int)v6;
}
