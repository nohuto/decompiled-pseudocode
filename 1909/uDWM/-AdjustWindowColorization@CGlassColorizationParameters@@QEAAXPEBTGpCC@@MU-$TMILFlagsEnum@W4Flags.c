/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001CFE0
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001CA20 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180020BCC (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18007F648 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$max@M@@YAMMM@Z @ 0x18001D690 (--$max@M@@YAMMM@Z.c)
 *     ??$min@M@@YAMMM@Z @ 0x18001D6A0 (--$min@M@@YAMMM@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180028CC8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18003C6E0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x18004F95C (GetStaticImmersiveColorPrivForHighContrastState.c)
 *     floorf_0 @ 0x18004FAD6 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18007E5B8 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     PacksRGBColor @ 0x18008101C (PacksRGBColor.c)
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
  float v12; // xmm13_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  int v18; // edi
  unsigned int v19; // eax
  float v20; // ecx
  bool v21; // dl
  const wchar_t *v22; // rdx
  int v23; // eax
  bool v24; // sf
  __int64 v25; // rcx
  int Color; // ebx
  _DWORD *v27; // rax
  _DWORD *v28; // rbx
  __m128i v29; // xmm7
  __m128i v30; // xmm8
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // ecx
  double v38; // xmm0_8
  float v39; // xmm7_4
  float v40; // xmm15_4
  float v41; // xmm8_4
  float v42; // xmm9_4
  int v43; // eax
  float v44; // xmm0_4
  float v45; // [rsp+28h] [rbp-79h] BYREF
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+30h] [rbp-71h] BYREF
  __int64 v47; // [rsp+38h] [rbp-69h] BYREF
  char v48; // [rsp+40h] [rbp-61h]
  __int64 Buffer; // [rsp+48h] [rbp-59h] BYREF
  float v50; // [rsp+50h] [rbp-51h]
  float v51; // [rsp+54h] [rbp-4Dh]
  float v52; // [rsp+120h] [rbp+7Fh] BYREF

  if ( (a4 & 0x30) == 0x30 )
  {
    v7 = !IsPPIEdition();
    v8 = 312;
    if ( !v7 )
      v8 = 1178;
    StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                     v8,
                                                     *((unsigned __int8 *)CDesktopManager::s_pDesktopManagerInstance + 26));
    v51 = FLOAT_1_0;
    *(float *)&Buffer = (float)(unsigned __int8)StaticImmersiveColorPrivForHighContrastState / 255.0;
    *((float *)&Buffer + 1) = (float)BYTE1(StaticImmersiveColorPrivForHighContrastState) / 255.0;
    v50 = (float)BYTE2(StaticImmersiveColorPrivForHighContrastState) / 255.0;
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
    v52 = 0.0;
    (*(void (__fastcall **)(_QWORD, const wchar_t *, float *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 8)
                                                             + 8LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
      L"ColorPrevalence",
      &v52);
    v18 = a4 & 1;
    if ( (a4 & 8) != 0 )
    {
      v19 = LODWORD(v52);
      v20 = 0.0;
      v21 = 0;
      v45 = 0.0;
      if ( (a4 & 0x60) == 0 && v52 != 0.0 )
      {
        v22 = L"AccentColorInactive";
        if ( (_BYTE)v18 )
          v22 = L"AccentColor";
        v23 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, float *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 8)
                                                                          + 8LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
                v22,
                &v45);
        v20 = v45;
        v24 = v23 < 0;
        v19 = LODWORD(v52);
        v21 = !v24;
      }
      if ( ((_BYTE)v18 || v21) && v19 )
      {
        if ( v20 == 0.0 )
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
                v32 = 343LL;
                break;
            }
          }
          LODWORD(v20) = ColorCache::GetColor(v32);
        }
        v29 = _mm_cvtsi32_si128(LOBYTE(v20));
        v30 = _mm_cvtsi32_si128(HIBYTE(LOWORD(v20)));
        v31 = BYTE2(v20);
      }
      else
      {
        if ( a4 >= 0 )
        {
          v46 = &ColorCache::_lock;
          EnterCriticalSection(&ColorCache::_lock);
          Buffer = 343LL;
          LOBYTE(v50) = 1;
          v27 = RtlLookupElementGenericTable(&ColorCache::_cachedColors, &Buffer);
          v28 = v27;
          if ( v27 )
          {
            if ( !*((_BYTE *)v27 + 8) )
            {
              v27[1] = CImmersiveColor::GetColor(343LL);
              *((_BYTE *)v28 + 8) = 1;
            }
            Color = v28[1];
            LeaveCriticalSection(&ColorCache::_lock);
          }
          else
          {
            v47 = 343LL;
            v48 = 1;
            HIDWORD(v47) = CImmersiveColor::GetColor(343LL);
            RtlInsertElementGenericTable(&ColorCache::_cachedColors, &v47, 0xCu, 0LL);
            Color = HIDWORD(v47);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v46);
          }
        }
        else
        {
          v25 = 303LL;
          if ( (a4 & 2) == 0 )
            v25 = 312LL;
          Color = ColorCache::GetColor(v25);
        }
        v11 = FLOAT_1_0;
        v29 = _mm_cvtsi32_si128((unsigned __int8)Color);
        v30 = _mm_cvtsi32_si128(BYTE1(Color));
        v31 = BYTE2(Color);
      }
      goto LABEL_51;
    }
    if ( v52 == 0.0 )
    {
      v33 = (unsigned int)!(a4 & 1) + 315;
      v34 = a4 & 0x80;
      if ( !v34 )
        v33 = (unsigned int)(v18 + 302);
      v35 = GetStaticImmersiveColorPrivForHighContrastState(
              v33,
              *((unsigned __int8 *)CDesktopManager::s_pDesktopManagerInstance + 26));
      if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 603LL) || v34 )
      {
        if ( v18 )
          a3 = FLOAT_0_60000002;
        else
          a3 = FLOAT_0_2;
      }
      else
      {
        a3 = FLOAT_0_14;
      }
      v29 = _mm_cvtsi32_si128((unsigned __int8)v35);
      v30 = _mm_cvtsi32_si128(BYTE1(v35));
      v31 = BYTE2(v35);
      goto LABEL_50;
    }
    if ( (a4 & 1) == 0 )
    {
      v36 = GetStaticImmersiveColorPrivForHighContrastState(
              302LL,
              *((unsigned __int8 *)CDesktopManager::s_pDesktopManagerInstance + 26));
      a3 = FLOAT_0_2;
      v29 = _mm_cvtsi32_si128((unsigned __int8)v36);
      v37 = BYTE1(v36);
      v31 = BYTE2(v36);
      v30 = _mm_cvtsi32_si128(v37);
LABEL_50:
      v11 = a3;
LABEL_51:
      v14 = _mm_cvtepi32_ps(v30).m128_f32[0] / 255.0;
      v15 = (float)v31 / 255.0;
      v13 = _mm_cvtepi32_ps(v29).m128_f32[0] / 255.0;
      v12 = v15;
      v17 = v14;
      v16 = v13;
      goto LABEL_52;
    }
    a3 = FLOAT_1_0;
    v11 = FLOAT_1_0;
  }
LABEL_52:
  min<float>();
  v45 = (float)max<float>() * (float)(1.0 - v11);
  min<float>();
  v38 = max<float>();
  v52 = 1.0 - (float)(*(float *)&v38 * a3);
  v39 = (float)((float)(v13 * v11) * v52) + (float)((float)(*(float *)&v38 * a3) * v16);
  v40 = (float)(v11 * v52) + (float)(*(float *)&v38 * a3);
  v41 = (float)((float)(v14 * v11) * v52) + (float)((float)(*(float *)&v38 * a3) * v17);
  v42 = (float)((float)(v15 * v11) * v52) + (float)((float)(*(float *)&v38 * a3) * v12);
  if ( v40 > 0.0 )
  {
    v39 = v39 / v40;
    v41 = v41 / v40;
    v42 = v42 / v40;
  }
  a1[2] = (int)fminf(floorf_0((float)(v39 * 255.0) + 0.5), 255.0);
  a1[1] = (int)fminf(floorf_0((float)(v41 * 255.0) + 0.5), 255.0);
  *a1 = (int)fminf(floorf_0((float)(v42 * 255.0) + 0.5), 255.0);
  a1[3] = (int)fminf(floorf_0((float)(v40 * 255.0) + 0.5), 255.0);
  v43 = (int)floorf_0((float)(v40 * 100.0) + 0.5);
  v44 = v45 * 100.0;
  *((_DWORD *)a1 + 2) = v43;
  *((_DWORD *)a1 + 3) = (int)floorf_0(v44 + 0.5);
  result = (unsigned int)(int)floorf_0(0.5);
  *((_DWORD *)a1 + 4) = result;
  return result;
}
