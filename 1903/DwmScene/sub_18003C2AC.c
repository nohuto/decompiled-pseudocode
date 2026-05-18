/*
 * XREFs of sub_18003C2AC @ 0x18003C2AC
 * Callers:
 *     sub_18003C848 @ 0x18003C848 (sub_18003C848.c)
 * Callees:
 *     sub_18002B70C @ 0x18002B70C (sub_18002B70C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003C2AC(_QWORD *a1, _DWORD *a2, __int64 *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *result; // rax
  __int64 v10; // [rsp+48h] [rbp+10h]

  v5 = sub_18002B70C(a1);
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
    sub_18002B78C((__int64)a1, v10);
    throw;
  }
  return result;
}
