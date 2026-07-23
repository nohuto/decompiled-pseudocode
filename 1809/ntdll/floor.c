/*
 * XREFs of floor @ 0x180093670
 * Callers:
 *     <none>
 * Callees:
 *     _handle_error @ 0x180097E24 (_handle_error.c)
 */

double __cdecl floor(double X)
{
  double v1; // rdx
  __int64 v2; // xmm1_8
  unsigned __int64 v3; // rax
  _BOOL8 v4; // r8
  double v5; // rax

  v1 = X;
  v2 = *(_QWORD *)&X;
  v3 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v4 = *(_QWORD *)&X != (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL);
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) < 0x4340000000000000LL )
  {
    if ( v3 >= 0x3FF0000000000000LL )
    {
      *(_QWORD *)&v5 = *(_QWORD *)&X & ~((1LL << (51 - (unsigned __int8)(*(_QWORD *)&X >> 52))) - 1);
      X = v5;
      if ( v4 && *(_QWORD *)&v5 != *(_QWORD *)&v1 )
        return v5 - 1.0;
    }
    else if ( v3 )
    {
      if ( *(_QWORD *)&X == (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) )
        return 0.0;
      else
        return DOUBLE_N1_0;
    }
  }
  else if ( v3 > 0x7FF0000000000000LL )
  {
    X = 0.0;
    handle_error((unsigned int)"floor", 11, LODWORD(v1), 1, 0, 33, v2, 0LL, 1);
  }
  return X;
}
