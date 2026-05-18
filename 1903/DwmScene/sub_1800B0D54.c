/*
 * XREFs of sub_1800B0D54 @ 0x1800B0D54
 * Callers:
 *     sub_1800AC720 @ 0x1800AC720 (sub_1800AC720.c)
 *     sub_1800AE6C0 @ 0x1800AE6C0 (sub_1800AE6C0.c)
 *     sub_1800AEEA4 @ 0x1800AEEA4 (sub_1800AEEA4.c)
 *     sub_1800B13B0 @ 0x1800B13B0 (sub_1800B13B0.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800DD034 @ 0x1800DD034 (sub_1800DD034.c)
 *     sub_1800FA400 @ 0x1800FA400 (sub_1800FA400.c)
 *     sub_1800FFC4C @ 0x1800FFC4C (sub_1800FFC4C.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 *     sub_180112BB0 @ 0x180112BB0 (sub_180112BB0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B0D54(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  volatile signed __int32 *v6; // rbx
  signed __int32 v7; // eax
  bool v8; // zf

  v4 = (__int64 *)(a1 + 152);
  result = *v4;
  if ( *a2 != *v4 )
  {
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v4, a2);
    *(_DWORD *)(a1 + 544) |= 4u;
    *(_BYTE *)(a1 + 1612) = 1;
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    v8 = v7 == 1;
    result = (unsigned int)(v7 - 1);
    if ( v8 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
