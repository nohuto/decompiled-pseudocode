/*
 * XREFs of sub_1800DAD94 @ 0x1800DAD94
 * Callers:
 *     sub_1800DAF10 @ 0x1800DAF10 (sub_1800DAF10.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800DACAC @ 0x1800DACAC (sub_1800DACAC.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DAD94(__int64 *a1, __int64 a2, unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 result; // rax
  char *v6; // rbx
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v11; // [rsp+40h] [rbp-18h]

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( result >= 32 )
  {
    v6 = (char *)(a2 - 16);
    v10 = *(_QWORD *)(a2 - 16);
    v11 = *(volatile signed __int32 **)(a2 - 16 + 8);
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a2 - 16), a1);
    result = sub_1800DACAC((__int64)a1, 0LL, (v6 - (char *)a1) >> 4, (int)&v10, a3);
    v7 = v11;
    if ( v11 )
    {
      v8 = _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF);
      v9 = v8 == 1;
      result = (unsigned int)(v8 - 1);
      if ( v9 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  return result;
}
