/*
 * XREFs of sub_1800269A0 @ 0x1800269A0
 * Callers:
 *     sub_180027630 @ 0x180027630 (sub_180027630.c)
 * Callees:
 *     sub_18002B81C @ 0x18002B81C (sub_18002B81C.c)
 */

__int64 __fastcall sub_1800269A0(__int64 a1, __int64 a2, _DWORD **a3)
{
  __int64 result; // rax

  result = sub_18002B81C(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = **a3;
  *(_QWORD *)(result + 40) = 0LL;
  return result;
}
