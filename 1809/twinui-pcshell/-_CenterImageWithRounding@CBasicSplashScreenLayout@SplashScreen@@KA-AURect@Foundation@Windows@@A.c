/*
 * XREFs of ?_CenterImageWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@AEBUSize@45@AEBU345@@Z @ 0x1800546F4
 * Callers:
 *     ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x180053FE0 (-GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SplashScreen::CBasicSplashScreenLayout::_CenterImageWithRounding(__int64 a1, float *a2, __int64 a3)
{
  float v3; // xmm4_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4

  v3 = *(float *)(a3 + 8);
  v4 = *(float *)(a3 + 12);
  v5 = a2[1];
  *(_OWORD *)a1 = *(_OWORD *)a3;
  v6 = *a2;
  if ( v3 >= *a2 )
  {
    *(_DWORD *)a1 = 0;
    *(float *)(a1 + 8) = v6;
  }
  else
  {
    *(float *)(a1 + 8) = v3;
    *(float *)a1 = (float)(5 * (int)(float)((float)((float)((float)(v6 - v3) * 0.5) / 5.0) + 0.5));
  }
  if ( v4 >= v5 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(float *)(a1 + 12) = v5;
  }
  else
  {
    *(float *)(a1 + 12) = v4;
    *(float *)(a1 + 4) = (float)(5 * (int)(float)((float)((float)((float)(v5 - v4) * 0.5) / 5.0) + 0.5));
  }
  return a1;
}
