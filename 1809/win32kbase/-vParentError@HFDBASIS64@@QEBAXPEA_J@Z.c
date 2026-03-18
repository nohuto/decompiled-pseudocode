/*
 * XREFs of ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x1C00FB5D4
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00FAE10 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vParentError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r10
  signed __int64 v7; // r11
  __int64 v8; // rdx
  signed __int64 v9; // rcx
  __int64 v10; // rax

  v2 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 2);
  v5 = 4 * v2;
  v6 = 8 * v4;
  v7 = abs64(v5);
  v8 = 8 * v4 - v5;
  if ( v8 >= 0 )
    v9 = 8 * v4 - v5;
  else
    v9 = v5 - v6;
  v10 = -v5;
  if ( v7 <= v9 )
  {
    if ( v8 >= 0 )
      v10 = v8;
    else
      v10 = v5 - v6;
  }
  else if ( v5 >= 0 )
  {
    v10 = v5;
  }
  *a2 = v10;
}
