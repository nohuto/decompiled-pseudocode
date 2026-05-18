/*
 * XREFs of sub_1800B0E64 @ 0x1800B0E64
 * Callers:
 *     sub_1800AC830 @ 0x1800AC830 (sub_1800AC830.c)
 *     sub_1800AE7D0 @ 0x1800AE7D0 (sub_1800AE7D0.c)
 *     sub_1800AEFB4 @ 0x1800AEFB4 (sub_1800AEFB4.c)
 *     sub_1800B14C0 @ 0x1800B14C0 (sub_1800B14C0.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 *     sub_1800DD144 @ 0x1800DD144 (sub_1800DD144.c)
 *     sub_1800FA510 @ 0x1800FA510 (sub_1800FA510.c)
 *     sub_1800FFD5C @ 0x1800FFD5C (sub_1800FFD5C.c)
 *     sub_180112790 @ 0x180112790 (sub_180112790.c)
 *     sub_180112CC0 @ 0x180112CC0 (sub_180112CC0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B0E64(__int64 a1, __int64 *a2)
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
