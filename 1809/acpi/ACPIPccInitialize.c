/*
 * XREFs of ACPIPccInitialize @ 0x1C00AC9D0
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00BA420 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     AcpiTranslateAccessSize @ 0x1C00A9098 (AcpiTranslateAccessSize.c)
 *     AcpiPccInitilizeSubspace @ 0x1C00ACD3C (AcpiPccInitilizeSubspace.c)
 */

__int64 __fastcall ACPIPccInitialize(__int64 a1)
{
  __int128 *v1; // rdi
  unsigned __int64 v2; // r8
  unsigned int v3; // esi
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // r12
  char *PoolWithTag; // r15
  char *v9; // rbx
  __m128d v10; // xmm3
  __m128i v11; // xmm2
  char v12; // r8
  char v13; // dl
  unsigned __int8 v14; // cl
  unsigned __int64 v15; // r11
  unsigned int v16; // r10d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-70h] BYREF
  __int128 v22; // [rsp+30h] [rbp-40h]
  _BYTE v23[24]; // [rsp+50h] [rbp-20h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+48h]

  v1 = (__int128 *)(a1 + 48);
  v2 = a1 + *(unsigned int *)(a1 + 4);
  v3 = 0;
  v5 = a1 + 48;
  if ( a1 + 50 <= v2 )
  {
    do
    {
      v6 = *(_BYTE *)(v5 + 1);
      if ( v6 < 2u )
        break;
      v5 += v6;
      if ( v5 > v2 )
        break;
      ++v3;
    }
    while ( v5 + 2 <= v2 );
    if ( v3 )
    {
      v7 = v3;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 528LL * v3, 0x4D706341u);
      if ( PoolWithTag )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        memset(PoolWithTag, 0, 528LL * v3);
        v9 = PoolWithTag + 82;
        do
        {
          if ( !*(_BYTE *)v1 && *((_BYTE *)v1 + 1) >= 0x3Eu )
          {
            v10 = (__m128d)v1[1];
            v11 = (__m128i)v1[2];
            v22 = *v1;
            *(_QWORD *)&v23[16] = *((_QWORD *)v1 + 6);
            *(_QWORD *)(v9 - 2) = *(_OWORD *)&_mm_unpackhi_pd(v10, v10);
            *(_DWORD *)(v9 + 6) = _mm_cvtsi128_si32(v11);
            v12 = *v9;
            v13 = *(v9 - 1);
            v14 = v9[1];
            *(__m128i *)v23 = v11;
            v9[1] = AcpiTranslateAccessSize(v14, v13, v12);
            *(_QWORD *)(v9 - 18) = *(_QWORD *)&v23[4];
            *(_QWORD *)(v9 - 26) = *(_QWORD *)&v23[12];
            *(_QWORD *)(v9 + 14) = *((_QWORD *)&v22 + 1);
            *(_DWORD *)(v9 - 78) = *(_DWORD *)&v23[20];
            *(_DWORD *)(v9 + 22) = _mm_cvtsi128_si32((__m128i)v10);
            *(_DWORD *)(v9 - 70) = v15;
            *(_DWORD *)(v9 - 74) = v16 / 0x3C;
            v25 = (v15 * (unsigned __int128)(unsigned __int64)PerformanceFrequency.QuadPart) >> 64;
            v17 = v15 * PerformanceFrequency.QuadPart;
            if ( is_mul_ok(v15, PerformanceFrequency.QuadPart) )
            {
              *(_QWORD *)(v9 + 94) = v17;
              v18 = v17 / 0xF4240;
            }
            else
            {
              *(_QWORD *)(v9 + 94) = -1LL;
              v18 = *(unsigned int *)(v9 - 70) * (PerformanceFrequency.QuadPart / 1000000);
            }
            *(_QWORD *)(v9 + 94) = v18;
            *(_DWORD *)(v9 - 82) ^= (*(_DWORD *)(v9 - 82) ^ (2 * *(_DWORD *)(a1 + 36))) & 2;
            if ( (int)AcpiPccInitilizeSubspace(v9 - 82) >= 0 )
            {
              v19 = *(_QWORD *)(v9 - 50);
              *(_QWORD *)(v9 - 66) = v19 + 8;
              *(_DWORD *)(v9 - 58) = *(_DWORD *)(v9 + 22) - 8;
              *(_QWORD *)(v9 - 42) = v19 + 4;
              *(_QWORD *)(v9 - 34) = v19 + 6;
              *(_DWORD *)(v9 - 82) = *(_DWORD *)(v9 - 82) & 0xFFFFFFC3 | 8;
            }
          }
          v9 += 528;
          v1 = (__int128 *)((char *)v1 + *((unsigned __int8 *)v1 + 1));
          --v7;
        }
        while ( v7 );
        _InterlockedOr(v21, 0);
        AcpiPccSubspaces = (__int64)PoolWithTag;
        AcpiPccSubspaceCount = v3;
      }
      else
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
