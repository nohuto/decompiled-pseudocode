/*
 * XREFs of sub_1800DB384 @ 0x1800DB384
 * Callers:
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 *     sub_1800F3ABC @ 0x1800F3ABC (sub_1800F3ABC.c)
 *     sub_1800F3BE0 @ 0x1800F3BE0 (sub_1800F3BE0.c)
 *     sub_1800F3CC4 @ 0x1800F3CC4 (sub_1800F3CC4.c)
 *     sub_1800F436C @ 0x1800F436C (sub_1800F436C.c)
 *     sub_18010A850 @ 0x18010A850 (sub_18010A850.c)
 *     unknown_libname_89 @ 0x180132875 (unknown_libname_89.c)
 *     unknown_libname_164 @ 0x1801333DD (unknown_libname_164.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DB384(__int64 a1)
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
