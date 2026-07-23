/*
 * XREFs of fabs @ 0x180093580
 * Callers:
 *     <none>
 * Callees:
 *     _except1 @ 0x180098500 (_except1.c)
 *     _handle_qnan1 @ 0x180098868 (_handle_qnan1.c)
 *     _sptype @ 0x180098DD0 (_sptype.c)
 *     _ctrlfp @ 0x180098E70 (_ctrlfp.c)
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
  v2 = ctrlfp(8064LL, 65472LL);
  if ( (HIWORD(X) & 0x7FF0) != 0x7FF0 )
  {
    ctrlfp(v2, 65472LL);
    *(_QWORD *)&X &= ~0x8000000000000000uLL;
    return X;
  }
  v3 = sptype() - 1;
  if ( !v3 )
  {
    ctrlfp(v2, 65472LL);
    return v1;
  }
  v7 = v3 - 1;
  if ( !v7 )
  {
    ctrlfp(v2, 65472LL);
    *(_QWORD *)&v1 = *(_QWORD *)&X ^ _xmm;
    return v1;
  }
  if ( v7 == 1 )
    handle_qnan1(21LL, v4, v2);
  else
    except1(8, 21, v5, v6, v2);
  return X;
}
