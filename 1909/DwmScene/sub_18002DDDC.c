/*
 * XREFs of sub_18002DDDC @ 0x18002DDDC
 * Callers:
 *     sub_18002D658 @ 0x18002D658 (sub_18002D658.c)
 *     sub_18002D820 @ 0x18002D820 (sub_18002D820.c)
 * Callees:
 *     sub_18009D310 @ 0x18009D310 (sub_18009D310.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002DDDC(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  void *v10; // rcx
  __int64 v11; // rax

  v10 = operator new(0x1CuLL);
  v11 = 0LL;
  if ( v10 )
    v11 = sub_18009D310((_DWORD)v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
