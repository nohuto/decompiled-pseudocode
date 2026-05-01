/*
 * XREFs of ?_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@IAEBU345@@Z @ 0x180428280
 * Callers:
 *     ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x180428210 (-GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SplashScreen::CBasicSplashScreenLayout::_PhysicalRectToScaledRectWithRounding(
        __int64 a1,
        int a2,
        float *a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  __m128i v12; // xmm0
  __int64 result; // rax

  v6 = MulDiv((int)*a3, 100, a2);
  v7 = (int)a3[1];
  *(float *)a1 = (float)v6;
  v8 = MulDiv(v7, 100, a2);
  v9 = (int)a3[2];
  *(float *)(a1 + 4) = (float)v8;
  v10 = MulDiv(v9, 100, a2);
  v11 = (int)a3[3];
  *(float *)(a1 + 8) = (float)v10;
  v12 = _mm_cvtsi32_si128(MulDiv(v11, 100, a2));
  result = a1;
  *(_DWORD *)(a1 + 12) = _mm_cvtepi32_ps(v12).m128_u32[0];
  return result;
}
