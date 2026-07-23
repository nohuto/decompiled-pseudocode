/*
 * XREFs of log @ 0x1800938A0
 * Callers:
 *     <none>
 * Callees:
 *     _handle_error @ 0x180097E24 (_handle_error.c)
 */

double __cdecl log(double X)
{
  double v1; // r8
  __int64 v2; // xmm4_8
  int v3; // r9d
  double v4; // xmm4_8
  double v5; // xmm3_8
  double v6; // xmm2_8
  __int64 v7; // rdx
  int v8; // r8d
  double v9; // xmm3_8
  int v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp+8h]

  v1 = X;
  v2 = *(_QWORD *)&X;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      X = 0.0;
      v11 = v2;
      v10 = 0;
LABEL_4:
      handle_error((unsigned int)"log", 26, LODWORD(v1), 1, v10, 33, v11, 0LL, 1);
      return X;
    }
    if ( X >= 0.0 )
      return X;
LABEL_7:
    X = 0.0;
    LODWORD(v1) = 0;
    v11 = v2;
    v10 = 8;
    goto LABEL_4;
  }
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    X = 0.0;
    handle_error((unsigned int)"log", 26, 0, 2, 4, 34, v2, 0LL, 1);
    return X;
  }
  v3 = 0;
  if ( X < 0.0 )
    goto LABEL_7;
  if ( (unsigned __int64)(*(_QWORD *)&X - 0x3FEE0FAA00000000LL) > 0x2F88200000000LL )
  {
    if ( *(_QWORD *)&X < 0x10000000000000uLL )
    {
      v3 = 60;
      v1 = COERCE_DOUBLE(*(_QWORD *)&X | 0x3D0000000000000LL) - 2.565335500811485e-290;
    }
    v12 = *(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL;
    v7 = ((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40);
    v8 = ((*(_QWORD *)&v1 >> 52) & 0x7FF) - v3 - 1023;
    v9 = (*(double *)&v12 - (double)(int)v7 * 0.0078125)
       / ((*(double *)&v12 - (double)(int)v7 * 0.0078125) * 0.5 + (double)(int)v7 * 0.0078125);
    return ((v9 * v9 * 0.002232198107585598 + 0.01249999999781387) * (v9 * v9) + 0.08333333333333336) * (v9 * v9) * v9
         + v9
         + qword_18011EDD0[v7]
         + (double)v8 * 0.00000005769999047543285
         + (double)v8 * 0.6931471228599548
         + qword_18011EBC0[v7];
  }
  else
  {
    v4 = X - 1.0;
    v5 = v4 / (v4 + 2.0);
    v6 = v5 + v5;
    return (((v6 * v6 * 0.0004348877777076146 + 0.002232139987919448) * (v6 * v6) + 0.01250000000377175) * (v6 * v6)
          + 0.08333333333333179)
         * (v6
          * v6
          * v6)
         - v5 * v4
         + v4;
  }
}
