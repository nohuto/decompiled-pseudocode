/*
 * XREFs of sub_1800DB274 @ 0x1800DB274
 * Callers:
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     sub_1800F39AC @ 0x1800F39AC (sub_1800F39AC.c)
 *     sub_1800F3AD0 @ 0x1800F3AD0 (sub_1800F3AD0.c)
 *     sub_1800F3BB4 @ 0x1800F3BB4 (sub_1800F3BB4.c)
 *     sub_1800F425C @ 0x1800F425C (sub_1800F425C.c)
 *     sub_18010A740 @ 0x18010A740 (sub_18010A740.c)
 *     unknown_libname_89 @ 0x180132765 (unknown_libname_89.c)
 *     unknown_libname_164 @ 0x1801332CD (unknown_libname_164.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DB274(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedDecrement(v1 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedDecrement(v1 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
