/*
 * XREFs of sub_180026890 @ 0x180026890
 * Callers:
 *     sub_180027520 @ 0x180027520 (sub_180027520.c)
 * Callees:
 *     sub_18002B70C @ 0x18002B70C (sub_18002B70C.c)
 */

__int64 __fastcall sub_180026890(__int64 a1, __int64 a2, _DWORD **a3)
{
  __int64 result; // rax

  result = sub_18002B70C(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = **a3;
  *(_QWORD *)(result + 40) = 0LL;
  return result;
}
