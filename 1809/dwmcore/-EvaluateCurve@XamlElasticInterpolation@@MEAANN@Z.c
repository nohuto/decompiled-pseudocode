/*
 * XREFs of ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x1801D8F50
 * Callers:
 *     <none>
 * Callees:
 *     exp @ 0x1800EC5EC (exp.c)
 *     _o_sin_0 @ 0x1800EC634 (_o_sin_0.c)
 */

double __fastcall XamlElasticInterpolation::EvaluateCurve(XamlElasticInterpolation *this, double a2)
{
  double v3; // xmm9_8
  float v4; // xmm2_4
  double v5; // xmm7_8
  double v6; // xmm7_8

  v3 = *((float *)this + 9);
  v4 = COERCE_DOUBLE(*(_QWORD *)&v3 & _xmm);
  if ( v4 >= 0.0000011920929 )
  {
    v6 = exp(v3 * a2) - 1.0;
    v5 = v6 / (exp(v3) - 1.0);
  }
  else
  {
    v5 = a2;
  }
  return o_sin_0(((double)*((int *)this + 8) * 6.283185482025146 + 1.570796370506287) * a2) * v5;
}
