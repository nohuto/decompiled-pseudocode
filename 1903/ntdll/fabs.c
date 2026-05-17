/*
 * XREFs of fabs @ 0x18008FE30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180094DA0 @ 0x180094DA0 (sub_180094DA0.c)
 *     sub_180095108 @ 0x180095108 (sub_180095108.c)
 *     sub_180095664 @ 0x180095664 (sub_180095664.c)
 *     sub_180095704 @ 0x180095704 (sub_180095704.c)
 */

double __cdecl fabs(double X)
{
  double v1; // xmm6_8
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  int v7; // eax

  v1 = X;
  v2 = sub_180095704(8064LL, 65472LL);
  if ( (HIWORD(X) & 0x7FF0) != 0x7FF0 )
  {
    sub_180095704(v2, 65472LL);
    *(_QWORD *)&X &= ~0x8000000000000000uLL;
    return X;
  }
  v3 = sub_180095664() - 1;
  if ( !v3 )
  {
    sub_180095704(v2, 65472LL);
    return v1;
  }
  v7 = v3 - 1;
  if ( !v7 )
  {
    sub_180095704(v2, 65472LL);
    return -X;
  }
  if ( v7 == 1 )
    sub_180095108(21LL, v4, v2);
  else
    sub_180094DA0(8, 21, v5, v6, v2);
  return X;
}
