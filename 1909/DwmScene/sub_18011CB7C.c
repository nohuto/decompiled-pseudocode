/*
 * XREFs of sub_18011CB7C @ 0x18011CB7C
 * Callers:
 *     sub_18011CD40 @ 0x18011CD40 (sub_18011CD40.c)
 * Callees:
 *     sub_180025694 @ 0x180025694 (sub_180025694.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011CB7C(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx
  _QWORD *result; // rax
  __int64 v8; // [rsp+58h] [rbp+10h]

  v3 = sub_180025694(a1);
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
    sub_180025FA8((__int64)a1, v8);
    throw;
  }
  return result;
}
