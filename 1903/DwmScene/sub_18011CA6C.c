/*
 * XREFs of sub_18011CA6C @ 0x18011CA6C
 * Callers:
 *     sub_18011CC30 @ 0x18011CC30 (sub_18011CC30.c)
 * Callees:
 *     sub_180025584 @ 0x180025584 (sub_180025584.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011CA6C(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx
  _QWORD *result; // rax
  __int64 v8; // [rsp+58h] [rbp+10h]

  v3 = sub_180025584(a1);
  try
  {
    v4 = v3;
    v8 = (__int64)v3;
    *((_WORD *)v3 + 12) = 0;
    *((_DWORD *)v3 + 8) = *(_DWORD *)a2;
    v3[12] = 0LL;
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 64);
    if ( v5 )
      v3[12] = (**v5)(v5, (__int64)(v3 + 5));
    result = v4;
  }
  catch ( ... )
  {
    sub_180025E98((__int64)a1, v8);
    throw;
  }
  return result;
}
