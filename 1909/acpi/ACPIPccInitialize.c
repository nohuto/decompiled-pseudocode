/*
 * XREFs of ACPIPccInitialize @ 0x1C00B00F0
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00BDC94 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     AcpiTranslateAccessSize @ 0x1C00AC6B8 (AcpiTranslateAccessSize.c)
 *     AcpiPccInitilizeSubspace @ 0x1C00B048C (AcpiPccInitilizeSubspace.c)
 */

__int64 __fastcall ACPIPccInitialize(__int64 a1)
{
  __int64 v1; // r8
  __int128 *v2; // rdi
  unsigned __int64 v3; // r8
  unsigned int v4; // esi
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // al
  __int64 v8; // r12
  char *PoolWithTag; // r15
  char *v10; // rbx
  __m128d v11; // xmm3
  __int128 v12; // xmm0
  __int16 v13; // r11
  __m128i v14; // xmm2
  char v15; // r8
  char v16; // dl
  unsigned __int8 v17; // cl
  unsigned __int64 v18; // r11
  unsigned int v19; // r10d
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  signed __int32 v23[8]; // [rsp+0h] [rbp-70h] BYREF
  __int128 v24; // [rsp+30h] [rbp-40h]
  __m128d v25; // [rsp+40h] [rbp-30h]
  _BYTE v26[24]; // [rsp+50h] [rbp-20h]
  int v27; // [rsp+68h] [rbp-8h]
  __int16 v28; // [rsp+6Ch] [rbp-4h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+48h]

  v1 = *(unsigned int *)(a1 + 4);
  v2 = (__int128 *)(a1 + 48);
  PerformanceFrequency.QuadPart = 0LL;
  v3 = a1 + v1;
  v4 = 0;
  v6 = a1 + 48;
  if ( a1 + 50 <= v3 )
  {
    do
    {
      v7 = *(_BYTE *)(v6 + 1);
      if ( v7 < 2u )
        break;
      v6 += v7;
      if ( v6 > v3 )
        break;
      ++v4;
    }
    while ( v6 + 2 <= v3 );
    if ( v4 )
    {
      v8 = v4;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 528LL * v4, 0x4D706341u);
      if ( PoolWithTag )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        memset(PoolWithTag, 0, 528LL * v4);
        v10 = PoolWithTag + 82;
        do
        {
          if ( !*(_BYTE *)v2 && *((_BYTE *)v2 + 1) >= 0x3Eu )
          {
            v11 = (__m128d)v2[1];
            v12 = *v2;
            v13 = *((_WORD *)v2 + 30);
            v14 = (__m128i)v2[2];
            v27 = *((_DWORD *)v2 + 14);
            v24 = v12;
            v28 = v13;
            *(_QWORD *)&v26[16] = *((_QWORD *)v2 + 6);
            *(_QWORD *)(v10 - 2) = *(_OWORD *)&_mm_unpackhi_pd(v11, v11);
            *(_DWORD *)(v10 + 6) = _mm_cvtsi128_si32(v14);
            v15 = *v10;
            v16 = *(v10 - 1);
            v17 = v10[1];
            v25 = v11;
            *(__m128i *)v26 = v14;
            v10[1] = AcpiTranslateAccessSize(v17, v16, v15);
            *(_QWORD *)(v10 - 18) = *(_QWORD *)&v26[4];
            *(_QWORD *)(v10 - 26) = *(_QWORD *)&v26[12];
            *(_QWORD *)(v10 + 14) = *((_QWORD *)&v24 + 1);
            *(_DWORD *)(v10 - 78) = *(_DWORD *)&v26[20];
            *(_DWORD *)(v10 + 22) = _mm_cvtsi128_si32((__m128i)v11);
            *(_DWORD *)(v10 - 70) = v18;
            *(_DWORD *)(v10 - 74) = v19 / 0x3C;
            v30 = (v18 * (unsigned __int128)(unsigned __int64)PerformanceFrequency.QuadPart) >> 64;
            if ( is_mul_ok(v18, PerformanceFrequency.QuadPart) )
            {
              v20 = v18 * PerformanceFrequency.QuadPart / 0xF4240;
            }
            else
            {
              *(_QWORD *)(v10 + 94) = -1LL;
              v20 = *(unsigned int *)(v10 - 70) * (PerformanceFrequency.QuadPart / 1000000);
            }
            *(_QWORD *)(v10 + 94) = v20;
            *(_DWORD *)(v10 - 82) ^= (*(_DWORD *)(v10 - 82) ^ (2 * *(_DWORD *)(a1 + 36))) & 2;
            if ( (int)AcpiPccInitilizeSubspace(v10 - 82) >= 0 )
            {
              v21 = *(_QWORD *)(v10 - 50);
              *(_QWORD *)(v10 - 66) = v21 + 8;
              *(_DWORD *)(v10 - 58) = *(_DWORD *)(v10 + 22) - 8;
              *(_QWORD *)(v10 - 42) = v21 + 4;
              *(_QWORD *)(v10 - 34) = v21 + 6;
              *(_DWORD *)(v10 - 82) = *(_DWORD *)(v10 - 82) & 0xFFFFFFC3 | 8;
            }
          }
          v10 += 528;
          v2 = (__int128 *)((char *)v2 + *((unsigned __int8 *)v2 + 1));
          --v8;
        }
        while ( v8 );
        _InterlockedOr(v23, 0);
        AcpiPccSubspaces = (__int64)PoolWithTag;
        AcpiPccSubspaceCount = v4;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0xBu,
          (__int64)&WPP_aa09a4a2e6b4360d6f89773cef358f13_Traceguids);
      }
    }
  }
  return 0LL;
}
