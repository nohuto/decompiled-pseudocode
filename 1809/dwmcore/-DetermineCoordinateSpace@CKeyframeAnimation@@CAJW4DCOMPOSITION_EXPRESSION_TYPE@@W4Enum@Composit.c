/*
 * XREFs of ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800541DC
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180052FB0 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::DetermineCoordinateSpace(int a1, int a2, int *a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = a1 - 11;
  if ( !v4 )
    goto LABEL_4;
  v5 = 6;
  v6 = v4 - 6;
  if ( !v6 )
    goto LABEL_5;
  v7 = v6 - 1;
  if ( !v7 || (v9 = v7 - 17) == 0 || (v10 = v9 - 17) == 0 || (v11 = v10 - 17) == 0 )
  {
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v5 = 1;
      goto LABEL_5;
    }
    v13 = 1397;
LABEL_21:
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, v13);
    return v3;
  }
  if ( a2 < 0 )
    goto LABEL_20;
  v5 = 2;
  if ( a2 > 1 )
  {
    if ( a2 == 2 )
    {
      v5 = 4;
      goto LABEL_5;
    }
    v5 = 3;
    if ( a2 == 3 )
    {
      v5 = 5;
      goto LABEL_5;
    }
    if ( a2 != 4 )
    {
LABEL_20:
      v13 = 1387;
      goto LABEL_21;
    }
  }
LABEL_5:
  *a3 = v5;
  return v3;
}
