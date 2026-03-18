/*
 * XREFs of ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C00C72B4
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00C6B80 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z @ 0x1C00C7130 (-vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vInit(HFDBASIS64 *this, int a2, int a3, int a4, int a5)
{
  __int64 v5; // r11
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax

  v5 = 2LL;
  v7 = a3;
  *((_QWORD *)this + 1) = a5;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 2) = a3;
  v8 = 2LL;
  v9 = a4;
  do
  {
    v7 -= a4;
    --v8;
  }
  while ( v8 );
  v10 = a5 + v7;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = v10;
  v11 = a2;
  do
  {
    v11 -= a3;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)this = (__int64)a2 << 28;
  *((_QWORD *)this + 2) = 1610612736 * v10;
  *((_QWORD *)this + 3) = 1610612736 * (v11 + v9);
  *((_QWORD *)this + 1) = (a5 - (__int64)a2) << 28;
}
