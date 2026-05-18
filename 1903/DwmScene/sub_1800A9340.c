/*
 * XREFs of sub_1800A9340 @ 0x1800A9340
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A9340(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 56), v3);
  if ( v3[1] )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v3[1] + 8), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v2 = v3[1];
      (**(void (__fastcall ***)(__int64))v3[1])(v3[1]);
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3[1] + 8LL))(v3[1]);
    }
  }
  return result;
}
