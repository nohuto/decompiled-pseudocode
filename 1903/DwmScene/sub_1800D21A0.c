/*
 * XREFs of sub_1800D21A0 @ 0x1800D21A0
 * Callers:
 *     sub_1800D2500 @ 0x1800D2500 (sub_1800D2500.c)
 * Callees:
 *     sub_1800CE920 @ 0x1800CE920 (sub_1800CE920.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D21A0(__int64 *a1, int *a2, int *a3, int *a4, int *a5, int *a6)
{
  void *v10; // rcx
  __int64 v11; // rax

  v10 = operator new(0x20uLL);
  v11 = 0LL;
  if ( v10 )
    v11 = sub_1800CE920((__int64)v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
