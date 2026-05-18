/*
 * XREFs of sub_18002DC38 @ 0x18002DC38
 * Callers:
 *     sub_18002D548 @ 0x18002D548 (sub_18002D548.c)
 *     sub_18002D710 @ 0x18002D710 (sub_18002D710.c)
 *     sub_18002F4AC @ 0x18002F4AC (sub_18002F4AC.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 * Callees:
 *     sub_18009D1D4 @ 0x18009D1D4 (sub_18009D1D4.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002DC38(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  void *v11; // rcx
  __int64 v12; // rax

  v11 = operator new(0x1CuLL);
  v12 = 0LL;
  if ( v11 )
    v12 = sub_18009D1D4((_DWORD)v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
