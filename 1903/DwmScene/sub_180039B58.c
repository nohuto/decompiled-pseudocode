/*
 * XREFs of sub_180039B58 @ 0x180039B58
 * Callers:
 *     sub_18003AE34 @ 0x18003AE34 (sub_18003AE34.c)
 *     sub_18003B6EC @ 0x18003B6EC (sub_18003B6EC.c)
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1801273F8 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180039B58(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h] BYREF

  v9 = a3;
  v8 = a4;
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, int *, int *))(*(_QWORD *)v5 + 16LL))(v5, a2, &v9, &v8);
    v7 = *(volatile signed __int32 **)(a2 + 8);
    if ( v7 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  else
  {
    std::_Xbad_function_call();
    return sub_180039C00();
  }
  return result;
}
