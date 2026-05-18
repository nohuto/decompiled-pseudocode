/*
 * XREFs of sub_1800F8B58 @ 0x1800F8B58
 * Callers:
 *     sub_1800F8490 @ 0x1800F8490 (sub_1800F8490.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800F8668 @ 0x1800F8668 (sub_1800F8668.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F8B58(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf

  v3 = a2;
  sub_1800F8668(a1, a2);
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(&a1[2 * v3 + 48], a3);
  v7 = (volatile signed __int32 *)a3[1];
  if ( v7 )
  {
    v8 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
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
  return result;
}
