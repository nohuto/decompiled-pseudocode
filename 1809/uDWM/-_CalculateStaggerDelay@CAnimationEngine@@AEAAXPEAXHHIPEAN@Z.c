/*
 * XREFs of ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x18000CF68
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18000FB54 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationEngine::_CalculateStaggerDelay(
        CAnimationEngine *this,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        double *a6)
{
  double *v6; // rbx
  int ThemeAnimationProperty; // eax
  int v11; // ecx
  int v12; // r8d
  float v13; // xmm3_4
  double v14; // xmm5_8
  float v15; // xmm1_4
  float v16; // xmm2_4
  bool v17; // r9
  unsigned int v18; // r10d
  unsigned int v19; // edx
  int v20; // ecx
  double v21; // xmm1_8
  float v22; // xmm2_4
  double v23; // xmm1_8
  int v24; // [rsp+40h] [rbp-10h] BYREF
  int v25; // [rsp+44h] [rbp-Ch] BYREF
  float v26; // [rsp+48h] [rbp-8h] BYREF
  int v27; // [rsp+70h] [rbp+20h] BYREF
  int v28; // [rsp+74h] [rbp+24h]

  v28 = HIDWORD(this);
  v6 = a6;
  v24 = 0;
  v25 = 0;
  LODWORD(a6) = 0;
  *v6 = 0.0;
  v27 = 0;
  v26 = 1.0;
  if ( (int)GetThemeAnimationProperty(a2, a3, a4, 0LL, &v24, 4, &v27) >= 0 && (v24 & 5) == 5 )
  {
    if ( (int)GetThemeAnimationProperty(a2, a3, a4, 2LL, &v25, 4, &v27) >= 0 )
    {
      ThemeAnimationProperty = GetThemeAnimationProperty(a2, a3, a4, 3LL, &a6, 4, &v27);
      v11 = (int)a6;
      if ( ThemeAnimationProperty < 0 )
        v11 = 1000;
      LODWORD(a6) = v11;
      GetThemeAnimationProperty(a2, a3, a4, 4LL, &v26, 4, &v27);
    }
    v12 = v25;
    if ( v25 )
    {
      v13 = v26;
      v14 = DOUBLE_1_0;
      v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v26) & _xmm);
      v17 = 0;
      if ( v15 >= 0.0000011920929 )
      {
        v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26 - 1.0)) & _xmm);
        if ( v16 >= 0.0000011920929 )
          v17 = 1;
      }
      v18 = a5;
      v19 = 0;
      v20 = (int)a6;
      if ( a5 )
      {
        v21 = *v6;
        v22 = (float)(int)a6;
        do
        {
          if ( v22 <= v21 )
            break;
          *v6 = (double)v12 * v14 + v21;
          v21 = (double)v12 * v14 + v21;
          if ( v17 )
            v14 = v14 * v13;
          ++v19;
        }
        while ( v19 < v18 );
      }
      v23 = *v6;
      if ( v20 )
      {
        v23 = fmin(v23, (double)v20);
        *v6 = v23;
      }
      *v6 = v23 / 1000.0;
    }
  }
}
