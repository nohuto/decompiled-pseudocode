/*
 * XREFs of sub_180115278 @ 0x180115278
 * Callers:
 *     sub_18007DC74 @ 0x18007DC74 (sub_18007DC74.c)
 *     sub_180114F64 @ 0x180114F64 (sub_180114F64.c)
 *     sub_180115160 @ 0x180115160 (sub_180115160.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180115278(__int64 **a1, unsigned int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 *v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // rax
  char v15; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
  if ( (_BYTE)result )
  {
    v11 = a1[2];
    v12 = *a1;
    v13 = *v12;
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*v11 + 8))(v11, &v15);
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, __int64, __int64, int))(v13 + 24))(
             v12,
             a6,
             *v14,
             a2,
             a5,
             a3,
             a4);
  }
  return result;
}
