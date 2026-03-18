/*
 * XREFs of ?EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimationType@@@Z @ 0x1C01ACAE8
 * Callers:
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01ACBF0 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::EnsureProperties(float *a1, int a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  float v4; // xmm0_4
  float v5; // xmm1_4

  v2 = *((_DWORD *)a1 + 37);
  v3 = 0;
  if ( !v2 )
  {
    if ( a2 == 1 )
    {
      v4 = FLOAT_0_5;
      v5 = FLOAT_10_0;
    }
    else
    {
      if ( a2 != 2 )
        return (unsigned int)-1073741811;
      v4 = FLOAT_0_050000001;
      v5 = FLOAT_0_69999999;
    }
    a1[38] = v5;
    a1[39] = v4;
    *((_DWORD *)a1 + 37) = a2;
    return v3;
  }
  if ( v2 != a2 )
    return (unsigned int)-1073741811;
  return v3;
}
