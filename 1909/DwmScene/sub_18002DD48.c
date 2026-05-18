/*
 * XREFs of sub_18002DD48 @ 0x18002DD48
 * Callers:
 *     sub_18002D658 @ 0x18002D658 (sub_18002D658.c)
 *     sub_18002D820 @ 0x18002D820 (sub_18002D820.c)
 *     sub_18002F5BC @ 0x18002F5BC (sub_18002F5BC.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 * Callees:
 *     sub_18009D2E4 @ 0x18009D2E4 (sub_18009D2E4.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002DD48(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  void *v11; // rcx
  __int64 v12; // rax

  v11 = operator new(0x1CuLL);
  v12 = 0LL;
  if ( v11 )
    v12 = sub_18009D2E4((_DWORD)v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
