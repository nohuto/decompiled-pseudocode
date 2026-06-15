/*
 * XREFs of ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x1400552D0
 * Callers:
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140055050 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     McTemplateU0pqxxxxffff @ 0x1400537E4 (McTemplateU0pqxxxxffff.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053DD8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition_NonOffload(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  char v8; // al
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  int v12; // r8d
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r15
  float v18; // xmm6_4
  int v19; // r9d
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  double LowPart; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm1_8
  signed __int64 v25; // rax
  int v26; // eax
  float v27; // xmm0_4
  __int64 v28; // rdx
  double v29; // xmm1_8
  double v30; // xmm0_8
  unsigned __int64 v31; // rax
  double v32; // xmm0_8
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r8
  __int64 v36; // r9
  float v37; // xmm2_4
  __int64 v38; // rcx
  float v40; // [rsp+40h] [rbp-78h]
  unsigned __int64 v41; // [rsp+60h] [rbp-58h]
  LARGE_INTEGER PerformanceCount; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v43; // [rsp+D8h] [rbp+20h]

  v3 = *((_QWORD *)this + 9);
  v4 = 0;
  PerformanceCount.QuadPart = 0LL;
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v9 = (_QWORD *)*((_QWORD *)this + 9);
  if ( (v8 & 4) == 0 )
  {
    v10 = v9[19];
LABEL_3:
    *a2 = v10;
    return v4;
  }
  if ( (v8 & 2) == 0 )
  {
    v10 = v9[3];
    goto LABEL_3;
  }
  v11 = v9[14];
  v12 = 3;
  v13 = *(_QWORD *)(*((_QWORD *)this + 9) + 128LL);
  while ( 1 )
  {
    v14 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0);
    v15 = *(_QWORD *)(*((_QWORD *)this + 9) + 40 * v14 + 32);
    v16 = *((_QWORD *)this + 9);
    v43 = v15;
    v17 = *(_QWORD *)(v16 + 40 * v14 + 56);
    v18 = *(float *)(*((_QWORD *)this + 9) + 40 * v14 + 64);
    v19 = *(_DWORD *)(*((_QWORD *)this + 9) + 40 * v14 + 68);
    if ( (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0) )
      break;
    if ( !--v12 )
    {
      v4 = -2005139393;
      goto LABEL_12;
    }
  }
  if ( !v19 )
  {
    v4 = -2005139375;
LABEL_12:
    *a2 = *((_QWORD *)this + 23);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_cf63f31659183c1d56c0a39f6c8110d7_Traceguids, v4);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition_NonOffload", 0x12Cu, v4);
    return v4;
  }
  v20 = *((_QWORD *)this + 9);
  v21 = *(_QWORD *)(v20 + 152) / (unsigned __int64)*((unsigned int *)this + 22);
  v41 = *(_QWORD *)(v20 + 24) / (unsigned __int64)*((unsigned int *)this + 22);
  if ( v15 >= v11 + v13 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    LowPart = (double)(int)PerformanceCount.LowPart;
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = LowPart + 1.844674407370955e19;
    v23 = LowPart * 10000000.0;
    v24 = (double)(int)g_u64QPCFrequency;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v24 = v24 + 1.844674407370955e19;
    v25 = (unsigned int)(int)(v23 / v24);
    if ( a3 )
      *a3 = v25;
    if ( v25 < v17 )
      v26 = 0;
    else
      v26 = v25 - v17;
    v27 = *((float *)this + 39);
    v28 = v43 + (unsigned int)(int)((double)v26 * v18 / 10000000.0 + 0.5) - v13 - v11;
    if ( v27 != v18 )
    {
      v29 = (double)(int)v28;
      v30 = v27;
      if ( v28 < 0 )
        v29 = v29 + 1.844674407370955e19;
      v31 = 0LL;
      v32 = v30 * v29 / v18 + 0.5;
      if ( v32 >= 9.223372036854776e18 )
      {
        v32 = v32 - 9.223372036854776e18;
        if ( v32 < 9.223372036854776e18 )
          v31 = 0x8000000000000000uLL;
      }
      v28 = v31 + (unsigned int)(int)v32;
    }
    v33 = v21 + v28;
    v34 = v33;
    if ( v33 >= v41 )
      v34 = v41;
    v35 = *((unsigned int *)this + 22) * v34;
    *a2 = v35;
    if ( (byte_140087281 & 4) != 0 )
    {
      LOBYTE(v36) = 0;
      if ( a3 )
        v36 = *a3;
      v37 = (float)(int)*(_QWORD *)(*((_QWORD *)this + 9) + 16LL);
      v38 = *(_QWORD *)(*((_QWORD *)this + 9) + 24LL);
      v40 = (float)(int)v38;
      McTemplateU0pqxxxxffff(
        v38,
        v33,
        (__int64)this,
        6,
        v35,
        v36,
        v33,
        v21,
        SLOBYTE(v40),
        SLOBYTE(v37),
        SLOBYTE(v18),
        *((_DWORD *)this + 39));
    }
  }
  else
  {
    *a2 = v21 * *((unsigned int *)this + 22);
  }
  return v4;
}
