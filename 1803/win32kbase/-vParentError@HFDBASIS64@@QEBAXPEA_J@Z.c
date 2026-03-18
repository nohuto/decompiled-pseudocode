/*
 * XREFs of ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x1C00C734C
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00C6B80 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vParentError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  signed __int64 v4; // r11
  __int64 v5; // rcx
  signed __int64 v6; // rax

  v2 = 4LL * *((_QWORD *)this + 3);
  v3 = -4LL * *((_QWORD *)this + 3);
  v4 = abs64(v2);
  v5 = 8LL * *((_QWORD *)this + 2);
  if ( v5 - v2 >= 0 )
    v6 = v5 - v2;
  else
    v6 = v2 - v5;
  if ( v4 <= v6 )
  {
    if ( v5 - v2 >= 0 )
      v3 = v5 - v2;
    else
      v3 = v2 - v5;
  }
  else if ( v2 >= 0 )
  {
    v3 = v2;
  }
  *a2 = v3;
}
