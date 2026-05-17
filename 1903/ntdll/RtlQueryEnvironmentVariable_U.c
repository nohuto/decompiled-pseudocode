/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x18005CB10
 * Callers:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_18005C0EC @ 0x18005C0EC (sub_18005C0EC.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18005D960 @ 0x18005D960 (sub_18005D960.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800DDF30 @ 0x1800DDF30 (sub_1800DDF30.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable_U(char *a1, wchar_t **a2, __int64 a3)
{
  __int64 result; // rax
  __int16 v5; // cx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  result = RtlQueryEnvironmentVariable(
             a1,
             a2[1],
             (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
             *(_WORD **)(a3 + 8),
             (unsigned __int64)*(unsigned __int16 *)(a3 + 2) >> 1,
             (__int64)&v6);
  v5 = v6;
  if ( v6 > 0x7FFF )
    return 3221225495LL;
  if ( (_DWORD)result == -1073741789 )
    v5 = v6 - 1;
  *(_WORD *)a3 = 2 * v5;
  return result;
}
