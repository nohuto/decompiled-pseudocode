/*
 * XREFs of RIMPopulatePointerDevice @ 0x1C00EFEF4
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     RIMCheckPressureUsageStatus @ 0x1C00EA924 (RIMCheckPressureUsageStatus.c)
 *     RIMGetDeviceButtons @ 0x1C00EC198 (RIMGetDeviceButtons.c)
 *     RIMIsEssentialUsage @ 0x1C00ED218 (RIMIsEssentialUsage.c)
 *     RIMIDEValidateDeviceSize @ 0x1C00F4FB8 (RIMIDEValidateDeviceSize.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C0108488 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C0108568 (RIMRetrieveNormalizationRange.c)
 */

__int64 __fastcall RIMPopulatePointerDevice(__int64 a1, __int64 a2, struct _HIDP_PREPARSED_DATA *a3, __int16 *a4)
{
  struct _HIDP_PREPARSED_DATA *v5; // r15
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned __int16 v8; // r8
  int SpecificValueCaps; // eax
  __int64 v11; // rcx
  _DWORD *v12; // rax
  struct _HIDP_VALUE_CAPS *v13; // rbx
  int v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  __int16 v17; // r15
  unsigned __int16 v18; // r15
  __int64 v19; // rcx
  USAGE UsageMin; // ax
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
  struct _HIDP_PREPARSED_DATA *v47; // [rsp+1B0h] [rbp+B0h]
  __int16 *v48; // [rsp+1B8h] [rbp+B8h]

  v48 = a4;
  v47 = a3;
  v5 = a3;
  v6 = -1;
  v7 = 0;
  v36 = -1;
  v37 = -1;
  v8 = *(_WORD *)(a2 + 688);
  v46 = 0;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v8, 0, 0LL, &v46, a3);
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    return 0LL;
  v11 = 6LL;
  v12 = (_DWORD *)(a2 + 32);
  do
  {
    *v12 = -1;
    v12 += 4;
    --v11;
  }
  while ( v11 );
  v13 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * v46, 0x6A6E6952u);
  if ( !v13 )
    return 0LL;
  v38 = rimHidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(a2 + 688), 0, v13, &v46, v5);
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
        v18 = v13[v15].Range.UsageMin | ((v13[v15].UsagePage | (unsigned __int16)(16 * v17)) << 8);
        if ( (unsigned int)RIMIsEssentialUsage(v18) )
        {
          v19 = 60LL * v16;
          *(_WORD *)(v19 + a2 + 312) = v13[v15].UsagePage;
          *(_WORD *)(v19 + a2 + 324) = v13[v15].Range.UsageMin;
          *(_DWORD *)(v19 + a2 + 316) = v13[v15].ReportID;
          *(_WORD *)(v19 + a2 + 322) = v13[v15].LinkUsagePage;
          *(_DWORD *)(v19 + a2 + 328) = v13[v15].HasNull;
          *(_DWORD *)(v19 + a2 + 344) = v13[v15].LogicalMin;
          *(_DWORD *)(v19 + a2 + 348) = v13[v15].LogicalMax;
          *(_DWORD *)(v19 + a2 + 352) = v13[v15].PhysicalMin;
          *(_DWORD *)(v19 + a2 + 356) = v13[v15].PhysicalMax;
          *(_WORD *)(v19 + a2 + 368) = v13[v15].BitSize;
          if ( (*(_DWORD *)(a2 + 276) & 0x8000) != 0 )
          {
            UsageMin = v13[v15].Range.UsageMin;
            if ( UsageMin == 48 && v13[v15].UsagePage == 1 )
            {
              v21 = *(__m128i *)&v13[v15].PhysicalMin;
              v36 = v15;
              v22 = *(_OWORD *)&v13[v15].UsagePage;
              v23 = *(_OWORD *)&v13[v15].HasNull;
              v24 = *(_OWORD *)&v13[v15].UnitsExp;
              v40 = *(_QWORD *)&v13[v15].NotRange.DesignatorIndex;
              v39[0] = v22;
              v39[1] = v23;
              v39[2] = v24;
              v39[3] = v21;
              *(_DWORD *)(a2 + 148) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v21, 4)) - _mm_cvtsi128_si32(v21)),
                                        v39);
              *(_DWORD *)(a2 + 124) = v13[v15].LogicalMin;
              *(_DWORD *)(a2 + 132) = v13[v15].LogicalMax;
              UsageMin = v13[v15].Range.UsageMin;
            }
            if ( UsageMin == 49 && v13[v15].UsagePage == 1 )
            {
              v25 = *(__m128i *)&v13[v15].PhysicalMin;
              v37 = v15;
              v26 = *(_OWORD *)&v13[v15].UsagePage;
              v27 = *(_OWORD *)&v13[v15].HasNull;
              v28 = *(_OWORD *)&v13[v15].UnitsExp;
              v42 = *(_QWORD *)&v13[v15].NotRange.DesignatorIndex;
              v41[0] = v26;
              v41[1] = v27;
              v41[2] = v28;
              v41[3] = v25;
              *(_DWORD *)(a2 + 152) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v25, 4)) - _mm_cvtsi128_si32(v25)),
                                        v41);
              *(_DWORD *)(a2 + 128) = v13[v15].LogicalMin;
              *(_DWORD *)(a2 + 136) = v13[v15].LogicalMax;
            }
          }
          RIMCheckPressureUsageStatus(a1, a2, v18);
          v29 = 16LL * v16;
          *(_DWORD *)(a2 + 16 * (v16 + 2LL)) = v16;
          *(_WORD *)(v29 + a2 + 28) = v13[v15].UsagePage;
          *(_WORD *)(v29 + a2 + 30) = v13[v15].Range.UsageMin;
          v30 = *(_OWORD *)&v13[v15].HasNull;
          v43[0] = *(_OWORD *)&v13[v15].UsagePage;
          v31 = *(_OWORD *)&v13[v15].UnitsExp;
          v43[1] = v30;
          v32 = *(_OWORD *)&v13[v15].PhysicalMin;
          v43[2] = v31;
          v44 = *(_QWORD *)&v13[v15].NotRange.DesignatorIndex;
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
    v33 = (*(_DWORD *)(a2 + 276) & 0x8000) == 0;
    *(_DWORD *)(a2 + 684) = v16;
    if ( !v33 )
      v14 = RIMIDEValidateDeviceSize(a2, v6, v37);
    if ( v14 >= 0 && (int)RIMGetDeviceButtons(a1, a2, v5, v48, v34) >= 0 )
      v7 = 1;
  }
  Win32FreePool((__int64)v13);
  return v7;
}
