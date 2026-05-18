/*
 * XREFs of sub_1800FD308 @ 0x1800FD308
 * Callers:
 *     sub_1800FD4D4 @ 0x1800FD4D4 (sub_1800FD4D4.c)
 *     unknown_libname_7 @ 0x1800FF3A0 (unknown_libname_7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FD308(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rcx

  v2 = a1 + 13;
  v4 = (_QWORD *)a1[20];
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v4 + 32LL))(v4, a2);
    v2[7] = 0LL;
  }
  v6 = (_QWORD *)a1[12];
  if ( v6 )
  {
    LOBYTE(a2) = v6 != a1 + 5;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 32LL))(v6, a2);
    a1[12] = 0LL;
  }
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64))a1[4];
  if ( v7 )
    result = (**v7)(v7, 1LL);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, 1LL);
  return result;
}
