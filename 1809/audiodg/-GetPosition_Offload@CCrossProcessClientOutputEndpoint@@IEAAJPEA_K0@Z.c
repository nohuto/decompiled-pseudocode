/*
 * XREFs of ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140057550
 * Callers:
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140056FF0 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition_Offload(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r9
  int v7; // esi
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  float v12; // xmm7_4
  int v13; // edx
  signed __int32 v14; // eax
  double LowPart; // xmm0_8
  double v16; // xmm0_8
  double v17; // xmm1_8
  signed __int64 v18; // rax
  int v19; // eax
  double v20; // xmm3_8
  double v21; // xmm2_8
  float v22; // xmm0_4
  __int64 v23; // r8
  double v24; // xmm1_8
  double v25; // xmm0_8
  unsigned __int64 v26; // rax
  double v27; // xmm0_8
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  signed __int32 v31; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  CCrossProcessClientOutputEndpoint *v36; // [rsp+58h] [rbp-A8h] BYREF
  CCrossProcessClientOutputEndpoint *v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  CCrossProcessClientOutputEndpoint **v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int64 *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+E0h] [rbp-20h] BYREF
  CCrossProcessClientOutputEndpoint **v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  signed __int32 *v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]
  __int64 *v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]

  v3 = *((_QWORD *)this + 8);
  v31 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v7 = 0;
  if ( (v31 & 4) != 0 )
  {
    v3 = 3LL;
    do
    {
      v8 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 160LL), 0, 0);
      v9 = *((_QWORD *)this + 8);
      v34 = *(_QWORD *)(v9 + 40 * v8 + 32);
      v10 = *(_QWORD *)(v9 + 40 * v8 + 56);
      v11 = *((_QWORD *)this + 8);
      v33 = v10;
      v12 = *(float *)(v11 + 40 * v8 + 64);
      v13 = *(_DWORD *)(*((_QWORD *)this + 8) + 40 * v8 + 68);
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 160LL), 0, 0);
      if ( (_DWORD)v8 == v14 )
        break;
      v3 = (unsigned int)(v3 - 1);
    }
    while ( (_DWORD)v3 );
    if ( v13 && (_DWORD)v8 == v14 )
    {
      *a2 = v34;
      if ( (v31 & 1) != 0 )
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        LowPart = (double)(int)PerformanceCount.LowPart;
        if ( PerformanceCount.QuadPart < 0 )
          LowPart = LowPart + 1.844674407370955e19;
        v16 = LowPart * 10000000.0;
        v17 = (double)(int)g_u64QPCFrequency;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v17 = v17 + 1.844674407370955e19;
        v18 = (unsigned int)(int)(v16 / v17);
        if ( a3 )
          *a3 = v18;
        if ( v18 < v33 )
          v19 = 0;
        else
          v19 = v18 - v33;
        v20 = v12;
        v21 = DOUBLE_0_5;
        *a2 += (unsigned int)(int)((double)v19 * v12 / 10000000.0 + 0.5);
      }
      else
      {
        v21 = DOUBLE_0_5;
        v20 = v12;
      }
      v22 = *((float *)this + 39);
      v23 = *a2;
      if ( v22 != v12 )
      {
        v24 = (double)(int)v23;
        v25 = v22;
        if ( v23 < 0 )
          v24 = v24 + 1.844674407370955e19;
        v26 = 0LL;
        v27 = v25 * v24 / v20 + v21;
        if ( v27 >= 9.223372036854776e18 )
        {
          v27 = v27 - 9.223372036854776e18;
          if ( v27 < 9.223372036854776e18 )
            v26 = 0x8000000000000000uLL;
        }
        v23 = v26 + (unsigned int)(int)v27;
        *a2 = v23;
      }
      v28 = *(_QWORD *)(*((_QWORD *)this + 8) + 24LL) / (unsigned __int64)*((unsigned int *)this + 20);
      v35 = v28;
      if ( v23 > v28 )
      {
        if ( (unsigned int)dword_140088010 > 5 )
        {
          v36 = this;
          v40 = &v36;
          v42 = &v34;
          v44 = &v33;
          v48 = &v35;
          v41 = 8LL;
          v43 = 8LL;
          v45 = 8LL;
          v46 = a2;
          v47 = 8LL;
          v49 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_140088010, &unk_140072722, 0LL, (LPCGUID)v3, 7u, &pData);
          v28 = v35;
        }
        *a2 = v28;
      }
      *a2 *= *((unsigned int *)this + 20);
    }
    else
    {
      v7 = -2005139393;
      *a2 = *((_QWORD *)this + 23);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  if ( (unsigned int)dword_140088010 > 5 )
  {
    v37 = this;
    v51 = &v37;
    v53 = &v31;
    v52 = 8LL;
    v54 = 4LL;
    v55 = a2;
    v56 = 8LL;
    if ( a3 )
      v29 = *a3;
    else
      v29 = 0LL;
    v38 = v29;
    v57 = &v38;
    v58 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_140088010, &unk_1400726D0, 0LL, (LPCGUID)v3, 6u, &v50);
  }
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_23cce490298439044b313548040b8dc4_Traceguids, v7);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition_Offload", 0x19Du, v7);
  }
  return (unsigned int)v7;
}
