/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180017C30
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180017670 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180022918 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x1800792B8 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     ??$max@M@@YAMMM@Z @ 0x1800182C0 (--$max@M@@YAMMM@Z.c)
 *     ??$min@M@@YAMMM@Z @ 0x1800182D0 (--$min@M@@YAMMM@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024D50 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18002CA30 (-IsPPIEdition@@YA_NXZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18003ADFC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x18004E0E8 (GetStaticImmersiveColorPrivForHighContrastState.c)
 *     floorf_0 @ 0x18004E266 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1800782E8 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     PacksRGBColor @ 0x18007ABEC (PacksRGBColor.c)
 */

__int64 __fastcall CGlassColorizationParameters::AdjustWindowColorization(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        float a3,
        char a4)
{
  bool v7; // zf
  unsigned int v8; // r8d
  __int64 StaticImmersiveColorPrivForHighContrastState; // rax
  __int64 result; // rax
  float v11; // xmm14_4
  float v12; // xmm12_4
  float v13; // xmm6_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm10_4
  float v17; // xmm11_4
  __int64 v18; // rdx
  unsigned int v19; // eax
  int Color; // ecx
  char v21; // di
  const wchar_t *v22; // rdx
  int v23; // eax
  bool v24; // sf
  __int64 v25; // rcx
  int v26; // ebx
  _DWORD *v27; // rax
  _DWORD *v28; // rbx
  __m128i v29; // xmm6
  __m128i v30; // xmm9
  int v31; // eax
  __int64 v32; // rcx
  int v33; // ebx
  int v34; // ecx
  char v35; // bl
  int v36; // ebx
  double v37; // xmm0_8
  float v38; // xmm2_4
  float v39; // xmm15_4
  float v40; // xmm1_4
  float v41; // xmm13_4
  float v42; // xmm10_4
  float v43; // xmm7_4
  int v44; // eax
  float v45; // xmm0_4
  int v46; // [rsp+20h] [rbp-79h] BYREF
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+28h] [rbp-71h] BYREF
  __int64 v48; // [rsp+30h] [rbp-69h] BYREF
  char v49; // [rsp+38h] [rbp-61h]
  __int64 Buffer; // [rsp+40h] [rbp-59h] BYREF
  float v51; // [rsp+48h] [rbp-51h]
  float v52; // [rsp+4Ch] [rbp-4Dh]
  float v53; // [rsp+118h] [rbp+7Fh] BYREF

  if ( (a4 & 0x30) == 0x30 )
  {
    v7 = !IsPPIEdition();
    v8 = 311;
    if ( !v7 )
      v8 = 1173;
    StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                     v8,
                                                     *((unsigned __int8 *)CDesktopManager::s_pDesktopManagerInstance + 26));
    v52 = FLOAT_1_0;
    *(float *)&Buffer = (float)(unsigned __int8)StaticImmersiveColorPrivForHighContrastState / 255.0;
    *((float *)&Buffer + 1) = (float)BYTE1(StaticImmersiveColorPrivForHighContrastState) / 255.0;
    v51 = (float)BYTE2(StaticImmersiveColorPrivForHighContrastState) / 255.0;
    return PacksRGBColor(&Buffer, a1);
  }
  v11 = (float)a2[3] / 255.0;
  v12 = (float)*a1 / 255.0;
  v13 = (float)a2[2] / 255.0;
  v14 = (float)a2[1] / 255.0;
  v15 = (float)*a2 / 255.0;
  v16 = (float)a1[2] / 255.0;
  v17 = (float)a1[1] / 255.0;
  if ( (a4 & 4) != 0 )
  {
    v53 = 0.0;
    (*(void (__fastcall **)(_QWORD, const wchar_t *, float *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 8)
                                                             + 8LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
      L"ColorPrevalence",
      &v53);
    if ( (a4 & 8) != 0 )
    {
      v19 = LODWORD(v53);
      Color = 0;
      LOBYTE(v18) = 0;
      v46 = 0;
      v21 = a4 & 1;
      if ( (a4 & 0x60) == 0 && v53 != 0.0 )
      {
        v22 = L"AccentColorInactive";
        if ( v21 )
          v22 = L"AccentColor";
        v23 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                           + 8)
                                                                        + 8LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
                v22,
                &v46);
        Color = v46;
        v24 = v23 < 0;
        v19 = LODWORD(v53);
        LOBYTE(v18) = !v24;
      }
      if ( (v21 || (_BYTE)v18) && v19 )
      {
        if ( !Color )
        {
          if ( v19 <= 2 )
          {
            v32 = 4LL;
          }
          else
          {
            switch ( v19 )
            {
              case 3u:
                v32 = 3LL;
                break;
              case 4u:
                v32 = 2LL;
                break;
              case 5u:
                v32 = 1LL;
                break;
              default:
                v32 = 338LL;
                break;
            }
          }
          Color = ColorCache::GetColor(v32, v18);
        }
        v29 = _mm_cvtsi32_si128((unsigned __int8)Color);
        v30 = _mm_cvtsi32_si128(BYTE1(Color));
        v31 = BYTE2(Color);
      }
      else
      {
        if ( a4 >= 0 )
        {
          v47 = &ColorCache::_lock;
          EnterCriticalSection(&ColorCache::_lock);
          Buffer = 338LL;
          LOBYTE(v51) = 1;
          v27 = RtlLookupElementGenericTable(&ColorCache::_cachedColors, &Buffer);
          v28 = v27;
          if ( v27 )
          {
            if ( !*((_BYTE *)v27 + 8) )
            {
              v27[1] = CImmersiveColor::GetColor(338LL);
              *((_BYTE *)v28 + 8) = 1;
            }
            v26 = v28[1];
            LeaveCriticalSection(&ColorCache::_lock);
          }
          else
          {
            v48 = 338LL;
            v49 = 1;
            HIDWORD(v48) = CImmersiveColor::GetColor(338LL);
            RtlInsertElementGenericTable(&ColorCache::_cachedColors, &v48, 0xCu, 0LL);
            v26 = HIDWORD(v48);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v47);
          }
        }
        else
        {
          v25 = 302LL;
          if ( (a4 & 2) == 0 )
            v25 = 311LL;
          v26 = ColorCache::GetColor(v25, v18);
        }
        v11 = FLOAT_1_0;
        v29 = _mm_cvtsi32_si128((unsigned __int8)v26);
        v30 = _mm_cvtsi32_si128(BYTE1(v26));
        v31 = BYTE2(v26);
      }
    }
    else
    {
      if ( v53 == 0.0 )
      {
        wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService();
        v33 = a4 & 1;
        v34 = GetStaticImmersiveColorPrivForHighContrastState(
                (unsigned int)(v33 + 301),
                *((unsigned __int8 *)CDesktopManager::s_pDesktopManagerInstance + 26));
        if ( (_BYTE)v33 )
          a3 = FLOAT_0_60000002;
        else
          a3 = FLOAT_0_2;
        v29 = _mm_cvtsi32_si128((unsigned __int8)v34);
        v30 = _mm_cvtsi32_si128(BYTE1(v34));
        v31 = BYTE2(v34);
      }
      else
      {
        v35 = a4 & 1;
        if ( v35 )
        {
          a3 = FLOAT_1_0;
          v11 = FLOAT_1_0;
        }
        if ( v35 == 1 )
          goto LABEL_48;
        v36 = GetStaticImmersiveColorPrivForHighContrastState(
                301LL,
                *((unsigned __int8 *)CDesktopManager::s_pDesktopManagerInstance + 26));
        wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService();
        a3 = FLOAT_0_2;
        v29 = _mm_cvtsi32_si128((unsigned __int8)v36);
        v31 = BYTE2(v36);
        v30 = _mm_cvtsi32_si128(BYTE1(v36));
      }
      v11 = a3;
    }
    v13 = _mm_cvtepi32_ps(v29).m128_f32[0] / 255.0;
    v15 = (float)v31 / 255.0;
    v14 = _mm_cvtepi32_ps(v30).m128_f32[0] / 255.0;
    v12 = v15;
    v16 = v13;
    v17 = v14;
  }
LABEL_48:
  min<float>();
  v53 = (float)max<float>() * (float)(1.0 - v11);
  min<float>();
  v37 = max<float>();
  v38 = *(float *)&v37 * a3;
  v39 = 1.0 - (float)(*(float *)&v37 * a3);
  v40 = (float)((float)(v11 * v13) * v39) + (float)((float)(*(float *)&v37 * a3) * v16);
  v41 = (float)(v11 * v39) + (float)(*(float *)&v37 * a3);
  v42 = (float)((float)(v11 * v14) * v39) + (float)(v38 * v17);
  v43 = (float)((float)(v15 * v11) * v39) + (float)(v38 * v12);
  if ( v41 > 0.0 )
  {
    v40 = v40 / v41;
    v42 = v42 / v41;
    v43 = v43 / v41;
  }
  a1[2] = (int)fminf(floorf_0((float)(v40 * 255.0) + 0.5), 255.0);
  a1[1] = (int)fminf(floorf_0((float)(v42 * 255.0) + 0.5), 255.0);
  *a1 = (int)fminf(floorf_0((float)(v43 * 255.0) + 0.5), 255.0);
  a1[3] = (int)fminf(floorf_0((float)(v41 * 255.0) + 0.5), 255.0);
  v44 = (int)floorf_0((float)(v41 * 100.0) + 0.5);
  v45 = v53 * 100.0;
  *((_DWORD *)a1 + 2) = v44;
  *((_DWORD *)a1 + 3) = (int)floorf_0(v45 + 0.5);
  result = (unsigned int)(int)floorf_0(0.5);
  *((_DWORD *)a1 + 4) = result;
  return result;
}
