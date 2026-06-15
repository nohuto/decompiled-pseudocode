/*
 * XREFs of ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005E7D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxxxffff @ 0x1400536F4 (McTemplateU0pqxxxxffff.c)
 *     ?LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z @ 0x140059FE0 (-LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D710 (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005ED28 (-IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005ED58 (-IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetPosition(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  signed __int64 v6; // r15
  const GUID *v7; // r12
  signed __int64 v8; // r13
  int v9; // r14d
  double v10; // xmm0_8
  double v11; // xmm0_8
  double v12; // xmm1_8
  char v13; // cl
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  double LowPart; // xmm0_8
  double v17; // xmm0_8
  double v18; // xmm1_8
  int v19; // r8d
  float v20; // xmm0_4
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  double v23; // xmm2_8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  char *v29; // rsi
  __int64 v30; // rcx
  float v31; // xmm2_4
  unsigned __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v37; // [rsp+38h] [rbp-99h]
  float v38; // [rsp+50h] [rbp-81h]
  const GUID *v39; // [rsp+68h] [rbp-69h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-59h] BYREF
  signed __int64 v42; // [rsp+80h] [rbp-51h] BYREF
  _QWORD v43[3]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-31h]
  float v45; // [rsp+A8h] [rbp-29h]
  int v46; // [rsp+ACh] [rbp-25h]
  unsigned __int64 v47[2]; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v48; // [rsp+C0h] [rbp-11h]

  PerformanceCount.QuadPart = 0LL;
  memset_0(v47, 0, 0x28uLL);
  memset_0(v43, 0, 0x28uLL);
  v6 = 0LL;
  v7 = 0LL;
  v41 = 0LL;
  LOBYTE(v8) = 0;
  v42 = 0LL;
  v39 = 0LL;
  if ( !*((_BYTE *)this - 832) )
  {
    v9 = -2005139437;
LABEL_63:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetPosition", 506, v9);
    return (unsigned int)v9;
  }
  if ( !a2 )
  {
    v9 = -2147467261;
    goto LABEL_10;
  }
  if ( a3 )
    *a3 = 0LL;
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidFlags((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 928)) )
  {
    v9 = -2005139387;
LABEL_9:
    v7 = 0LL;
    goto LABEL_10;
  }
  v9 = (*(__int64 (__fastcall **)(char *, unsigned __int64 *, _QWORD *, unsigned __int64 *, signed __int64 *))(*((_QWORD *)this - 116) + 96LL))(
         (char *)this - 928,
         v47,
         v43,
         &v41,
         &v42);
  if ( v9 < 0 )
    goto LABEL_9;
  if ( !CSpatialCrossProcessBaseEndpoint::IsTimestampInitialized((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 928)) )
  {
    *a2 = v41;
    goto LABEL_9;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidTimestamp((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 928)) )
  {
    v15 = v42;
LABEL_25:
    *a2 = v15;
    goto LABEL_9;
  }
  if ( !v46 )
  {
    v9 = -2005139375;
    *a2 = *((_QWORD *)this - 97);
    goto LABEL_9;
  }
  if ( v43[0] < v48 + v47[0] )
  {
    v15 = v41;
    goto LABEL_25;
  }
  QueryPerformanceCounter(&PerformanceCount);
  LowPart = (double)(int)PerformanceCount.LowPart;
  if ( PerformanceCount.QuadPart < 0 )
    LowPart = LowPart + 1.844674407370955e19;
  v17 = LowPart * 10000000.0;
  v18 = (double)(int)g_u64QPCFrequency;
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
    v18 = v18 + 1.844674407370955e19;
  v8 = (unsigned int)(int)(v17 / v18);
  if ( a3 )
    *a3 = v8;
  if ( v8 < v44 )
  {
    v19 = 0;
  }
  else
  {
    v19 = v8 - v44;
    v39 = (const GUID *)(v8 - v44);
  }
  v20 = *((float *)this - 199);
  v21 = v43[0] + (unsigned int)(int)(v45 * (double)v19 / 10000000.0 + 0.5) - v48 - v47[0];
  if ( v20 != v45 )
  {
    v22 = 0LL;
    v23 = v20 * (double)(int)v21 / v45 + 0.5;
    if ( v23 >= 9.223372036854776e18 )
    {
      v23 = v23 - 9.223372036854776e18;
      if ( v23 < 9.223372036854776e18 )
        v22 = 0x8000000000000000uLL;
    }
    v21 = v22 + (unsigned int)(int)v23;
  }
  v6 = v41 + v21;
  v24 = v42;
  if ( v6 < v42 )
    v24 = v6;
  *a2 = v24;
  v25 = *((_QWORD *)this - 97);
  if ( v24 < v25 )
  {
    if ( (byte_140086281 & 4) != 0 )
    {
      McTemplateU0pqxxxxffff(v24, v25, (__int64)this - 928, 8, v24, v25, v25 - v24, 0, 0, 0, 0, 0);
      v25 = *((_QWORD *)this - 97);
    }
    *a2 = v25;
  }
  v7 = v39;
LABEL_10:
  if ( a3 && !*a3 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v10 = (double)(int)PerformanceCount.LowPart;
    if ( PerformanceCount.QuadPart < 0 )
      v10 = v10 + 1.844674407370955e19;
    v11 = v10 * 10000000.0;
    v12 = (double)(int)g_u64QPCFrequency;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v12 = v12 + 1.844674407370955e19;
    v8 = (unsigned int)(int)(v11 / v12);
    *a3 = v8;
  }
  v13 = byte_140086281;
  if ( (byte_140086281 & 4) != 0 )
  {
    if ( a3 )
      v14 = *a3;
    else
      LOBYTE(v14) = 0;
    v26 = *((_QWORD *)this - 94);
    if ( a2 )
      v27 = *a2 * *(unsigned __int16 *)(v26 + 12);
    else
      LOBYTE(v27) = 0;
    v28 = *(unsigned __int16 *)(v26 + 12);
    v29 = (char *)this - 928;
    v30 = v28 * *(_QWORD *)(*((_QWORD *)this - 4) + 40LL);
    v31 = (float)(v42 * v28);
    v38 = (float)(int)v30;
    McTemplateU0pqxxxxffff(
      v30,
      v6 * v28,
      (__int64)this - 928,
      6,
      v27,
      v14,
      v6 * v28,
      v41 * v28,
      SLOBYTE(v31),
      SLOBYTE(v38),
      SLOBYTE(v45),
      *((_DWORD *)this - 199));
    v13 = byte_140086281;
  }
  else
  {
    v29 = (char *)this - 928;
  }
  if ( a2 )
  {
    v32 = *((_QWORD *)this - 97);
    v33 = *a2;
    if ( *a2 < v32 && (v13 & 4) != 0 )
    {
      McTemplateU0pqxxxxffff(
        *(unsigned __int16 *)(*((_QWORD *)this - 94) + 12LL),
        *a2,
        (__int64)v29,
        8,
        *a2,
        v32,
        *(_WORD *)(*((_QWORD *)this - 94) + 12LL),
        0,
        0,
        0,
        0,
        0);
      v33 = *a2;
    }
    v34 = v48;
    v35 = v47[0];
    *((_QWORD *)this - 97) = v33;
    v37 = *(unsigned __int16 *)(*((_QWORD *)this - 94) + 12LL) * *a2;
    *a2 = v37;
    CSpatialCrossProcessEndpointTraceLogger::LogGetPosition(
      (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 528),
      v35,
      v34,
      v7,
      *((_QWORD *)this - 97),
      v8,
      v37);
  }
  if ( v9 < 0 )
    goto LABEL_63;
  return (unsigned int)v9;
}
