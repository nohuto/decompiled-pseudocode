/*
 * XREFs of sub_1800114D0 @ 0x1800114D0
 * Callers:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_18001F298 @ 0x18001F298 (sub_18001F298.c)
 *     sub_18001F3D4 @ 0x18001F3D4 (sub_18001F3D4.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_18007F740 @ 0x18007F740 (sub_18007F740.c)
 *     sub_1800FB8B0 @ 0x1800FB8B0 (sub_1800FB8B0.c)
 *     sub_18011DCCC @ 0x18011DCCC (sub_18011DCCC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800114D0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 2 * a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
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
