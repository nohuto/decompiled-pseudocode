/*
 * XREFs of atan @ 0x18008E870
 * Callers:
 *     <none>
 * Callees:
 *     sub_180094580 @ 0x180094580 (sub_180094580.c)
 *     sub_1800946BC @ 0x1800946BC (sub_1800946BC.c)
 */

double __cdecl atan(double X)
{
  int v1; // r8d
  unsigned __int64 v3; // rax
  double v4; // xmm1_8
  double result; // xmm0_8
  double v6; // xmm6_8
  double v7; // xmm5_8
  double v8; // xmm6_8
  double v9; // xmm4_8
  double v10; // xmm5_8

  v1 = LODWORD(X);
  v3 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v4 = X;
  if ( *(_QWORD *)&X != (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) )
    v4 = -X;
  if ( v3 <= 0x4003800000000000LL )
  {
    v9 = v4;
    if ( v3 <= 0x3FF3000000000000LL )
    {
      if ( v3 <= 0x3FE6000000000000LL )
      {
        if ( v3 <= 0x3FDC000000000000LL )
        {
          v7 = 0.0;
          v8 = 0.0;
        }
        else
        {
          v7 = 0.4636476090008061;
          v8 = 2.269877745296168e-17;
          v9 = (v4 + v4 - 1.0) / (v4 + 2.0);
        }
      }
      else
      {
        v7 = 0.7853981633974483;
        v8 = 3.061616997868382e-17;
        v9 = (v4 - 1.0) / (v4 + 1.0);
      }
    }
    else
    {
      v7 = 0.9827937232473291;
      v8 = 1.3903311031231e-17;
      v9 = (v4 - 1.5) / (v4 * 1.5 + 1.0);
    }
  }
  else
  {
    if ( v3 > 0x7FF0000000000000LL )
    {
      result = 0.0;
      sub_1800946BC((unsigned int)"atan", 15, v1, 1, 0, 33, *(__int64 *)&X, 0LL, 1);
      return result;
    }
    if ( v4 > 4.859383997932765e18 )
    {
      v6 = *(double *)&qword_18015FAD0;
      if ( *(_QWORD *)&X != (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) )
        v6 = -*(double *)&qword_18015FAD0;
      sub_180094580(16LL, 16LL);
      return v6;
    }
    v7 = 1.570796326794897;
    v8 = 6.123233995736765e-17;
    v9 = -1.0 / v4;
  }
  v10 = v7
      - (((((v9 * v9 * 0.0001423169033423178 + 0.0304455919504853) * (v9 * v9) + 0.2206387807166674) * (v9 * v9)
         + 0.4476772068054975)
        * (v9
         * v9)
        + 0.2682979205325459)
       * (v9
        * v9
        * v9)
       / ((((v9 * v9 * 0.03895258739447422 + 0.4246025942038471) * (v9 * v9) + 1.412542599319589) * (v9 * v9)
         + 1.825967877375071)
        * (v9
         * v9)
        + 0.8048937615976377)
       - v8
       - v9);
  if ( *(_QWORD *)&X != (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) )
    return -v10;
  return v10;
}
