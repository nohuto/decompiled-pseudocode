/*
 * XREFs of sub_18006ED60 @ 0x18006ED60
 * Callers:
 *     sub_180078CFC @ 0x180078CFC (sub_180078CFC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006ED60(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rax
  char v11; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
  if ( (_BYTE)result )
  {
    v7 = a1[2];
    v8 = *a1;
    v9 = *v8;
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*v7 + 8))(v7, &v11);
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v9 + 48))(v8, a5, *v10);
  }
  return result;
}
