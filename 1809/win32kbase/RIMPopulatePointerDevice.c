/*
 * XREFs of RIMPopulatePointerDevice @ 0x1C011B37C
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     RIMCheckPressureUsageStatus @ 0x1C01153E0 (RIMCheckPressureUsageStatus.c)
 *     RIMGetDeviceButtons @ 0x1C0116E4C (RIMGetDeviceButtons.c)
 *     RIMIsEssentialUsage @ 0x1C01185B0 (RIMIsEssentialUsage.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 *     RIMIDEValidateLogicalDeviceSize @ 0x1C011FC0C (RIMIDEValidateLogicalDeviceSize.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C012FB20 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C012FC18 (RIMRetrieveNormalizationRange.c)
 */

__int64 __fastcall RIMPopulatePointerDevice(__int64 a1, __int64 a2, __int64 a3, __int16 *a4)
{
  __int64 v5; // r15
  unsigned int v6; // r14d
  unsigned int v7; // edi
  int v8; // r8d
  int SpecificValueCaps; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rbx
  int v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  __int16 v17; // r15
  unsigned __int16 v18; // r15
  __int64 v19; // r8
  __int16 v20; // ax
  __m128i v21; // xmm5
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int128 v24; // xmm4
  __m128i v25; // xmm5
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int128 v28; // xmm4
  __int64 v29; // rdx
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  bool v33; // zf
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  int v36; // [rsp+40h] [rbp-C0h]
  unsigned int v37; // [rsp+44h] [rbp-BCh]
  int v38; // [rsp+48h] [rbp-B8h]
  _OWORD v39[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h]
  _OWORD v41[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-10h]
  _OWORD v43[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v44; // [rsp+140h] [rbp+40h]
  unsigned __int16 v46; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v47; // [rsp+1B0h] [rbp+B0h]
  __int16 *v48; // [rsp+1B8h] [rbp+B8h]

  v48 = a4;
  v47 = a3;
  v5 = a3;
  v6 = -1;
  v7 = 0;
  v36 = -1;
  v37 = -1;
  v8 = *(unsigned __int16 *)(a2 + 720);
  v46 = 0;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v8, 0, 0LL, (__int64)&v46, a3);
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    return 0LL;
  v10 = 6LL;
  v11 = (_DWORD *)(a2 + 32);
  do
  {
    *v11 = -1;
    v11 += 4;
    --v10;
  }
  while ( v10 );
  v12 = Win32AllocPool(72LL * v46, 0x6A6E6952u);
  if ( !v12 )
    return 0LL;
  v38 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(a2 + 720), 0, v12, (__int64)&v46, v5);
  v14 = v38;
  if ( v38 >= 0 )
  {
    v15 = 0;
    v16 = 0;
    if ( v46 )
    {
      do
      {
        if ( v16 >= 6 )
          break;
        v17 = *v48;
        if ( *v48 == 2 )
          v17 = 1;
        v18 = *(_WORD *)(v12 + 72LL * v15 + 56) | ((*(_WORD *)(v12 + 72LL * v15) | (unsigned __int16)(16 * v17)) << 8);
        if ( (unsigned int)RIMIsEssentialUsage(v18) )
        {
          v19 = 60LL * v16;
          *(_WORD *)(v19 + a2 + 344) = *(_WORD *)(v12 + 72LL * v15);
          *(_WORD *)(v19 + a2 + 356) = *(_WORD *)(v12 + 72LL * v15 + 56);
          *(_DWORD *)(v19 + a2 + 348) = *(unsigned __int8 *)(v12 + 72LL * v15 + 2);
          *(_WORD *)(v19 + a2 + 354) = *(_WORD *)(v12 + 72LL * v15 + 10);
          *(_DWORD *)(60 * (v16 + 6LL) + a2) = *(unsigned __int8 *)(v12 + 72LL * v15 + 16);
          *(_DWORD *)(v19 + a2 + 376) = *(_DWORD *)(v12 + 72LL * v15 + 40);
          *(_DWORD *)(v19 + a2 + 380) = *(_DWORD *)(v12 + 72LL * v15 + 44);
          *(_DWORD *)(v19 + a2 + 384) = *(_DWORD *)(v12 + 72LL * v15 + 48);
          *(_DWORD *)(v19 + a2 + 388) = *(_DWORD *)(v12 + 72LL * v15 + 52);
          *(_WORD *)(v19 + a2 + 400) = *(_WORD *)(v12 + 72LL * v15 + 18);
          if ( (*(_DWORD *)(a2 + 308) & 0x8000) != 0 )
          {
            v20 = *(_WORD *)(v12 + 72LL * v15 + 56);
            if ( v20 == 48 && *(_WORD *)(v12 + 72LL * v15) == 1 )
            {
              v21 = *(__m128i *)(v12 + 72LL * v15 + 48);
              v36 = v15;
              v22 = *(_OWORD *)(v12 + 72LL * v15);
              v23 = *(_OWORD *)(v12 + 72LL * v15 + 16);
              v24 = *(_OWORD *)(v12 + 72LL * v15 + 32);
              v40 = *(_QWORD *)(v12 + 72LL * v15 + 64);
              v39[0] = v22;
              v39[1] = v23;
              v39[2] = v24;
              v39[3] = v21;
              *(_DWORD *)(a2 + 148) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v21, 4)) - _mm_cvtsi128_si32(v21)),
                                        v39)
                                    + 1;
              *(_DWORD *)(a2 + 124) = *(_DWORD *)(v12 + 72LL * v15 + 40);
              *(_DWORD *)(a2 + 132) = *(_DWORD *)(v12 + 72LL * v15 + 44) + 1;
              v20 = *(_WORD *)(v12 + 72LL * v15 + 56);
            }
            if ( v20 == 49 && *(_WORD *)(v12 + 72LL * v15) == 1 )
            {
              v25 = *(__m128i *)(v12 + 72LL * v15 + 48);
              v37 = v15;
              v26 = *(_OWORD *)(v12 + 72LL * v15);
              v27 = *(_OWORD *)(v12 + 72LL * v15 + 16);
              v28 = *(_OWORD *)(v12 + 72LL * v15 + 32);
              v42 = *(_QWORD *)(v12 + 72LL * v15 + 64);
              v41[0] = v26;
              v41[1] = v27;
              v41[2] = v28;
              v41[3] = v25;
              *(_DWORD *)(a2 + 152) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v25, 4)) - _mm_cvtsi128_si32(v25)),
                                        v41)
                                    + 1;
              *(_DWORD *)(a2 + 128) = *(_DWORD *)(v12 + 72LL * v15 + 40);
              *(_DWORD *)(a2 + 136) = *(_DWORD *)(v12 + 72LL * v15 + 44) + 1;
            }
          }
          RIMCheckPressureUsageStatus(a1, a2, v18);
          v29 = 16LL * v16;
          *(_DWORD *)(a2 + 16 * (v16 + 2LL)) = v16;
          *(_WORD *)(v29 + a2 + 28) = *(_WORD *)(v12 + 72LL * v15);
          *(_WORD *)(v29 + a2 + 30) = *(_WORD *)(v12 + 72LL * v15 + 56);
          v30 = *(_OWORD *)(v12 + 72LL * v15 + 16);
          v43[0] = *(_OWORD *)(v12 + 72LL * v15);
          v31 = *(_OWORD *)(v12 + 72LL * v15 + 32);
          v43[1] = v30;
          v32 = *(_OWORD *)(v12 + 72LL * v15 + 48);
          v43[2] = v31;
          v44 = *(_QWORD *)(v12 + 72LL * v15 + 64);
          v43[3] = v32;
          RIMRetrieveNormalizationRange(v18, v43, a2 + v29 + 36);
          ++v16;
        }
        ++v15;
      }
      while ( v15 < v46 );
      v14 = v38;
      v6 = v36;
      v5 = v47;
    }
    v33 = (*(_DWORD *)(a2 + 308) & 0x8000) == 0;
    *(_DWORD *)(a2 + 716) = v16;
    if ( !v33 )
      v14 = RIMIDEValidateLogicalDeviceSize(a2, v6, v37);
    if ( v14 >= 0 && (int)RIMGetDeviceButtons(a1, a2, v5, v48, v34) >= 0 )
      v7 = 1;
  }
  Win32FreePool(v12);
  return v7;
}
