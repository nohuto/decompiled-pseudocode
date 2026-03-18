/*
 * XREFs of ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B0540
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B032C (-SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B037C (-SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B03D0 (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B0434 (-SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B0488 (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B04EC (-SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::SetProperty(CProjectedShadowScene *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  if ( a3 != 18 )
    goto LABEL_14;
  v4 = 0;
  if ( !a2 )
  {
    CProjectedShadowScene::SetBlurRadiusMultiplier(a1, *a4);
    return v4;
  }
  v5 = a2 - 3;
  if ( !v5 )
  {
    CProjectedShadowScene::SetMaxBlurRadius(a1, *a4);
    return v4;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    CProjectedShadowScene::SetMaxOpacity(a1, *a4);
    return v4;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    CProjectedShadowScene::SetMinBlurRadius(a1, *a4);
    return v4;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    CProjectedShadowScene::SetMinOpacity(a1, *a4);
    return v4;
  }
  if ( v8 != 1 )
  {
LABEL_14:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0xF5u);
    return v4;
  }
  CProjectedShadowScene::SetOpacityFalloff(a1, *a4);
  return v4;
}
