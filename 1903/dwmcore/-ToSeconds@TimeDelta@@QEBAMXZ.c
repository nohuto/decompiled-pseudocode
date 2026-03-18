/*
 * XREFs of ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x1801E7180
 * Callers:
 *     ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801E508C (-CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180206F34 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?ToMicroseconds@TimeDelta@@QEBA_JXZ @ 0x1800CBBA4 (-ToMicroseconds@TimeDelta@@QEBA_JXZ.c)
 */

float __fastcall TimeDelta::ToSeconds(TimeDelta *this)
{
  if ( *(_QWORD *)this == 0x7FFFFFFFFFFFFFFFLL )
    return FLOAT_3_4028235e38;
  else
    return (float)(int)TimeDelta::ToMicroseconds(this) / 1000000.0;
}
