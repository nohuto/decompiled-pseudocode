/*
 * XREFs of sub_18002DCCC @ 0x18002DCCC
 * Callers:
 *     sub_18002D548 @ 0x18002D548 (sub_18002D548.c)
 *     sub_18002D710 @ 0x18002D710 (sub_18002D710.c)
 * Callees:
 *     sub_18009D200 @ 0x18009D200 (sub_18009D200.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002DCCC(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  void *v10; // rcx
  __int64 v11; // rax

  v10 = operator new(0x1CuLL);
  v11 = 0LL;
  if ( v10 )
    v11 = sub_18009D200((_DWORD)v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
