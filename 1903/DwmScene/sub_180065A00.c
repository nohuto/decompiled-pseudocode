/*
 * XREFs of sub_180065A00 @ 0x180065A00
 * Callers:
 *     sub_1800681A4 @ 0x1800681A4 (sub_1800681A4.c)
 *     sub_18007DB64 @ 0x18007DB64 (sub_18007DB64.c)
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180065A00(__int64 **a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // rbx
  _QWORD *v16; // rax
  char v17; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
  if ( (_BYTE)result )
  {
    v11 = sub_18000F544(a6);
    v12 = a1[2];
    v13 = v11;
    v14 = *a1;
    v15 = *v14;
    v16 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*v12 + 8))(v12, &v17);
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64, __int64, __int64, int))(v15 + 32))(
             v14,
             a5,
             *v16,
             v13,
             a4,
             a2,
             a3);
  }
  return result;
}
