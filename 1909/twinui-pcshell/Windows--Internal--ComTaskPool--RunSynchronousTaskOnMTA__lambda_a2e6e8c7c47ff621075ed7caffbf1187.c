/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a2e6e8c7c47ff621075ed7caffbf1187___ @ 0x18001D37C
 * Callers:
 *     ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x18001D49C (-Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManag.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a2e6e8c7c47ff621075ed7caffbf1187___(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v5; // esi
  _DWORD *v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rbp
  _DWORD *v9; // rbx
  __int64 v10; // xmm1_8
  int v11; // ebx
  int v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v16, (APTTYPEQUALIFIER *)&v13) < 0 || !v16 || v16 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v15 = 0;
  v6 = 0LL;
  v14 = 0LL;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    v7[3] = 1;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6 = v9;
    v8 = v9;
    *((_OWORD *)v9 + 1) = *(_OWORD *)a3;
    v10 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)v9 = off_180445EB8;
    *((_QWORD *)v9 + 5) = &v15;
    *((_QWORD *)v9 + 4) = v10;
  }
  v11 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v11 >= 0 )
    return v15;
  return (unsigned int)v11;
}
