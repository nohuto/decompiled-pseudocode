/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140054A60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     McTemplateU0pqxxxx @ 0x140053638 (McTemplateU0pqxxxx.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053CE8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetDevicePosition(
        CCrossProcessClientOutputEndpoint *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v4; // rbx
  int v6; // esi
  int v7; // r9d
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  int v10; // r11d
  double LowPart; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm1_8
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  PerformanceCount.QuadPart = 0LL;
  v4 = (unsigned __int64 *)a2;
  if ( a2 )
  {
    if ( a3 )
      *a3 = 0LL;
    _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 43) + 164LL), 0, 0);
    v6 = 0;
    v7 = 3;
    while ( 1 )
    {
      v8 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 43) + 160LL), 0, 0);
      a2 = 5 * v8;
      v9 = *(_QWORD *)(*((_QWORD *)this - 43) + 40 * v8 + 32);
      v10 = *(_DWORD *)(*((_QWORD *)this - 43) + 40 * v8 + 68);
      if ( (_DWORD)v8 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 43) + 160LL), 0, 0) )
        break;
      if ( !--v7 )
      {
        v6 = -2005139393;
        *v4 = *((_QWORD *)this - 28);
        goto LABEL_12;
      }
    }
    if ( v10 )
    {
      *v4 = v9;
    }
    else
    {
      v6 = -2005139375;
      *v4 = *((_QWORD *)this - 28);
    }
  }
  else
  {
    v6 = -2147467261;
  }
LABEL_12:
  if ( a3 && !*a3 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    LowPart = (double)(int)PerformanceCount.LowPart;
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = LowPart + 1.844674407370955e19;
    v12 = LowPart * 10000000.0;
    v13 = (double)(int)g_u64QPCFrequency;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v13 = v13 + 1.844674407370955e19;
    *a3 = (unsigned int)(int)(v12 / v13);
  }
  if ( (byte_140086281 & 4) != 0 )
  {
    v14 = 0LL;
    if ( a3 )
      v14 = *a3;
    LOBYTE(v15) = 0;
    if ( v4 )
      v15 = *v4;
    McTemplateU0pqxxxx(v14, a2, (__int64)this - 416, 7, 0, v15, 0, v14);
  }
  if ( v4 )
    *((_QWORD *)this - 28) = *v4;
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_cf63f31659183c1d56c0a39f6c8110d7_Traceguids, v6);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetDevicePosition", 0x23Au, v6);
  }
  return (unsigned int)v6;
}
