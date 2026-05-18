/*
 * XREFs of sub_18003C3BC @ 0x18003C3BC
 * Callers:
 *     sub_18003C958 @ 0x18003C958 (sub_18003C958.c)
 * Callees:
 *     sub_18002B81C @ 0x18002B81C (sub_18002B81C.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003C3BC(_QWORD *a1, _DWORD *a2, __int64 *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *result; // rax
  __int64 v10; // [rsp+48h] [rbp+10h]

  v5 = sub_18002B81C(a1);
  try
  {
    v6 = v5;
    v10 = (__int64)v5;
    *((_WORD *)v5 + 12) = 0;
    *((_DWORD *)v5 + 8) = *a2;
    v7 = *a3;
    v5[5] = *a3;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    result = v6;
  }
  catch ( ... )
  {
    sub_18002B89C((__int64)a1, v10);
    throw;
  }
  return result;
}
