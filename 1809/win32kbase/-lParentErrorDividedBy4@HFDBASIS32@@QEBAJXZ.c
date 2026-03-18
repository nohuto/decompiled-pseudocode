/*
 * XREFs of ?lParentErrorDividedBy4@HFDBASIS32@@QEBAJXZ @ 0x1C00A22F0
 * Callers:
 *     ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C006D440 (-bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HFDBASIS32::lParentErrorDividedBy4(HFDBASIS32 *this)
{
  int v1; // r8d
  int v2; // eax
  unsigned int v3; // r9d
  int v4; // ecx
  int v5; // edx
  int v6; // r8d
  unsigned int v7; // edx

  v1 = *((_DWORD *)this + 3);
  v2 = 2 * *((_DWORD *)this + 2);
  v3 = abs32(v1);
  v4 = v2 - v1;
  v5 = v1;
  v6 = v1 - v2;
  v7 = v5 - v2;
  if ( v4 >= 0 )
    v6 = v4;
  if ( (int)v3 <= v6 )
  {
    v3 = v7;
    if ( v4 >= 0 )
      return (unsigned int)v4;
  }
  return v3;
}
