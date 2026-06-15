/*
 * XREFs of ?GetDevicePosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005E2D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxxx @ 0x140053728 (McTemplateU0pqxxxx.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetDevicePosition(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  int v6; // esi
  unsigned __int64 v7; // rax
  double LowPart; // xmm0_8
  double v9; // xmm0_8
  double v10; // xmm1_8
  __int64 v11; // rcx
  __int64 v12; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v17[4]; // [rsp+58h] [rbp-70h] BYREF
  int v18; // [rsp+7Ch] [rbp-4Ch]
  _BYTE v19[40]; // [rsp+80h] [rbp-48h] BYREF

  PerformanceCount.QuadPart = 0LL;
  if ( *((_BYTE *)this - 840) )
  {
    if ( a2 )
    {
      if ( a3 )
        *a3 = 0LL;
      v6 = (*(__int64 (__fastcall **)(char *, _BYTE *, unsigned __int64 *, _BYTE *, _BYTE *))(*((_QWORD *)this - 117)
                                                                                            + 96LL))(
             (char *)this - 936,
             v19,
             v17,
             v16,
             v15);
      if ( v6 >= 0 )
      {
        if ( v18 )
        {
          v7 = v17[0];
        }
        else
        {
          v7 = *((_QWORD *)this - 97);
          v6 = -2005139375;
        }
        *a2 = v7;
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2005139437;
  }
  if ( a3 && !*a3 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    LowPart = (double)(int)PerformanceCount.LowPart;
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = LowPart + 1.844674407370955e19;
    v9 = LowPart * 10000000.0;
    v10 = (double)(int)g_u64QPCFrequency;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v10 = v10 + 1.844674407370955e19;
    *a3 = (unsigned int)(int)(v9 / v10);
  }
  if ( (byte_140087281 & 4) != 0 )
  {
    if ( a3 )
      v11 = *a3;
    else
      v11 = 0LL;
    if ( a2 )
      v12 = *a2;
    else
      LOBYTE(v12) = 0;
    McTemplateU0pqxxxx(v11, (__int64)a2, (__int64)this - 936, 7, 0, v12, 0, v11);
  }
  if ( a2 )
    *((_QWORD *)this - 97) = *a2;
  if ( v6 < 0 )
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetDevicePosition", 612, v6);
  return (unsigned int)v6;
}
