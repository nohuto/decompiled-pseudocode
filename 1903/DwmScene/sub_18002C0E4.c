/*
 * XREFs of sub_18002C0E4 @ 0x18002C0E4
 * Callers:
 *     sub_18002C1A0 @ 0x18002C1A0 (sub_18002C1A0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002C0E4(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5[4]; // [rsp+28h] [rbp-20h] BYREF

  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  *(_OWORD *)v5 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 12, v5);
  if ( v5[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5[1] + 8), 0xFFFFFFFF) == 1 )
    {
      v2 = v5[1];
      (**(void (__fastcall ***)(__int64))v5[1])(v5[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5[1] + 8LL))(v5[1]);
    }
  }
  v3 = a1[16];
  if ( v3 )
  {
    a1[16] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return sub_180064838(a1);
}
