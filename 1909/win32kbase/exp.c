/*
 * XREFs of exp @ 0x1C00BE790
 * Callers:
 *     ?CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z @ 0x1C01C68B4 (-CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z.c)
 * Callees:
 *     splitexp @ 0x1C00BEA50 (splitexp.c)
 *     _handle_error @ 0x1C00BEF84 (_handle_error.c)
 */

double __cdecl exp(double X)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // ecx
  double v4; // xmm4_8
  unsigned __int64 v5; // rax
  int v6; // edx
  double v8; // xmm4_8
  int v9; // [rsp+60h] [rbp+8h] BYREF
  double v10; // [rsp+68h] [rbp+10h]
  double v11; // [rsp+70h] [rbp+18h]
  __int64 v12; // [rsp+78h] [rbp+20h]

  *(double *)&v12 = X;
  v3 = LODWORD(X);
  v4 = X;
  v5 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v6 = -17155601;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) >= 0x40862E42FEFA39EFLL )
  {
    v6 = 0;
    if ( v5 >= 0x7FF0000000000000LL )
    {
      if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
      {
        X = 0.0;
        handle_error((unsigned int)"exp", 20, v3, 1, 0, 33, *(__int64 *)&v4, 0LL, 1);
      }
      else if ( X < 0.0 )
      {
        return 0.0;
      }
      return X;
    }
    if ( X > 709.782712893384 )
    {
      X = 0.0;
      handle_error((unsigned int)"exp", 20, 0, 3, 17, 34, *(__int64 *)&v4, 0LL, 1);
      return X;
    }
    if ( X < -745.1332191019411 )
    {
      X = 0.0;
      handle_error((unsigned int)"exp", 20, 0, 4, 18, 34, *(__int64 *)&v4, 0LL, 1);
      return X;
    }
  }
  if ( v5 >= 0x3FB0000000000000LL )
  {
    splitexp(0, v6, v1, v2, *(__int64 *)&DOUBLE_5_689487495325456eN11, (__int64)&v9);
    if ( (unsigned int)(v9 + 1022) > 0x7FD )
    {
      v12 = (v9 / 2 + 1023LL) << 52;
      v8 = *(double *)&v12 * (v10 + v11);
      v12 = (v9 - v9 / 2 + 1023LL) << 52;
      return v8 * *(double *)&v12;
    }
    else
    {
      v12 = (v9 + 1023LL) << 52;
      return *(double *)&v12 * (v10 + v11);
    }
  }
  else
  {
    if ( v5 >= 0x3C00000000000000LL )
      v4 = (((((((((X * 0.0000002755731922398589 + 0.000002755731922398589) * X + 0.0000248015873015873) * X
                + 0.0001984126984126984)
               * X
               + 0.001388888888888889)
              * X
              + 0.008333333333333333)
             * X
             + 0.04166666666666666)
            * X
            + 0.1666666666666667)
           * X
           + 0.5)
          * X
          + 1.0)
         * X;
    return v4 + 1.0;
  }
}
