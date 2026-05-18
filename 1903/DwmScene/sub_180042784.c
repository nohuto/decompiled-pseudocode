/*
 * XREFs of sub_180042784 @ 0x180042784
 * Callers:
 *     sub_180042614 @ 0x180042614 (sub_180042614.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180042784(__int64 a1, char *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  if ( &v7 != a2 )
  {
    result = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = result;
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return result;
}
