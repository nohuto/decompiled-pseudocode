/*
 * XREFs of sub_18001BB48 @ 0x18001BB48
 * Callers:
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_18008D570 @ 0x18008D570 (sub_18008D570.c)
 *     sub_18008D608 @ 0x18008D608 (sub_18008D608.c)
 *     sub_1800D6018 @ 0x1800D6018 (sub_1800D6018.c)
 *     sub_1800DA174 @ 0x1800DA174 (sub_1800DA174.c)
 *     sub_1800E30B0 @ 0x1800E30B0 (sub_1800E30B0.c)
 *     sub_1800ED7D8 @ 0x1800ED7D8 (sub_1800ED7D8.c)
 *     sub_1800F1550 @ 0x1800F1550 (sub_1800F1550.c)
 *     sub_1800F64CC @ 0x1800F64CC (sub_1800F64CC.c)
 *     sub_1800FB5CC @ 0x1800FB5CC (sub_1800FB5CC.c)
 *     sub_18012067C @ 0x18012067C (sub_18012067C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18001BB48(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v2 = -1LL;
  if ( v2 < 0x1000 )
  {
    result = 0LL;
    if ( v2 )
      return operator new(v2);
  }
  else
  {
    v3 = v2 + 39;
    if ( v2 + 39 < v2 )
      v3 = -1LL;
    v4 = operator new(v3);
    v6 = v4;
    if ( !v4 )
    {
      o__invalid_parameter_noinfo_noreturn(0LL, v5);
      __debugbreak();
    }
    result = (_QWORD *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(result - 1) = v6;
  }
  return result;
}
