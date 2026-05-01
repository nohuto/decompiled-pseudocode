/*
 * XREFs of ?_CenterImageWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@AEBUSize@45@AEBU345@@Z @ 0x1800272C8
 * Callers:
 *     ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x1800772E0 (-GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SplashScreen::CBasicSplashScreenLayout::_CenterImageWithRounding(__int64 a1, float *a2, __int64 a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm2_4

  v3 = *(float *)(a3 + 8);
  v4 = *a2;
  v5 = *(float *)(a3 + 12);
  *(_OWORD *)a1 = *(_OWORD *)a3;
  v6 = a2[1];
  if ( v3 >= v4 )
  {
    *(float *)(a1 + 8) = v4;
    v7 = 0.0;
  }
  else
  {
    *(float *)(a1 + 8) = v3;
    v7 = (float)(5 * (int)(float)((float)((float)((float)(v4 - v3) * 0.5) / 5.0) + 0.5));
  }
  *(float *)a1 = v7;
  if ( v5 >= v6 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(float *)(a1 + 12) = v6;
  }
  else
  {
    *(float *)(a1 + 12) = v5;
    *(float *)(a1 + 4) = (float)(5 * (int)(float)((float)((float)((float)(v6 - v5) * 0.5) / 5.0) + 0.5));
  }
  return a1;
}
