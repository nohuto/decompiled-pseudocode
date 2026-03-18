/*
 * XREFs of ?_GetSqrt@DXGMONITOR@@AEAANN@Z @ 0x1C029BC24
 * Callers:
 *     ?_GetDeltaBetweenPoints@DXGMONITOR@@AEAANNNNN@Z @ 0x1C029AFB4 (-_GetDeltaBetweenPoints@DXGMONITOR@@AEAANNNNN@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall DXGMONITOR::_GetSqrt(DXGMONITOR *this, double a2)
{
  double result; // xmm0_8
  double v3; // xmm2_8
  double v4; // xmm3_8
  double v5; // xmm4_8
  double v6; // xmm4_8

  result = 0.0;
  v3 = a2;
  if ( a2 != 0.0 )
  {
    if ( a2 < 0.0 )
      *(_QWORD *)&v3 = *(_QWORD *)&a2 ^ _xmm;
    v4 = v3 * 0.5;
    do
    {
      v5 = v4;
      v4 = (v3 / v4 + v4) * 0.5;
      if ( v5 <= v4 )
        v6 = v4 - v5;
      else
        v6 = v5 - v4;
    }
    while ( v6 >= 0.0000001 );
    return v4;
  }
  return result;
}
