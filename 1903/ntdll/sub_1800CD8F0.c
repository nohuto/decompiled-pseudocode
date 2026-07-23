/*
 * XREFs of sub_1800CD8F0 @ 0x1800CD8F0
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800CD6A0 (LdrLoadEnclaveModule.c)
 *     sub_1800CDE60 @ 0x1800CDE60 (sub_1800CDE60.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 */

__int64 __fastcall sub_1800CD8F0(
        _QWORD *a1,
        const void **a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 result; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13[3]; // [rsp+40h] [rbp-18h] BYREF

  result = sub_18002AB70(a2, a5, a3, a4, a6, v13, a8);
  if ( (int)result >= 0 )
  {
    v11 = (_QWORD *)v13[0];
    *(_QWORD *)(*(_QWORD *)(v13[0] + 176) + 168LL) = a1;
    v12 = (_QWORD *)a1[13];
    if ( (_QWORD *)*v12 != a1 + 12 )
      __fastfail(3u);
    *v11 = a1 + 12;
    v11[1] = v12;
    *v12 = v11;
    a1[13] = v11;
    if ( a7 )
      *a7 = v11;
    if ( RtlEqualUnicodeString((PUNICODE_STRING)a2, (PUNICODE_STRING)&stru_1801192A0, 1u) )
    {
      a1[15] = v11;
    }
    else if ( RtlEqualUnicodeString((PUNICODE_STRING)a2, (PUNICODE_STRING)&stru_180119290, 1u) )
    {
      a1[16] = v11;
    }
    return 0LL;
  }
  return result;
}
