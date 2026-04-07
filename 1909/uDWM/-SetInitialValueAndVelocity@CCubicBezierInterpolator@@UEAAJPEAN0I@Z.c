/*
 * XREFs of ?SetInitialValueAndVelocity@CCubicBezierInterpolator@@UEAAJPEAN0I@Z @ 0x1800A4CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCubicBezierInterpolator::SetInitialValueAndVelocity(
        CCubicBezierInterpolator *this,
        double *a2,
        double *a3,
        unsigned int a4)
{
  char *v4; // rcx
  signed __int64 v5; // rdx
  __int64 v6; // r8

  if ( a4 )
  {
    v4 = (char *)*((_QWORD *)this + 2);
    v5 = (char *)a2 - v4;
    v6 = a4;
    do
    {
      *(_QWORD *)v4 = *(_QWORD *)&v4[v5];
      v4 += 8;
      --v6;
    }
    while ( v6 );
  }
  return 0LL;
}
