/*
 * XREFs of sub_18001BA38 @ 0x18001BA38
 * Callers:
 *     sub_180016A10 @ 0x180016A10 (sub_180016A10.c)
 *     sub_18008D460 @ 0x18008D460 (sub_18008D460.c)
 *     sub_18008D4F8 @ 0x18008D4F8 (sub_18008D4F8.c)
 *     sub_1800D5F08 @ 0x1800D5F08 (sub_1800D5F08.c)
 *     sub_1800DA064 @ 0x1800DA064 (sub_1800DA064.c)
 *     sub_1800E2FA0 @ 0x1800E2FA0 (sub_1800E2FA0.c)
 *     sub_1800ED6C8 @ 0x1800ED6C8 (sub_1800ED6C8.c)
 *     sub_1800F1440 @ 0x1800F1440 (sub_1800F1440.c)
 *     sub_1800F63BC @ 0x1800F63BC (sub_1800F63BC.c)
 *     sub_1800FB4BC @ 0x1800FB4BC (sub_1800FB4BC.c)
 *     sub_18012056C @ 0x18012056C (sub_18012056C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18001BA38(__int64 a1, unsigned __int64 a2)
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
