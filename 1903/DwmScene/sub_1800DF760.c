/*
 * XREFs of sub_1800DF760 @ 0x1800DF760
 * Callers:
 *     sub_1800DF880 @ 0x1800DF880 (sub_1800DF880.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DF760(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 136);
  v3 = 8LL;
  do
  {
    v7 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=(v2, (__int64 *)&v7);
    if ( *((_QWORD *)&v7 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v4 = *((_QWORD *)&v7 + 1);
        (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
      }
    }
    v2 += 2;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)v8 = 0LL;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 408), v8);
  if ( v8[1] )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8[1] + 8));
    if ( !(_DWORD)result )
    {
      v6 = v8[1];
      (**(void (__fastcall ***)(__int64))v8[1])(v8[1]);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8[1] + 8LL))(v8[1]);
    }
  }
  return result;
}
