/*
 * XREFs of sub_180114C58 @ 0x180114C58
 * Callers:
 *     sub_18011528C @ 0x18011528C (sub_18011528C.c)
 * Callees:
 *     sub_180114BCC @ 0x180114BCC (sub_180114BCC.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180114C58(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  void *v8; // rax
  __int64 v9; // rcx

  v8 = operator new(0x40uLL);
  v9 = 0LL;
  if ( v8 )
    v9 = sub_180114BCC((__int64)v8, a2, a3, a4);
  *a1 = v9 + 16;
  a1[1] = v9;
  return a1;
}
